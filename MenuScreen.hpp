#ifndef GAME_UI_HPP
#define GAME_UI_HPP

#include "raylib.h"

inline void DrawTitle(int screenWidth, int screenHeight) {
    int fontSize = 50;
    int TitleWidth = MeasureText("Pong Ported", fontSize);

    // X: Center | Y: 5% from top
    int posX = (screenWidth / 2) - (TitleWidth / 2);
    int posY = (int)(screenHeight * 0.05);

    DrawText("Pong Ported", posX, posY, fontSize, LIGHTGRAY);
}

inline void Made_BY() {

}

#endif
