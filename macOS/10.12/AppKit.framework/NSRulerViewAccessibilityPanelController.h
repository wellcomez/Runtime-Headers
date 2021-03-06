/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSRulerViewAccessibilityPanelController : NSObject {
    NSWindow * _accessibilityPanel;
    NSPopUpButton * _markerTypeButton;
    NSRulerView * _rulerView;
    NSTextField * _valueField;
}

@property (setter=_setAccessibilityPanel:, atomic, readwrite, retain) NSWindow *_accessibilityPanel;

- (id)_accessibilityPanel;
- (void)_addMarker:(id)arg1;
- (void)_cancelAddMarker:(id)arg1;
- (id)_markerTypeButton;
- (void)_setAccessibilityPanel:(id)arg1;
- (id)_valueField;
- (void)dealloc;
- (id)initWithRulerView:(id)arg1;
- (void)set_accessibilityPanel:(id)arg1;

@end
