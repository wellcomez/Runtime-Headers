/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/SharedFileList.framework/Versions/A/SharedFileList
 */

@interface SFLMutableListItem : SFLListItem {
    int  _lock;
    BOOL  _needsSave;
}

@property (atomic, readwrite, retain) NSURL *URL;
@property (atomic, readwrite, copy) NSData *bookmark;
@property (atomic, readwrite, copy) NSString *name;
@property (atomic, readwrite) BOOL needsSave;
@property (atomic, readwrite, copy) NSDictionary *properties;

- (id)URL;
- (id)_copyWithZone:(struct _NSZone { }*)arg1;
- (id)bookmark;
- (Class)classForCoder;
- (id)copyForSaving;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (BOOL)needsSave;
- (id)properties;
- (BOOL)resolveWithResolutionFlags:(unsigned int)arg1 error:(id*)arg2;
- (void)setBookmark:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNeedsSave:(BOOL)arg1;
- (void)setProperties:(id)arg1;
- (void)setURL:(id)arg1;
- (void)updateFromItem:(id)arg1;

@end
