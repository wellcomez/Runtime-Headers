/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
 */

@interface VMURangeToStringMap : NSObject <NSSecureCoding> {
    void * _rangeAndStringVectorVoidPtr;
    BOOL  _sorted;
    void * _stringToIndexMapVoidPtr;
    NSMutableArray * _strings;
}

+ (void)_claimUnarchivingOfClass:(id)arg1;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (unsigned int)_indexForString:(id)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })rangeContainingAddress:(unsigned long long)arg1;
- (void)setString:(id)arg1 forRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)sort;
- (id)stringForAddress:(unsigned long long)arg1;
- (unsigned int)uniquedStringCount;

@end
