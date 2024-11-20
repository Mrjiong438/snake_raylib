#include <raylib.h>
#include <stdio.h>
#include "snake_core/snake.h"

#define WEBGRAY (Color){223,223,223,255}
#define EYEGRAY (Color){73,73,73,255}
#define BLOCKWIDTH 3
#define SPACETIME 30
#define SCREENWIDTH 54
#define SCREENHEIGHT 37

#define GAMERESET 3

#define STATEGAMING 0
#define STATEGAMEPAUSE 1
#define STATEGAMEOVER 2
#define STATEGAMEWIN 3

extern int zoom;
extern int selectpos;
extern char gamestate;
extern unsigned int gamecount;
extern unsigned int frame;
extern const int screenWidth;
extern const int screenHeight;

extern int gaming();
extern int pausing();

extern int drawallbody();

extern int drawWeb();

extern int drawblock(int x,int y,Color color);
extern int drawblock_P(Position8 pos,Color color);

extern int drawbody(int x,int y,char dir);
extern int drawbody_P(Position8 pos,char dir);

extern int drawhead(int x,int y,char dir);
extern int drawhead_P(Position8 pos,char dir);

extern int drawbox(int x,int y,int width,int height,Color color);
extern int drawbox_P(Position8 pos,int width,int height,Color color);

extern int drawpixel(int x,int y,Color color);
extern int drawpixel_P(Position8 pos,Color color);

extern int drawnum(int x,int y,char num,Color color);
extern int drawnum_P(Position8 pos,char num,Color color);
