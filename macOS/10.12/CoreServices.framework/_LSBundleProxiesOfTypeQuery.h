/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface _LSBundleProxiesOfTypeQuery : _LSQuery {
    BOOL  _legacySPI;
    unsigned long long  _type;
}

@property (nonatomic, readonly) BOOL legacySPI;
@property (nonatomic, readonly) unsigned long long type;

+ (id)queryWithType:(unsigned long long)arg1 legacySPI:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)arg1 block:(id)arg2;
- (BOOL)bundleUnitMeetsRequirements:(unsigned int)arg1 bundleData:(const struct LSBundleData { unsigned int x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned char x5; unsigned char x6; unsigned short x7; unsigned int x8; unsigned int x9; unsigned long long x10; unsigned long long x11; int x12; int x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned int x18[4]; unsigned long long x19; unsigned char x20[3]; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned long long x38; unsigned long long x39; unsigned int x40; unsigned int x41; unsigned long long x42; unsigned long long x43; unsigned long long x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; }*)arg2 context:(struct LSContext { struct LSDatabase {} *x1; }*)arg3 hiddenSystemAppIdentifiers:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)legacySPI;
- (unsigned long long)type;

@end