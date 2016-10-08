/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
 */

@interface CoreWiFiAppleGeneralIE : CoreWiFiIE {
    NSNumber * AppleProductID;
    NSString * AppleProductName;
    BOOL  hasFoundRemotePPPoEServer;
    BOOL  hasInterferenceRobustness;
    BOOL  hasLegacyWDS;
    BOOL  hasRestoreProfiles;
    BOOL  isGuestNetwork;
    BOOL  isSAWCapable;
    BOOL  isUnconfigured;
    BOOL  isWPSActive;
    BOOL  isWPSCapable;
    BOOL  isWoWCapable;
    long long  version;
}

@property (nonatomic, readwrite, retain) NSNumber *AppleProductID;
@property (nonatomic, readwrite, retain) NSString *AppleProductName;
@property (nonatomic, readwrite) BOOL hasFoundRemotePPPoEServer;
@property (nonatomic, readwrite) BOOL hasInterferenceRobustness;
@property (nonatomic, readwrite) BOOL hasLegacyWDS;
@property (nonatomic, readwrite) BOOL hasRestoreProfiles;
@property (nonatomic, readwrite) BOOL isGuestNetwork;
@property (nonatomic, readwrite) BOOL isSAWCapable;
@property (nonatomic, readwrite) BOOL isUnconfigured;
@property (nonatomic, readwrite) BOOL isWPSActive;
@property (nonatomic, readwrite) BOOL isWPSCapable;
@property (nonatomic, readwrite) BOOL isWoWCapable;
@property (nonatomic, readwrite) long long version;

+ (id)stringValueForProductID:(unsigned char)arg1;

- (id)AppleProductID;
- (id)AppleProductName;
- (void)dealloc;
- (id)description;
- (BOOL)generateIE:(id*)arg1;
- (BOOL)hasFoundRemotePPPoEServer;
- (BOOL)hasInterferenceRobustness;
- (BOOL)hasLegacyWDS;
- (BOOL)hasRestoreProfiles;
- (id)init;
- (id)initWithIE:(id)arg1;
- (BOOL)isGuestNetwork;
- (BOOL)isSAWCapable;
- (BOOL)isUnconfigured;
- (BOOL)isWPSActive;
- (BOOL)isWPSCapable;
- (BOOL)isWoWCapable;
- (BOOL)parseIE:(id*)arg1;
- (void)setAppleProductID:(id)arg1;
- (void)setAppleProductName:(id)arg1;
- (void)setHasFoundRemotePPPoEServer:(BOOL)arg1;
- (void)setHasInterferenceRobustness:(BOOL)arg1;
- (void)setHasLegacyWDS:(BOOL)arg1;
- (void)setHasRestoreProfiles:(BOOL)arg1;
- (void)setIsGuestNetwork:(BOOL)arg1;
- (void)setIsSAWCapable:(BOOL)arg1;
- (void)setIsUnconfigured:(BOOL)arg1;
- (void)setIsWPSActive:(BOOL)arg1;
- (void)setIsWPSCapable:(BOOL)arg1;
- (void)setIsWoWCapable:(BOOL)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;

@end