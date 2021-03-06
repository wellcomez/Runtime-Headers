/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
 */

@interface VaryHeaderSupportTaskDelegate : NSObject <NSURLSessionTaskDelegate> {
    NSURLSessionTaskMetrics * _metrics;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, retain) NSURLSessionTaskMetrics *metrics;
@property (atomic, readonly) Class superclass;

- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)dealloc;
- (id)metrics;
- (void)setMetrics:(id)arg1;

@end
