/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTableView.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSColor, NSFont, NSMenu, NSMenuItem, NSMutableDictionary, NSString, NSTextField;

// Not exported
@interface GPUDataTableView : NSTableView <NSTableViewDataSource, NSTableViewDelegate>
{
    struct {
        unsigned int hasSelectorForColumnGroupTitle:1;
        unsigned int hasSelectorForColumnTitle:1;
        unsigned int hasSelectorForCellColor:1;
        unsigned int hasSelectorForWillShowContextMenu:1;
        unsigned int hasSelectorForMinimumColumnWidth:1;
        unsigned int reserved:3;
    } _flags;
    long long *_columnGroupForColumn;
    long long *_columnIndexInGroup;
    long long _rowSelectionStart;
    long long _rowSelectionCurrent;
    long long _columnSelectionStart;
    long long _columnSelectionCurrent;
    NSMenu *_contextMenu;
    NSMenuItem *_copyMenuItem;
    NSMutableDictionary *_columnSizes;
    id <GPUDataTableViewDataProvider> _dataProvider;
    id <GPUDataTableViewDelegate> _dataDelegate;
    NSFont *_cellFont;
    NSColor *_selectedCellColor;
    unsigned long long _cellTextAlignment;
    NSString *_noDataString;
    NSTextField *_textFieldForCellWidth;
}

@property(readonly, nonatomic) NSTextField *textFieldForCellWidth; // @synthesize textFieldForCellWidth=_textFieldForCellWidth;
@property(retain, nonatomic) NSString *noDataString; // @synthesize noDataString=_noDataString;
@property(nonatomic) unsigned long long cellTextAlignment; // @synthesize cellTextAlignment=_cellTextAlignment;
@property(retain, nonatomic) NSColor *selectedCellColor; // @synthesize selectedCellColor=_selectedCellColor;
@property(retain, nonatomic) NSFont *cellFont; // @synthesize cellFont=_cellFont;
@property(nonatomic) __weak id <GPUDataTableViewDelegate> dataDelegate; // @synthesize dataDelegate=_dataDelegate;
@property(nonatomic) __weak id <GPUDataTableViewDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
- (void).cxx_destruct;
- (void)clearMinimumColumnWidths;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (double)widthOfCellWithString:(id)arg1;
- (void)drawBackgroundInClipRect:(struct CGRect)arg1;
- (BOOL)resignFirstResponder;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)reloadData;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (long long)indexOfTableColumn:(id)arg1;
- (id)tableColumnAtIndex:(long long)arg1;
- (void)setNumberOfColumns:(unsigned long long)arg1;
- (void)setNumberOfColumns:(unsigned long long)arg1 usingHeaderCell:(Class)arg2;
- (void)removeAllColumns;
- (long long)firstIndexOfTableColumnInGroup:(long long)arg1;
- (long long)tableColumnIndexForColumnInGroup:(long long)arg1 atIndex:(long long)arg2;
- (long long)indexInGroupOfTableColumnAtIndex:(long long)arg1;
- (long long)groupOfTableColumnAtIndex:(long long)arg1;
- (void)dealloc;
- (void)viewDidMoveToSuperview;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)menuForEvent:(id)arg1;
- (void)addContextMenuItem:(id)arg1;
- (void)createContextMenu;
- (void)copy:(id)arg1;
- (void)selectAll:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)mouseDown:(id)arg1;
@property(readonly, nonatomic) long long selectionColumnEnd;
@property(readonly, nonatomic) long long selectionColumnStart;
@property(readonly, nonatomic) long long selectionRowEnd;
@property(readonly, nonatomic) long long selectionRowStart;
- (void)clearSelection;
- (BOOL)hasSelection;

@end
