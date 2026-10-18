#!/bin/bash
set -e

# ==============================================================================
# Need for Speed: Underground 2 — macOS Asset Importer & Installer
# Author: daniiichan
# ==============================================================================

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
APP_NAME="Need for Speed Underground 2.app"

if [ -d "$SCRIPT_DIR/$APP_NAME" ]; then
    APP="$SCRIPT_DIR/$APP_NAME"
    cd "$SCRIPT_DIR"
elif [ -d "$SCRIPT_DIR/../../$APP_NAME" ]; then
    APP="$SCRIPT_DIR/../../$APP_NAME"
    cd "$SCRIPT_DIR/../.."
elif [ -d "$APP_NAME" ]; then
    APP="$APP_NAME"
else
    echo "⚠️  $APP_NAME not found!"
    if [ -f "$SCRIPT_DIR/bundle.sh" ]; then
        "$SCRIPT_DIR/bundle.sh"
        APP="Need for Speed Underground 2.app"
    else
        echo "❌ Cannot find or build $APP_NAME. Please ensure it is present."
        exit 1
    fi
fi

echo "=========================================================="
echo "🏎️  Need for Speed: Underground 2 — Asset Installer"
echo "=========================================================="
echo ""
echo "Target Application: $APP"

SOURCE_DIR="$1"

if [ -z "$SOURCE_DIR" ]; then
    echo "Select your original PC 'Need for Speed: Underground 2' folder in the file dialog..."
    SOURCE_DIR=$(osascript -e 'POSIX path of (choose folder with prompt "Select your original PC Need for Speed: Underground 2 folder:")' 2>/dev/null || true)
fi

if [ -z "$SOURCE_DIR" ] || [ ! -d "$SOURCE_DIR" ]; then
    echo "❌ No valid folder selected. Exiting."
    exit 1
fi

echo "Source folder: $SOURCE_DIR"

# Validate game files
HAS_VALID_ASSETS=0
if [ -d "$SOURCE_DIR/GLOBAL" ] || [ -d "$SOURCE_DIR/global" ] || [ -f "$SOURCE_DIR/SPEED2.EXE" ] || [ -f "$SOURCE_DIR/speed2.exe" ]; then
    HAS_VALID_ASSETS=1
fi

if [ "$HAS_VALID_ASSETS" -eq 0 ]; then
    echo "⚠️  WARNING: Could not find standard NFSU2 assets (GLOBAL folder or SPEED2.EXE) in the selected directory."
    read -p "Proceed anyway? (y/n) " -n 1 -r
    echo ""
    if [[ ! $REPLY =~ ^[Yy]$ ]]; then
        exit 1
    fi
fi

TARGET_GAME_DIR="$APP/Contents/Resources/game"
mkdir -p "$TARGET_GAME_DIR"

echo "[*] Copying game assets into $APP (using APFS instant clone where supported)..."
cp -cR "$SOURCE_DIR/"* "$TARGET_GAME_DIR/" 2>/dev/null || cp -R "$SOURCE_DIR/"* "$TARGET_GAME_DIR/"

echo "[*] Applying ad-hoc codesign..."
codesign --force --deep --sign - "$APP" >/dev/null 2>&1 || true
touch "$APP"

echo ""
echo "=========================================================="
echo "✅  Assets installed successfully!"
echo "🎮  You can now launch '$APP' directly from Finder."
echo "=========================================================="
