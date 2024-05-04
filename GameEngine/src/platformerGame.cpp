#include "../include/engine.h"
#include "../include/platformerGame.h"



// classes................................................................

Player::Player()
{
    this->IsStatic = false;
    this->position = Vector2(100.0f, 100.0f);
    this->Velocity = Vector2(0.0f, 0.0f);
}
Vector2 Player::GetPosition()
{
    return this->position;
}
Vector2 Player::GetVelocity()
{
    return this->Velocity;
}




