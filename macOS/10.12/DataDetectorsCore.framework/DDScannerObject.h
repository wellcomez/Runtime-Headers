/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
 */

@interface DDScannerObject : NSObject {
    struct __DDScanner { } * _scanner;
    int  _type;
}

- (id)ddResultsWithOptions:(long long)arg1;
- (void)dealloc;
- (id)initWithType:(int)arg1;
- (void)reset;
- (id)resultsWithOptions:(long long)arg1;
- (long long)scanString:(id)arg1;
- (int)type;

@end
