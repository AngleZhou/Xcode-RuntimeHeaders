/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol IDEPlaygroundQuickLook <NSObject>
@property(getter=isEnabled) BOOL enabled;
- (void)updateQuickLookView;
- (id)quickLookViewForSingleLineSizeUsingSize:(struct CGSize)arg1;

@optional
- (id)quickLookViewForResultsView;
- (id)quickLookViewForNaturalSize;
- (id)quickLookViewForMultipleLineSizeUsingWidth:(double)arg1;
@end
