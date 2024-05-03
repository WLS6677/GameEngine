#include "engine.h"
#include "raylib.h"
#include <fstream>

void StartGame()
{
    // read the game files including:
    // - GameSettings.bin // for window size and refresh rate, fullscreen on/off, and all user settings
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Game");
    SetTargetFPS(GetMonitorRefreshRate(0));
}