/*
 * recomp_trace.c - which lifted functions ran, and how deep.
 *
 * See the RECOMP_ENTER block in cpu.h. Built into nothing unless the project
 * defines RECOMP_TRACE.
 *
 * Part of the pcrecomp toolbox.
 */
#include "recomp/cpu.h"

#ifdef RECOMP_TRACE

#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif

#define RECOMP_TRACE_RING 128   /* power of two */

static const char    *g_ring[RECOMP_TRACE_RING];
static unsigned long  g_calls;
static char          *g_stack_base;
static size_t         g_limit;          /* bytes of C stack before we give up */
static int            g_tripped;
static unsigned long  g_every;          /* dump the ring every N calls, 0 = off */

/* Oldest first: a runaway recursion reads as its own repeating tail. */
void recomp_trace_dump(const char *why)
{
    unsigned long start = g_calls > RECOMP_TRACE_RING
                        ? g_calls - RECOMP_TRACE_RING : 0;
    fprintf(stderr, "\n=== recomp trace: %s ===\n", why ? why : "state");
    fprintf(stderr, "  lifted calls so far: %lu\n", g_calls);
    fprintf(stderr, "  last %lu entered (oldest first):\n", g_calls - start);
    for (unsigned long i = start; i < g_calls; i++) {
        const char *fn = g_ring[i & (RECOMP_TRACE_RING - 1)];
        fprintf(stderr, "    %6lu  %s\n", i, fn ? fn : "?");
    }
    fflush(stderr);
}

#ifdef _WIN32
/* A guest loop that never leaves its own function -- a retrace poll, a flag
 * spin -- stops calling recomp_enter entirely, so neither the depth trip nor
 * the periodic dump can fire. This notices the call count standing still and
 * prints the ring, whose last entry is the function doing the spinning.
 * RECOMP_TRACE_WATCHDOG=<seconds>. */
static DWORD WINAPI watchdog(LPVOID arg)
{
    DWORD secs = (DWORD)(size_t)arg;
    unsigned long last = (unsigned long)-1;
    int quiet = 0;
    for (;;) {
        Sleep(secs * 1000);
        if (g_calls != last) { last = g_calls; quiet = 0; continue; }
        if (quiet++) continue;            /* report a given stall once */
        fprintf(stderr, "\n[TRACE] no lifted call for %lus -- stuck inside "
                        "the last function below\n", (unsigned long)secs);
        recomp_trace_dump("watchdog");
    }
    return 0;
}
#endif

void recomp_enter(const char *fn)
{
    char here;

    g_ring[g_calls++ & (RECOMP_TRACE_RING - 1)] = fn;

    /* The first lifted call is as close to the bottom of the C stack as this
     * gets; everything after is measured against it. */
    if (!g_stack_base) {
        const char *env = getenv("RECOMP_STACK_LIMIT");
        const char *ev  = getenv("RECOMP_TRACE_EVERY");
        g_stack_base = &here;
        g_limit = env ? (size_t)strtoul(env, NULL, 0) : 6u * 1024 * 1024;
        /* A spin does not blow the stack -- it just never comes back, and the
         * ring is the loop body. Dumping it periodically is how you read a
         * hang, where the depth trip only catches a runaway recursion. */
        g_every = ev ? strtoul(ev, NULL, 0) : 0;
#ifdef _WIN32
        {
            const char *wd = getenv("RECOMP_TRACE_WATCHDOG");
            if (wd) {
                unsigned long s = strtoul(wd, NULL, 0);
                if (s) CreateThread(NULL, 0, watchdog, (LPVOID)(size_t)s, 0, NULL);
            }
        }
#endif
        return;
    }

    if (g_every && g_calls % g_every == 0) recomp_trace_dump("periodic");

    if (!g_tripped && (size_t)(g_stack_base - &here) > g_limit) {
        g_tripped = 1;   /* the dump itself must not re-trip */
        fprintf(stderr, "\n[TRACE] C stack depth %zu bytes exceeds limit %zu\n",
                (size_t)(g_stack_base - &here), g_limit);
        recomp_trace_dump("stack depth limit");
        abort();
    }
}

#endif /* RECOMP_TRACE */
