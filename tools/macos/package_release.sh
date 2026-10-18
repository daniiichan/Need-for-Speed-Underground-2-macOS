#!/bin/bash
# ==============================================================================
# Need for Speed: Underground 2 - macOS Release Packager
# Author: daniiichan
# ==============================================================================
# Creates an asset-free, clean release ZIP ready for GitHub Releases.
# ==============================================================================
set -e

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
REPO_ROOT="$(cd "$SCRIPT_DIR/../.." && pwd)"
APP_NAME="Need for Speed Underground 2.app"

echo "=========================================================="
echo "  Packaging Need for Speed: Underground 2 (macOS Release)"
echo "=========================================================="

# Find or build app bundle
APP_PATH=""
if [ -d "$REPO_ROOT/$APP_NAME" ]; then
    APP_PATH="$REPO_ROOT/$APP_NAME"
elif [ -d "$REPO_ROOT/../$APP_NAME" ]; then
    APP_PATH="$REPO_ROOT/../$APP_NAME"
fi

if [ -z "$APP_PATH" ] || [ ! -d "$APP_PATH" ]; then
    echo "App bundle not found. Building now..."
    "$SCRIPT_DIR/bundle.sh"
    APP_PATH="$REPO_ROOT/$APP_NAME"
fi

RELEASE_DIR="$REPO_ROOT/build_macos/release"
rm -rf "$RELEASE_DIR"
mkdir -p "$RELEASE_DIR/payload"

echo "[*] Staging clean app bundle (excluding all proprietary game assets)..."
cp -Rc "$APP_PATH" "$RELEASE_DIR/payload/$APP_NAME" 2>/dev/null || cp -R "$APP_PATH" "$RELEASE_DIR/payload/$APP_NAME"

# Strip any game assets from payload
rm -rf "$RELEASE_DIR/payload/$APP_NAME/Contents/Resources/game"
rm -rf "$RELEASE_DIR/payload/$APP_NAME/Contents/Resources/GLOBAL"
rm -rf "$RELEASE_DIR/payload/$APP_NAME/Contents/Resources/CARS"
rm -rf "$RELEASE_DIR/payload/$APP_NAME/Contents/Resources/TRACKS"
rm -rf "$RELEASE_DIR/payload/$APP_NAME/Contents/Resources/SOUND"
rm -rf "$RELEASE_DIR/payload/$APP_NAME/Contents/Resources/MOVIES"

# Copy installer scripts
cp -f "$SCRIPT_DIR/install_assets.sh" "$RELEASE_DIR/payload/"
cp -f "$SCRIPT_DIR/Install Need for Speed Underground 2.command" "$RELEASE_DIR/payload/"
chmod +x "$RELEASE_DIR/payload/install_assets.sh"
chmod +x "$RELEASE_DIR/payload/Install Need for Speed Underground 2.command"

# User instructions
cat << 'EOF' > "$RELEASE_DIR/payload/README_INSTALL.txt"
================================================================================
Need for Speed: Underground 2 — Native macOS Port (Apple Silicon & Intel)
Port by daniiichan
================================================================================

HOW TO PLAY:
1. Double-click "Install Need for Speed Underground 2.command".
2. When prompted, select your original PC installation folder of Need for Speed: Underground 2.
   (The folder must contain the original game assets: GLOBAL/, CARS/, TRACKS/, etc.).
3. The script will copy the assets into the game app and codesign it.
4. Launch "Need for Speed Underground 2.app" and enjoy!

LEGAL NOTICE:
This release contains NO proprietary game assets (textures, cars, tracks, music, or game binaries).
You must provide your own legally obtained copy of the PC version of the game.
================================================================================
EOF

# Ad-hoc sign payload bundle
codesign --force --deep --sign - "$RELEASE_DIR/payload/$APP_NAME" 2>/dev/null || true

# Create ZIP archive
VERSION="v1.0.0"
ZIP_NAME="Need.for.Speed.Underground.2.macOS.arm64.$VERSION.zip"
echo "[*] Creating $ZIP_NAME..."
(cd "$RELEASE_DIR/payload" && zip -r -y -q "../$ZIP_NAME" .)

echo ""
echo "=========================================================="
echo "✅ Release package created successfully:"
echo "   $RELEASE_DIR/$ZIP_NAME"
echo "=========================================================="
