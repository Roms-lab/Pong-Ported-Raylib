#include "raylib.h"
#include "MenuScreen.hpp"

int Width = 800;
int Height = 450;

int main() {
    // Resizable Window
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(Width, Height, "Pong Ported");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        Width = GetScreenWidth();
        Height = GetScreenHeight();

        BeginDrawing();
        ClearBackground(BLACK);

        // Main Game Loop
        DrawTitle(Width, Height);
        Made_BY(Width, Height);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
