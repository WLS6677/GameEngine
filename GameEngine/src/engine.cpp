#include "../include/engine.h"

// structs................................................................

GameSettings::GameSettings()
{
    this->ScreenHeight = 540;
    this->ScreenWidth = 720;
    RefreshRate = 60;
}

void StartGame(const GameSettings& settings)
{
    // load files onto programm for the game window including:
    // - GameSettings.bin // for user set settings
    //       *resolution *refresh rate *fullscreen on/off
    // - initialize the game window.
    //

    InitWindow(settings.ScreenWidth, settings.ScreenHeight, "Game");
    SetTargetFPS(GetMonitorRefreshRate(settings.RefreshRate));

    // load the main game scene

}