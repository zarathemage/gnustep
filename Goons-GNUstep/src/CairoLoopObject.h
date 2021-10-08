#import <Foundation/Foundation.h>

#import "LoopObject.h"

@interface CairoLoopObject : LoopObject 
{
}

- (id) new;

- (int) mainLoop;
- (int) loopOnce;

@end
