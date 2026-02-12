#ifndef GAME_UI_HPP
#define GAME_UI_HPP

#include "raylib.h"

inline void DrawTitle(int screenWidth, int screenHeight) {
    // 1. Calculate size as a percentage of height
    float fontSize = (float)screenHeight / 10.0f;
    float spacing = fontSize / 10.0f; // Keep letters from touching

    // 2. Use MeasureTextEx for accuracy with scaling
    Vector2 textSize = MeasureTextEx(GetFontDefault(), "Pong Ported", fontSize, spacing);

    // X: Center | Y: 5% from top
    float posX = (screenWidth / 2.0f) - (textSize.x / 2.0f);
    float posY = (float)screenHeight * 0.05f;

    // 3. DrawTextEx handles the actual scaling much better!
    DrawTextEx(GetFontDefault(), "Pong Ported", { posX, posY }, fontSize, spacing, LIGHTGRAY);
}

inline void Made_BY(int screenWidth, int screenHeight) {
    float fontSize = (float)screenHeight / 25.0f;
    float spacing = fontSize / 10.0f;
    float padding = 10.0f;

    Vector2 textSize = MeasureTextEx(GetFontDefault(), "Made By: Zach", fontSize, spacing);

    float posX = padding;
    float posY = (float)screenHeight - textSize.y - padding;

    DrawTextEx(GetFontDefault(), "Made By: Zach", { posX, posY }, fontSize, spacing, LIGHTGRAY);
}

#endif
