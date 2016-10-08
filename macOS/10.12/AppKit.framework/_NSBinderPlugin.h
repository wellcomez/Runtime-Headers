/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSBinderPlugin : NSObject <_NSBinderPlugin> {
    id  _binder;
    struct __binderPluginFlags { 
        unsigned int _isTableColumnPlugin : 1; 
        unsigned int _isOutlineColumnPlugin : 1; 
        unsigned int _isCellPlugin : 1; 
        unsigned int _reservedBinderPlugin : 29; 
    }  _binderPluginFlags;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (id)_deprecatedBindings;
+ (BOOL)isUsableWithObject:(id)arg1;
+ (id)objectMechanismsRequiredForObject:(id)arg1;

- (BOOL)acceptsMarker:(id)arg1 binding:(id)arg2 overrideWithPlaceholderIfDefined:(BOOL*)arg3;
- (id)cellOrControlForObject:(id)arg1;
- (void)connectionWasBroken:(id)arg1;
- (void)connectionWasEstablished:(id)arg1;
- (Class)defaultPlaceholderLookupClassForBinding:(id)arg1 object:(id)arg2;
- (id)editorWithObject:(id)arg1;
- (BOOL)handleObservingRefresh:(id)arg1;
- (id)indexPathForOutlineView:(id)arg1 row:(long long)arg2;
- (id)initWithBinder:(id)arg1 object:(id)arg2;
- (BOOL)isEditingAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (BOOL)isEditingAtIndexPath:(id)arg1 withObject:(id)arg2;
- (BOOL)isEditingWithObject:(id)arg1;
- (BOOL)isInvalidationCapableObject:(id)arg1 withSelector:(SEL)arg2;
- (BOOL)needsAction;
- (id)objectMechanismsRequired;
- (BOOL)observeKeyPathForBindingInfo:(id)arg1 registerOrUnregister:(BOOL)arg2 object:(id)arg3;
- (BOOL)shouldUseInvalidationForObject:(id)arg1;
- (id)viewForObject:(id)arg1;

@end