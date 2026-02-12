#include "raylib.h"

int Width = 800;
int Height = 450;

void DrawTitle(int screenWidth, int screenHeight) {

    int fontSize = 50;
    int TitleWidth = MeasureText("Pong Ported", fontSize);

    int posX = (screenWidth / 2) - (TitleWidth / 2);
    int posY = (int)(screenHeight * 0.05);

    DrawText("Pong Ported", posX, posY, fontSize, LIGHTGRAY);
}

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

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
