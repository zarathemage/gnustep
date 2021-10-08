// visitor 
#import "WidgetXV.h"

@interface WidgetColorV : WidgetXV
{

}

- (id) new;

- (void) visitWidgetColor:(WidgetColor *)c;
- (void) visitWidgetImage:(WidgetImage *)i;


@end

