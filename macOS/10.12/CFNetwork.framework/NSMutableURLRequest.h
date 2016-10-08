/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
 */

@interface NSMutableURLRequest : NSURLRequest

@property (atomic, readwrite, copy) NSData *HTTPBody;
@property (atomic, readwrite, retain) NSInputStream *HTTPBodyStream;
@property (atomic, readwrite, copy) NSString *HTTPMethod;
@property (atomic, readwrite) BOOL HTTPShouldHandleCookies;
@property (atomic, readwrite) BOOL HTTPShouldUsePipelining;
@property (atomic, readwrite, copy) NSURL *URL;
@property (atomic, readwrite, copy) NSDictionary *allHTTPHeaderFields;
@property (atomic, readwrite) BOOL allowsCellularAccess;
@property (atomic, readwrite) unsigned long long cachePolicy;
@property (atomic, readwrite, copy) NSURL *mainDocumentURL;
@property (atomic, readwrite) unsigned long long networkServiceType;
@property (atomic, readwrite) double timeoutInterval;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAllowsCellularAccess:(BOOL)arg1;
- (void)setBoundInterfaceIdentifier:(id)arg1;
- (void)setCachePolicy:(unsigned long long)arg1;
- (void)setMainDocumentURL:(id)arg1;
- (void)setNetworkServiceType:(unsigned long long)arg1;
- (void)setPreventsIdleSystemSleep:(BOOL)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setURL:(id)arg1;

// NSMutableURLRequest (NSMutableHTTPURLRequest)

- (void)_setPayloadTransmissionTimeout:(double)arg1;
- (void)_setRequiresShortConnectionTimeout:(BOOL)arg1;
- (void)_setStartTimeoutDate:(id)arg1;
- (void)_setTimeWindowDelay:(double)arg1;
- (void)_setTimeWindowDuration:(double)arg1;
- (void)addValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (unsigned long long)requestPriority;
- (void)setAllHTTPHeaderFields:(id)arg1;
- (void)setContentDispositionEncodingFallbackArray:(id)arg1;
- (void)setExpectedWorkload:(unsigned long long)arg1;
- (void)setHTTPBody:(id)arg1;
- (void)setHTTPBodyStream:(id)arg1;
- (void)setHTTPContentType:(id)arg1;
- (void)setHTTPExtraCookies:(id)arg1;
- (void)setHTTPMethod:(id)arg1;
- (void)setHTTPReferrer:(id)arg1;
- (void)setHTTPShouldHandleCookies:(BOOL)arg1;
- (void)setHTTPShouldUsePipelining:(BOOL)arg1;
- (void)setHTTPUserAgent:(id)arg1;
- (void)setRequestPriority:(unsigned long long)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;

@end