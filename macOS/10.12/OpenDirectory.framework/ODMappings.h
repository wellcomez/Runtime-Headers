/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/OpenDirectory.framework/Versions/A/OpenDirectory
 */

@interface ODMappings : NSObject {
    NSString * comment;
    NSString * function;
    NSArray * functionAttributes;
    NSString * identifier;
    NSMutableDictionary * recordTypes;
    NSString * templateName;
}

@property (atomic, readwrite, copy) NSString *comment;
@property (atomic, readonly, copy) NSDictionary *dictionary;
@property (atomic, readwrite, copy) NSString *function;
@property (atomic, readwrite, copy) NSArray *functionAttributes;
@property (atomic, readwrite, copy) NSString *identifier;
@property (atomic, readonly, copy) NSArray *recordTypes;
@property (atomic, readwrite, copy) NSString *templateName;

+ (id)mappings;
+ (id)mappingsFromDictionary:(id)arg1;

- (id)comment;
- (id)dictionary;
- (id)function;
- (id)functionAttributes;
- (id)identifier;
- (id)init;
- (id)recordMapForStandardRecordType:(id)arg1;
- (id)recordTypes;
- (void)setComment:(id)arg1;
- (void)setFunction:(id)arg1;
- (void)setFunctionAttributes:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRecordMap:(id)arg1 forStandardRecordType:(id)arg2;
- (void)setTemplateName:(id)arg1;
- (id)templateName;

@end