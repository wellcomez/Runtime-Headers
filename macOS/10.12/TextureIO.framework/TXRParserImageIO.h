/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/Versions/A/TextureIO
 */

@interface TXRParserImageIO : TXRParserBase <TXRParser> {
    TXRImageInfo * _imageInfo;
    TXRTextureInfo * _textureInfo;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) TXRTextureInfo *textureInfo;

+ (id)decodeCGImage:(struct CGImage { }*)arg1 desiredPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (id)decodeCGImageNonIndexed:(struct CGImage { }*)arg1 desiredPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (int)determineColorSpaceClass:(struct CGImage { }*)arg1 displayGamut:(unsigned long long)arg2 options:(id)arg3;
+ (BOOL)exportImage:(id)arg1 url:(id)arg2 uttype:(struct __CFString { }*)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (BOOL)parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)parsedImageAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;
- (id)textureInfo;

@end
