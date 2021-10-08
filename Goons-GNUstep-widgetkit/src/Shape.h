//#import <GNUstep/GNUstep.h>

@interface Shape
{
	int x,y;
	int width,height;
}

- (id) new;

- (id) setX:(int)xx Y:(int)yy Width:(int)w Height:(int)h;

- (int) x;
- (int) width;
- (int) y;
- (int) height;

@end

