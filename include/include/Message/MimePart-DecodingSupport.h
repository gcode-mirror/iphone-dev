/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/MimePart.h>

@interface MimePart (DecodingSupport)
- (id)_fullMimeTypeEvenInsideAppleDouble;	// IMP=0x30b67771
- (id)contentsForTextSystem;	// IMP=0x30b67891
- (id)contentsForTextSystemForcingDownload:(BOOL)fp8;	// IMP=0x30b6786d
- (id)contentsForTextSystemToOffset:(unsigned int)fp8 resultOffset:(unsigned int *)fp12;	// IMP=0x30b67851
- (id)contentsForTextSystemToOffset:(unsigned int)fp8 resultOffset:(unsigned int *)fp12 downloadIfNecessary:(BOOL)fp16;	// IMP=0x30b6782d
- (id)contentsForTextSystemToOffset:(unsigned int)fp8 resultOffset:(unsigned int *)fp12 downloadIfNecessary:(BOOL)fp16 asHTML:(BOOL)fp20;	// IMP=0x30b686e5
- (id)decodeApplicationOctet_stream;	// IMP=0x30b67c1d
- (id)decodeApplicationZip;	// IMP=0x30b67c21
- (id)decodeMessageDelivery_status;	// IMP=0x30b67c25
- (id)decodeMessageExternal_body;	// IMP=0x30b68b8d
- (id)decodeMessagePartial;	// IMP=0x30b67c39
- (id)decodeMultipart;	// IMP=0x30b679a1
- (id)decodeMultipartAlternative;	// IMP=0x30b67be1
- (id)decodeMultipartAppledouble;	// IMP=0x30b67cad
- (id)decodeMultipartRelated;	// IMP=0x30b67bbd
- (id)decodeMultipartSigned;	// IMP=0x30b67bf9
- (id)decodeText;	// IMP=0x30b6ab15
- (id)decodeTextCalendar;	// IMP=0x30b6798d
- (id)decodeTextEnriched;	// IMP=0x30b6a935
- (id)decodeTextHtml;	// IMP=0x30b6ab31
- (id)decodeTextPlain;	// IMP=0x30b6a831
- (id)decodeTextRichtext;	// IMP=0x30b6aa25
@end

