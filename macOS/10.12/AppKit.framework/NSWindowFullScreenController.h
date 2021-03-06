/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSWindowFullScreenController : NSObject {
    _NSWindowFullScreenTransition * _fullScreenTransition;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _savedFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _savedScreenFrame;
    long long  _savedScreenNumber;
    NSString * _stringWithSavedFrame;
    BOOL  _toolbarWasHidden;
    struct CGSize { 
        double width; 
        double height; 
    }  _userTilePreferredSize;
}

@property (atomic, readonly) _NSWindowFullScreenTransition *fullScreenTransition;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } savedFrame;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } savedScreenFrame;
@property (atomic, readwrite) long long savedScreenNumber;
@property (atomic, readwrite, copy) NSString *stringWithSavedFrame;
@property (atomic, readwrite) BOOL toolbarWasHidden;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } userTilePreferredSize;

- (void)dealloc;
- (id)fullScreenTransition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })savedFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })savedScreenFrame;
- (long long)savedScreenNumber;
- (void)setSavedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSavedScreenFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSavedScreenNumber:(long long)arg1;
- (void)setStringWithSavedFrame:(id)arg1;
- (void)setToolbarWasHidden:(BOOL)arg1;
- (void)setUserTilePreferredSize:(struct CGSize { double x1; double x2; })arg1;
- (id)stringWithSavedFrame;
- (BOOL)toolbarWasHidden;
- (struct CGSize { double x1; double x2; })userTilePreferredSize;

@end
