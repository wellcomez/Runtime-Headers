/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSUndoReplaceCharacters : NSUndoTextOperation {
    NSAttributedString * _attributedString;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _replacementRange;
}

- (void)dealloc;
- (id)initWithAffectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 layoutManager:(id)arg2 undoManager:(id)arg3 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)undoRedo:(id)arg1;

@end
