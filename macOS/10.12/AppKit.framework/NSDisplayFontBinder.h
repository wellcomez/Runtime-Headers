/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSDisplayFontBinder : NSBinder {
    NSFont * _originalFont;
}

+ (id)_pluginProtocol;
+ (id)bindingCategory;
+ (id)bindingsForObject:(id)arg1;
+ (id)objectMechanismsRequiredForObject:(id)arg1;

- (id)_adjustFontOfObject:(id)arg1 mode:(/* Warning: unhandled struct encoding: '{__NSKeyValueCodingControllerModeType=qQ@}' */ struct __NSKeyValueCodingControllerModeType { long long x1; unsigned long long x2; id x3; })arg2 triggerRedisplay:(BOOL)arg3 compareDirectly:(BOOL)arg4 toFont:(id)arg5;
- (id)_availableBindingsWithFontBindingsFiltered:(id)arg1;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (void)_connectionWasEstablished;
- (void)_dealloc;
- (id)_fontFromBindingsWithMode:(/* Warning: unhandled struct encoding: '{__NSKeyValueCodingControllerModeType=qQ@}' */ struct __NSKeyValueCodingControllerModeType { long long x1; unsigned long long x2; id x3; })arg1 referenceFont:(id)arg2 fallbackFont:(id)arg3;
- (void)_init;
- (BOOL)_isAnyFontBindingBoundToController:(id)arg1;
- (BOOL)_isBooleanBinding:(id)arg1;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3;
- (id)_valueForBindingWithResolve:(id)arg1 mode:(/* Warning: unhandled struct encoding: '{__NSKeyValueCodingControllerModeType=qQ@}' */ struct __NSKeyValueCodingControllerModeType { long long x1; unsigned long long x2; id x3; })arg2;
- (id)availableBindings;
- (BOOL)isBindingReadOnly:(id)arg1;
- (id)updateInvalidatedFont:(id)arg1 forObject:(id)arg2;
- (void)updateOutlineColumnDataCell:(id)arg1 forDisplayAtIndexPath:(id)arg2;
- (void)updateTableColumnDataCell:(id)arg1 forDisplayAtIndex:(unsigned long long)arg2;
- (Class)valueClassForBinding:(id)arg1;

@end