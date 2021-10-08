#import "WidgetImage.h"

@implementation WidgetImage

- (id) new
{
	return self;
}

- (void) accept:(WidgetXV *)xv
{
	[xv visitWidgetImage:self];
}

@end
