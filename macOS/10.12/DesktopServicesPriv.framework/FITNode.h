/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DesktopServicesPriv.framework/Versions/A/DesktopServicesPriv
 */

@interface FITNode : FINode {
    void * _node;
}

- (void*)asTNode;
- (struct TNode { int x1; struct TNode {} *x2; struct TRef<TFSVolumeInfo *, TInternalRefCountPolicy<TFSVolumeInfo> > { struct TFSVolumeInfo {} *x_3_1_1; } x3; struct TRef<TFSInfo *, TInternalRefCountPolicy<TFSInfo> > { struct TFSInfo {} *x_4_1_1; } x4; struct TChildrenList {} *x5; struct TNodePtr { struct TNode {} *x_6_1_1; } x6; void *x7; struct TNotifierList {} *x8; struct TRef<TOperationLock *, TInternalRefCountPolicy<TOperationLock> > { struct TOperationLock {} *x_9_1_1; } x9; unsigned char x10; bool x11; bool x12; bool x13; bool x14; }*)asTNodeObject;
- (void)dealloc;
- (void)deleteTNode;
- (id)description;
- (oneway void)release;
- (oneway void)releaseUnderMonitor;

@end
