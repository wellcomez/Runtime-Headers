/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface SFBLEDevice : NSObject <NSSecureCoding> {
    NSData * _advertisementData;
    NSDictionary * _advertisementFields;
    NSData * _bluetoothAddress;
    NSUUID * _counterpartIdentifier;
    long long  _distance;
    NSUUID * _identifier;
    double  _lastSeen;
    NSString * _name;
    double  _pairCheckTime;
    BOOL  _paired;
    long long  _rssi;
    long long  _rssiCeiling;
    long long  _rssiFloor;
    BOOL  _rssiHistory;
    unsigned char  _rssiIndex;
    long long  _smoothedRSSI;
}

@property (nonatomic, readwrite, copy) NSData *advertisementData;
@property (nonatomic, readwrite, copy) NSDictionary *advertisementFields;
@property (nonatomic, readwrite, copy) NSData *bluetoothAddress;
@property (nonatomic, readwrite, copy) NSUUID *counterpartIdentifier;
@property (nonatomic, readwrite) long long distance;
@property (nonatomic, readwrite, copy) NSUUID *identifier;
@property (nonatomic, readwrite) double lastSeen;
@property (nonatomic, readwrite, copy) NSString *name;
@property (nonatomic, readwrite) double pairCheckTime;
@property (nonatomic, readwrite) BOOL paired;
@property (nonatomic, readonly) long long rssi;
@property (nonatomic, readonly) long long rssiCeiling;
@property (nonatomic, readonly) long long rssiFloor;
@property (nonatomic, readonly) long long smoothedRSSI;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)advertisementData;
- (id)advertisementFields;
- (id)bluetoothAddress;
- (id)counterpartIdentifier;
- (id)description;
- (long long)distance;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (double)lastSeen;
- (id)name;
- (double)pairCheckTime;
- (BOOL)paired;
- (long long)rssi;
- (long long)rssiCeiling;
- (long long)rssiFloor;
- (void)setAdvertisementData:(id)arg1;
- (void)setAdvertisementFields:(id)arg1;
- (void)setBluetoothAddress:(id)arg1;
- (void)setCounterpartIdentifier:(id)arg1;
- (void)setDistance:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastSeen:(double)arg1;
- (void)setName:(id)arg1;
- (void)setPairCheckTime:(double)arg1;
- (void)setPaired:(BOOL)arg1;
- (long long)smoothedRSSI;
- (BOOL)updateRSSI:(long long)arg1;

@end