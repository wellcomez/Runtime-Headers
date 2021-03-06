/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSRulerMarker : NSObject <NSCoding, NSCopying> {
    NSImage * _image;
    struct CGPoint { 
        double x; 
        double y; 
    }  _imageOrigin;
    double  _location;
    struct __rFlags { 
        unsigned int movable : 1; 
        unsigned int removable : 1; 
        unsigned int dragging : 1; 
        unsigned int pinned : 1; 
        unsigned int _reserved : 28; 
    }  _rFlags;
    id  _representedObject;
    NSRulerView * _ruler;
}

@property (getter=isDragging, atomic, readonly) BOOL dragging;
@property (atomic, readwrite, retain) NSImage *image;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } imageOrigin;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageRectInRuler;
@property (atomic, readwrite) double markerLocation;
@property (getter=isMovable, atomic, readwrite) BOOL movable;
@property (getter=isRemovable, atomic, readwrite) BOOL removable;
@property (atomic, readwrite, retain) <NSCopying> *representedObject;
@property (atomic, readonly) NSRulerView *ruler;
@property (atomic, readonly) double thicknessRequiredInRuler;

+ (id)_numericIndicatorCell;
+ (id)_numericIndicatorFormatter;
+ (void)initialize;

- (struct CGPoint { double x1; double x2; })_compositePointInRuler;
- (double)_locationOfOriginPoint:(double)arg1;
- (struct CGPoint { double x1; double x2; })_originPointInRuler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (struct CGPoint { double x1; double x2; })imageOrigin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectInRuler;
- (id)initWithCoder:(id)arg1;
- (id)initWithRulerView:(id)arg1 markerLocation:(double)arg2 image:(id)arg3 imageOrigin:(struct CGPoint { double x1; double x2; })arg4;
- (BOOL)isDragging;
- (BOOL)isMovable;
- (BOOL)isRemovable;
- (double)markerLocation;
- (id)representedObject;
- (id)ruler;
- (void)setImage:(id)arg1;
- (void)setImageOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMarkerLocation:(double)arg1;
- (void)setMovable:(BOOL)arg1;
- (void)setRemovable:(BOOL)arg1;
- (void)setRepresentedObject:(id)arg1;
- (double)thicknessRequiredInRuler;
- (BOOL)trackMouse:(id)arg1 adding:(BOOL)arg2;

// NSRulerMarker (NSTextExtensions)

+ (void)_tabStopContextMenuAction:(id)arg1;
+ (id)centerTabMarkerWithRulerView:(id)arg1 location:(double)arg2;
+ (id)decimalTabMarkerWithRulerView:(id)arg1 location:(double)arg2;
+ (id)firstIndentMarkerWithRulerView:(id)arg1 location:(double)arg2;
+ (id)leftIndentMarkerWithRulerView:(id)arg1 location:(double)arg2;
+ (id)leftMarginMarkerWithRulerView:(id)arg1 location:(double)arg2;
+ (id)leftTabMarkerWithRulerView:(id)arg1 location:(double)arg2;
+ (id)rightIndentMarkerWithRulerView:(id)arg1 location:(double)arg2;
+ (id)rightMarginMarkerWithRulerView:(id)arg1 location:(double)arg2;
+ (id)rightTabMarkerWithRulerView:(id)arg1 location:(double)arg2;
+ (id)tabStopContextMenuForMarker:(id)arg1 withCompletionHandler:(id)arg2;

@end
