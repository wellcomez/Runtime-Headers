/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSStackView : NSView {
    long long  _alignment;
    id  _delegate;
    struct NSEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    struct { 
        unsigned int _inDealloc : 1; 
        unsigned int _detachesHiddenViews : 1; 
        unsigned int _baselineRelativeArrangement : 1; 
        unsigned int _reserved : 29; 
    }  _flags;
    float  _horizontalClippingResistancePriority;
    float  _horizontalHuggingPriority;
    long long  _orientation;
    id  _private;
    double  _spacing;
    BOOL  _unused;
    id  _unused2;
    id  _unused3;
    float  _verticalClippingResistancePriority;
    float  _verticalHuggingPriority;
}

@property (atomic, readwrite) long long alignment;
@property (atomic, readonly, copy) NSArray *arrangedSubviews;
@property (getter=isBaselineRelativeArrangement, atomic, readwrite) BOOL baselineRelativeArrangement;
@property (atomic, readwrite) <NSStackViewDelegate> *delegate;
@property (atomic, readonly, copy) NSArray *detachedViews;
@property (atomic, readwrite) BOOL detachesHiddenViews;
@property (atomic, readwrite) long long distribution;
@property (atomic, readwrite) struct NSEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (atomic, readwrite) long long orientation;
@property (atomic, readwrite) double spacing;

+ (id)keyPathsForValuesAffectingAlignment;
+ (id)keyPathsForValuesAffectingArrangedSubviews;
+ (BOOL)requiresConstraintBasedLayout;
+ (id)stackViewWithViews:(id)arg1;

