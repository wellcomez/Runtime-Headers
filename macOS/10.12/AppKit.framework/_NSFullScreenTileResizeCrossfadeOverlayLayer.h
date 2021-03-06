/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSFullScreenTileResizeCrossfadeOverlayLayer : CALayer {
    BOOL  _active;
    BOOL  _includeBorder;
    unsigned long long  _parentSpaceID;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _tileFrame;
    unsigned long long  _tileID;
    _NSFullScreenTileResizeCrossfadeOverlayWindow * _window;
    CALayer * _windowContentLayer;
}

- (void)addWindowsWithIDs:(id)arg1;
- (void)dealloc;
- (id)initWithTileID:(unsigned long long)arg1 parentSpaceID:(unsigned long long)arg2 tileFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 includeBorder:(BOOL)arg4 window:(id)arg5;
- (void)resizeForTileFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tileFrame;
- (unsigned long long)tileID;

@end
