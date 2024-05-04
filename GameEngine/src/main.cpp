#include <iostream>
#include "../include/engine.h"
#include "../include/raylib.h"

int main()
{

    GameSettings CurrentGameSettings;
    StartGame(CurrentGameSettings);

    std::cout << sizeof(int) << std::endl;

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------

        

        // Draw
        //----------------------------------------------------------------------------------
    BeginDrawing();
        ClearBackground(DARKGRAY);
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