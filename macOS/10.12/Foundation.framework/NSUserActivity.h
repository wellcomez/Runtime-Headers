/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSUserActivity : NSObject {
    id  _delegate;
    id  _frameworkDelegate;
    id  _internal;
}

@property (setter=_setContentAttributes:, atomic, readwrite, copy) NSDictionary *_contentAttributes;
@property (setter=_setContentIdentifier:, atomic, readwrite, copy) NSString *_contentIdentifier;
@property (setter=_setContentType:, atomic, readwrite, copy) NSString *_contentType;
@property (setter=_setContentUserAction:, atomic, readwrite, copy) NSString *_contentUserAction;
@property (getter=_isEligibleForUserActivityHandoff, setter=_setEligibleForUserActivityHandoff:, atomic, readwrite) BOOL _eligibleForUserActivityHandoff;
@property (getter=_isEligibleForUserActivityIndexing, setter=_setEligibleForUserActivityIndexing:, atomic, readwrite) BOOL _eligibleForUserActivityIndexing;
@property (getter=_isEligibleForUserActivityPublicIndexing, setter=_setEligibleForUserActivityPublicIndexing:, atomic, readwrite) BOOL _eligibleForUserActivityPublicIndexing;
@property (getter=_isEligibleForUserActivityReminders, setter=_setEligibleForUserActivityReminders:, atomic, readwrite) BOOL _eligibleForUserActivityReminders;
@property (setter=_setExpirationDate:, atomic, readwrite, copy) NSDate *_expirationDate;
@property (setter=_setFrameworkDelegate:, atomic, readwrite) <NSUserActivityDelegate> *_frameworkDelegate;
@property (setter=_setFrameworkPayload:, atomic, readwrite, copy) NSDictionary *_frameworkPayload;
@property (atomic, readonly, retain) UAUserActivity *_internalUserActivity;
@property (setter=_setKeywords:, atomic, readwrite, copy) NSSet *_keywords;
@property (atomic, readonly, copy) NSDate *_lastActivityDate;
@property (setter=_setMinimalRequiredUserInfoKeys:, atomic, readwrite, copy) NSSet *_minimalRequiredUserInfoKeys;
@property (setter=_setOptions:, atomic, readwrite, copy) NSDictionary *_options;
@property (setter=_setSubtitle:, atomic, readwrite, copy) NSString *_subtitle;
@property (atomic, readonly) long long _suggestedActionType;
@property (atomic, readonly, copy) NSString *_teamIdentifier;
@property (atomic, readonly, retain) NSUUID *_uniqueIdentifier;
@property (atomic, readonly, copy) NSString *activityType;
@property (atomic, readwrite) <NSUserActivityDelegate> *delegate;
@property (getter=isEligibleForHandoff, atomic, readwrite) BOOL eligibleForHandoff;
@property (getter=isEligibleForPublicIndexing, atomic, readwrite) BOOL eligibleForPublicIndexing;
@property (getter=isEligibleForSearch, atomic, readwrite) BOOL eligibleForSearch;
@property (atomic, readwrite, copy) NSDate *expirationDate;
@property (atomic, readwrite, copy) NSSet *keywords;
@property (atomic, readwrite) BOOL needsSave;
@property (atomic, readwrite, copy) NSSet *requiredUserInfoKeys;
@property (atomic, readwrite) BOOL supportsContinuationStreams;
@property (atomic, readwrite, copy) NSString *title;
@property (atomic, readwrite, copy) NSDictionary *userInfo;
@property (atomic, readwrite, copy) NSURL *webpageURL;

- (id)_internalUserActivity;
- (id)activityType;
- (void)addUserInfoEntriesFromDictionary:(id)arg1;
- (void)becomeCurrent;
- (id)contentAttributes;
- (id)contentType;
- (id)contentUserAction;
- (void)dealloc;
- (id)delegate;
- (id)expirationDate;
- (void)getContinuationStreamsWithCompletionHandler:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithActivityType:(id)arg1;
- (id)initWithInternalUserActivity:(id)arg1;
- (id)initWithTypeIdentifier:(id)arg1;
- (void)invalidate;
- (BOOL)isEligibleForHandoff;
- (BOOL)isEligibleForPublicIndexing;
- (BOOL)isEligibleForSearch;
- (BOOL)isEqual:(id)arg1;
- (id)keywords;
- (BOOL)needsSave;
- (id)requiredUserInfoKeys;
- (void)resignCurrent;
- (void)setContentAttributes:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setContentUserAction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEligibleForHandoff:(BOOL)arg1;
- (void)setEligibleForPublicIndexing:(BOOL)arg1;
- (void)setEligibleForSearch:(BOOL)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setNeedsSave:(BOOL)arg1;
- (void)setRequiredUserInfoKeys:(id)arg1;
- (void)setSupportsContinuationStreams:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setWebPageURL:(id)arg1;
- (void)setWebpageURL:(id)arg1;
- (BOOL)supportsContinuationStreams;
- (id)title;
- (id)typeIdentifier;
- (id)userInfo;
- (id)webPageURL;
- (id)webpageURL;

