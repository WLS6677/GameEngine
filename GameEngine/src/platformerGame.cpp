#include "../include/engine.h"
#include "../include/platformerGame.h"
#include "../include/Vector2.h"
#include "../include/raylib.h"


void PlayerMovement(Player& player)
{
    if(IsKeyDown(KEY_A) == true) {
        Vector2 position.x = position.x + 10;
    }
 
    if(IsKeyDown(KEY_D) == true) {
        Vector2 position.x = position.x - 10;
    }


    UpdatePosition();              // Adds veolity to the pos and moves the player horizontally if he is holding down the movement buttons 

}




