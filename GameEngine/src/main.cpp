#include <iostream>
#include "../include/engine.h"
#include "../include/raylib.h"

int main()
{

    GameEngine engine{};
    engine.StartGame();

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
    
    CloseWindow();

    return 0;
} 