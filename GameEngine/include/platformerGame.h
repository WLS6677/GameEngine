#include "../include/engine.h"
#include "../include/Vector2.h"
#define GRAVITY_CONSTANT -9.8


// classes................................................................

class Player : GameObject 
{
    private:
        Vector2 position, Velocity;
    public:
        Player();
        Vector2 GetPosition();
        Vector2 GetVelocity();

        void PlayerMovement(); // need defining, call it in update() function
        void Update(); // needs defining

        bool PlayerLeftColliding();     // --| 
        bool PlayerRightColliding();    //   |
        bool PlayerBottomColliding();   //   |------------- collision functions, detect if player is colliding with anything; needs defining
        bool PlayerTopColliding();      // --|
};                                              

