#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "RNNStore.h"

@protocol RNNModalManagerDelegate <NSObject>

- (void)dismissedModal:(UIViewController *)viewController;
- (void)dismissedMultipleModals:(NSArray *)viewControllers;

@end

@interface RNNModalManager : NSObject

@property (nonatomic, strong) UIViewController<RNNRootViewProtocol>* toVC;
@property (nonatomic, weak) id<RNNModalManagerDelegate> delegate;

- (void)showModal:(UIViewController*)viewController animated:(BOOL)animated completion:(RNNTransitionWithComponentIdCompletionBlock)completion;
- (void)dismissModal:(UIViewController *)viewController completion:(RNNTransitionCompletionBlock)completion;
- (void)dismissAllModals;

@end
