/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/MailAccount.h>

@class ActivityMonitor, NSArray, NSLock, NSString, POP3Connection;

@interface POPAccount : MailAccount
{
    ActivityMonitor *_fetchMonitor;
    POP3Connection *_connection;
    NSArray *_currentUIDs;
    NSLock *_connectionActivityLock;
    float _connectionTimeout;
    BOOL _fetcherNeedsReset;
    BOOL _deletingMessages;
    BOOL _hasDoneBackgroundSynchronization;
    BOOL _shouldAttemptAPOP;
    NSString *_oldestMessageUID;
    NSString *_newestMessageUID;
    int _numberOfKnownUIDs;
}

+ (id)accountTypeString;	// IMP=0x30b86d99
+ (id)saslProfileName;	// IMP=0x30b86e35
- (id)_URLScheme;	// IMP=0x30b872f5
- (void)_deleteHook;	// IMP=0x30b873b1
- (id)_infoForMatchingURL:(id)fp8;	// IMP=0x30b877f9
- (void)acquireConnectionActivityLock;	// IMP=0x30b872c5
- (id)authenticatedConnection;	// IMP=0x30b87419
- (int)bigMessageWarningSize;	// IMP=0x30b86f9d
- (BOOL)canCreateNewMailboxes;	// IMP=0x30b86f95
- (BOOL)canGoOffline;	// IMP=0x30b86da9
- (BOOL)canMailboxBeRenamed:(id)fp8;	// IMP=0x30b86f99
- (void)checkInConnection:(id)fp8 currentUIDs:(id)fp12;	// IMP=0x30b874b5
- (void)closeCachedConnection;	// IMP=0x30b877cd
- (void)closeCachedConnectionForcedOnly:(id)fp8;	// IMP=0x30b876c5
- (void)closeConnection:(id)fp8 andSaveUIDs:(id)fp12;	// IMP=0x30b875ad
- (Class)connectionClass;	// IMP=0x30b86ead
- (void)dealloc;	// IMP=0x30b869e1
- (unsigned int)defaultPortNumber;	// IMP=0x30b86e11
- (unsigned int)defaultSecurePortNumber;	// IMP=0x30b86e15
- (unsigned int)delayedMessageDeletionInterval;	// IMP=0x30b8722d
- (void)deleteMessagesNow:(id)fp8;	// IMP=0x30b87277
- (void)deleteSeenMessagesNow;	// IMP=0x30b87279
- (BOOL)deletingMessages;	// IMP=0x30b87271
- (int)fetchNumNewMessages:(unsigned int)fp8 oldMessages:(unsigned int)fp12 preservingUID:(id)fp16 withStore:(id)fp20;	// IMP=0x30b86bcd
- (int)fetchSynchronously;	// IMP=0x30b86a55
- (int)fetchSynchronouslyLite;	// IMP=0x30b86b65
- (void)finalize;	// IMP=0x30b86a2d
- (id)init;	// IMP=0x30b86981
- (void)insertInMailboxes:(id)fp8 atIndex:(unsigned int)fp12;	// IMP=0x30b8727b
- (id)loginName;	// IMP=0x30b877e5
- (id)mailboxPathExtension;	// IMP=0x30b86f55
- (int)messageDeletionPolicy;	// IMP=0x30b87165
- (id)newestKnownMessageUID;	// IMP=0x30b87385
- (int)numberOfKnownUIDs;	// IMP=0x30b873ad
- (id)oldestKnownMessageUID;	// IMP=0x30b87361
- (id)primaryMailboxUid;	// IMP=0x30b86f61
- (void)releaseAllConnections;	// IMP=0x30b86d09
- (void)releaseAllForcedConnections;	// IMP=0x30b86d41
- (void)relinquishConnectionActivityLock;	// IMP=0x30b872dd
- (BOOL)requiresAuthentication;	// IMP=0x30b86e41
- (void)scheduleDisconnect;	// IMP=0x30b87555
- (id)secureServiceName;	// IMP=0x30b86e29
- (id)serviceName;	// IMP=0x30b86e1d
- (void)setBigMessageWarningSize:(int)fp8;	// IMP=0x30b86ff5
- (void)setDelayedMessageDeletionInterval:(unsigned int)fp8;	// IMP=0x30b870fd
- (void)setIsOffline:(BOOL)fp8;	// IMP=0x30b86dad
- (void)setMessageDeletionPolicy:(int)fp8;	// IMP=0x30b87059
- (void)setNewestKnownMessageUID:(id)fp8;	// IMP=0x30b87331
- (void)setNumberOfKnownUIDs:(int)fp8;	// IMP=0x30b873a9
- (void)setOldestKnownMessageUID:(id)fp8;	// IMP=0x30b87301
- (void)setPreferredAuthScheme:(id)fp8;	// IMP=0x30b86ef1
- (void)setShouldAttemptAPOP:(BOOL)fp8;	// IMP=0x30b87053
- (BOOL)shouldAttemptAPOP;	// IMP=0x30b8704d
- (Class)storeClass;	// IMP=0x30b86e45
- (Class)storeClassForMailbox:(id)fp8;	// IMP=0x30b86e65

@end

