/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEViewController.h"

#import "IDEBotSummaryStackedBarGraphDelegate-Protocol.h"

@class IDEBotSummaryStackedBarGraph, IDEBotSummaryStackedBarGraphController, NSArray, NSString, NSTextField;

@interface IDEStackedBarChartViewController : IDEViewController <IDEBotSummaryStackedBarGraphDelegate>
{
    BOOL _representsTestGraph;
    NSArray *_stackedBarChartBars;
    NSString *_chartName;
    id <IDEStackedBarChartViewControllerDataSource> _dataSource;
    id <IDEStackedBarChartViewControllerDelegate> _delegate;
    IDEBotSummaryStackedBarGraphController *_graphController;
    IDEBotSummaryStackedBarGraph *_graphView;
    NSTextField *_titleTextField;
    NSTextField *_legendTextField;
}

@property(retain) NSTextField *legendTextField; // @synthesize legendTextField=_legendTextField;
@property(retain) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) IDEBotSummaryStackedBarGraph *graphView; // @synthesize graphView=_graphView;
@property(nonatomic) BOOL representsTestGraph; // @synthesize representsTestGraph=_representsTestGraph;
@property(retain) IDEBotSummaryStackedBarGraphController *graphController; // @synthesize graphController=_graphController;
@property(nonatomic) __weak id <IDEStackedBarChartViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <IDEStackedBarChartViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSString *chartName; // @synthesize chartName=_chartName;
@property(copy, nonatomic) NSArray *stackedBarChartBars; // @synthesize stackedBarChartBars=_stackedBarChartBars;
- (void).cxx_destruct;
- (void)reloadColumn:(unsigned long long)arg1;
- (void)reloadData;
- (id)emptyColumnColor;
- (void)mouseExitedGraph:(id)arg1 event:(id)arg2;
- (void)mouseClickedOnGraph:(id)arg1 column:(id)arg2 event:(id)arg3;
- (void)mouseMovedOverGraph:(id)arg1 column:(id)arg2 event:(id)arg3;
- (void)loadView;
- (void)setSuppressSuccessBarsIfNoData:(BOOL)arg1;
- (void)_updateLegend;
- (id)_attachmentStringWithFillColor:(id)arg1 strokeColor:(id)arg2;

@end