- (void)_addSubviewsAndPreserveAndPreserveAncestorConstraints:(id)arg1;
- (Class)_animatorClass;
- (id)_attachedViewsSortedByPriority;
- (void)_checkForDroppedViews;
- (void)_deferringDetachAndReattachNotifications:(id)arg1;
- (id)_delegate;
- (void)_detachViews:(id)arg1;
- (id)_detachedViewsSortedByPriority;
- (id)_detachedViewsSortedByPriorityWithoutUnaddableViews;
- (void)_didDetachViews:(id)arg1;
- (void)_didReattachViews:(id)arg1;
- (float)_earlyDecodingOrderPriority;
- (float)_effectiveStackingAxisHuggingPriority;
- (id)_explicitlySetUserInterfaceLayoutDirection;
- (void)_finishedMakingConnections;
- (BOOL)_firstAndLastViewsAreFlushToEdges;
- (double)_firstBaselineOffsetFromStackViewTopForView:(id)arg1;
- (id)_gravityContainerContainingView:(id)arg1;
- (long long)_gravityForContainer:(id)arg1;
- (BOOL)_hasActiveClippingOfLastView;
- (BOOL)_hasEffectiveGravityAreas;
- (BOOL)_ib_is19704021Fixed;
- (id)_idealSizeLayoutDimensionCreateIfNecessary;
- (void)_insertView:(id)arg1 atIndex:(unsigned long long)arg2 inGravity:(long long)arg3 animated:(BOOL)arg4;
- (void)_invalidateBaselines;
- (void)_invalidateCachedDetachedViews;
- (void)_invalidateCachedViews;
- (BOOL)_isVertical;
- (double)_lastBaselineOffsetFromStackViewBottomForView:(id)arg1;
- (BOOL)_needsSecondUpdateConstraintsPassForAutomaticDetaching;
- (void)_nsib_setShouldAddConstraints:(BOOL)arg1;
- (BOOL)_nsib_shouldAddConstraints;
- (void)_reattachViews:(id)arg1;
- (void)_removeView:(id)arg1 animated:(BOOL)arg2;
- (void)_removeView:(id)arg1 animated:(BOOL)arg2 removeFromViewHierarchy:(BOOL)arg3;
- (BOOL)_removesDetachedViewsFromSubviews;
- (void)_setCustomSpacing:(double)arg1 afterView:(id)arg2 animated:(BOOL)arg3;
- (void)_setEdgeInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg1 animated:(BOOL)arg2;
- (void)_setSpacing:(double)arg1 animated:(BOOL)arg2;
- (BOOL)_stackViewDecodedWantingFlatHierarchy;
- (BOOL)_stackViewFinishedDecoding;
- (void)_startObservingView:(id)arg1;
- (void)_stopObservingView:(id)arg1;
- (void)_subview:(id)arg1 valueOfVariable:(id)arg2 didChangeInEngine:(id)arg3;
- (id)_valueOfCustomSpacingAfterView:(id)arg1;
- (id)_valueOfVisibilityPriorityForView:(id)arg1;
- (BOOL)_viewsAreCentered;
- (void)_willDetachViews:(id)arg1;
- (void)_willReattachViews:(id)arg1;
- (void)addArrangedSubview:(id)arg1;
- (void)addView:(id)arg1 inGravity:(long long)arg2;
- (long long)alignment;
- (float)alignmentPriority;
- (id)arrangedSubviews;
- (id)attachedViews;
- (id)beginningViewsContainer;
- (id)bottomSpacer;
- (id)centerViewsManager;
- (float)clippingResistancePriorityForOrientation:(long long)arg1;
- (id)currentContainers;
- (id)currentSpacers;
- (double)customSpacingAfterView:(id)arg1;
- (void)dealloc;
- (id)declaredLayoutConstraints;
- (id)delegate;
- (id)detachedViews;
- (BOOL)detachesHiddenViews;
- (long long)distribution;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (double)effectiveSpacingAfterView:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endViewsContainer;
- (void)enumerateViewsIncludingDetached:(BOOL)arg1 usingBlock:(id)arg2;
- (double)firstBaselineOffsetFromTop;
- (BOOL)hasEqualSpacing;
- (float)huggingPriorityForOrientation:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)insertView:(id)arg1 atIndex:(unsigned long long)arg2 inGravity:(long long)arg3;
- (BOOL)isViewDetached:(id)arg1;
- (double)lastBaselineOffsetFromBottom;
- (id)leadingOrTopViewsManager;
- (id)leftSpacer;
- (id)middleViewsContainer;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)orientation;
- (long long)perpendicularAlignment;
- (void)removeArrangedSubview:(id)arg1;
- (void)removeView:(id)arg1;
- (void)replaceSubview:(id)arg1 with:(id)arg2;
- (id)rightSpacer;
- (long long)secondaryAlignment;
- (float)secondaryAlignmentPriority;
- (void)setAlignment:(long long)arg1;
- (void)setAlignmentPriority:(float)arg1;
- (void)setArrangedSubviews:(id)arg1;
- (void)setClippingResistancePriority:(float)arg1 forOrientation:(long long)arg2;
- (void)setCustomSpacing:(double)arg1 afterView:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDetachesHiddenViews:(BOOL)arg1;
- (void)setDistribution:(long long)arg1;
- (void)setEdgeInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHasEqualSpacing:(BOOL)arg1;
- (void)setHuggingPriority:(float)arg1 forOrientation:(long long)arg2;
- (void)setOrientation:(long long)arg1;
- (void)setPerpendicularAlignment:(long long)arg1;
- (void)setSecondaryAlignment:(long long)arg1;
- (void)setSecondaryAlignmentPriority:(float)arg1;
- (void)setSpacing:(double)arg1;
- (void)setTransverseAlignment:(long long)arg1;
- (void)setTransverseAlignmentPriority:(float)arg1;
- (void)setUserInterfaceLayoutDirection:(long long)arg1;
- (void)setViews:(id)arg1 inGravity:(long long)arg2;
- (void)setVisibilityPriority:(float)arg1 forView:(id)arg2;
- (double)spacing;
- (id)topSpacer;
- (id)trailingOrBottomViewsManager;
- (long long)transverseAlignment;
- (float)transverseAlignmentPriority;
- (void)updateConstraints;
- (id)views;
- (id)viewsInGravity:(long long)arg1;
- (float)visibilityPriorityForView:(id)arg1;
- (void)willRemoveSubview:(id)arg1;

// NSStackView (NSStackViewBaselineRelative)

- (BOOL)isBaselineRelativeArrangement;
- (void)setBaselineRelativeArrangement:(BOOL)arg1;

@end
