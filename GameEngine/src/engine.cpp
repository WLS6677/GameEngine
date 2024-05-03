#include "engine.h"
#include "raylib.h"
#include <fstream>

void StartGame()
{
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Game");
    SetTargetFPS(GetMonitorRefreshRate(0));
}