#import "Entity.h"

@implementation Entity

- (id) newX:(int)xx Y:(int)yy
{
	x = xx;
	y = yy;

	return self;
}

- (int) x
{
	return x;
}

- (int) y
{
	return y;
}

- (int) w
{
	return w;
}

- (int) h
{
	return h;
}


- (id) moveLeft
{
	x --;
}

- (id) moveRight
{
	x++;
}

- (id) moveUp
{
	y--;
}

- (id) moveDown
{
	y++;
}

@end
