/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTreeControllerTreeNode : NSTreeNode {
    struct __NSTreeControllerTreeNodeFlags { 
        unsigned int _observingIsSetup : 1; 
        unsigned int _isUpdatingChildNodes : 1; 
        unsigned int _observingRepresentedObjectChildren : 1; 
        unsigned int reserved : 29; 
    }  _NSTreeControllerTreeNodeFlags;
    NSString * _childrenKeyPath;
    NSString * _countKeyPath;
    NSString * _leafKeyPath;
    NSTreeController * _treeController;
}

- (void)_configureObservingForChildNodesWithOption:(unsigned long long)arg1;
- (void)_configureObservingWithOption:(unsigned long long)arg1;
- (void)_detachFromParent;
- (long long)_leafState;
- (void)_removeSubNodesAtIndexes:(id)arg1;
- (void)_setupObserving;
- (void)_tearDownObserving;
- (id)childrenKeyPath;
- (id)countKeyPath;
- (unsigned long long)countOfSubNodes;
- (void)dealloc;
- (id)initWithRepresentedObject:(id)arg1 treeController:(id)arg2;
- (void)insertObject:(id)arg1 inSubNodesAtIndex:(unsigned long long)arg2;
- (BOOL)isLeaf;
- (id)leafKeyPath;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeObjectFromSubNodesAtIndex:(unsigned long long)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)updateChildNodesForKeyPath:(id)arg1 affectedIndexPaths:(id)arg2;
- (void)willAccessChildNodes;

@end
