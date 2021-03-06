/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEExecutionActionOperation.h"

@class NSDictionary, NSString, NSTask;

@interface IDEShellScriptExecutionActionOperation : IDEExecutionActionOperation
{
    NSString *_scriptContent;
    NSString *_shellToInvoke;
    NSString *_scriptTempFile;
    NSTask *_shellTask;
    NSDictionary *_actionEnvironmentVariables;
    id _disallowFinishToken;
    id _cancellationToken;
}

- (void).cxx_destruct;
- (void)taskDidTerminate:(id)arg1;
- (void)main;
- (BOOL)_writeScriptFile;
- (void)_cleanUpScriptFile;
- (id)initWithScript:(id)arg1 shellToInvoke:(id)arg2 environmentVariables:(id)arg3;

@end

