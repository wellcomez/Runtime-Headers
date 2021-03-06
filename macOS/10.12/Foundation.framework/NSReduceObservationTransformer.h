/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSReduceObservationTransformer : NSObservationTransformer {
    id  _accumulator;
    id  _reducer;
}

+ (id)reduceValue:(id)arg1 withReducer:(id)arg2;

- (void)_receiveBox:(id)arg1;
- (void)dealloc;
- (void)finishObserving;
- (id)initWithBlock:(id)arg1 initialValue:(id)arg2;

@end
