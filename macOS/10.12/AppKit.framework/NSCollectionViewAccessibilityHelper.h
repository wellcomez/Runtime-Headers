/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSCollectionViewAccessibilityHelper : NSAccessibilityElement {
    NSMutableArray * __sectionCache;
    unsigned long long  __sectionCacheOffset;
    NSArray * _accessibilityVisibleChildren;
    id  _layout;
    Class  _sectionAccessibilityClass;
}

@property (nonatomic, readonly) NSMutableArray *_sectionCache;
@property (nonatomic, readwrite) unsigned long long _sectionCacheOffset;
@property (nonatomic, readwrite, copy) NSArray *accessibilitySelectedCells;
@property (nonatomic, readonly, copy) NSArray *accessibilityVisibleChildren;
@property (nonatomic, readonly) NSCollectionView *collectionView;
@property (nonatomic, readwrite) NSCollectionViewLayout *layout;
@property (nonatomic, readwrite) Class sectionAccessibilityClass;

- (id)_dequeueSectionWithIndex:(unsigned long long)arg1;
- (void)_dumpVisibleChildren;
- (id)_sectionCache;
- (unsigned long long)_sectionCacheOffset;
- (void)_trimSectionCacheToVisibleSections:(id)arg1;
- (id)_visibleSections;
- (unsigned long long)accessibilityArrayAttributeCount:(id)arg1;
- (id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (id)accessibilityChildren;
- (long long)accessibilityColumnCount;
- (void)accessibilityDidEndScrolling;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)accessibilityIndexOfChild:(id)arg1;
- (void)accessibilityInvalidateLayout;
- (id)accessibilityParentForItem:(id)arg1;
- (id)accessibilityParentForView:(id)arg1;
- (void)accessibilityPrepareLayout;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (long long)accessibilityRowCount;
- (id)accessibilitySelectedChildren;
- (void)accessibilitySelectedChildrenDidChange;
- (id)accessibilitySubrole;
- (id)accessibilityVisibleChildren;
- (id)collectionView;
- (void)dealloc;
- (id)initWithLayout:(id)arg1;
- (id)layout;
- (id)nextSectionForSection:(id)arg1;
- (id)previousSectionForSection:(id)arg1;
- (Class)sectionAccessibilityClass;
- (void)setAccessibilitySelectedChildren:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setSectionAccessibilityClass:(Class)arg1;
- (void)set_sectionCacheOffset:(unsigned long long)arg1;

@end