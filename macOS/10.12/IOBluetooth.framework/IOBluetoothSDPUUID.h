/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
 */

@interface IOBluetoothSDPUUID : NSData {
    void * _mReserved;
    NSData * mUUIDData;
}

+ (id)uuid16:(unsigned short)arg1;
+ (id)uuid32:(unsigned int)arg1;
+ (id)uuidWithBytes:(const void*)arg1 length:(unsigned int)arg2;
+ (id)uuidWithData:(id)arg1;
+ (id)withSDPUUIDRef:(struct OpaqueIOBluetoothObjectRef { }*)arg1;

- (const void*)bytes;
- (Class)classForArchiver;
- (Class)classForCoder;
- (Class)classForPortCoder;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (struct OpaqueIOBluetoothObjectRef { }*)getSDPUUIDRef;
- (id)getUUIDWithLength:(unsigned int)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithUUID16:(unsigned short)arg1;
- (id)initWithUUID32:(unsigned int)arg1;
- (BOOL)isEqualToData:(id)arg1;
- (BOOL)isEqualToUUID:(id)arg1;
- (unsigned long long)length;

@end