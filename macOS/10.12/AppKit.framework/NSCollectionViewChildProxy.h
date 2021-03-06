/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSCollectionViewChildProxy : NSAccessibilityProxy {
    NSCollectionView * _collectionView;
    unsigned long long  _index;
    NSCollectionViewItem * _item;
    NSView * _realElement;
}

+ (id)proxyForItemAtIndex:(unsigned long long)arg1 collectionView:(id)arg2;

- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (BOOL)accessibilityIsParentAttributeSettable;
- (BOOL)accessibilityIsPositionAttributeSettable;
- (BOOL)accessibilityIsSizeAttributeSettable;
- (BOOL)accessibilityIsWindowAttributeSettable;
- (id)accessibilityParentAttribute;
- (id)accessibilityPositionAttribute;
- (id)accessibilitySizeAttribute;
- (id)accessibilityWindowAttribute;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithIndex:(unsigned long long)arg1 collectionView:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)item;
- (id)realElement;

@end
