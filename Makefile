.PHONY : all

object = build/main.o build/snaker.o
CFLUG = -Wl,-Bstatic -lraylib -Wl,-Bdynamic -lGL -lm -lpthread -ldl -lrt -lX11

all : main

main : $(object)
	gcc $(object) -o main $(CFLUG)

build/main.o : main.c
	gcc -c main.c -o build/main.o

build/snaker.o : snaker.c
	gcc -c snaker.c -o build/snaker.o
