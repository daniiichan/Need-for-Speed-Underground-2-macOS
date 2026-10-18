#include <SDL2/SDL.h>
#include <SDL2/SDL_vulkan.h>
#include <SDL2/SDL_metal.h>
#include <SDL2/SDL_syswm.h>
#include <objc/message.h>
#include <objc/runtime.h>
#include <CoreGraphics/CoreGraphics.h>
#include <mach-o/dyld.h>
#include <iostream>
#include <string>
#include <vector>
#include <filesystem>
#include <chrono>
#include <thread>
#include <cstdlib>

#include "guest_runtime.h"
#include "d3d9_bridge.h"
#include "guest_boot_worker.h"

static void* g_hostMetalLayer = nullptr;
extern "C" void* getHostMetalLayer() { return g_hostMetalLayer; }

namespace fs = std::filesystem;

// DirectInput 8 scan codes
static unsigned sdlScancodeToDik(SDL_Scancode sc) {
    switch (sc) {
        case SDL_SCANCODE_ESCAPE: return 0x01;
        case SDL_SCANCODE_1: return 0x02;
        case SDL_SCANCODE_2: return 0x03;
        case SDL_SCANCODE_3: return 0x04;
        case SDL_SCANCODE_4: return 0x05;
        case SDL_SCANCODE_5: return 0x06;
        case SDL_SCANCODE_6: return 0x07;
        case SDL_SCANCODE_7: return 0x08;
        case SDL_SCANCODE_8: return 0x09;
        case SDL_SCANCODE_9: return 0x0A;
        case SDL_SCANCODE_0: return 0x0B;
        case SDL_SCANCODE_MINUS: return 0x0C;
        case SDL_SCANCODE_EQUALS: return 0x0D;
        case SDL_SCANCODE_BACKSPACE: return 0x0E;
        case SDL_SCANCODE_TAB: return 0x0F;
        case SDL_SCANCODE_Q: return 0x10;
        case SDL_SCANCODE_W: return 0x11;
        case SDL_SCANCODE_E: return 0x12;
        case SDL_SCANCODE_R: return 0x13;
        case SDL_SCANCODE_T: return 0x14;
        case SDL_SCANCODE_Y: return 0x15;
        case SDL_SCANCODE_U: return 0x16;
        case SDL_SCANCODE_I: return 0x17;
        case SDL_SCANCODE_O: return 0x18;
        case SDL_SCANCODE_P: return 0x19;
        case SDL_SCANCODE_LEFTBRACKET: return 0x1A;
        case SDL_SCANCODE_RIGHTBRACKET: return 0x1B;
        case SDL_SCANCODE_RETURN: return 0x1C;
        case SDL_SCANCODE_LCTRL: return 0x1D;
        case SDL_SCANCODE_A: return 0x1E;
        case SDL_SCANCODE_S: return 0x1F;
        case SDL_SCANCODE_D: return 0x20;
        case SDL_SCANCODE_F: return 0x21;
        case SDL_SCANCODE_G: return 0x22;
        case SDL_SCANCODE_H: return 0x23;
        case SDL_SCANCODE_J: return 0x24;
        case SDL_SCANCODE_K: return 0x25;
        case SDL_SCANCODE_L: return 0x26;
        case SDL_SCANCODE_SEMICOLON: return 0x27;
        case SDL_SCANCODE_APOSTROPHE: return 0x28;
        case SDL_SCANCODE_GRAVE: return 0x29;
        case SDL_SCANCODE_LSHIFT: return 0x2A;
        case SDL_SCANCODE_BACKSLASH: return 0x2B;
        case SDL_SCANCODE_Z: return 0x2C;
        case SDL_SCANCODE_X: return 0x2D;
        case SDL_SCANCODE_C: return 0x2E;
        case SDL_SCANCODE_V: return 0x2F;
        case SDL_SCANCODE_B: return 0x30;
        case SDL_SCANCODE_N: return 0x31;
        case SDL_SCANCODE_M: return 0x32;
        case SDL_SCANCODE_COMMA: return 0x33;
        case SDL_SCANCODE_PERIOD: return 0x34;
        case SDL_SCANCODE_SLASH: return 0x35;
        case SDL_SCANCODE_RSHIFT: return 0x36;
        case SDL_SCANCODE_KP_MULTIPLY: return 0x37;
        case SDL_SCANCODE_LALT: return 0x38;
        case SDL_SCANCODE_SPACE: return 0x39;
        case SDL_SCANCODE_CAPSLOCK: return 0x3A;
        case SDL_SCANCODE_F1: return 0x3B;
        case SDL_SCANCODE_F2: return 0x3C;
        case SDL_SCANCODE_F3: return 0x3D;
        case SDL_SCANCODE_F4: return 0x3E;
        case SDL_SCANCODE_F5: return 0x3F;
        case SDL_SCANCODE_F6: return 0x40;
        case SDL_SCANCODE_F7: return 0x41;
        case SDL_SCANCODE_F8: return 0x42;
        case SDL_SCANCODE_F9: return 0x43;
        case SDL_SCANCODE_F10: return 0x44;
        case SDL_SCANCODE_UP: return 0xC8;
        case SDL_SCANCODE_LEFT: return 0xCB;
        case SDL_SCANCODE_RIGHT: return 0xCD;
        case SDL_SCANCODE_DOWN: return 0xD0;
        case SDL_SCANCODE_RCTRL: return 0x9D;
        case SDL_SCANCODE_RALT: return 0xB8;
        default: return 0;
    }
}

