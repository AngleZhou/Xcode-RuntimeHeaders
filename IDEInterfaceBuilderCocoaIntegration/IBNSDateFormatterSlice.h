/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEInspectorProperty.h"

@class IBInspectorViewController, IBSTRFTimeTokenizer, IBUnicodeTR354Tokenizer, NSTokenField;

@interface IBNSDateFormatterSlice : IDEInspectorProperty
{
    IBUnicodeTR354Tokenizer *_unicodeTokenizer;
    IBSTRFTimeTokenizer *_strftimeTokenizer;
    NSTokenField *preTenFourTokenField;
    NSTokenField *tenFourTokenField;
}

+ (id)keyPathsForValuesAffectingTokenizedDateFormatForSelection;
+ (id)editingStringForTokens:(id)arg1;
- (void).cxx_destruct;
- (void)tokenPopupDidChange:(id)arg1;
- (id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 readFromPasteboard:(id)arg2;
- (BOOL)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3;
- (id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)tokenFieldChanged:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)refresh;
- (void)setTokenizedDateFormatForSelection:(id)arg1;
- (id)tokenizedDateFormatForSelection;
- (id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;
- (id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long *)arg4;
- (id)ibDateTokenizer:(id)arg1 labelWithFormat:(id)arg2;
- (void)setupRefreshTriggersAndConfigure;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;
- (id)inspectedDateFormatter;
@property(readonly) IBInspectorViewController *inspectorController;

@end

