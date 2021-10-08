#import "WidgetColor.h"

@implementation WidgetColor

- (id) new
{
	return self;
}

- (void) set:(int)color
{
	rgba = color;
}

- (void) accept:(WidgetXV *)xv
{
	[xv visitWidgetColor:self];
}

@end
