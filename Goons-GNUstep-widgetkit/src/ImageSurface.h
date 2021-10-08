#import "Widget.h"

@interface ImageSurface
{
}

- (id) new;

- (void) blit:(ImageSurface *)screen fromWidget:(Widget*)w;

@end

