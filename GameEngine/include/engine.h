#include <iostream>
#include <fstream>
#include <vector>
#include <string>

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

void StartGame();