static void audioCallback(void*, Uint8* stream, int len) {
    float* fstream = reinterpret_cast<float*>(stream);
    unsigned frames = len / (sizeof(float) * 2);
    renderGuestAudio(fstream, frames);
}

static std::string findGamePath(int argc, char** argv) {
    if (argc > 1) {
        fs::path p(argv[1]);
        if (fs::is_directory(p) && fs::exists(p / "SPEED2.EXE")) {
            return fs::canonical(p / "SPEED2.EXE").string();
        }
        if (fs::exists(p)) {
            return fs::canonical(p).string();
        }
    }

    fs::path exeDir;
    char exeBuf[PATH_MAX];
    uint32_t bufSize = sizeof(exeBuf);
    if (_NSGetExecutablePath(exeBuf, &bufSize) == 0) {
        char realBuf[PATH_MAX];
        if (realpath(exeBuf, realBuf)) {
            exeDir = fs::path(realBuf).parent_path();
        }
    }

    std::vector<fs::path> candidates = {
        exeDir / "../Resources/game/SPEED2.EXE",
        exeDir / "../Resources/SPEED2.EXE",
        exeDir / "../../extracted_game/%AppFolder%/SPEED2.EXE",
        exeDir / "../../../extracted_game/%AppFolder%/SPEED2.EXE",
        exeDir / "extracted_game/%AppFolder%/SPEED2.EXE",
        exeDir / "SPEED2.EXE",
        "extracted_game/%AppFolder%/SPEED2.EXE",
        "../extracted_game/%AppFolder%/SPEED2.EXE",
        "SPEED2.EXE",
        "../SPEED2.EXE"
    };

    for (const auto& c : candidates) {
        std::error_code ec;
        if (fs::exists(c, ec)) return fs::canonical(c).string();
    }
    return "extracted_game/%AppFolder%/SPEED2.EXE";
}

