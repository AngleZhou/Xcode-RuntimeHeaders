/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface DTXMessageParsingBuffer : NSObject
{
    void *_buffer;
    unsigned long long _filled;
    unsigned long long _size;
}

- (unsigned long long)length;
- (const void *)buffer;
- (void)clear;
- (void)appendBytes:(const void *)arg1 ofLength:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithSize:(unsigned long long)arg1;

@end

