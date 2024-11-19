#include <raylib.h>
#include <stdio.h>
#include "snake_core/snake.h"

#define MRGRAY (Color){223,223,223,255}
#define BLOCKWIDTH 3

extern int zoom;
extern const int screenWidth;
extern const int screenHeight;

extern int drawWeb();

extern int drawblock(int x,int y,Color color);
extern int drawblock_P(Position8 pos,Color color);

extern int drawbody(int x,int y,char dir);
extern int drawbody_P(Position8 pos,char dir);

extern int drawbox(int x,int y,int width,int height,Color color);
extern int drawbox_P(Position8 pos,int width,int height,Color color);

extern int drawpixel(int x,int y,Color color);
extern int drawpixel_P(Position8 pos,Color color);