int main(int argc, char** argv) {
    std::cout << "========================================================\n";
    std::cout << "  Need for Speed: Underground 2 - Native macOS (arm64)  \n";
    std::cout << "  Port by daniiichan | DXVK Native & MoltenVK Backend    \n";
    std::cout << "========================================================\n\n";

    std::string exePath = findGamePath(argc, argv);
    if (!fs::exists(exePath)) {
        std::cerr << "[ERROR] Game executable not found: " << exePath << "\n";
        std::cerr << "Usage: " << argv[0] << " [path/to/SPEED2.EXE or game directory]\n";
        return 1;
    }
    std::cout << "[*] Game executable: " << exePath << "\n";

    // Set cache paths for DXVK
    char* home = std::getenv("HOME");
    std::string cacheDir = home ? std::string(home) + "/Library/Caches/NFSU2-macOS" : "./cache";
    fs::create_directories(cacheDir);
    setenv("DXVK_STATE_CACHE", "1", 1);
    setenv("DXVK_STATE_CACHE_PATH", cacheDir.c_str(), 1);
    setenv("DXVK_LOG_PATH", "none", 1);

    SDL_SetHint("SDL_MAC_PRESS_AND_HOLD", "0");

    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_GAMECONTROLLER | SDL_INIT_EVENTS) != 0) {
        std::cerr << "[ERROR] SDL_Init failed: " << SDL_GetError() << "\n";
        return 1;
    }

    SDL_DisplayMode dm;
    int screenWidth = 1920;
    int screenHeight = 1080;
    if (SDL_GetDesktopDisplayMode(0, &dm) == 0 && dm.w > 0 && dm.h > 0) {
        screenWidth = dm.w;
        screenHeight = dm.h;
        std::cout << "[*] Detected display resolution: " << screenWidth << "x" << screenHeight << "\n";
    }

    // Initial game settings
    setGuestLanguage("English");
    setGuestWidescreen(true);
    setGuestFrameLimit(60);
    setGuestDisplaySize(screenWidth, screenHeight);
    setGuestResolution(screenWidth, screenHeight);

    // Audio setup (48kHz stereo float)
    SDL_AudioSpec wanted{}, obtained{};
    wanted.freq = 48000;
    wanted.format = AUDIO_F32SYS;
    wanted.channels = 2;
    wanted.samples = 1024;
    wanted.callback = audioCallback;

    SDL_AudioDeviceID audioDevice = SDL_OpenAudioDevice(nullptr, 0, &wanted, &obtained, 0);
    if (audioDevice) {
        SDL_PauseAudioDevice(audioDevice, 0);
        std::cout << "[*] SDL Audio initialized at " << obtained.freq << " Hz (float stereo)\n";
    } else {
        std::cerr << "[WARN] SDL Audio init failed: " << SDL_GetError() << "\n";
    }

    // Window setup - Fullscreen
    SDL_Window* window = SDL_CreateWindow(
        "Need for Speed: Underground 2",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        screenWidth, screenHeight,
        SDL_WINDOW_VULKAN | SDL_WINDOW_SHOWN | SDL_WINDOW_FULLSCREEN_DESKTOP
    );

    if (!window) {
        std::cerr << "[ERROR] SDL_CreateWindow failed: " << SDL_GetError() << "\n";
        return 1;
    }
    SDL_RaiseWindow(window);
    SDL_ShowCursor(SDL_DISABLE);
    std::cout << "[*] SDL Fullscreen Window created (Vulkan & Metal)\n";

    // Set Cocoa NSWindow background to solid black so transitions never flash gray
    SDL_SysWMinfo wmInfo;
    SDL_VERSION(&wmInfo.version);
    if (SDL_GetWindowWMInfo(window, &wmInfo)) {
        id nsWindow = (id)wmInfo.info.cocoa.window;
        if (nsWindow) {
            id blackColor = ((id (*)(id, SEL))objc_msgSend)((id)objc_getClass("NSColor"), sel_registerName("blackColor"));
            ((void (*)(id, SEL, id))objc_msgSend)(nsWindow, sel_registerName("setBackgroundColor:"), blackColor);
            ((void (*)(id, SEL, BOOL))objc_msgSend)(nsWindow, sel_registerName("setOpaque:"), YES);
        }
    }

    // IMPORTANT: On macOS, NSView subviews and CAMetalLayer must be created on the MAIN THREAD!
    SDL_MetalView metalView = SDL_Metal_CreateView(window);
    void* metalLayer = SDL_Metal_GetLayer(metalView);
    g_hostMetalLayer = metalLayer;
    if (metalLayer) {
        CGColorRef black = CGColorGetConstantColor(kCGColorBlack);
        ((void (*)(id, SEL, CGColorRef))objc_msgSend)((id)metalLayer, sel_registerName("setBackgroundColor:"), black);
        ((void (*)(id, SEL, BOOL))objc_msgSend)((id)metalLayer, sel_registerName("setOpaque:"), YES);

        int dw = 0, dh = 0;
        SDL_Vulkan_GetDrawableSize(window, &dw, &dh);
        std::cout << "[*] CAMetalLayer attached on main thread: " << metalLayer
                  << " (drawable size: " << dw << "x" << dh << ")\n";
    }

    setD3D9HostWindow(window);
    acknowledgeD3D9Surface(true);

    // Gamepad setup
    SDL_GameController* controller = nullptr;
    for (int i = 0; i < SDL_NumJoysticks(); ++i) {
        if (SDL_IsGameController(i)) {
            controller = SDL_GameControllerOpen(i);
            if (controller) {
                std::cout << "[*] Game controller connected: " << SDL_GameControllerName(controller) << "\n";
                setGuestPadConnected(true);
                break;
            }
        }
    }

    // Launch game boot thread
    std::cout << "[*] Booting guest runtime...\n";
    GuestBootWorker worker;
    worker.start(exePath);

    bool running = true;
    SDL_Event event;

    while (running) {
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_QUIT:
                    running = false;
                    break;

                case SDL_KEYDOWN:
                case SDL_KEYUP: {
                    if (event.key.repeat) break;
                    unsigned dik = sdlScancodeToDik(event.key.keysym.scancode);
                    if (dik) {
                        setGuestKey(dik, event.type == SDL_KEYDOWN);
                    }
                    break;
                }

                case SDL_MOUSEMOTION: {
                    int w = 1280, h = 720;
                    SDL_GetWindowSize(window, &w, &h);
                    if (w > 0 && h > 0) {
                        float nx = (float)event.motion.x / (float)w;
                        float ny = (float)event.motion.y / (float)h;
                        setGuestPointer(nx, ny, 1);
                    }
                    break;
                }

                case SDL_MOUSEBUTTONDOWN:
                case SDL_MOUSEBUTTONUP: {
                    int w = 1280, h = 720;
                    SDL_GetWindowSize(window, &w, &h);
                    if (w > 0 && h > 0) {
                        float nx = (float)event.button.x / (float)w;
                        float ny = (float)event.button.y / (float)h;
                        int phase = (event.type == SDL_MOUSEBUTTONDOWN) ? 0 : 2;
                        setGuestPointer(nx, ny, phase);
                    }
                    break;
                }

                case SDL_WINDOWEVENT:
                    if (event.window.event == SDL_WINDOWEVENT_RESIZED) {
                        int w = event.window.data1;
                        int h = event.window.data2;
                        setGuestResolution(w, h);
                    }
                    break;

                case SDL_CONTROLLERDEVICEADDED:
                    if (!controller) {
                        controller = SDL_GameControllerOpen(event.cdevice.which);
                        if (controller) {
                            std::cout << "[*] Game controller attached: " << SDL_GameControllerName(controller) << "\n";
                            setGuestPadConnected(true);
                        }
                    }
                    break;

                case SDL_CONTROLLERDEVICEREMOVED:
                    if (controller && event.cdevice.which == SDL_JoystickInstanceID(SDL_GameControllerGetJoystick(controller))) {
                        SDL_GameControllerClose(controller);
                        controller = nullptr;
                        setGuestPadConnected(false);
                        std::cout << "[*] Game controller disconnected\n";
                    }
                    break;

                default:
                    break;
            }
        }

        // Update controller axes & buttons if active
        if (controller) {
            float axes[6] = {0};
            // Left Stick X, Y
            axes[0] = SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_LEFTX) / 32767.0f;
            axes[1] = SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_LEFTY) / 32767.0f;
            // Triggers (LT pushes negative, RT pushes positive)
            float lt = SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_TRIGGERLEFT) / 32767.0f;
            float rt = SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_TRIGGERRIGHT) / 32767.0f;
            axes[2] = lt - rt;
            // Right Stick X, Y
            axes[3] = SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_RIGHTX) / 32767.0f;
            axes[4] = SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_RIGHTY) / 32767.0f;
            axes[5] = 0.0f;

            uint32_t buttons = 0;
            if (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_A)) buttons |= (1 << 0);
            if (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_B)) buttons |= (1 << 1);
            if (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_X)) buttons |= (1 << 2);
            if (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_Y)) buttons |= (1 << 3);
            if (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_LEFTSHOULDER)) buttons |= (1 << 4);
            if (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_RIGHTSHOULDER)) buttons |= (1 << 5);
            if (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_BACK)) buttons |= (1 << 6);
            if (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_START)) buttons |= (1 << 7);
            if (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_LEFTSTICK)) buttons |= (1 << 8);
            if (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_RIGHTSTICK)) buttons |= (1 << 9);

            int hatX = 0, hatY = 0;
            if (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_DPAD_LEFT)) hatX = -1;
            else if (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_DPAD_RIGHT)) hatX = 1;

            if (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_DPAD_UP)) hatY = 1;
            else if (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_DPAD_DOWN)) hatY = -1;

            setGuestPad(axes, buttons, hatX, hatY);
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(8));
    }

    std::cout << "[*] Shutting down game...\n";
    requestGuestRuntimeStop();

    if (controller) SDL_GameControllerClose(controller);
    if (audioDevice) SDL_CloseAudioDevice(audioDevice);
    SDL_DestroyWindow(window);
    SDL_Quit();

    std::cout << "[*] Goodbye!\n";
    return 0;
}
