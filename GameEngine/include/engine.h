#include "../include/raylib.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "../include/raylib.h"
#define SETTINGS_FILE_BYTE_SIZE 0

// structs................................................................

struct GameSettings
{

    // this struct will be used for settings variables that are changable by the player through the Settings UI.
    // it will be stored in the resources folder as the GameSettings.bin file and it will be loaded during game runtime.
    // there will be only one GameSettings file with one of these "gameSettings" structs.
    

    int ScreenWidth, ScreenHeight, RefreshRate;
public:
    GameSettings();
};

// classes................................................................

class GameObject
{
protected:
    std::string tag;            // useful if we want to categories similar objects.
    bool IsStatic;              // for collision and graphics
public:
    void Initialize();
    void Update();
};
class Scene
{

    //tasks: ----------------------------------------------------------------  
    // #Handle Envirement collisions        ( runs a collision check once on all GameObjects in the scene with every static GameObject )
    // #Hanlde Entity collisions            ( same one as in the physics simulator )


private:
    std::vector<GameObject> objects;
public:
    Scene();
    ~Scene();
    void InitializeScene();                    // load the scene from memory and call the intitialize() function for each object.
    void UpdateScene();                        // call Update() for each object in the scene.
    void AddObject(GameObject& object);        // adds the object to the scene.
};

// functions................................................................

void StartGame(const GameSettings& settings);