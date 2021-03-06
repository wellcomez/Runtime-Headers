/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
 */

@interface CAAnimationGroup : CAAnimation

@property (atomic, readwrite, copy) NSArray *animations;

// Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore

+ (id)CA_attributes;

- (void)CA_prepareRenderValue;
- (struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; struct __CFString {} *x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)_copyRenderAnimationForLayer:(id)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (id)animations;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (void)setAnimations:(id)arg1;
- (void)setDefaultDuration:(double)arg1;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

// CAAnimationGroup (NSInternal)

- (void)NS_addAffectedKeyPaths:(id)arg1;
- (void)NS_renameKeyPath:(id)arg1 toKeyPath:(id)arg2;
- (void)NS_renameKeyPathsUsingBlock:(id)arg1;
- (void)NS_takeImpliedValuesFromPresentationObject:(id)arg1 modelObject:(id)arg2;
- (void)NS_transformValuesAtKeyPath:(id)arg1 usingBlock:(id)arg2;

@end
