#include "../include/engine.h"
#include "../include/raylib.h"
#include <fstream>

// structs................................................................

GameSettings::GameSettings()
{
    this->ScreenHeight = 540;
    this->ScreenWidth = 720;
    RefreshRate = 60;
}

void StartGame(const GameSettings& settings)
{
    // load files onto programm for running the game including:
    // - GameSettings.bin // for user set settings
    //       *resolution *refresh rate *fullscreen on/off

    InitWindow(settings.ScreenWidth, settings.ScreenHeight, "Game");
    SetTargetFPS(GetMonitorRefreshRate(settings.RefreshRate));
}