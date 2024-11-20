#include "snaker.h"


int zoom = 20;
int selectpos=0;
char gamestate=STATEGAMING;
unsigned int frame=1;
unsigned int gamecount=0;

int main(){
	InitWindow(SCREENWIDTH * zoom,SCREENHEIGHT * zoom,"snake raylib");
	SetTargetFPS(60);

GAMESTART:
	srand((unsigned)time(NULL));
	initHeadPos(3,3,'>');
	genfood();

	while(!WindowShouldClose()){

		switch (gamestate){
			case STATEGAMING:
				switch (gaming()){
					case GAMEWIN:
					case GAMEFAIL:
						goto GAMEEND;
					case GAMERESET:
						goto GAMESTART;

				}
				break;
			case STATEGAMEPAUSE:
				pausing();
				break;

		}

		BeginDrawing();
		ClearBackground(RAYWHITE);
		drawWeb();

		drawblock_P(food,RED);
		drawhead_P(head,map[head.x][head.y]);
		drawallbody();
		drawnum(37,3,0,BLACK);

		switch (gamestate){
			case STATEGAMEPAUSE:
				DrawRectangle(0,0,SCREENWIDTH * zoom,SCREENHEIGHT * zoom,(Color) {0,0,0,155});
				for(int i=1;i<SCREENHEIGHT;i+=4)
					drawbox(0,i,SCREENWIDTH,1,(Color) {0,0,0,100});
				break;
		}

		EndDrawing();
		frame++;
	}

GAMEEND:
	CloseWindow();
	return 0;
	}
