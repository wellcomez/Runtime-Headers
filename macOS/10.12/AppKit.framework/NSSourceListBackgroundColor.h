/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSSourceListBackgroundColor : NSCatalogColor {
    NSColor * _activeColor;
    NSColor * _inactiveColor;
}

+ (id)activeColor;
+ (id)activeGradient;
+ (id)inactiveColor;
+ (id)inactiveGradient;

- (id)_currentDisplayColor;
- (BOOL)_isSourceListColor;
- (id)_legacyCurrentDisplayColor;
- (id)colorUsingColorSpace:(id)arg1;
- (id)colorUsingColorSpaceName:(id)arg1;
- (id)colorUsingColorSpaceName:(id)arg1 device:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithCatalogName:(id)arg1 colorName:(id)arg2 genericColor:(id)arg3;
- (BOOL)isUniform;
- (void)set;
- (void)setFill;
- (void)setStroke;

@end
