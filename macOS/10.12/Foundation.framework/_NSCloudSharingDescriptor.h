/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface _NSCloudSharingDescriptor : NSObject <NSSecureCoding> {
    BOOL  _invitationsSentViaThirdPartyService;
    long long  _numberOfInvitations;
    long long  _operation;
    BOOL  _publicShare;
    NSString * _sharedContentType;
}

@property (atomic, readwrite) BOOL invitationsSentViaThirdPartyService;
@property (atomic, readwrite) long long numberOfInvitations;
@property (atomic, readwrite) long long operation;
@property (atomic, readwrite) BOOL publicShare;
@property (atomic, readwrite, copy) NSString *sharedContentType;

+ (BOOL)supportsSecureCoding;

- (id)_variantSubstrings;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)invitationsSentViaThirdPartyService;
- (long long)numberOfInvitations;
- (long long)operation;
- (BOOL)publicShare;
- (void)setInvitationsSentViaThirdPartyService:(BOOL)arg1;
- (void)setNumberOfInvitations:(long long)arg1;
- (void)setOperation:(long long)arg1;
- (void)setPublicShare:(BOOL)arg1;
- (void)setSharedContentType:(id)arg1;
- (id)sharedContentType;

@end
