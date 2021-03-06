/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
 */

@interface _MTLRenderPipelineState : NSObject <MTLRenderPipelineState> {
    <MTLDevice> * _device;
    NSString * _label;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) <MTLDevice> *device;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) NSString *label;
@property (atomic, readonly) Class superclass;

- (void)dealloc;
- (id)device;
- (id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2;
- (id)label;

@end
