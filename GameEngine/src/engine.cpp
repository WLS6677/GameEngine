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
    settings.pName = "Game";
    settings.ScreenHeight = 900;
    settings.ScreenWidth = 1600;
    settings.RefreshRate = 60;
}

void GameEngine::InitEngine() {

    InitWindow(settings.ScreenWidth, settings.ScreenHeight, settings.pName);
    SetTargetFPS(settings.RefreshRate);

    // after i figure out how the fstream works ill implement save files
    // for now ill make the scenes manually in code
    //std::fstream stream (std::string("../resources/scene.dat"));

    int NumberOfScenes = 1; // this should be stored in the scenes file

    for (int sceneIndex = 0; sceneIndex < NumberOfScenes; sceneIndex++) {
    Scene* scene = new Scene();         // this should be from the scenes file
    this->scenes.push_back(scene);      // idk if loading all the scenes onto the memory at the same time is a good idea or not
    }

    CurrentScene = scenes[0];           // defualy scene

}
void GameEngine::DestroyEngine() {

    for (int sceneIndex = 0; sceneIndex < scenes.size(); sceneIndex++) {
    scenes[sceneIndex]->~Scene();
    }
}   



