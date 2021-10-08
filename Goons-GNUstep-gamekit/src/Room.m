#import "Room.h"

@implementation Room

- (id) newX:(int)xx Y:(int)yy
{
	x = xx;
	y = yy;

	return self;
}

- (id) moveLeft
{
	x++;
}

- (id) moveRight
{
	x--;
}

- (id) moveUp
{
	y++;
}

- (id) moveDown
{
	y--;
}

@end
