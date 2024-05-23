#include "../include/engine.h"

// structs................................................................

// classes ----------------------------------------------------------------

void Scene::ExecuteVerletIntegration()
{
    // loop on all Game objects { write all of the non_static_objects into an array containing their indecie in the scene }
    // then create a hash array using the objects position
    // we u 
}


GameEngine::GameEngine() {
    settings = EngineSettings{};
}
void GameEngine::DestroyEngine() {

}   
void GameEngine::StartGame() {

    settings.pName = "Game";
    settings.ScreenWidth = 600;
    settings.ScreenWidth = 800;
    settings.RefreshRate = 60;

    InitWindow(settings.ScreenWidth, settings.ScreenHeight, settings.pName);
    SetTargetFPS(settings.RefreshRate);
}




