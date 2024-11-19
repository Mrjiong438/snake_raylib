#include "snaker.h"

int drawWeb(){
	for(int i=0;i<9;i++){
		drawbox(2,2+i*(BLOCKWIDTH+1),33,1,MRGRAY);
		drawbox(2+i*(BLOCKWIDTH+1),2,1,33,MRGRAY);
	}
	return 0;
}

int drawblock(int x,int y,Color color){
	drawbox(3+x*(BLOCKWIDTH+1),3+y*(BLOCKWIDTH+1),BLOCKWIDTH,BLOCKWIDTH,color);
	return 0;
}

int drawblock_P(Position8 pos,Color color){
	drawblock(pos.x,pos.y,color);
	return 0;
}
int drawbody(int x,int y,char dir){
	switch (dir){
		case '^':
			drawbox(3+x*(BLOCKWIDTH+1),3+y*(BLOCKWIDTH+1)-1,BLOCKWIDTH,1,BLACK);
			break;
		case 'v':
			drawbox(3+x*(BLOCKWIDTH+1),3+y*(BLOCKWIDTH+1)+BLOCKWIDTH,BLOCKWIDTH,1,BLACK);
			break;
		case '<':
			drawbox(3+x*(BLOCKWIDTH+1)-1,3+y*(BLOCKWIDTH+1),1,BLOCKWIDTH,BLACK);
			break;
		case '>':
			drawbox(3+x*(BLOCKWIDTH+1)+BLOCKWIDTH,3+y*(BLOCKWIDTH+1),1,BLOCKWIDTH,BLACK);
			break;
	}
	drawblock(x,y,BLACK);
	return 0;
}
int drawbody_P(Position8 pos,char dir){
	drawbody(pos.x,pos.y,dir);
	return 0;
}

int drawbox(int x,int y,int width,int height,Color color){
	DrawRectangle(x * zoom,y * zoom,width * zoom,height * zoom,color);
	return 0;
}

int drawbox_P(Position8 pos,int width,int height,Color color);

int drawpixel(int x,int y,Color color){
	DrawRectangle(x * zoom,y * zoom,zoom,zoom,color);
	return 0;
}
int drawpixel_P(Position8 pos,Color color){
	DrawRectangle(pos.x * zoom,pos.y * zoom,zoom,zoom,color);
	return 0;
}

