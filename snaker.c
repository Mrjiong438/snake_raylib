#include "snaker.h"

int drawWeb();

int drawbody(int x,int y,Color color){
	
	return 0;
}
int drawbody_P(Position pos,Color color);

int drawpixel(int x,int y,Color color){
	DrawRectangle(x * zoom,y * zoom,zoom,zoom,BLACK);
	return 0;
}
int drawpixel_P(Position pos,Color color){
	DrawRectangle(pos.x * zoom,pos.y * zoom,zoom,zoom,BLACK);
	return 0;
}

