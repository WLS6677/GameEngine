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
void Player::PlayerMovement()
{
    if(IsKeyDown(KEY_A) == true) {
        this->position += Vector2(0.0, 0.0);
    }
 
    if(IsKeyDown(KEY_D) == true) {
        Vector2 position.x = position.x - 10;
    }


    UpdatePosition();              // Adds veolity to the pos and moves the player horizontally if he is holding down the movement buttons 

}




