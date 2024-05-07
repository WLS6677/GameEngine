#include "platformerGame.h"
#include "raylib.h"



// classes................................................................

Player::Player(){
    this->IsStatic = false;
    this->Position = hVector2(100.0f, 100.0f);
    this->Velocity = hVector2(0.0f, 0.0f);
}
hVector2 Player::GetPosition(){
    return this->Position;
}
hVector2 Player::GetVelocity(){
    return this->Velocity;
}
void Player::PlayerMovement(const double& deletTime){
//handles gravity based movement
    if (!IsPlayerIsTouchingGround())
    {
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
        this->Position += hVector2(+100, 0.0) * deletTime;
    }

// handles velocity based movement
    UpdatePosition(deletTime);          

//bool Player::IsPlayerIsTouchingGround(){
    


        // ight time to write the scene logic




}
void Player::UpdatePosition(const double& deletTime){
    this->Position += this->Velocity * deletTime;
}
// --- gets called every frame by the scene ---
void Player::Update(){
    PlayerMovement(GetFrameTime());
}


