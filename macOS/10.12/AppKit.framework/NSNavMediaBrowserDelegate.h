/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSNavMediaBrowserDelegate : NSNavFileListDelegate {
    NSNavNode * _currentRootNode;
    NSNavNode * _mediaBrowserNode;
    ILMediaBrowserView * _mediaBrowserView;
}

@property (atomic, readwrite, retain) NSNavNode *mediaBrowserNode;
@property (atomic, readwrite, retain) ILMediaBrowserView *mediaBrowserView;

- (BOOL)_canShowFileAtURL:(id)arg1;
- (id)_selectedNodesIncludingDirectory:(BOOL)arg1;
- (void)configureForAllowsMultipleSelection:(BOOL)arg1;
- (id)currentDirectoryNode;
- (void)dealloc;
- (void)loadAndRestoreCurrentBrowsingNodePath:(id)arg1 selectedNodes:(id)arg2;
- (id)mediaBrowserNode;
- (id)mediaBrowserView;
- (id)mediaBrowserView:(id)arg1 attributedDisplayNameForMediaObject:(id)arg2;
- (BOOL)mediaBrowserView:(id)arg1 shouldPreviewDoubleClickedItem:(id)arg2;
- (BOOL)mediaBrowserView:(id)arg1 shouldSelectMediaObject:(id)arg2;
- (void)mediaBrowserViewSelectionDidChange:(id)arg1;
- (void)reloadChildrenForNode:(id)arg1;
- (void)reloadDisplayState;
- (id)selectedNodes;
- (id)selectedNodesIncludingDirectories;
- (void)setCurrentBrowsingNodePath:(id)arg1;
- (void)setCurrentDirectoryNode:(id)arg1;
- (void)setMediaBrowserNode:(id)arg1;
- (void)setMediaBrowserView:(id)arg1;
- (id)showNode:(id)arg1 inDirectory:(id)arg2 selectIfEnabled:(BOOL)arg3;
- (id)view;
- (id)visualRootNode;

@end
