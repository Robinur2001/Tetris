#include "raylib.h"

#define STAGE_WIDTH 12
#define STAGE_HEIGHT 22
#define TILE_SIZE 24
#define TETROMINO_SIZE 4

int CheckCollision(const int tetrominoStartX, const int tetrominoStartY, const int *tetromino);

void drawTetromino(const Color currentColor, const int startOffsetX, const int startOffsetY, const int tetrominoStartX, const int tetrominoStartY, const int *tetromino);