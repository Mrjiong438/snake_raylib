#include "snaker.h"

int zoom = 20;
const int screenWidth=54;
const int screenHeight=37;
Position8 drawingbody={0};

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
		drawblock_P(head);
		drawingbody=tail;
		for(int i=0;i<score;i++){
			char ch=map[drawingbody.x][drawingbody.y];
			drawbody_P(drawingbody,ch);
			switch (ch){
				case '^':
					drawingbody.y--;
					break;
				case 'v':
					drawingbody.y++;
					break;
				case '<':
					drawingbody.x--;
					break;
				case '>':
					drawingbody.x++;
					break;
			}
		}
		EndDrawing();
	}

GAMEOVER:
	CloseWindow();
	return 0;
}
