/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "SKObjectInterface.h"

@class NSString;

@interface SKTransferMessage : NSObject //SKObjectInterface
{
    int transferType;
    BOOL isConverting;
}

+ (id)keyPathsForValuesAffectingTransferBy;
+ (id)keyPathsForValuesAffectingType;
+ (id)keyPathsForValuesAffectingFailureReason;
+ (id)keyPathsForValuesAffectingStatus;
+ (id)keyPathsForValuesAffectingBytesPerSecond;
+ (id)keyPathsForValuesAffectingBytesTransferred;
+ (id)keyPathsForValuesAffectingFilesize;
+ (id)keyPathsForValuesAffectingPathname;
+ (id)keyPathsForValuesAffectingFilename;
@property(nonatomic) BOOL isConverting; // @synthesize isConverting;
- (BOOL)isTransfering;
- (BOOL)hasSucceeded;
- (BOOL)acceptTransferWithPathName:(id)arg1;
- (BOOL)pauseTransfer;
- (BOOL)cancelTransfer;
@property(readonly, nonatomic) NSString *summaryXML;
@property(readonly, nonatomic) NSString *transferBy;
@property(readonly, nonatomic) int type;
@property(readonly, nonatomic) int failureReason;
@property(readonly, nonatomic) int status;
@property(readonly, nonatomic) int bytesPerSecond;
@property(readonly, nonatomic) int bytesTransferred;
@property(readonly, nonatomic) int filesize;
@property(readonly, nonatomic) NSString *pathname;
@property(readonly, nonatomic) NSString *filename;
@property(readonly, nonatomic) int transferType; // @synthesize transferType;
- (id)initWithSkyLibObjectID:(unsigned int)arg1;
- (void)OnPropertyChange:(id)arg1 andPropkey:(int)arg2;

@end

