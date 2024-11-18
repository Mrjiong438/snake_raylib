#include "snaker.h"

int main(){

	const int zoom = 50;
	const int screenWidth=16;
	const int screenHeight=16;

	InitWindow(screenWidth * zoom,screenHeight * zoom,"snake raylib");

	SetTargetFPS(60);

	while(!WindowShouldClose()){
		BeginDrawing();
		
		ClearBackground(RAYWHITE);

		DrawRectangle(0 * zoom,0 * zoom,zoom,zoom,BLACK);
		DrawRectangle(1 * zoom,1 * zoom,zoom,zoom,BLACK);
		DrawRectangle(2 * zoom,2 * zoom,zoom,zoom,BLACK);
		DrawRectangle(4 * zoom,3 * zoom,zoom,zoom,BLACK);
		DrawRectangle(10 * zoom,10 * zoom,zoom,zoom,BLACK);

		EndDrawing();
	}

	CloseWindow();
	return 0;
}
