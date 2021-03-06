/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSMagnifier : NSObject <NSWindowDelegate> {
    BOOL  _continuous;
    NSWindow * _magnifyingGlassWindow;
}

@property (atomic, readwrite) BOOL continuous;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)sharedMagnifier;

- (void)_createMagnifyingGlassWindow;
- (BOOL)continuous;
- (void)dealloc;
- (Class)magnifyingGlassContentViewClass;
- (void)setContinuous:(BOOL)arg1;
- (void)trackMagnifierWithDelegate:(id)arg1;

@end
