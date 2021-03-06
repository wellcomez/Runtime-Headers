/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
 */

@interface BU_TUserDefaults : NSUserDefaults {
    struct TNotificationCenterObserver { 
        NSObject *fObservedObject; 
        struct TString { 
            struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef> > { 
                struct __CFString {} *fRef; 
            } fString; 
        } fNotificationName; 
        struct TNSRef<BU_TNotificationCenterObserverGlue *, void> { 
            BU_TNotificationCenterObserverGlue *fRef; 
        } fFunctorGlue; 
        bool fIsDistributedObserving; 
    }  _forwardingDistributedObserver;
    struct TNotificationCenterObserver { 
        NSObject *fObservedObject; 
        struct TString { 
            struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef> > { 
                struct __CFString {} *fRef; 
            } fString; 
        } fNotificationName; 
        struct TNSRef<BU_TNotificationCenterObserverGlue *, void> { 
            BU_TNotificationCenterObserverGlue *fRef; 
        } fFunctorGlue; 
        bool fIsDistributedObserving; 
    }  _prefsNeedToBeSyncedObserver;
    struct TNotificationCenterObserver { 
        NSObject *fObservedObject; 
        struct TString { 
            struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef> > { 
                struct __CFString {} *fRef; 
            } fString; 
        } fNotificationName; 
        struct TNSRef<BU_TNotificationCenterObserverGlue *, void> { 
            BU_TNotificationCenterObserverGlue *fRef; 
        } fFunctorGlue; 
        bool fIsDistributedObserving; 
    }  _showAllExtensionsObserver;
}

+ (void)_setShowAllFiles:(bool)arg1;
+ (id)arrayForRegID:(int)arg1;
+ (bool)boolForRegID:(int)arg1;
+ (double)cgFloatForRegID:(int)arg1;
+ (id)dictionaryForRegID:(int)arg1;
+ (double)doubleForRegID:(int)arg1;
+ (float)floatForRegID:(int)arg1;
+ (unsigned int)fourCharCodeForRegID:(int)arg1;
+ (long long)integerForRegID:(int)arg1;
+ (id)objectForRegID:(int)arg1;
+ (struct CGPoint { double x1; double x2; })pointForRegID:(int)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForRegID:(int)arg1;
+ (bool)regIDExists:(int)arg1;
+ (void)removeObjectForRegID:(int)arg1;
+ (void)resetStandardUserDefaults;
+ (void)resetUserDefaults;
+ (void)sendKeyChangedNotification:(const struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef> > { struct __CFString {} *x_1_1_1; } x1; }*)arg1;
+ (void)sendRegIDChangedNotification:(int)arg1;
+ (void)setArray:(id)arg1 forRegID:(int)arg2;
+ (void)setBool:(bool)arg1 forRegID:(int)arg2;
+ (void)setCGFloat:(double)arg1 forRegID:(int)arg2;
+ (void)setDictionary:(id)arg1 forRegID:(int)arg2;
+ (void)setDouble:(double)arg1 forRegID:(int)arg2;
+ (void)setFloat:(float)arg1 forRegID:(int)arg2;
+ (void)setFourCharCode:(unsigned int)arg1 forRegID:(int)arg2;
+ (void)setInteger:(long long)arg1 forRegID:(int)arg2;
+ (void)setObject:(id)arg1 forRegID:(int)arg2;
+ (void)setPoint:(const struct CGPoint { double x1; double x2; }*)arg1 forRegID:(int)arg2;
+ (void)setRect:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 forRegID:(int)arg2;
+ (void)setSInt64:(long long)arg1 forRegID:(int)arg2;
+ (void)setShowAllExtensions:(bool)arg1;
+ (void)setShowAllFiles:(bool)arg1;
+ (void)setSize:(const struct CGSize { double x1; double x2; }*)arg1 forRegID:(int)arg2;
+ (void)setString:(id)arg1 forRegID:(int)arg2;
+ (bool)showAllExtensions;
+ (bool)showAllFiles;
+ (bool)showSystemFiles;
+ (long long)sint64ForRegID:(int)arg1;
+ (struct CGSize { double x1; double x2; })sizeForRegID:(int)arg1;
+ (id)standardUserDefaults;
+ (id)stringForRegID:(int)arg1;
+ (bool)synchronize;
+ (void)toggleShowAllFilesWithoutWritingPref;
+ (id)userDefaults;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_boolForRegID:(int)arg1;
- (id)_finderObjectForKey:(id)arg1;
- (void)_finderSetObject:(id)arg1 forKey:(id)arg2;
- (id)initWithUser:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForRegID:(int)arg1;
- (void)preferencesNeedToBeSynced;
- (bool)regIDExists:(int)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForRegID:(int)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forRegID:(int)arg2;
- (void)setObjectIfDifferent:(id)arg1 forKey:(id)arg2;
- (void)showAllExtensionsPrefsChangedByLaunchServices;
- (BOOL)synchronize;

@end
