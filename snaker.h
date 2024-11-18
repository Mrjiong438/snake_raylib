#include <raylib.h>
#include <stdio.h>
#include "snake_core/snake.h"

#define MRGRAY (Color){223,223,223,255}

typedef struct{
	char x;
	char y;
}Position;

extern int zoom;
extern const int screenWidth;
extern const int screenHeight;

extern int drawWeb();

extern int drawbody(int x,int y,char dir,Color color);
extern int drawbody_P(Position pos,char dir,Color color);

extern int drawbox(int x,int y,int width,int height,Color color);
extern int drawbox_P(Position pos,int width,int height,Color color);

extern int drawpixel(int x,int y,Color color);
extern int drawpixel_P(Position pos,Color color);
