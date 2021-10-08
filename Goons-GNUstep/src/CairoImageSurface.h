#import "ImageSurface.h"

@interface CairoImageSurface : ImageSurface
{

	Cairo_Surface *surf;

}

- (id) new;
- (id) getSurface;

- (void) blit:(ImageSurface *)screen fromWidget:(Widget*)w;

@end

