/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
 */

@interface DDDisjunctionRegexp : DDOperatorRegexp

- (BOOL)acceptEmptyWordWithManager:(id)arg1;
- (void)appendDescriptionToString:(id)arg1 depth:(int)arg2;
- (id)buildEffectiveArguments;
- (void)flattenDisjunctionInArray:(id)arg1;
- (id)prettyPrintWithPriority:(int)arg1;

// DDDisjunctionRegexp (ASTConversion)

- (id)symbolsInGrammar:(id)arg1 container:(id)arg2 withManager:(id)arg3;

// DDDisjunctionRegexp (DDASTToICU)

- (void)appendToDescription:(id)arg1 priority:(int)arg2 withManager:(id)arg3;

// DDDisjunctionRegexp (TypeBuilder)

- (id)computeTypeFromParent:(id)arg1 withManager:(id)arg2;

// DDDisjunctionRegexp (XMLOutput)

- (id)monElement;

@end