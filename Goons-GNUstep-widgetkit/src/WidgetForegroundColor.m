#import "WidgetForegroundColor.h"

@implementation WidgetForegroundColor

- (id) new
{
	return self;
}

- (void) accept:(WidgetXV *)xv
{
	[xv visitWidgetColor:self];
}

@end
