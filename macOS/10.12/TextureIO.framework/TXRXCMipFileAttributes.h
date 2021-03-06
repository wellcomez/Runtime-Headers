/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/Versions/A/TextureIO
 */

@interface TXRXCMipFileAttributes : TXRXCFileAttributes {
    unsigned long long  _face;
    unsigned long long  _level;
}

@property (nonatomic, readwrite) unsigned long long face;
@property (nonatomic, readwrite) unsigned long long level;

- (BOOL)doesSpecifyAllFaces;
- (unsigned long long)face;
- (id)init;
- (unsigned long long)level;
- (void)setFace:(unsigned long long)arg1;
- (void)setLevel:(unsigned long long)arg1;
- (void)specifyAllFaces;

@end
