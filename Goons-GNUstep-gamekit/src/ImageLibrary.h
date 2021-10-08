#import <Foundation/Foundation.h>

#import "ImageSurface.h" // from Goons GNUstep widgetkit

@interface ImageLibrary
{
	NSArray *images;
	int index;
}

- (id) new;

- (void) addImage:(ImageSurface *)image;
- (id) get:(ImageSurface*)resultingImage;

@end
