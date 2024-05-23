#pragma once
#include "engine.h"
#define GRAVITY_VECTOR_CONSTANT (hVector2){0, 9.8}
#define GO_LEFT_KEY KEY_A   // should be in settings
#define GO_RIGHT_KEY KEY_D  // should be be in settings
#define JUMP_KEY KEY_SPACE // should be in settings


// classes................................................................

class Player : GameObject 
{
    private:
        hVector2 Position, Velocity;
    public:
        Player();
        hVector2 GetPosition();
        hVector2 GetVelocity();

        void PlayerMovement(const double& deletTime); // need defining, call it in update() function
        bool IsPlayerIsTouchingGround();
        void UpdatePosition(const double& deletTime);
        void Update(); // needs defining



};








