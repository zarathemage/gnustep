#import <Foundation/Foundation.h>

#import "CairoLoopObject.h"

@interface InventoryLoop : CairoLoopObject
{
}

- (id) new;

- (int) mainLoop;
- (int) loopOnce;

@end
