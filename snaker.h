#include <raylib.h>
#include <stdio.h>

typedef struct{
	char x;
	char y;
}Position;

extern int zoom;
extern const int screenWidth;
extern const int screenHeight;

extern int drawWeb();
extern int drawbody(int x,int y,Color color);
extern int drawbody_P(Position y,Color color);
extern int drawpixel(int x,int y,Color color);
extern int drawpixel_P(Position y,Color color);
