CC=gcc

OBJS= \
CairoImageSurface.o \
CairoLoopObject.o \
GameMainLoop.o \
Bullet.o \
Sprite.o \
Enemy.o \
Goon.o \
InventoryLoop.o \
Level.o \
FirstLevel.o \


all: $(OBJS)
	
###	${CC} -c *.m

clean:
	rm -f *.o

.m.o:
	${CC} -c $<
