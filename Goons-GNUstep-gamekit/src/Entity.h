#import <Foundation/Foundation.h>

@interface Entity
{
	int x,y, w,h;
}

- (id) newX:(int)xx Y:(int)yy;

- (int) x;
- (int) y;
- (int) w;
- (int) h;

- (id) moveLeft;
- (id) moveRight;
- (id) moveUp;
- (id) moveDown;

@end
