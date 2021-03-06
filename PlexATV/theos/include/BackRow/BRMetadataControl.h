/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRDividerControl, BRMetadataLinesLayer, NSArray, BRImageControl, BRTextControl;

@interface BRMetadataControl : BRControl {
@private
	BRTextControl *_titleLayer;	// 40 = 0x28
	BRImageControl *_ratingImageLayer;	// 44 = 0x2c
	BRImageControl *_starRatingImageLayer;	// 48 = 0x30
	BRImageControl *_topRightImageLayer;	// 52 = 0x34
	BRTextControl *_summaryLayer;	// 56 = 0x38
	BRMetadataLinesLayer *_metadataLinesLayer;	// 60 = 0x3c
	BRTextControl *_copyrightLayer;	// 64 = 0x40
	BRDividerControl *_topDividerLayer;	// 68 = 0x44
	BRDividerControl *_middleDividerLayer;	// 72 = 0x48
	BRDividerControl *_bottomDividerLayer;	// 76 = 0x4c
	NSArray *_metadataObjs;	// 80 = 0x50
	NSArray *_metadataLabels;	// 84 = 0x54
	float _totalHeight;	// 88 = 0x58
	int _alignment;	// 92 = 0x5c
}
- (id)init;	// 0x32d85a4d
- (void)_setCopyright:(id)copyright;	// 0x32d86b71
- (void)_setMetadata:(id)metadata withLabels:(id)labels;	// 0x32d86aa9
- (void)_setRating:(id)rating;	// 0x32d867e1
- (void)_setStarRating:(id)rating;	// 0x32d86869
- (void)_setSummary:(id)summary;	// 0x32d868f1
- (void)_setTitle:(id)title;	// 0x32d86701
- (void)_setTopRightImage:(id)image;	// 0x32dc04b1
- (void)_themeMetricsChanged;	// 0x32dc049d
- (id)accessibilityScreenContent;	// 0x32dc0589
- (void)dealloc;	// 0x32d875f5
- (void)layoutSubcontrols;	// 0x32dc0635
- (CGSize)renderedSize;	// 0x32d86ca1
- (void)resetAllFields;	// 0x32d88011
- (void)setAlignment:(int)alignment;	// 0x32dc048d
- (void)setCopyright:(id)copyright;	// 0x32d86b39
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x32d86a71
- (void)setRating:(id)rating;	// 0x32d867a9
- (void)setStarRating:(id)rating;	// 0x32d86831
- (void)setSummary:(id)summary;	// 0x32d868b9
- (void)setTitle:(id)title;	// 0x32d866c9
- (void)setTopRightImage:(id)image;	// 0x32dc04d1
- (void)setUserRating:(id)rating;	// 0x32dc0509
- (id)topRightImageControl;	// 0x32dc047d
@end

