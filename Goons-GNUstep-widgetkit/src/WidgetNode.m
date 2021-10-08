#import "WidgetNode.h"

@implementation WidgetNode

- (id) new
{
	return self;
}

- (void) addChildNode:(WidgetNode*)n
{
	[children addObject:n];	
}

@end
