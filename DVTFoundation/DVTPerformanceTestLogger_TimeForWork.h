/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTPerformanceTestParser-Protocol.h"

@class DVTRegularExpression;

@interface DVTPerformanceTestLogger_TimeForWork : NSObject <DVTPerformanceTestParser>
{
    DVTRegularExpression *_regularExpression;
}

+ (void)testCaseWithClassName:(id)arg1 methodName:(id)arg2 logNumberOfTestIterations:(unsigned long long)arg3 minDuration:(double)arg4 maxDuration:(double)arg5 averageDuration:(double)arg6 standardDeviation:(double)arg7 firstIterationDuration:(double)arg8;
- (void).cxx_destruct;
- (BOOL)performanceTestOutput:(id *)arg1 forInputString:(id)arg2;
- (id)init;

@end

