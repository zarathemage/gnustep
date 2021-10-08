#import <Foundation/Foundation.h>

#import "CairoLoopObject.h"

@interface GameMainLoop : CairoLoopObject
{
}

- (id) new;

- (int) mainLoop;
- (int) loopOnce;

@end
