/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIOpacity : CIFilter {
    CIImage * inputImage;
    NSNumber * inputOpacity;
}

@property (nonatomic, readwrite, retain) CIImage *inputImage;
@property (nonatomic, readwrite, retain) NSNumber *inputOpacity;

+ (id)customAttributes;

- (id)inputImage;
- (id)inputOpacity;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputOpacity:(id)arg1;

@end