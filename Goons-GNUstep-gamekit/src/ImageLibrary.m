#import "ImageLibrary.h"

@implementation ImageLibrary

- (id) new
{
	images = [NSArray alloc];
	index = 0;

	return self;
}

- (void) addImage:(ImageSurface *)image
{
	[images addObject:image];
}

- (id) get:(ImageSurface*)resultingImage
{
	if (self.index >= [images count]) 
		index = 0;
	
	resultingImage = [images objectAtIndex:index++];
	return resultingImage;
}	

@end
