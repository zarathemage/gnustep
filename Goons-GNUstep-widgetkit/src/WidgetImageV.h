// visitor 
#import "WidgetXV.h"

@interface WidgetImageV : WidgetXV
{

}

- (id) new;

- (void) visitWidgetColor:(WidgetColor *)c;
- (void) visitWidgetImage:(WidgetImage *)i;

@end

