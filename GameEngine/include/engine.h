#pragma once
#include "raylib.h"
#include "hVector2.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

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
    virtual void Init();
    virtual void Update();
};
class Scene {

    //tasks: ----------------------------------------------------------------  
    // #Handle Envirement collisions        ( runs a collision check once on all GameObjects in the scene with every static GameObject )
    // #Hanlde Entity collisions            ( same one as in the physics simulator )


private:
    std::vector<GameObject> objects;
public:
////////////////////////////////core////////////////////////////////
    Scene();
    ~Scene();
    void InitializeScene();                    // load the scene from memory and call the intitialize() function for each object.
    void UpdateScene();                        // call Update() for each object in the scene.
    void AddObject(GameObject& object);        // adds the object to the scene.
////////////////////////////////Optional/Features////////////////////////////////
    void ExecuteVerletIntegration();           

};
class GameEngine {
private:
    EngineSettings settings;
    Scene* scenes;
public:
    GameEngine();
    void DestroyEngine();                   // cleans up the engine
    void StartGame();                        // opens the window and loads the default scene
};

// functions................................................................