// NSUserActivity (CSSearchableItemAttributeSet)

- (id)contentAttributeSet;
- (void)setContentAttributeSet:(id)arg1;

// NSUserActivity (ErrorConvenience)

+ (id)_userFacingErrorForLaunchServicesError:(id)arg1 userInfo:(id)arg2;

// NSUserActivity (NSUserActivityAppLinks)

+ (BOOL)_supportsUserActivityAppLinks;

- (void)_addKeywordsFromArray:(id)arg1;
- (id)_contentAttributes;
- (id)_contentIdentifier;
- (id)_contentType;
- (id)_contentUserAction;
- (id)_expirationDate;
- (BOOL)_isEligibleForUserActivityHandoff;
- (BOOL)_isEligibleForUserActivityIndexing;
- (BOOL)_isEligibleForUserActivityPublicIndexing;
- (BOOL)_isEligibleForUserActivityReminders;
- (id)_keywords;
- (id)_minimalRequiredUserInfoKeys;
- (id)_parentUserActivity;
- (void)_setContentAttributes:(id)arg1;
- (void)_setContentIdentifier:(id)arg1;
- (void)_setContentType:(id)arg1;
- (void)_setContentUserAction:(id)arg1;
- (void)_setEligibleForUserActivityHandoff:(BOOL)arg1;
- (void)_setEligibleForUserActivityIndexing:(BOOL)arg1;
- (void)_setEligibleForUserActivityPublicIndexing:(BOOL)arg1;
- (void)_setEligibleForUserActivityReminders:(BOOL)arg1;
- (void)_setExpirationDate:(id)arg1;
- (void)_setKeywords:(id)arg1;
- (void)_setMinimalRequiredUserInfoKeys:(id)arg1;
- (void)_setParentUserActivity:(id)arg1;
- (void)_setSubtitle:(id)arg1;
- (id)_subtitle;

// NSUserActivity (NSUserActivityLaunching)

- (void)_prepareUserActivityForLaunchingWithOptions:(id)arg1 completionHandler:(id)arg2;

// NSUserActivity (NSUserActivityPrivate)

+ (id)_currentUserActivityUUID;
+ (void)_fetchUserActivityWithUUID:(id)arg1 completionHandler:(id)arg2;
+ (id)_fetchUserActivityWithUUID:(id)arg1 intervalToWaitForDocumentSynchronizationToComplete:(double)arg2 completionHandler:(id)arg3;
+ (void)_registerUserActivityType:(id)arg1 dynamicActivityType:(id)arg2;
+ (void)_unregisterUserActivityType:(id)arg1 dynamicActivityType:(id)arg2;

- (id)_frameworkDelegate;
- (id)_frameworkPayload;
- (id)_initWithTypeIdentifier:(id)arg1 suggestedActionType:(long long)arg2 options:(id)arg3;
- (id)_initWithUserActivityType:(id)arg1 dynamicActivityType:(id)arg2 options:(id)arg3;
- (id)_lastActivityDate;
- (id)_options;
- (void)_removeFrameworkPayloadValueForKey:(id)arg1;
- (void)_removeUserInfoValueForKey:(id)arg1;
- (void)_resignCurrent;
- (void)_setFrameworkDelegate:(id)arg1;
- (void)_setFrameworkPayload:(id)arg1;
- (void)_setLastActivityDate:(id)arg1;
- (void)_setOptions:(id)arg1;
- (long long)_suggestedActionType;
- (id)_uniqueIdentifier;
- (void)_updateFrameworkPayloadValue:(id)arg1 forKey:(id)arg2;
- (void)_updateUserInfoValue:(id)arg1 forKey:(id)arg2;

// NSUserActivity (NSUserActivityReminders)

+ (BOOL)_currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(id)arg2;

- (id)_determineMatchingApplicationBundleIdentfierWithOptions:(id)arg1;
- (id)_determineMatchingApplicationBundleIdentifierWithOptions:(id)arg1;
- (id)_teamIdentifier;

// NSUserActivity (NSUserActivitySerialization)

- (BOOL)_createUserActivityDataWithOptions:(id)arg1 completionHandler:(id)arg2;
- (BOOL)_createUserActivityStringsWithOptions:(id)arg1 completionHandler:(id)arg2;
- (id)_initWithUserActivityData:(id)arg1;
- (id)_initWithUserActivityStrings:(id)arg1 secondaryString:(id)arg2 optionalData:(id)arg3;

// NSUserActivity (UAUserActivityDelegate)

- (void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2;
- (void)didSynchronizeActivity;
- (void)willSynchronizeActivity;

@end