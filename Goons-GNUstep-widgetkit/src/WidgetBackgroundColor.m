#import "WidgetBacgroundkColor.h"

@implementation WidgetBackgroundColor : WidgetColor

- (id) new
{
	return self;
}

- (void) accept:(WidgetXV *)xv
{
	[xv visitWidgetColor:self];
}

@end
