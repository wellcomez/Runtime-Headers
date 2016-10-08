/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFUbiquityRecordsImporter : NSObject <NSManagedObjectContextFaultingDelegate, PFUbiquityBaselineRecoveryOperationDelegate, PFUbiquityBaselineRollOperationDelegate, PFUbiquityBaselineRollResponseOperationDelegate, _PFUbiquityRecordImportOperationDelegate> {
    bool  _allowBaselineRoll;
    bool  _importOnlyActiveStores;
    NSOperationQueue * _importQueue;
    bool  _isMonitoring;
    NSString * _localPeerID;
    NSObject<OS_dispatch_source> * _logRestartTimer;
    NSString * _modelVersionHash;
    unsigned long long  _numPendingNotifications;
    unsigned long long  _pendingImportOperationsCount;
    NSMutableDictionary * _pendingNotificationUserInfo;
    NSPersistentStoreCoordinator * _privatePSC;
    NSObject<OS_dispatch_queue> * _privateQueue;
    NSSQLCore * _privateStore;
    PFUbiquityRecordsImporterSchedulingContext * _schedulingContext;
    NSRecursiveLock * _schedulingLock;
    PFUbiquitySwitchboardCacheWrapper * _sideLoadCacheWrapper;
    NSString * _storeName;
    bool  _throttleNotifications;
    PFUbiquityLocation * _ubiquityRootLocation;
}

@property bool allowBaselineRoll;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool importOnlyActiveStores;
@property (readonly) NSOperationQueue *importQueue;
@property (readonly) bool isMonitoring;
@property (readonly) NSString *localPeerID;
@property NSObject<OS_dispatch_source> *logRestartTimer;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *privatePSC;
@property (nonatomic, readonly) NSPersistentStore *privateStore;
@property (nonatomic, readonly) PFUbiquityRecordsImporterSchedulingContext *schedulingContext;
@property (nonatomic, readonly) NSRecursiveLock *schedulingLock;
@property (nonatomic, retain) PFUbiquitySwitchboardCacheWrapper *sideLoadCacheWrapper;
@property (readonly) NSString *storeName;
@property (readonly) Class superclass;
@property bool throttleNotifications;
@property (nonatomic, retain) PFUbiquityLocation *ubiquityRootLocation;

+ (id)addPrivateStore:(id)arg1 toCoordinator:(id)arg2 atURL:(id)arg3 error:(id*)arg4;
+ (void)afterDelay:(double)arg1 executeBlockOnRootQueue:(id /* block */)arg2;
+ (bool)canProcessContentsOfUbiquityRootPath:(id)arg1;
+ (id)createPrivateCoordinatorAndStoreForStore:(id)arg1 atURL:(id)arg2 error:(id*)arg3;
+ (id)createPrivateCoordinatorForStore:(id)arg1 error:(id*)arg2;
+ (void)executeBlockOnRootQueue:(id /* block */)arg1;
+ (void)initialize;

- (bool)allowBaselineRoll;
- (void)baselineRollOperationEncounteredAnInconsistentBaselineState:(id)arg1;
- (void)baselineRollOperationWasUnableToLockPersistentStore:(id)arg1;
- (bool)batchDownloadTransactionLogsAtLocations:(id)arg1 error:(id*)arg2;
- (bool)canProcessTransactionLogWithScore:(id)arg1 afterLogWithScore:(id)arg2;
- (bool)checkSchedulingContextForMissingLocalPeerOperations:(id)arg1 error:(id*)arg2;
- (long long)compareScoreKnowledgeVector:(id)arg1 withScoreDictionary:(id)arg2;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (id)createNewSetOfObjectIDsForCoordinator:(id)arg1 fromObjectIDs:(id)arg2;
- (id)createSortedOperationsArrayWithMetadata:(id)arg1 isFirstImport:(bool)arg2;
- (void)dealloc;
- (id)description;
- (bool)discoverAndImportAllAvailableLogs:(bool)arg1 error:(id*)arg2;
- (void)executeBlockOnPrivateQueue:(id /* block */)arg1;
- (bool)importOnlyActiveStores;
- (id)importQueue;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
- (id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 storeName:(id)arg3 andPrivateStore:(id)arg4;
- (bool)isMonitoring;
- (bool)isPeerForked:(id)arg1 andLocalKV:(id)arg2;
- (id)localPeerID;
- (id)logRestartTimer;
- (void)metadataInconsistencyDetectedForStore:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationDidFinish:(id)arg1;
- (void)operationWasInterruptedDuringImport:(id)arg1;
- (void)postImportNotificationForStoreName:(id)arg1 andLocalPeerID:(id)arg2 withUserInfo:(id)arg3;
- (id)privatePSC;
- (id)privateStore;
- (void)recoveryOperation:(id)arg1 didReplaceLocalStoreFileWithBaseline:(id)arg2;
- (void)recoveryOperation:(id)arg1 encounteredAnError:(id)arg2 duringRecoveryOfBaseline:(id)arg3;
- (void)requestBaselineRollForStore:(id)arg1;
- (void)rollResponseOperation:(id)arg1 encounteredAnError:(id)arg2 whileTryingToAdoptBaseline:(id)arg3;
- (void)rollResponseOperation:(id)arg1 successfullyAdoptedBaseline:(id)arg2;
- (void)scheduleBaselineRecoveryOperationWithActiveBaselineOperation:(id)arg1;
- (void)scheduleBaselineRollResponseOperationForBaselineAtLocation:(id)arg1;
- (bool)schedulePendingLogs:(bool)arg1 error:(id*)arg2;
- (void)scheduleRecoveryTimer;
- (bool)scheduleTransactionLogOperations:(id)arg1 synchronous:(bool)arg2 error:(id*)arg3;
- (id)schedulingContext;
- (id)schedulingLock;
- (void)setAllowBaselineRoll:(bool)arg1;
- (void)setImportOnlyActiveStores:(bool)arg1;
- (void)setLogRestartTimer:(id)arg1;
- (void)setSideLoadCacheWrapper:(id)arg1;
- (void)setThrottleNotifications:(bool)arg1;
- (void)setUbiquityRootLocation:(id)arg1;
- (bool)shouldThrottleNotificationsWithOperation:(id)arg1;
- (id)sideLoadCacheWrapper;
- (bool)startMonitor:(id*)arg1;
- (id)storeName;
- (void)tearDown;
- (bool)throttleNotifications;
- (id)ubiquityRootLocation;

@end