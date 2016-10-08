/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
 */

@interface NSURLAuthenticationChallenge : NSObject <NSSecureCoding> {
    NSURLAuthenticationChallengeInternal * _internal;
}

@property (atomic, readonly, copy) NSError *error;
@property (atomic, readonly, copy) NSURLResponse *failureResponse;
@property (atomic, readonly) long long previousFailureCount;
@property (atomic, readonly, copy) NSURLCredential *proposedCredential;
@property (atomic, readonly, copy) NSURLProtectionSpace *protectionSpace;
@property (atomic, readonly, retain) <NSURLAuthenticationChallengeSender> *sender;

+ (BOOL)supportsSecureCoding;

- (id)_initWithCFAuthChallenge:(struct _CFURLAuthChallenge { }*)arg1 sender:(id)arg2;
- (id)_initWithListOfProtectionSpaces:(id)arg1 CurrentProtectionSpace:(id)arg2 proposedCredential:(id)arg3 previousFailureCount:(long long)arg4 failureResponse:(id)arg5 error:(id)arg6 sender:(id)arg7;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)failureResponse;
- (id)init;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;
- (long long)previousFailureCount;
- (id)proposedCredential;
- (id)protectionSpace;
- (id)sender;

// NSURLAuthenticationChallenge (NSURLAuthenticationChallengeInternal)

+ (id)_authenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge { }*)arg1 sender:(id)arg2;
+ (id)_createAuthenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge { }*)arg1 sender:(id)arg2;

- (struct _CFURLAuthChallenge { }*)_createCFAuthChallenge;
- (void)setSender:(id)arg1;

// NSURLAuthenticationChallenge (__NSCFURLSessionConnectionAdditions)

- (BOOL)_isPasswordBasedChallenge;

@end