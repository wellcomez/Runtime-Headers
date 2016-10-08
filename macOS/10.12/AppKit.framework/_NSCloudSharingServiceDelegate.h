/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSCloudSharingServiceDelegate : NSObject <NSCloudSharingServiceDelegate> {
    id  completionHandler;
    id  parentWindowProvider;
    NSSharingService * service;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) BOOL preShareFailureMeansStopSharing;
@property (atomic, readonly) Class superclass;

- (void)dealloc;
- (id)initWithService:(id)arg1 parentWindowProvider:(id)arg2 completionHandler:(id)arg3;
- (BOOL)preShareFailureMeansStopSharing;
- (void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long*)arg3;
- (void)sharingService:(id)arg1 willShareItems:(id)arg2;

@end