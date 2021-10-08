CC=gcc

OBJS= \
ImageSurface.o \
ImageWidgetDelegate.o \
Shape.o \
Widget.o \
WidgetBackgroundColor.o \
WidgetColor.o \
WidgetColorV.o \
WidgetForegroundColor.o \
WidgetImage.o \
WidgetImageV.o \
WidgetNode.o \
WidgetXV.o \


all: $(OBJS)
	
###	${CC} -c *.m

clean:
	rm -f *.o

.m.o:
	${CC} -c $<
