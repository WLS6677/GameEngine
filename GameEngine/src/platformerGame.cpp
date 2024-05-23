#include "../include/platformerGame.h"



// classes................................................................

Player::Player() {
    IsStatic = false;
    Position = hVector2(100.0f, 100.0f);
    Velocity = hVector2(0.0f, 0.0f);
}
void Player::Init() {

}
void Player::Update() {

}
hVector2 Player::GetPosition() {
    return this->Position;
}
hVector2 Player::GetVelocity() {
    return this->Velocity;
}
void Player::PlayerMovement(const double& deletTime) {
//handles gravity based movement
    if (!IsPlayerIsTouchingGround())
    {
        Position += GRAVITY_VECTOR_CONSTANT * 0.5f * deletTime * deletTime;
        Velocity += GRAVITY_VECTOR_CONSTANT * deletTime;
    }
    else 
    {
        if (IsKeyDown(JUMP_KEY))
        {
            Velocity = hVector2(0, -100);
        }
        else
        {
            Velocity.SetY(0.0f);
        }
    }

//handle Left&Right movement
    if(IsKeyDown(GO_LEFT_KEY)) 
    {
        this->Position += hVector2(-100, 0.0) * deletTime;
    }
    if(IsKeyDown(GO_RIGHT_KEY)) 
    {
        this->Position += hVector2(+100, 0.0) * deletTime;
    }

// handles velocity based movement
    UpdatePosition(deletTime);          

//bool Player::IsPlayerIsTouchingGround(){
    
        //scene.CheckCollisionWith();

        // ight time to write the scene logic




}
void Player::UpdatePosition(const double& deletTime) {
    Position += Velocity * deletTime;
}
bool Player::IsPlayerIsTouchingGround() {
    return false;
}










