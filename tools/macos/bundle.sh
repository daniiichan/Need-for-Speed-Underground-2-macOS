#!/bin/bash
set -e

# ==============================================================================
# Need for Speed: Underground 2 — macOS Application Bundler
# Author: daniiichan
# ==============================================================================

DIR="$(cd "$(dirname "$0")/../.." && pwd)"
cd "$DIR"

echo "=== Building Need for Speed: Underground 2 for macOS ==="

# 1. Compile with Ninja
BUILD_DIR="build_macos"
if [ ! -d "$BUILD_DIR" ]; then
    echo "[*] Configuring CMake..."
    cmake -B "$BUILD_DIR" -G Ninja -DCMAKE_BUILD_TYPE=Release
fi

echo "[*] Compiling executable..."
cmake --build "$BUILD_DIR" -j"$(sysctl -n hw.ncpu 2>/dev/null || echo 8)"

# 2. Prepare .app Bundle
APP="Need for Speed Underground 2.app"
echo "[*] Creating macOS Bundle: $APP"
rm -rf "$APP"
mkdir -p "$APP/Contents/MacOS"
mkdir -p "$APP/Contents/Resources"

# 3. Copy binary
cp "$BUILD_DIR/NFSU2-macOS" "$APP/Contents/MacOS/NFSU2-macOS"
chmod +x "$APP/Contents/MacOS/NFSU2-macOS"

# 4. Generate AppIcon.icns
SRC_ICON="ICONO/ICONO.png"
if [ ! -f "$SRC_ICON" ]; then
    SRC_ICON="../ICONO/ICONO.png"
fi

if [ -f "$SRC_ICON" ]; then
    echo "[*] Generating Retina AppIcon.icns..."
    ICONSET="/tmp/AppIcon_NFSU2.iconset"
    rm -rf "$ICONSET" && mkdir -p "$ICONSET"

    sips -z 16 16     "$SRC_ICON" --out "$ICONSET/icon_16x16.png" >/dev/null 2>&1
    sips -z 32 32     "$SRC_ICON" --out "$ICONSET/icon_16x16@2x.png" >/dev/null 2>&1
    sips -z 32 32     "$SRC_ICON" --out "$ICONSET/icon_32x32.png" >/dev/null 2>&1
    sips -z 64 64     "$SRC_ICON" --out "$ICONSET/icon_32x32@2x.png" >/dev/null 2>&1
    sips -z 128 128   "$SRC_ICON" --out "$ICONSET/icon_128x128.png" >/dev/null 2>&1
    sips -z 256 256   "$SRC_ICON" --out "$ICONSET/icon_128x128@2x.png" >/dev/null 2>&1
    sips -z 256 256   "$SRC_ICON" --out "$ICONSET/icon_256x256.png" >/dev/null 2>&1
    sips -z 512 512   "$SRC_ICON" --out "$ICONSET/icon_256x256@2x.png" >/dev/null 2>&1
    sips -z 512 512   "$SRC_ICON" --out "$ICONSET/icon_512x512.png" >/dev/null 2>&1
    sips -z 1024 1024 "$SRC_ICON" --out "$ICONSET/icon_512x512@2x.png" >/dev/null 2>&1

    iconutil -c icns "$ICONSET" -o "$APP/Contents/Resources/AppIcon.icns"
    rm -rf "$ICONSET"
fi

# 5. Metadata Info.plist and PkgInfo
cat << 'EOF' > "$APP/Contents/Info.plist"
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0">
<dict>
    <key>CFBundleDevelopmentRegion</key>
    <string>en</string>
    <key>CFBundleExecutable</key>
    <string>NFSU2-macOS</string>
    <key>CFBundleIconFile</key>
    <string>AppIcon</string>
    <key>CFBundleIdentifier</key>
    <string>com.ea.nfsu2</string>
    <key>CFBundleInfoDictionaryVersion</key>
    <string>6.0</string>
    <key>CFBundleDisplayName</key>
    <string>Need for Speed: Underground 2</string>
    <key>CFBundleName</key>
    <string>Need for Speed: Underground 2</string>
    <key>CFBundlePackageType</key>
    <string>APPL</string>
    <key>CFBundleShortVersionString</key>
    <string>1.2</string>
    <key>CFBundleVersion</key>
    <string>1.2</string>
    <key>LSMinimumSystemVersion</key>
    <string>11.0</string>
    <key>NSHighResolutionCapable</key>
    <true/>
</dict>
</plist>
EOF

echo "APPL????" > "$APP/Contents/PkgInfo"

# 6. Copy local assets if available
if [ -d "../extracted_game/%AppFolder%" ]; then
    echo "[*] Linking game assets into bundle (APFS copy)..."
    cp -cR "../extracted_game/%AppFolder%" "$APP/Contents/Resources/game"
elif [ -d "game" ]; then
    echo "[*] Linking game assets from local folder..."
    cp -cR "game" "$APP/Contents/Resources/game"
fi

# 7. Ad-hoc codesign
codesign --force --deep --sign - "$APP" >/dev/null 2>&1 || true
touch "$APP"

echo "=== Success! $APP is ready to run! ==="
