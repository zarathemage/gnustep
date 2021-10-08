#import "ImageSurface.h"

@interface ImageWidgetDelegate
{
	ImageSurface *scr;
}

- (id) new:(ImageSurface*)screen;

- (void) blit;

@end

