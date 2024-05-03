#include "engine.h"
#include "raylib.h"
#include <fstream>

void StartGame(const GameSettings& settings)
{
    // read the game files including:
    // - GameSettings.bin // for window size and refresh rate, fullscreen on/off, and all user settings

    InitWindow(settings.ScreenWidth, settings.ScreenHeight, "Game");
    SetTargetFPS(GetMonitorRefreshRate(settings.RefreshRate));
}