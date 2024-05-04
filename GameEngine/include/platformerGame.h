#include "../include/engine.h"
#include "../include/Vector2.h"
#define GRAVITY_CONSTANT -9.8




class Player : GameObject 
{

private:
    Vector2 position, Velocity;
public:
    Player();

    void PlayerMovement(); // need defining, call it in update() function

    void Update(); // needs defining
};

