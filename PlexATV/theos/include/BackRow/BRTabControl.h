/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRPanelControl.h"
#import "BackRow-Structs.h"

@class NSArray, NSDictionary;

@interface BRTabControl : BRPanelControl {
@private
	int _selectedTabIndex;	// 68 = 0x44
	float _scaledTextPadding;	// 72 = 0x48
	float _scaledPreferredHeight;	// 76 = 0x4c
	int _tabBeingDeselected;	// 80 = 0x50
	id _tabControlDelegate;	// 84 = 0x54
	NSArray *_greyImages;	// 88 = 0x58
	NSArray *_blackImages;	// 92 = 0x5c
	NSArray *_blueImages;	// 96 = 0x60
	NSDictionary *_tabItemLabelAttributes;	// 100 = 0x64
}
@property(assign) id tabControlDelegate;	// G=0x32dc7b51; S=0x32dc7b61; converted property
+ (id)fullSizeTabControl;	// 0x32dc908d
+ (id)menuTabControl;	// 0x32dc8e85
- (id)init;	// 0x32dc92f9
- (id)_centerTabImagesFromImages:(id)images;	// 0x32dc8121
- (void)_focusChanged:(id)changed;	// 0x32dc7b81
- (id)_imagesForTabItem:(id)tabItem;	// 0x32dc7d45
- (id)_leftTabImagesFromImages:(id)images;	// 0x32dc819d
- (void)_loadTabImages;	// 0x32dc8339
- (id)_rightTabImagesFromImages:(id)images;	// 0x32dc804d
- (void)_updateFocusNotifications;	// 0x32dc7bad
- (void)_updateTabItemNames:(int)names;	// 0x32dc7c39
- (void)addTabItem:(id)item;	// 0x32dc8d6d
- (void)addTabItems:(id)items;	// 0x32dc8b41
- (void)controlWasFocused;	// 0x32dc8649
- (void)controlWasUnfocused;	// 0x32dc85a1
- (void)dealloc;	// 0x32dc8ddd
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x32dc86f1
- (void)insertTabItem:(id)item atIndex:(int)index;	// 0x32dc9145
- (void)removeAllTabItems;	// 0x32dc8b29
- (void)removeTabItem:(id)item;	// 0x32dc8a59
- (void)selectNextTabItem;	// 0x32dc8761
- (void)selectPreviousTabItem;	// 0x32dc87d1
- (void)selectTabItem:(id)item;	// 0x32dc8879
- (void)selectTabItemAtIndex:(int)index;	// 0x32dc881d
- (id)selectedTabItem;	// 0x32dc8a05
- (int)selectedTabItemIndex;	// 0x32dc7b71
- (void)setScaledPreferredHeight:(float)height;	// 0x32dc7b41
- (void)setScaledTextPadding:(float)padding;	// 0x32dc7b31
// converted property setter: - (void)setTabControlDelegate:(id)delegate;	// 0x32dc7b61
- (void)setTabItemLabelAttributes:(id)attributes;	// 0x32dc8da5
- (void)setTabItemNonSelectedImages:(id)images;	// 0x32dc8249
- (void)setTabItemSelectedInFocusImages:(id)focusImages;	// 0x32dc82e9
- (void)setTabItemSelectedNonFocusedImages:(id)images;	// 0x32dc8299
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32dc8f3d
// converted property getter: - (id)tabControlDelegate;	// 0x32dc7b51
- (int)tabItemCount;	// 0x32dc8a35
@end

