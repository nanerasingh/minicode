
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NavigatedViewController : UIViewController
{
	@private
	BOOL navigatingBack;
	UIViewController* backQueueViewController;
}

- (BOOL)shouldNavigateBackward;
- (void)willNavigateBackwardTo:(UIViewController*)viewController;
- (void)didNavigateBackwardTo:(UIViewController*)viewController;
- (void)willNavigateForwardTo:(UIViewController*)viewController;
- (void)willReturnFrom:(UIViewController*)viewController;

@property (nonatomic, assign) UIViewController* backQueueViewController;

@end