/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSCollectionViewCachedSectionInfo : NSObject {
    NSMutableIndexSet * _invalidIndexes;
    long long  _itemCount;
    NSBulkPointerArray * _pointerArray;
    id  _representedObject;
}

@property (atomic, readwrite) long long itemCount;
@property (atomic, readwrite, retain) id representedObject;

- (unsigned long long)actualItemCount;
- (void)dealloc;
- (id)debugDescription;
- (void)deleteItemsAtIndexes:(id)arg1;
- (id)description;
- (void)enumerateObjectsUsingBlock:(id)arg1;
- (void)fetchAllNeededRepresentedObjectsFromObjectBasedDataSource:(id)arg1 forCollectionView:(id)arg2;
- (id)init;
- (void)insertItemsAtIndexes:(id)arg1;
- (long long)itemCount;
- (void)moveItemFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (BOOL)needsToFetchAnyRepresentedObjects;
- (id)objectAtIndex:(long long)arg1;
- (void)reloadItemsAtIndexes:(id)arg1;
- (id)representedObject;
- (void)setItemCount:(long long)arg1;
- (void)setObject:(id)arg1 atIndex:(long long)arg2;
- (void)setRepresentedObject:(id)arg1;

@end
