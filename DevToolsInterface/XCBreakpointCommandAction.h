/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "XCBreakpointAction.h"

@class NSString;

@interface XCBreakpointCommandAction : XCBreakpointAction
{
    NSString *_command;
    BOOL _logCommand;
}

+ (id)archivableAttributes;
+ (id)displayName;
- (BOOL)useDebuggerSideImplementation;
- (void)performInSession:(id)arg1 onBreakpoint:(id)arg2;
- (void)setLogCommand:(BOOL)arg1;
- (BOOL)logCommand;
- (void)setCommand:(id)arg1;
- (id)command;
- (void)dealloc;
- (id)editorClassName;

@end

