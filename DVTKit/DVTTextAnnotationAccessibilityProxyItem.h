/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTTextAnnotation, DVTTextSidebarView;

@interface DVTTextAnnotationAccessibilityProxyItem : NSObject
{
    DVTTextSidebarView *_parent;
    DVTTextAnnotation *_annotation;
}

+ (id)textAnnotationProxyItemWithAnnotation:(id)arg1 parent:(id)arg2;
@property(readonly) DVTTextSidebarView *parent; // @synthesize parent=_parent;
@property(readonly) DVTTextAnnotation *annotation; // @synthesize annotation=_annotation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (struct CGRect)_getAnnotationBounds:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)initWithAnnotation:(id)arg1 parent:(id)arg2;

@end

