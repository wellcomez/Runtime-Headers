/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
 */

@interface MTLRenderPipelineColorAttachmentDescriptor : NSObject <NSCopying>

@property (nonatomic, readwrite) unsigned long long alphaBlendOperation;
@property (getter=isBlendingEnabled, nonatomic, readwrite) BOOL blendingEnabled;
@property (nonatomic, readwrite) unsigned long long destinationAlphaBlendFactor;
@property (nonatomic, readwrite) unsigned long long destinationRGBBlendFactor;
@property (nonatomic, readwrite) unsigned long long pixelFormat;
@property (nonatomic, readwrite) unsigned long long rgbBlendOperation;
@property (nonatomic, readwrite) unsigned long long sourceAlphaBlendFactor;
@property (nonatomic, readwrite) unsigned long long sourceRGBBlendFactor;
@property (nonatomic, readwrite) unsigned long long writeMask;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end