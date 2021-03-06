/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
 */

@interface NSURLCredential : NSObject <NSCopying, NSSecureCoding> {
    NSURLCredentialInternal * _internal;
}

@property (atomic, readonly) unsigned long long persistence;

+ (id)credentialForTrust:(struct __SecTrust { }*)arg1;
+ (id)credentialWithIdentity:(struct OpaqueSecIdentityRef { }*)arg1 certificates:(id)arg2 persistence:(unsigned long long)arg3;
+ (id)credentialWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3;
+ (BOOL)supportsSecureCoding;

- (const struct _CFURLCredential { }*)_CFURLCredential;
- (const struct _CFURLCredential { }*)_cfurlcredential;
- (BOOL)_hasSWCACreatorAttribute;
- (id)_initWithCFURLCredential:(struct _CFURLCredential { }*)arg1;
- (id)_initWithUser:(id)arg1 password:(id)arg2 initialAccess:(struct OpaqueSecAccessRef { }*)arg3 persistence:(unsigned long long)arg4;
- (void)_removeSWCACreatorAttribute;
- (id)certificates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasPassword;
- (unsigned long long)hash;
- (struct OpaqueSecIdentityRef { }*)identity;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentity:(struct OpaqueSecIdentityRef { }*)arg1 certificates:(id)arg2 persistence:(unsigned long long)arg3;
- (id)initWithTrust:(struct __SecTrust { }*)arg1;
- (id)initWithUser:(id)arg1 password:(id)arg2 initialAccess:(struct OpaqueSecAccessRef { }*)arg3;
- (id)initWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)password;
- (unsigned long long)persistence;
- (id)user;

@end
