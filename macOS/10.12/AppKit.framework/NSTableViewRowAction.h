/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTableViewRowAction : NSObject <NSCopying> {
    NSColor * _backgroundColor;
    id  _handler;
    NSImage * _image;
    long long  _style;
    NSString * _title;
}

@property (atomic, readwrite, copy) NSColor *backgroundColor;
@property (getter=_handler, nonatomic, readonly) id handler;
@property (atomic, readwrite, retain) NSImage *image;
@property (atomic, readwrite) long long style;
@property (atomic, readwrite, copy) NSString *title;

+ (id)rowActionWithStyle:(long long)arg1 title:(id)arg2 handler:(id)arg3;

- (id)_handler;
- (id)_initWithStyle:(long long)arg1 title:(id)arg2 handler:(id)arg3;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)image;
- (void)setBackgroundColor:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)style;
- (id)title;

@end