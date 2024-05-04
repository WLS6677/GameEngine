#include "../include/engine.h"
#include "../include/raylib.h"
#include <fstream>

void StartGame(const GameSettings& settings)
{
    // load files onto programm for running the game including:
    // - GameSettings.bin // for user set settings
    //       *resolution *refresh rate *fullscreen on/off

    std::ifstream GameSettingsFolder("GameSettings.dat");
    for (int i = 0; i < 1; i++)
    {
        /* code */
    }
    GameSettingsFolder.close();

    InitWindow(settings.ScreenWidth, settings.ScreenHeight, "Game");
    SetTargetFPS(GetMonitorRefreshRate(settings.RefreshRate));
}