#include "raylib.h"

int Width = 800;
int Height = 450;

void DrawTitle() {
    // -- Ask raylib how wide the word is ---
    int TitleWidth = MeasureText("Pong Ported", 50);
    DrawText("Pong Ported", (Width / 2) - (TitleWidth / 2), (Height / 2) - 25, 50, LIGHTGRAY);
}

int main() {
    InitWindow(Width, Height, "Pong Ported");

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);

        DrawTitle();

        EndDrawing();
    }
    CloseWindow();
    return 0;
}
