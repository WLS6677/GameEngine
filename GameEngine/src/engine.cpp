#include "engine.h"

// structs................................................................

GameSettings::GameSettings() {
    this->ScreenHeight = 540;
    this->ScreenWidth = 720;
    RefreshRate = 60;
}
void StartGame(const GameSettings& settings) {
    // load files onto programm for the game window including:
    // - GameSettings.bin // for user set settings
    //       *resolution *refresh rate *fullscreen on/off
    // - initialize the game window.
    //

    InitWindow(settings.ScreenWidth, settings.ScreenHeight, "Game");
    SetTargetFPS(GetMonitorRefreshRate(settings.RefreshRate));

    // load the main game scene

}

// classes ----------------------------------------------------------------

void Scene::ExecuteVerletIntegration()
{
    // loop on all Game objects { write all of the non_static_objects into an array containing their indecie in the scene }
    // then create a hash array using the objects position
    // we u 
}

