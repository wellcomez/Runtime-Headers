/* Generated by RuntimeBrowser.
 */

@protocol HDHealthDataManager <NSObject>

@required

- (void)addObserver:(id <HDDataObserver>)arg1 forDataType:(HKObjectType *)arg2;
- (void)addObserver:(id <HDDataObserver>)arg1 forDataType:(HKObjectType *)arg2 sourceBundleIdentifier:(NSString *)arg3;
- (void)addObserverForAllTypes:(id <HDDataObserver>)arg1;
- (void)closeObserverTransaction;
- (bool)containsDataObject:(HKObject *)arg1;
- (bool)deleteDataObjects:(void *)arg1 restrictedSourceEntity:(void *)arg2 failIfNotFound:(void *)arg3 recursiveDeleteAuthorizationBlock:(void *)arg4 error:(void *)arg5; // needs 5 arg types, found 11: NSArray *, HDSourceEntity *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSSet *, NSSet *, void*, id*
- (bool)deleteDataObjectsOfClass:(void *)arg1 predicate:(void *)arg2 limit:(void *)arg3 deletedSampleCount:(void *)arg4 notifyObservers:(void *)arg5 generateDeletedObjects:(void *)arg6 recursiveDeleteAuthorizationBlock:(void *)arg7 error:(void *)arg8; // needs 8 arg types, found 14: Class, HDSQLitePredicate *, unsigned long long, unsigned long long*, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSSet *, NSSet *, void*, id*
- (bool)deleteSamplesWithSourceIdentifier:(NSNumber *)arg1 error:(id*)arg2;
- (bool)deleteSamplesWithTypes:(void *)arg1 sourceID:(void *)arg2 recursiveDeleteAuthorizationBlock:(void *)arg3 error:(void *)arg4; // needs 4 arg types, found 10: NSSet *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSSet *, NSSet *, void*, id*
- (bool)deleteSamplesWithUUIDs:(NSArray *)arg1 generateDeletedObjects:(bool)arg2 database:(HDSQLiteDatabase *)arg3 error:(id*)arg4;
- (bool)deleteSamplesWithUUIDs:(void *)arg1 recursiveDeleteAuthorizationBlock:(void *)arg2 error:(void *)arg3; // needs 3 arg types, found 9: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSSet *, NSSet *, void*, id*
- (bool)insertDataObjects:(NSArray *)arg1 sourceEntity:(HDSourceEntity *)arg2 deviceEntity:(HDDeviceEntity *)arg3 sourceVersion:(NSString *)arg4 creationDate:(double)arg5 error:(id*)arg6;
- (bool)insertDataObjects:(NSArray *)arg1 withProvenance:(HDDataOriginProvenance *)arg2 creationDate:(double)arg3 error:(id*)arg4;
- (bool)insertDataObjects:(NSArray *)arg1 withProvenance:(HDDataOriginProvenance *)arg2 creationDate:(double)arg3 skipInsertionFilter:(bool)arg4 error:(id*)arg5;
- (void)openObserverTransaction;
- (void)removeObserver:(id <HDDataObserver>)arg1 forDataType:(HKObjectType *)arg2;
- (void)removeObserver:(id <HDDataObserver>)arg1 forDataType:(HKObjectType *)arg2 sourceBundleIdentifier:(NSString *)arg3;
- (void)removeObserverForAllTypes:(id <HDDataObserver>)arg1;
- (void)setBackgroundObserverFrequency:(void *)arg1 forDataType:(void *)arg2 frequency:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: HDClient *, HKObjectType *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)shouldNotifyForDataObjects:(NSArray *)arg1 provenance:(HDDataOriginProvenance *)arg2 database:(HDSQLiteDatabase *)arg3 anchor:(NSNumber *)arg4;
- (void)shouldNotifyForDeletedSamplesOfTypes:(NSArray *)arg1 database:(HDSQLiteDatabase *)arg2 anchor:(NSNumber *)arg3;

@end