#include "snaker.h"

int zoom = 50;
const int screenWidth=16;
const int screenHeight=16;

int main(){
	InitWindow(screenWidth * zoom,screenHeight * zoom,"snake raylib");

	SetTargetFPS(60);

	while(!WindowShouldClose()){
		BeginDrawing();
		
		ClearBackground(RAYWHITE);

		drawpixel(0,0,BLACK);
		drawpixel(1,1,BLACK);
		drawpixel(2,2,BLACK);
		drawpixel(4,3,BLACK);
		drawpixel(10,10,BLACK);

		EndDrawing();
	}

	CloseWindow();
	return 0;
}
