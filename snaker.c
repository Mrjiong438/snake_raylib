#include "snaker.h"

int drawWeb(){
	for(int i=0;i<9;i++){
		drawbox(2,2+i*(BLOCKWIDTH+1),33,1,WEBGRAY);
		drawbox(2+i*(BLOCKWIDTH+1),2,1,33,WEBGRAY);
	}
	return 0;
}

int drawblock(int x,int y,Color color){
	return drawbox(3+x*(BLOCKWIDTH+1),3+y*(BLOCKWIDTH+1),BLOCKWIDTH,BLOCKWIDTH,color);
}

int drawblock_P(Position8 pos,Color color){
	return drawblock(pos.x,pos.y,color);
}
int drawbody(int x,int y,char dir){
	drawblock(x,y,BLACK);
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
	return 0;
}

int drawbody_P(Position8 pos,char dir){
	return drawbody(pos.x,pos.y,dir);
}

int drawhead(int x,int y,char dir){
	drawblock(x,y,BLACK);
	switch (dir){
		case '^':
			drawpixel(3+x*(BLOCKWIDTH+1),3+y*(BLOCKWIDTH+1),EYEGRAY);
			drawpixel(3+x*(BLOCKWIDTH+1)+2,3+y*(BLOCKWIDTH+1),EYEGRAY);
			break;
		case 'v':
			drawpixel(3+x*(BLOCKWIDTH+1),3+y*(BLOCKWIDTH+1)+2,EYEGRAY);
			drawpixel(3+x*(BLOCKWIDTH+1)+2,3+y*(BLOCKWIDTH+1)+2,EYEGRAY);
			break;
		case '<':
			drawpixel(3+x*(BLOCKWIDTH+1),3+y*(BLOCKWIDTH+1),EYEGRAY);
			drawpixel(3+x*(BLOCKWIDTH+1),3+y*(BLOCKWIDTH+1)+2,EYEGRAY);
			break;
		case '>':
			drawpixel(3+x*(BLOCKWIDTH+1)+2,3+y*(BLOCKWIDTH+1),EYEGRAY);
			drawpixel(3+x*(BLOCKWIDTH+1)+2,3+y*(BLOCKWIDTH+1)+2,EYEGRAY);
			break;
	}
	return 0;
}

int drawhead_P(Position8 pos,char dir){
	return drawhead(pos.x,pos.y,dir);
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

int drawnum(int x,int y,char num,Color color){
	switch (num){
		case 0:
			drawbox(x,y,1,5,color);
			drawbox(x+2,y,1,5,color);
			drawpixel(x+1,y,color);
			drawpixel(x+1,y+4,color);
			break;
		case 1:
			drawbox(x+2,y,1,5,color);
			break;
		case 2:
			drawbox(x,y,3,1,color);
			drawbox(x,y+2,3,1,color);
			drawbox(x,y+4,3,1,color);
			drawpixel(x+2,y+1,color);
			drawpixel(x,y+3,color);
			break;
		case 3:
			drawbox(x,y,3,1,color);
			drawbox(x,y+2,3,1,color);
			drawbox(x,y+4,3,1,color);
			drawpixel(x+2,y+1,color);
			drawpixel(x+2,y+3,color);
			break;
		case 4:
			drawbox(x,y,1,3,color);
			drawbox(x+2,y,1,5,color);
			drawpixel(x+1,y+2,color);
			break;
		case 5:
			drawbox(x,y,3,1,color);
			drawbox(x,y+2,3,1,color);
			drawbox(x,y+4,3,1,color);
			drawpixel(x,y+1,color);
			drawpixel(x+2,y+3,color);
			break;
		case 6:
			drawbox(x,y,3,1,color);
			drawbox(x,y+2,3,1,color);
			drawbox(x,y+4,3,1,color);
			drawpixel(x,y+1,color);
			drawpixel(x,y+3,color);
			drawpixel(x+2,y+3,color);
			break;
		case 7:
			drawbox(x,y,2,1,color);
			drawbox(x+2,y,1,5,color);
			break;
		case 8:
			drawbox(x,y,1,5,color);
			drawbox(x+2,y,1,5,color);
			drawpixel(x+1,y,color);
			drawpixel(x+1,y+2,color);
			drawpixel(x+1,y+4,color);
			break;
		case 9:
			drawbox(x,y,3,1,color);
			drawbox(x,y+2,3,1,color);
			drawbox(x,y+4,3,1,color);
			drawpixel(x,y+1,color);
			drawpixel(x+2,y+1,color);
			drawpixel(x+2,y+3,color);
			break;
			
	}
	return 0;
}
int drawnum_P(Position8 pos,char num,Color color){
	return drawnum(pos.x,pos.y,num,color);
}
