#include <iostream>
#include <fstream>
#include <vector>
#include <string>

// structs................................................................

struct gameSettings
{

    // this struct will be used for variables that are changable by the player through the Settings UI.
    // it will be stored in the resources folder as the GameSettings.bin file and it will be loaded during game runtime.
    // there will be only one GameSettings file with one of these "gameSettings" structs.
    
private:
    int ScreenWidth, ScreenHeight, RefreshRate;
public:
    gameSettings();
    ~gameSettings();
};

// classes................................................................

class GameObject
{
protected:
    std::string tag;            // useful if we want to categories similar objects.
public:
    void Initialize();
    void Update();
};
class Scene
{
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

void StartGame();