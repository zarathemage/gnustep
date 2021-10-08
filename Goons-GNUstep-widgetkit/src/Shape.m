#import "Shape.h"

@implementation Shape

- (id) new
{
	return self;
}

- (id) setX:(int)xx Y:(int)yy Width:(int)w Height:(int)h
{
	x = xx; y = yy; width = w; height = h;
}

- (int) x
{
	return x;
}

- (int) width
{
	return width;
}

- (int) y
{
	return y;
}

- (int) height
{
	return height;
}


@end
