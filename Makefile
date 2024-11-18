.PHONY : all clean

object = build/main.o build/snaker.o build/snake.o
CFLUG = -s -O3 -Os
LINKFLUG =-Wl,--gc-sections -Wl,-Bstatic -lraylib -Wl,-Bdynamic -lGL -lm -lpthread -ldl -lrt -lX11

all : snake_raylib

clean :
	rm build/* main snake_raylib

snake_raylib : $(object)
	gcc $(object) $(CFLUG) -o snake_raylib $(LINKFLUG)

build/main.o : main.c snaker.h snake_core/snake.h
	gcc -c main.c -o $@

build/snaker.o : snaker.c snaker.h snake_core/snake.h
	gcc -c snaker.c -o $@

build/snake.o : snake_core/snake.c snake_core/snake.h
	gcc -c snake_core/snake.c -o $@

