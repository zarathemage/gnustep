#import <Foundation/Foundation.h>

#import "Room.h"

#import "Enemy.h"
#import "Sprite.h"
#import "Bullet.h"

@interface Level : Room
{

	NSArray *enemies; 
	NSArray *sprites;
	NSArray *bullets; // friendly bullets

}

- (id) newX:(int)xx Y:(int)yy;

- (void) addEnemy:(Enemy*)en;
- (void) addSprite:(Sprite*)s;
- (void) addBullet:(Bullet*)bu;

- (int) collideEnemyWith:(Entity*)en;

@end
