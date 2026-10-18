# 🏎️ Need for Speed: Underground 2 — Native macOS Port

[![Platform: macOS](https://img.shields.io/badge/Platform-macOS%20%28Apple%20Silicon%20%7C%20Intel%29-blue.svg)](#)
[![Architecture: arm64 / x86_64](https://img.shields.io/badge/Architecture-arm64%20%7C%20x86__64-orange.svg)](#)
[![Graphics: DXVK Native + MoltenVK](https://img.shields.io/badge/Graphics-Direct3D%209%20%E2%86%92%20Vulkan%20%E2%86%92%20Metal-red.svg)](#)
[![Performance: 60 FPS Locked](https://img.shields.io/badge/Performance-60%20FPS%20Locked-brightgreen.svg)](#)
[![License](https://img.shields.io/badge/License-MIT%20%2F%20Open--Source-lightgrey.svg)](#)

A native, high-performance macOS port of the iconic 2004 street racing game ***Need for Speed: Underground 2***, running at a smooth **60 FPS** in native display resolution on Apple Silicon (M1, M2, M3, M4, M5, M6) and modern Intel Macs.

No Wine. No CrossOver. No virtualization. Just clean, native ARM64 & x86_64 machine code executing directly on Apple hardware.

> [!IMPORTANT]
> **LEGAL NOTICE & ASSET REQUIREMENT**  
> This repository contains **NO copyrighted game assets** (no textures, 3D car models, tracks, sound files, music, or game binaries). To play the game, you **must provide your own copy of the original PC game files** (from CD-ROM, ISO, or digital backup).

---

## ⚡ Highlights & Engineering Feats

- **🚀 Native Apple Silicon Execution:** Built upon static binary recompilation (x86 $\rightarrow$ C), executing natively on `arm64` with zero JIT or instruction translation latency.
- **🌋 Direct3D 9 over Apple Metal:** Uses a customized **DXVK Native** pipeline mapped to **MoltenVK**, translating legacy DirectX 9 calls into Apple's low-overhead Metal API in real time.
- **🖥️ Integrated Widescreen & FOV Scaling:** Seamless widescreen support (16:9, 16:10, and ultrawide) with properly scaled HUD elements and camera FOV based on ThirteenAG's widescreen research.
- **🖱️ Native Mouse Navigation in Menus & Garage:** Fully restored mouse cursor and clicking inside frontend menus, options, and car tuning shops.
- **🎮 Controller Plug & Play:** Native gamepad mapping for PlayStation DualSense / DualShock, Xbox Wireless, and Nintendo Switch controllers via SDL2.
- **🔊 Clean Low-Latency Audio:** 48 kHz 32-bit float stereo audio pipeline routed through CoreAudio.
- **🍎 macOS Polish:** Automatically suppresses the macOS "Press and Hold" diacritics overlay when holding down `W`, `A`, `S`, `D` driving controls.

---

## 🏗️ Architecture & Pipeline

```
+-------------------------------------------------------------+
|               Need for Speed: Underground 2                 |
|                   Original Game Logic                       |
+-------------------------------------------------------------+
                              │
               Static Recompilation to C / C++
                              ▼
+-------------------------------------------------------------+
|          Native ARM64 / x86_64 Binary (NFSU2-macOS)         |
+-------------------------------------------------------------+
            │                                     │
      Graphics (D3D9)                         Audio & Input
            ▼                                     ▼
+------------------------+             +----------------------+
|      DXVK Native       |             |         SDL2         |
|   (Direct3D 9 -> VK)   |             | (WASD, Mouse cursor, |
+------------------------+             |  Gamepads, CoreAudio)|
            │                          +----------------------+
            ▼                                     │
+------------------------+                        ▼
|        MoltenVK        |             +----------------------+
|    (Vulkan -> Metal)   |             |    Apple CoreAudio   |
+------------------------+             +----------------------+
            │
            ▼
+------------------------+
|    Apple Metal API     |
+------------------------+
```

### Key macOS Fixes Applied
1. **Thread-Safe Metal Layer:** Cocoa requires `CAMetalLayer` creation to occur strictly on the main thread; resolved initial black-screen issues by synchronizing surface initialization with SDL2's main Cocoa event pump.
2. **SPIR-V to MSL Shadow Sampler Fix:** Patched duplicate sampler bindings in DXSO compiler to prevent shader compilation crashes under MoltenVK.
3. **Culling Correction:** Disabled cull mode on fullscreen swapchain blit to prevent viewport clipping due to inverted Y coordinates between Vulkan and Metal.
4. **Interactive Session Timeout:** Removed test harness 5-minute timeout deadline to enable unlimited gameplay sessions.
5. **Mouse Event Routing:** Linked macOS `SDL_MOUSEMOTION` and click events directly into the guest pointer state for smooth menu navigation.

---

## 🚀 Quick Start (Prebuilt Bundle)

1. Build or download the application bundle: **`Need for Speed Underground 2.app`**.
2. Run the asset installer:
   ```bash
   ./tools/macos/install_assets.sh
   ```
3. A native macOS folder picker will appear. Select your original **PC version** folder of *Need for Speed: Underground 2* (the folder containing `GLOBAL/`, `CARS/`, `TRACKS/`, etc.).
4. The installer will copy and organize the assets into the `.app` bundle using APFS copy-on-write (instant and takes zero extra disk space) and apply ad-hoc codesigning.
5. Launch **`Need for Speed Underground 2.app`** and race!

---

## 🛠️ Building from Source

### 1. Prerequisites
Install build tools and libraries via [Homebrew](https://brew.sh):

```bash
brew install cmake ninja sdl2 molten-vk vulkan-headers
```

### 2. Configure & Build
```bash
# Configure with Ninja
cmake -B build_macos -G Ninja -DCMAKE_BUILD_TYPE=Release

# Compile native binary
cmake --build build_macos -j$(sysctl -n hw.ncpu)
```

### 3. Create macOS `.app` Bundle
Run the automated bundle script:

```bash
./tools/macos/bundle.sh
```

This compiles the executable, generates the multi-resolution Retina `AppIcon.icns`, sets up `Info.plist`, bundles required assets, and applies ad-hoc codesigning.

---

## 🎮 Controls

### Default Keyboard Controls
| Action | Key |
|---|---|
| **Throttle / Accelerate** | `W` / `Up Arrow` |
| **Brake / Reverse** | `S` / `Down Arrow` |
| **Steer Left** | `A` / `Left Arrow` |
| **Steer Right** | `D` / `Right Arrow` |
| **Handbrake** | `Space` |
| **Nitrous Oxide (N₂O)** | `Left Shift` / `N` |
| **Shift Up (Manual)** | `Left Ctrl` |
| **Shift Down (Manual)** | `Left Alt` |
| **Look Back** | `B` |
| **Reset Car** | `R` |
| **Pause / Menu** | `Esc` |
| **Menu Navigation** | Mouse Cursor + Left Click |

### Gamepad Controls
Supports Xbox Wireless, PlayStation DualSense / DualShock 4, and Nintendo Switch Pro controllers out of the box with standard analog steering, triggers for throttle/brake, and face buttons for nitro and handbrake.

---

## 📂 Project Structure

```text
├── android/            # Shared runtime, memory management & audio shims
├── ports/
│   └── dxvk_android/   # DXVK Native with MoltenVK / Apple Metal WSI backend
├── src/
│   ├── host/           # Native macOS host entry point (main_macos.cpp)
│   └── runtime/        # Widescreen fix, overrides, and shims
├── third_party/        # pcrecomp runtime and DXVK Native headers
├── tools/
│   └── macos/          # bundle.sh & install_assets.sh scripts
└── CMakeLists_macos.txt # Native macOS build configuration
```

---

## 🤝 Credits & Acknowledgments

* **[daniiichan](https://github.com/daniiichan):** Native macOS port, Apple Metal/MoltenVK integration, macOS windowing & input layer, bundling, and distribution.
* **[codepdbh](https://github.com/codepdbh/nfsu2-recompiled):** *Need for Speed Underground 2 — Recompiled* project, static recompilation, and DXVK Native runtime.
* **[sp00nznet](https://github.com/sp00nznet/pcrecomp):** `pcrecomp` binary recompilation framework.
* **[ThirteenAG](https://thirteenag.github.io/widescreen-fixes-pack):** Widescreen fix research and FOV/HUD algorithms.
* **EA Black Box:** Original creators of *Need for Speed: Underground 2*.

---

## ⚖️ Legal Disclaimer

*Need for Speed* is a registered trademark of Electronic Arts Inc. This project is a reverse-engineered port intended strictly for educational and preservation purposes. It requires a legally owned copy of the original PC game to play. No copyrighted files are distributed in this repository.
