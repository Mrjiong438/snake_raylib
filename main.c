#include "snaker.h"

#define SPACETIME 30
#define SCREENWIDTH 54
#define SCREENHEIGHT 37

int zoom = 20;
int key=0,lastkey=0;
unsigned int frame=1;
unsigned int gamecount=0;
Position8 drawingbody={0};

int main(){
	InitWindow(SCREENWIDTH * zoom,SCREENHEIGHT * zoom,"snake raylib");

	SetTargetFPS(60);

GAMESTART:
	srand((unsigned)time(NULL));
	initHeadPos(3,3,'>');
	genfood();

	while(!WindowShouldClose()){

		while(lastkey=GetKeyPressed())
			key=lastkey;

		switch (key){
			case KEY_UP:
				setdirUP();
				break;
			case KEY_DOWN:
				setdirDOWN();
				break;
			case KEY_LEFT:
				setdirLEFT();
				break;
			case KEY_RIGHT:
				setdirRIGHT();
				break;
			case KEY_R:
				resetgame();
				gamecount++;
				key=lastkey=0;
				goto GAMESTART;
				break;
		}

		if(frame%SPACETIME==0)
			switch (change()){
				case GAMEWIN:
					goto GAMEOVER;
					break;
				case GAMEFAIL:
					goto GAMEOVER;
					break;
			}

		BeginDrawing();
		ClearBackground(RAYWHITE);
		drawWeb();
		
		drawblock_P(food,RED);
		drawhead_P(head,map[head.x][head.y]);
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

		drawnum(37,3,0,BLACK);

		EndDrawing();
		frame++;
	}

GAMEOVER:
	CloseWindow();
	return 0;
}
