#include <iostream>
#include "../include/engine.h"
#include "../include/raylib.h"



#define SCENE_1_NAME "test_scene.dat"
void OpenASceneFile();



int main()
{

    GameEngine engine{};
    engine.InitEngine();

    OpenASceneFile();

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
    
    engine.DestroyEngine();
    CloseWindow();

    return 0;
} 



void CreateASceneFile() {
    std::ofstream fileStream("resources/scenes/test_scene.txt");
    std::cout << fileStream.is_open() << '\n';

    fileStream << "HELLO FILE" << std::endl;
    fileStream.close();
}











