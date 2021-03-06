/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
 */

@interface IOBluetoothLocalSDPServiceRecord : IOBluetoothSDPServiceRecord {
    NSMutableSet * mAllowedDevices;
    IOBluetoothUserNotification * mIncomingChannelNotification;
    NSDictionary * mLocalAttributeDictionary;
    NSMutableSet * mRestrictedDevices;
    NSDictionary * mServerAttributeDictionary;
}

+ (void)initialize;
+ (id)withServerAttributeDictionary:(id)arg1 localAttributeDictionary:(id)arg2;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)getLocalAttribute:(id)arg1;
- (id)getLocalAttributeDictionary;
- (id)getNameOfService;
- (id)getServerAttributeDictionary;
- (void)incomingL2CAPChannel:(id)arg1 channel:(id)arg2;
- (void)incomingRFCOMMChannel:(id)arg1 channel:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerAttributeDictionary:(id)arg1 localAttributeDictionary:(id)arg2;
- (BOOL)isPersistent;
- (void)launchApp:(id)arg1 objectID:(unsigned long long)arg2;
- (BOOL)registerForIncomingChannelNotifications;
- (BOOL)shouldVendServiceForUser:(int)arg1;
- (BOOL)uniqueClientPerDevice;
- (BOOL)uniqueClientPerService;
- (BOOL)unregisterForIncomingChannelNotifications;

@end
