/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSExceptionAlertController : NSWindowController {
    NSButton * _btnShowDetails;
    NSAttributedString * _exceptionMessage;
    NSView * _expandedView;
    NSLayoutConstraint * _heightCollapseConstraint;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousSize;
    BOOL  _showingDetails;
}

@property (atomic, readwrite, copy) NSAttributedString *exceptionMessage;
@property (atomic, readwrite) BOOL showingDetails;

- (void)btnClicked:(id)arg1;
- (void)btnShowDetailsClicked:(id)arg1;
- (void)dealloc;
- (id)exceptionMessage;
- (id)init;
- (long long)runModal;
- (void)setExceptionMessage:(id)arg1;
- (void)setShowingDetails:(BOOL)arg1;
- (BOOL)showingDetails;
- (void)windowDidLoad;
- (void)windowWillClose:(id)arg1;
- (struct CGSize { double x1; double x2; })windowWillResize:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2;

@end
