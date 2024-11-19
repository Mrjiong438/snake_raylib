.PHONY : all clean

object = build/main.o build/snaker.o build/snake.o
winobject = build/winmain.o build/winsnaker.o build/winsnake.o
CFLUG = -s -O3 -Os
LINKFLUG =-Wl,--gc-sections -Wl,-Bstatic -lraylib -Wl,-Bdynamic -lGL -lm -lpthread -ldl -lrt -lX11
#LINKFLUG =-Wl,--gc-sections -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
WINLIB = -I ./raylib-5.0_win64_mingw-w64/include -L ./raylib-5.0_win64_mingw-w64/lib
WINLINKFLUG =-Wl,--gc-sections -lraylib -lgdi32 -lwinmm

all : snake_raylib snake_raylib.exe

clean :
	rm build/* snake_raylib snake_raylib.exe

snake_raylib : $(object)
	gcc $(object) $(CFLUG) -o $@ $(LINKFLUG)

build/main.o : main.c snaker.h snake_core/snake.h
	gcc -c main.c -o $@

build/snaker.o : snaker.c snaker.h snake_core/snake.h
	gcc -c snaker.c -o $@

build/snake.o : snake_core/snake.c snake_core/snake.h
	gcc -c snake_core/snake.c -o $@

snake_raylib.exe : $(winobject)
	x86_64-w64-mingw32-gcc $(winobject) $(CFLUG) $(WINLIB) -o $@ $(WINLINKFLUG)

build/winmain.o : main.c snaker.h snake_core/snake.h
	x86_64-w64-mingw32-gcc $(WINLIB) -c main.c -o $@

build/winsnaker.o : snaker.c snaker.h snake_core/snake.h
	x86_64-w64-mingw32-gcc $(WINLIB) -c snaker.c -o $@

build/winsnake.o : snake_core/snake.c snake_core/snake.h
	x86_64-w64-mingw32-gcc $(WINLIB) -c snake_core/snake.c -o $@
