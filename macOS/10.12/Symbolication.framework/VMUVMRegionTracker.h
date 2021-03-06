/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
 */

@interface VMUVMRegionTracker : NSObject {
    NSMutableArray * _regionInfoArray;
    struct _CSTypeRef { 
        unsigned long long _opaque_1; 
        unsigned long long _opaque_2; 
    }  _symbolicator;
    unsigned int  _task;
}

- (unsigned long long)_regionIndexForAddress:(unsigned long long)arg1;
- (void)dealloc;
- (unsigned long long)handleStackLogEvent:(struct mach_stack_logging_record { unsigned int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (id)initWithTask:(unsigned int)arg1 stackLogReader:(id)arg2;
- (id)vmRegionRangeInfoForRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;

@end
