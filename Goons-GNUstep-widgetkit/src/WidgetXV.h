//#import <GNUstep/GNUstep.h>

// Widget color or image visitor

#import "WidegtColor.h"
#import "WidgetImage.h"

@interface WidgetXV
{

	

}

- (id) new;

- (void) visitWidgetColor:(WidgetColor *)c;
- (void) visitWidgetImage:(WidgetImage *)i;


@end

