/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSOutlineMockDisclosureTriangle : NSObject {
    NSTableColumn * _column;
    NSOutlineView * _outlineView;
    long long  _row;
}

- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityEnabledAttribute;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityIsParentAttributeSettable;
- (BOOL)accessibilityIsPositionAttributeSettable;
- (BOOL)accessibilityIsRoleAttributeSettable;
- (BOOL)accessibilityIsRoleDescriptionAttributeSettable;
- (BOOL)accessibilityIsSizeAttributeSettable;
- (BOOL)accessibilityIsTopLevelUIElementAttributeSettable;
- (BOOL)accessibilityIsValueAttributeSettable;
- (BOOL)accessibilityIsWindowAttributeSettable;
- (id)accessibilityParentAttribute;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityPositionAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityRoleDescriptionAttribute;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (id)accessibilitySizeAttribute;
- (id)accessibilityTopLevelUIElementAttribute;
- (id)accessibilityValueAttribute;
- (id)accessibilityWindowAttribute;
- (long long)column;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithRow:(long long)arg1 column:(long long)arg2 outlineView:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (long long)row;

@end