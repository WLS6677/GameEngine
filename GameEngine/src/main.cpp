#include <iostream>
#include "engine.h"
#include "raylib.h"
#include "platformerGame.h"

int main()
{

    GameSettings CurrentGameSettings; // this needs to be stored on the disk and loaded from it on runtime.
    StartGame(CurrentGameSettings);

    Player Dave;

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------

        Dave.Update();

        // Draw
        //----------------------------------------------------------------------------------
    BeginDrawing();
        ClearBackground(DARKGRAY);

        DrawCircle(Dave.GetPosition().GetX(),Dave.GetPosition().GetY(),20, WHITE); //this should be done by the scene
        
        DrawFPS(10,10);
    EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
} 