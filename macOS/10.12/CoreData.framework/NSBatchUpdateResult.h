/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSBatchUpdateResult : NSPersistentStoreResult {
    id  _aggregatedResult;
    unsigned long long  _resultType;
}

@property (atomic, readonly) id result;
@property (atomic, readonly) unsigned long long resultType;

- (void)dealloc;
- (id)initWithResult:(id)arg1 type:(unsigned long long)arg2;
- (id)result;
- (unsigned long long)resultType;

@end