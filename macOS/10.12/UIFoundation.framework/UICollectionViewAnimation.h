/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
 */

@interface UICollectionViewAnimation : NSObject {
    id  _animationBlock;
    struct { 
        unsigned int animateFromCurrentPosition : 1; 
        unsigned int deleteAterAnimation : 1; 
        unsigned int rasterizeAfterAnimation : 1; 
        unsigned int resetRasterizationAfterAnimation : 1; 
    }  _collectionViewAnimationFlags;
    NSMutableArray * _completionHandlers;
    double  _endFraction;
    NSCollectionViewLayoutAttributes * _finalLayoutAttributes;
    <_NSCollectionViewItem> * _item;
    double  _startFraction;
    NSMutableArray * _startupHandlers;
    NSView * _view;
    int  _viewType;
}

@property (nonatomic, readonly) BOOL animateFromCurrentPosition;
@property (nonatomic, readonly) BOOL deleteAfterAnimation;
@property (nonatomic, readonly) double endFraction;
@property (nonatomic, readonly) NSCollectionViewLayoutAttributes *finalLayoutAttributes;
@property (nonatomic, readonly) <_NSCollectionViewItem> *item;
@property (nonatomic, readwrite) BOOL rasterizeAfterAnimation;
@property (nonatomic, readwrite) BOOL resetRasterizationAfterAnimation;
@property (nonatomic, readonly) double startFraction;
@property (nonatomic, readonly) NSView *view;
@property (nonatomic, readonly) int viewType;

- (void)addCompletionHandler:(id)arg1;
- (void)addStartupHandler:(id)arg1;
- (BOOL)animateFromCurrentPosition;
- (void)dealloc;
- (BOOL)deleteAfterAnimation;
- (id)description;
- (double)endFraction;
- (id)finalLayoutAttributes;
- (id)initWithView:(id)arg1 viewType:(int)arg2 finalLayoutAttributes:(id)arg3 startFraction:(double)arg4 endFraction:(double)arg5 animateFromCurrentPostion:(BOOL)arg6 deleteAfterAnimation:(BOOL)arg7 customAnimations:(id)arg8;
- (id)item;
- (BOOL)rasterizeAfterAnimation;
- (BOOL)resetRasterizationAfterAnimation;
- (void)setRasterizeAfterAnimation:(BOOL)arg1;
- (void)setResetRasterizationAfterAnimation:(BOOL)arg1;
- (void)start;
- (double)startFraction;
- (id)view;
- (int)viewType;

@end
