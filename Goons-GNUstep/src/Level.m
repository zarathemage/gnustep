#import "Level.h"

@implementation Level

- (id) newX:(int)xx Y:(int)yy
{
	self = [super newX:xx Y:yy];

	enemies = [NSArray alloc];
	sprites = [NSArray alloc];
	bullets = [NSArray alloc];

	return self;
}

- (void) addEnemy:(Enemy*)en
{
	[enemies addObject:en];
}

- (void) addSprite:(Sprite*)s
{
	[sprites addObject:s];
}

- (void) addBullet:(Bullet*)bu
{
	[bullets addObject:s];
}

- (int) collideEnemyWith:(Entity*)en
{
	// FIXME iterate through list and 	
}

@end
