CC=gcc

OBJS= \
Entity.o \
EntityImageWidgetDelegate.o \
ImageLibrary.o \
LoopObject.o \
Room.o \


all: $(OBJS)
	
###	${CC} -c *.m

clean:
	rm -f *.o

.m.o:
	${CC} -c $<
