#include "../include/engine.h"
#include "../include/Vector2.h"
#define GRAVITY_CONSTANT -9.8




class Player : GameObject 
{
    
private:
    Vector2 position, Velocity;

public:
    Player();

    void PlayerMovement();
};

