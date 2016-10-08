/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface _LSDModifyClient : _LSDClient <_LSDModifyProtocol>

- (void)didHandleInvocation:(id)arg1 isReply:(BOOL)arg2;
- (void)registerExtensionPoint:(id)arg1 withInfo:(id)arg2 completionHandler:(id)arg3;
- (void)registerItemInfo:(id)arg1 alias:(id)arg2 diskImageAlias:(id)arg3 bundleURL:(id)arg4 installationPlist:(id)arg5 completionHandler:(id)arg6;
- (void)removeHandlerForContentType:(id)arg1 roles:(unsigned int)arg2 completionHandler:(id)arg3;
- (void)removeHandlerForURLScheme:(id)arg1 completionHandler:(id)arg2;
- (void)removeTranslocatedContainer:(unsigned int)arg1;
- (void)resetServerStoreWithCompletionHandler:(id)arg1;
- (void)setDatabaseIsSeeded:(BOOL)arg1 completionHandler:(id)arg2;
- (void)setHandler:(id)arg1 version:(unsigned long long)arg2 forURLScheme:(id)arg3 completionHandler:(id)arg4;
- (void)setHandler:(id)arg1 version:(unsigned long long)arg2 roles:(unsigned int)arg3 forContentType:(id)arg4 completionHandler:(id)arg5;
- (void)setHandlerOptions:(unsigned int)arg1 forContentType:(id)arg2 completionHandler:(id)arg3;
- (void)updateContainerUnit:(unsigned int)arg1 completionHandler:(id)arg2;
- (void)willHandleInvocation:(id)arg1 isReply:(BOOL)arg2;

@end