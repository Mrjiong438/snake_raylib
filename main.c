#include "snaker.h"

int zoom = 20;
const int screenWidth=54;
const int screenHeight=37;

int main(){
	InitWindow(screenWidth * zoom,screenHeight * zoom,"snake raylib");

	SetTargetFPS(60);

GAMESTART:
	srand((unsigned)time(NULL));
	initHeadPos(3,3,'>');
	genfood();

	while(!WindowShouldClose()){
		BeginDrawing();
		
		ClearBackground(RAYWHITE);

		drawWeb();

		EndDrawing();
	}

GAMEOVER:
	CloseWindow();
	return 0;
}
