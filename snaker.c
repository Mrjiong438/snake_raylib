#include "snaker.h"

int drawWeb(){
	for(int i=0;i<9;i++){
		drawbox(2,2+i*4,33,1,MRGRAY);
		drawbox(2+i*4,2,1,33,MRGRAY);
	}
	return 0;
}

int drawbody(int x,int y,char dir,Color color){
	
	return 0;
}
int drawbody_P(Position pos,char dir,Color color);

int drawbox(int x,int y,int width,int height,Color color){
	DrawRectangle(x * zoom,y * zoom,width * zoom,height * zoom,color);
	return 0;
}

int drawbox_P(Position pos,int width,int height,Color color);

int drawpixel(int x,int y,Color color){
	DrawRectangle(x * zoom,y * zoom,zoom,zoom,color);
	return 0;
}
int drawpixel_P(Position pos,Color color){
	DrawRectangle(pos.x * zoom,pos.y * zoom,zoom,zoom,color);
	return 0;
}

