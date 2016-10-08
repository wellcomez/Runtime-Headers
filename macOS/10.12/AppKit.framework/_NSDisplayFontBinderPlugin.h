/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSDisplayFontBinderPlugin : _NSBinderPlugin <_NSDisplayFontBinderPlugin> {
    struct __displayFontBinderPluginFlags { 
        unsigned int _isFontInvalidationCapable : 1; 
        unsigned int _reservedDisplayFontBinderPlugin : 31; 
    }  _displayFontBinderPluginFlags;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (BOOL)isUsableWithObject:(id)arg1;

- (id)fontInvalidationCapableObjectForObject:(id)arg1;
- (id)initWithBinder:(id)arg1 object:(id)arg2;

@end