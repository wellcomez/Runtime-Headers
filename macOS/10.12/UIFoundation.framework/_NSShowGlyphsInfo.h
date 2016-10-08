/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
 */

@interface _NSShowGlyphsInfo : NSObject {
    unsigned short * _glyphs;
    unsigned long long  _length;
    struct CGPoint { double x1; double x2; } * _positions;
}

+ (id)showGlyphsInfoWithGlyphs:(const unsigned short*)arg1 positions:(const struct CGPoint { double x1; double x2; }*)arg2 length:(unsigned long long)arg3;

- (void)dealloc;
- (const unsigned short*)glyphs;
- (id)initWithGlyphs:(const unsigned short*)arg1 positions:(const struct CGPoint { double x1; double x2; }*)arg2 length:(unsigned long long)arg3;
- (unsigned long long)length;
- (const struct CGPoint { double x1; double x2; }*)positions;

@end