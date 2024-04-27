#include <iostream>
#include "raylib.h"
#include "rlgl.h"
#include "raymath.h"

int main() {
  InitWindow(800, 600, "My window");
	SetTargetFPS(60);
	while (!WindowShouldClose())
	{
		ClearBackground(BLACK);
		EndDrawing();
}
CloseWindow();
  return 0;
}