/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEAlert.h"

@class NSArray, NSSpeechSynthesizer, NSString;

@interface IDESpeechAlert : IDEAlert
{
    NSSpeechSynthesizer *_speech;
    NSArray *_availableVoices;
    NSString *_defaultVoice;
    NSString *_voice;
}

@property(retain, nonatomic) NSString *voice; // @synthesize voice=_voice;
- (void).cxx_destruct;
- (int)alertPropertyListVersion;
- (void)runForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3 completionBlock:(id)arg4;
- (id)initWithPropertyList:(id)arg1;
- (id)propertyList;
- (id)valuesForProperty:(id)arg1;
- (id)availableVoices;
- (id)init;

@end

