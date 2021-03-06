/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLStatus : NSObject {
    <CPLStatusDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _lock;
    NSMutableDictionary * _status;
    NSURL * _statusFileURL;
}

@property (nonatomic, readonly) NSDictionary *cloudAssetCountPerType;
@property (nonatomic, readonly) NSDate *cloudAssetCountPerTypeLastCheckDate;
@property (nonatomic) <CPLStatusDelegate> *delegate;
@property (nonatomic, copy) NSDate *exitDeleteTime;
@property (nonatomic) bool hasChangesToProcess;
@property (nonatomic) bool iCloudLibraryExists;
@property (nonatomic) bool iCloudLibraryHasBeenWiped;
@property (nonatomic, copy) NSDate *initialSyncDate;
@property (nonatomic) bool isExceedingQuota;
@property (nonatomic, copy) NSDate *lastCompletePrefetchDate;
@property (nonatomic, copy) NSDate *lastPruneDate;
@property (nonatomic, copy) NSDate *lastSuccessfulSyncDate;

+ (id)statusForSharedLibrary;

- (void).cxx_destruct;
- (void)_loadIfNecessary;
- (void)_save;
- (void)_statusDidChange;
- (id)cloudAssetCountPerType;
- (id)cloudAssetCountPerTypeLastCheckDate;
- (id)delegate;
- (id)exitDeleteTime;
- (bool)hasChangesToProcess;
- (bool)iCloudLibraryExists;
- (bool)iCloudLibraryHasBeenWiped;
- (id)initWithClientLibraryBaseURL:(id)arg1;
- (id)initialSyncDate;
- (bool)isExceedingQuota;
- (id)lastCompletePrefetchDate;
- (id)lastPruneDate;
- (id)lastSuccessfulSyncDate;
- (void)refetchFromDisk;
- (void)setCloudAssetCountPerType:(id)arg1 updateCheckDate:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setExitDeleteTime:(id)arg1;
- (void)setHasChangesToProcess:(bool)arg1;
- (void)setICloudLibraryExists:(bool)arg1;
- (void)setICloudLibraryHasBeenWiped:(bool)arg1;
- (void)setInitialSyncDate:(id)arg1;
- (void)setIsExceedingQuota:(bool)arg1;
- (void)setLastCompletePrefetchDate:(id)arg1;
- (void)setLastPruneDate:(id)arg1;
- (void)setLastSuccessfulSyncDate:(id)arg1;
- (id)statusDescription;

@end
