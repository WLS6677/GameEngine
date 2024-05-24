#include "../include/engine.h"

// structs................................................................

// classes ----------------------------------------------------------------

void Scene::InitScene() {
    std::fstream ObjectsFile("scene");
}
void Scene::DestroyScene() {
    for (std::size_t i = 0; i < objects.size(); i++) {
        objects[i].~GameObject(); }
    objects.clear();
}
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

    Scene::pEngine = this;

    for (int sceneIndex = 0; sceneIndex < NumberOfScenes; sceneIndex++) {
    Scene* scene = new Scene();         // this should be from the scenes file
    this->scenes.push_back(scene);      // load the Scene objects without their objects
    }
    pCurrentScene = scenes[0];          // select the defualt scene
    pCurrentScene->InitScene();         // loads the scenes objects onto memory

}
void GameEngine::DestroyEngine() {

    pCurrentScene->DestroyScene();      // unload the scene objects

    for (int sceneIndex = 0; sceneIndex < scenes.size(); sceneIndex++) {
        delete[] scenes[sceneIndex];
    }
}   



