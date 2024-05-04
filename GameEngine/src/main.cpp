#include <iostream>
#include "../include/engine.h"
#include "../include/raylib.h"
#include "../include/platformerGame.h"

int main()
{

    GameSettings CurrentGameSettings;
    StartGame(CurrentGameSettings);

    std::cout << sizeof(int) << std::endl;

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

        DrawCircle(Dave.GetPosition().GetX(),Dave.GetPosition().GetY(),20, WHITE);
        
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