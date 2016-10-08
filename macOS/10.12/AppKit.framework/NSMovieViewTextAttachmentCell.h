/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSMovieViewTextAttachmentCell : NSViewTextAttachmentCell {
    QTMovie * _movie;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

- (void)addView:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (struct CGSize { double x1; double x2; })cellSize;
- (void)dealloc;
- (id)initWithMovie:(id)arg1;
- (id)viewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;

@end