#import <Foundation/Foundation.h>

@interface Room
{
	int x,y, w,h;
}

- (id) newX:(int)xx Y:(int)yy;

- (id) moveLeft;
- (id) moveRight;
- (id) moveUp;
- (id) moveDown;

@end
