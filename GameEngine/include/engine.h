#pragma once
#include "raylib.h"
#include "hVector2.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class GameObject;
class Scene;
class GameEngine;

// global variables since for some reason static class members dont want to work.
static Scene* pScene;
static GameEngine* pEngine;

// structs................................................................

struct EngineSettings {
    int ScreenWidth, ScreenHeight, RefreshRate;
    char* pName;
};

// classes................................................................

class GameObject {
protected:
    std::string tag;            // useful if we want to categories similar objects.
    bool IsStatic;              // for collision and graphics
public:

    virtual ~GameObject() = default;
    virtual void Init() = 0;
    virtual void Update() = 0;
};
class Scene {

    //tasks: ----------------------------------------------------------------  
    // #Handle Envirement collisions        ( runs a collision check once on all GameObjects in the scene with every static GameObject )
    // #Hanlde Entity collisions            ( same one as in the physics simulator )


private:
    std::vector<GameObject> objects;
public:
////////////////////////////////core////////////////////////////////

    Scene()= default;
    ~Scene() = default;
    void InitScene();                           // load the scene from memory and call the intitialize() function for each object.
    void DestroyScene();                        // empties all the allocated memory for the objects inside the scene

    void UpdateScene();                         // call Update() for each object in the scene.
    void AddObject(GameObject& object);         // adds the object to the scene.

////////////////////////////////Optional/Features////////////////////////////////
    void ExecuteVerletIntegration();           

};
class GameEngine {
private:
    EngineSettings settings{};
    std::vector<Scene*> scenes{};
    Scene* pCurrentScene;                // this is the scene thats currently running
public:
    GameEngine();
    void InitEngine();                          // loads from disk to memory the scenes, sprites sheets, and audio
    void DestroyEngine();                       // deletes everything that was loaded from InitEngine from memory

    void UpdateScene();                         // runs all of the code for running the scene

};

// functions................................................................
