/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
 */

@interface _MTLCommandBuffer : NSObject {
    BOOL  _StatEnabled;
    unsigned long long  _StatLocations;
    unsigned long long  _StatOptions;
    unsigned long long  _commitTime;
    bool  _completedCallbacksDone;
    struct MTLDispatch { struct MTLDispatch {} *x1; id x2; } * _completedDispatchList;
    struct MTLDispatch { struct MTLDispatch {} *x1; id x2; } * _completedDispatchListTail;
    unsigned long long  _completionHandlerEnqueueTime;
    unsigned long long  _completionHandlerExecutionTime;
    unsigned long long  _completionInterruptTime;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _cond;
    unsigned long long  _creationTime;
    <MTLCommandEncoder> * _currentCommandEncoder;
    struct MTLStatSampleRec { void *x1; unsigned long long x2; unsigned long long x3[0]; } * _currentSample;
    unsigned long long  _enqueueTime;
    NSError * _error;
    unsigned long long  _globalTraceObjectID;
    unsigned long long  _gpuEndTime;
    unsigned long long  _gpuStartTime;
    unsigned long long  _kernelEndTime;
    unsigned long long  _kernelStartTime;
    NSString * _label;
    unsigned long long  _labelTraceID;
    unsigned long long  _listIndex;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _mutex;
    unsigned long long  _numEncoders;
    unsigned long long  _numInternalSampleCounters;
    unsigned long long  _numRequestedCounters;
    unsigned long long  _numThisCommandBuffer;
    id  _perfSampleHandlerBlock;
    bool  _profilingEnabled;
    NSDictionary * _profilingResults;
    _MTLCommandQueue<MTLCommandQueue> * _queue;
    BOOL  _retainedReferences;
    int  _sampleLock;
    NSMutableArray * _sampleStorage;
    struct MTLStatSampleRec { void *x1; unsigned long long x2; unsigned long long x3[0]; } * _samples;
    unsigned long long  _samplesPerStorageBlock;
    bool  _scheduledCallbacksDone;
    struct MTLDispatch { struct MTLDispatch {} *x1; id x2; } * _scheduledDispatchList;
    struct MTLDispatch { struct MTLDispatch {} *x1; id x2; } * _scheduledDispatchListTail;
    bool  _skipRender;
    _MTLCommandBuffer<MTLCommandBuffer> * _statCommandBuffer;
    unsigned long long  _status;
    BOOL  _strongObjectReferences;
    unsigned long long  _submitToHardwareTime;
    unsigned long long  _submitToKernelTime;
    BOOL  _synchronousDebugMode;
    unsigned long long  _totalNumStatSamples;
    NSMutableDictionary * _userDictionary;
}

@property (nonatomic, readonly) double GPUEndTime;
@property (nonatomic, readonly) double GPUStartTime;
@property (getter=isStatEnabled, nonatomic, readwrite) BOOL StatEnabled;
@property (getter=getStatLocations, nonatomic, readwrite) unsigned long long StatLocations;
@property (getter=getStatOptions, nonatomic, readwrite) unsigned long long StatOptions;
@property (atomic, readonly) <MTLCommandQueue> *commandQueue;
@property (atomic, readonly) NSError *error;
@property (atomic, readonly) unsigned long long globalTraceObjectID;
@property (nonatomic, readonly) double kernelEndTime;
@property (nonatomic, readonly) double kernelStartTime;
@property (atomic, readwrite, copy) NSString *label;
@property (getter=getListIndex, nonatomic, readwrite) unsigned long long listIndex;
@property (nonatomic, readwrite) unsigned long long numEncoders;
@property (nonatomic, readwrite) unsigned long long numThisCommandBuffer;
@property (getter=isProfilingEnabled, atomic, readwrite) BOOL profilingEnabled;
@property (atomic, readonly) NSDictionary *profilingResults;
@property (atomic, readonly) BOOL retainedReferences;
@property (nonatomic, readwrite, retain) _MTLCommandBuffer<MTLCommandBuffer> *statCommandBuffer;
@property (atomic, readonly) unsigned long long status;
@property (atomic, readonly) BOOL synchronousDebugMode;
@property (nonatomic, readonly) NSMutableDictionary *userDictionary;

+ (void)initialize;

- (double)GPUEndTime;
- (double)GPUStartTime;
- (void)addCompletedHandler:(id)arg1;
- (void)addScheduledHandler:(id)arg1;
- (id)commandQueue;
- (void)commit;
- (void)commitAndHold;
- (void)commitAndReset;
- (void)dealloc;
- (id)description;
- (void)didCompletePreDealloc:(unsigned long long)arg1 error:(id)arg2;
- (void)didCompleteWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3;
- (void)didSchedule:(unsigned long long)arg1 error:(id)arg2;
- (void)didScheduleWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3;
- (void)enqueue;
- (id)error;
- (unsigned long long)getAndIncrementNumEncoders;
- (unsigned long long)getListIndex;
- (unsigned long long)getStatLocations;
- (unsigned long long)getStatOptions;
- (unsigned long long)globalTraceObjectID;
- (id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2;
- (id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 synchronousDebugMode:(BOOL)arg3;
- (BOOL)isCommitted;
- (BOOL)isProfilingEnabled;
- (BOOL)isStatEnabled;
- (double)kernelEndTime;
- (double)kernelStartTime;
- (void)kernelSubmitTime;
- (id)label;
- (struct MTLStatSampleRec { void *x1; unsigned long long x2; unsigned long long x3[0]; }*)newSample;
- (unsigned long long)numEncoders;
- (unsigned long long)numThisCommandBuffer;
- (void)postProcessCommandbuffer;
- (void)postProcessSamples:(struct MTLStatSampleRec { void *x1; unsigned long long x2; unsigned long long x3[0]; }*)arg1 toUserDst:(unsigned long long*)arg2 numSamples:(unsigned long long)arg3;
- (void)presentDrawable:(id)arg1;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (id)profilingResults;
- (BOOL)retainedReferences;
- (void)setCommitted:(BOOL)arg1;
- (void)setCurrentCommandEncoder:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setListIndex:(unsigned long long)arg1;
- (void)setNumEncoders:(unsigned long long)arg1;
- (void)setNumThisCommandBuffer:(unsigned long long)arg1;
- (void)setProfilingEnabled:(BOOL)arg1;
- (void)setStatCommandBuffer:(id)arg1;
- (void)setStatEnabled:(BOOL)arg1;
- (void)setStatLocations:(unsigned long long)arg1;
- (void)setStatOptions:(unsigned long long)arg1;
- (BOOL)skipRender;
- (id)statCommandBuffer;
- (unsigned long long)status;
- (BOOL)synchronousDebugMode;
- (id)userDictionary;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;

@end
