#import "CairoImageSurface.h"

@implmentation CairoImageSurface
{
- (id) new
{}

- (id) getSurface
{
	return self.surface;
}

- (void) blit:(ImageSurface *)screen fromWidget:(Widget*)w;
{
	// FIXME Cairo
	//[Cairo BlitSurface:self.surf on:[screen getSurface] with:[w x] and:[w y]];

}

@end

