#import <Foundation/NSArray.h>

#import "Widget.h"

@interface WidgetNode
{

	NSArray *children;

}

- (id) new;

- (void) addChildNode:(WidgetNode*)n;

@end

