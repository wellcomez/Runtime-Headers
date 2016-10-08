/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSScrollingConcurrentMomentumAnimation : _NSScrollingConcurrentVBLPreprocessFilter {
    double  _initialTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastSetOrigin;
    _NSScrollingMomentumCalculator * _momentumCalculator;
}

@property (atomic, readwrite, retain) _NSScrollingMomentumCalculator *momentumCalculator;

- (void)dealloc;
- (id)initWithMomentumCalculator:(id)arg1;
- (id)momentumCalculator;
- (void)scrollingVBLMonitor:(id)arg1 synchronizeForVBLSerialNumber:(unsigned long long)arg2 timestamp:(double)arg3 updateDuration:(double)arg4;
- (void)setMomentumCalculator:(id)arg1;

@end