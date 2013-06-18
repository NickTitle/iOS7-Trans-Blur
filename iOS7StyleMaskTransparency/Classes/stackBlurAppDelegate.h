#import <UIKit/UIKit.h>

@class NickTitleStackBlurVC;

@interface stackBlurAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    NickTitleStackBlurVC *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet NickTitleStackBlurVC *viewController;

@end

