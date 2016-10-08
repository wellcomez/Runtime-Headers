/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/Versions/A/TextureIO
 */

@interface TXRDeferredImageInfo : NSObject {
    TXRImageInfo * _info;
    NSObject<OS_dispatch_semaphore> * _infoLoaded;
}

@property (nonatomic, readwrite, retain) TXRImageInfo *info;

- (void).cxx_destruct;
- (id)info;
- (id)init;
- (void)setInfo:(id)arg1;
- (void)signalLoaded;

@end