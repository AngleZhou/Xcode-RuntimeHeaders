/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DVTFoundation/DVTMacroExpansionString.h>

@class NSString<DVTMacroExpansion>;

@interface DVTMacroExpansionString_Concatenation : DVTMacroExpansionString
{
    unsigned long long _numSubstrings;
    NSString<DVTMacroExpansion> *_substrings[0];
}

+ (id)newWithOriginalString:(id)arg1 substrings:(struct DVTArrayBuilder *)arg2;
- (void).cxx_destruct;
- (id)dvt_debugDescription;
- (void)dvt_assertInternalConsistency;
- (id)dvt_evaluateAsStringListInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)dvt_evaluateAsStringInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (BOOL)dvt_isLiteral;
- (void)dealloc;
- (id)initWithOriginalString:(id)arg1 substrings:(struct DVTArrayBuilder *)arg2;

@end

