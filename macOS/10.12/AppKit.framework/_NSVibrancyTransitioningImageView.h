/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSVibrancyTransitioningImageView : NSView {
    _NSImageViewWithConfigurableVibrancy * _currentImageView;
    <_NSVibrancyTransitioningImageViewDelegate> * _delegate;
    id  _imageViewConfigurationBlock;
    _NSImageViewWithConfigurableVibrancy * _nextImageView;
    long long  _numberOfAnimations;
}

@property (nonatomic, readwrite) <_NSVibrancyTransitioningImageViewDelegate> *delegate;
@property (nonatomic, readwrite, copy) id imageViewConfigurationBlock;

- (void).cxx_destruct;
- (id)_createImageView;
- (void)_installImageView:(id)arg1;
- (void)_performSnapshotCrossFadeWithFinalOpacity:(double)arg1 animationDuration:(double)arg2;
- (void)_setUpNextImageViewWithImage:(id)arg1 vibrancy:(BOOL)arg2;
- (void)_showNextImageViewWithFinalOpacity:(double)arg1;
- (void)_showNextImageViewWithFinalOpacity:(double)arg1 animationDuration:(double)arg2;
- (id)delegate;
- (id)imageViewConfigurationBlock;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 image:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1 withVibrancy:(BOOL)arg2 opacity:(double)arg3;
- (void)setImage:(id)arg1 withVibrancy:(BOOL)arg2 opacity:(double)arg3 animationDuration:(double)arg4;
- (void)setImageViewConfigurationBlock:(id)arg1;

@end