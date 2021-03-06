/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRImage, BRTextControl, BRWaitSpinnerControl, BRHorizontalSegmentedWidget, BRAsyncTask, BRAutoScrollingTextControl, BRPosterReflectionControl, NSString, NSTimer;
@protocol BRImageProxy;

@interface BRPosterControl : BRControl {
@private
	int _style;	// 40 = 0x28
	BRImageControl *_defaultImageControl;	// 44 = 0x2c
	BRImage *_defaultImage;	// 48 = 0x30
	BOOL _usingDefaultImage;	// 52 = 0x34
	BRControl *_imageControl;	// 56 = 0x38
	BRImage *_image;	// 60 = 0x3c
	id<BRImageProxy> _imageProxy;	// 64 = 0x40
	BRImage *_tempImage;	// 68 = 0x44
	BRHorizontalSegmentedWidget *_numberBadge;	// 72 = 0x48
	int _numberBadgeValue;	// 76 = 0x4c
	CGColorRef _posterBorderColor;	// 80 = 0x50
	float _posterBorderWidth;	// 84 = 0x54
	BOOL _imageRequested;	// 88 = 0x58
	NSString *_artworkIdentifier;	// 92 = 0x5c
	BRAsyncTask *_imageTask;	// 96 = 0x60
	BOOL _imageLoadSuspended;	// 100 = 0x64
	BRPosterReflectionControl *_reflectionControl;	// 104 = 0x68
	float _reflectionAmount;	// 108 = 0x6c
	float _reflectionBaseline;	// 112 = 0x70
	BRTextControl *_ordinalTextControl;	// 116 = 0x74
	BRAutoScrollingTextControl *_autoScrollingTitleControl;	// 120 = 0x78
	BRTextControl *_subtitleTextControl;	// 124 = 0x7c
	float _titleWidthScale;	// 128 = 0x80
	float _titleVerticalOffset;	// 132 = 0x84
	BOOL _alwaysShowTitles;	// 136 = 0x88
	BOOL _onlyShowSubtitlesWhenFocused;	// 137 = 0x89
	BRWaitSpinnerControl *_spinnerControl;	// 140 = 0x8c
	NSTimer *_localFinalFormTimer;	// 144 = 0x90
	float _cornerRadius;	// 148 = 0x94
	float _cropAspectRatio;	// 152 = 0x98
	BOOL _autoDownsample;	// 156 = 0x9c
	BOOL _observingBounds;	// 157 = 0x9d
	BOOL _cropAndFill;	// 158 = 0x9e
	BOOL _deletterboxImage;	// 159 = 0x9f
	BRImageControl *_badgeImageControl;	// 160 = 0xa0
	BRImage *_badgeImage;	// 164 = 0xa4
	float _badgeScale;	// 168 = 0xa8
	float _badgeOpacity;	// 172 = 0xac
	float _badgeFocusedOpacity;	// 176 = 0xb0
	int _badgePosition;	// 180 = 0xb4
	BOOL _badgeUpdated;	// 184 = 0xb8
	BRImage *_borderImage;	// 188 = 0xbc
	CGRect _borderImageFocusRect;	// 192 = 0xc0
	CGRect _borderImagePhotoImageRect;	// 208 = 0xd0
	NSString *_accessibilityLabel;	// 224 = 0xe0
	BOOL _decoratedImageCacheEnabled;	// 228 = 0xe4
	BOOL _usingDecoratedImage;	// 229 = 0xe5
	BOOL _imageEdgeAntialiasingEnabled;	// 230 = 0xe6
}
@property(retain) NSString *accessibilityLabel;	// G=0x32de3121; S=0x32de1101; converted property
@property(assign) BOOL alwaysShowTitles;	// G=0x32de0029; S=0x32de14c9; converted property
@property(readonly, retain) BRImage *badgeImage;	// G=0x32ddff81; converted property
@property(assign) float badgeOpacity;	// G=0x32ddffb1; S=0x32de19d1; converted property
@property(readonly, assign) int badgePosition;	// G=0x32ddff91; converted property
@property(assign) float badgeScale;	// G=0x32ddffa1; S=0x32de1a49; converted property
@property(assign) float cornerRadius;	// G=0x32ddff51; S=0x32de1bc5; converted property
@property(assign) BOOL cropAndFill;	// G=0x32ddff61; S=0x32de1b89; converted property
@property(assign) float cropAspectRatio;	// G=0x32ddff71; S=0x32de1b41; converted property
@property(retain) BRImage *defaultImage;	// G=0x32ddfe79; S=0x32de2031; converted property
@property(assign) BOOL deletterboxImage;	// G=0x32de0079; S=0x32de0069; converted property
@property(assign) float focusedBadgeOpacity;	// G=0x32ddffc1; S=0x32de1959; converted property
@property(retain) BRImage *image;	// G=0x32de0059; S=0x32de1249; converted property
@property(retain) id imageProxy;	// G=0x32ddfeb9; S=0x32de1f65; converted property
@property(assign) int numberBadgeValue;	// G=0x32ddffd1; S=0x32de16c5; converted property
@property(assign) BOOL onlyShowSubtitlesWhenFocused;	// G=0x32de0049; S=0x32de0039; converted property
@property(assign) int ordinal;	// G=0x32de1cfd; S=0x32de1d39; converted property
@property(assign) CGColorRef posterBorderColor;	// G=0x32ddfe89; S=0x32de2739; converted property
@property(assign) float posterBorderWidth;	// G=0x32ddfe99; S=0x32de1ffd; converted property
@property(assign) int posterStyle;	// G=0x32ddfea9; S=0x32de542d; converted property
@property(assign) float reflectionAmount;	// G=0x32ddff1d; S=0x32de1eb9; converted property
@property(assign) float reflectionBaseline;	// G=0x32ddff2d; S=0x32de1e85; converted property
@property(assign) BOOL spinnerEnabled;	// G=0x32ddff3d; S=0x32de1be9; converted property
@property(retain) id subtitle;	// G=0x32de12e9; S=0x32de13a9; converted property
@property(retain) id title;	// G=0x32de1565; S=0x32de16ad; converted property
@property(assign) float titleVerticalOffset;	// G=0x32de0019; S=0x32de14f1; converted property
@property(assign) float titleWidthScale;	// G=0x32ddfff1; S=0x32de1525; converted property
+ (void)initialize;	// 0x32de22b5
+ (Class)layerClass;	// 0x32de2315
+ (id)polaroidPosterWithImageProxy:(id)imageProxy title:(id)title;	// 0x32de2335
+ (id)posterButtonWithImage:(id)image title:(id)title;	// 0x32de2461
+ (id)tilePosterWithImageProxy:(id)imageProxy title:(id)title subtitle:(id)subtitle;	// 0x32de2385
+ (id)twoLinePosterButtonWithImage:(id)image title:(id)title subtitle:(id)subtitle;	// 0x32de23fd
- (id)init;	// 0x32de2231
- (id)_addFadeAnimationToLayer:(id)layer forKey:(id)key;	// 0x32de0945
- (id)_artworkIdentifier;	// 0x32de010d
- (void)_cropImage:(id)image;	// 0x32de0e99
- (id)_currentImage;	// 0x32de00ed
- (CGRect)_currentImageRect;	// 0x32de3325
- (void)_decorateImage:(id)image;	// 0x32de39d9
- (id)_decoratedImageIdentifier:(id)identifier size:(CGSize)size;	// 0x32de0671
- (void)_delayedFinalFormSetting:(id)setting;	// 0x32de0271
- (void)_deletterboxImage:(id)image;	// 0x32de0f99
- (id)_fetchImage;	// 0x32de04ed
- (void)_focusWasChanged;	// 0x32de0875
- (id)_getDecoratedImage:(id)image imageID:(id)anId toSize:(CGSize)size writeToDisk:(BOOL)disk;	// 0x32de4f5d
- (id)_getImageFromImageManagerNamed:(id)imageManagerNamed withSize:(CGSize)size;	// 0x32de02a9
- (BOOL)_imageRequiresCrop;	// 0x32de00ad
- (int)_imageSize;	// 0x32de011d
- (void)_imageTaskComplete:(id)complete;	// 0x32de0dfd
- (void)_imageUpdated:(id)updated;	// 0x32de2ebd
- (CGRect)_mainImageRectFromMainImageUnitRect;	// 0x32de3e75
- (CGRect)_maxImageRect;	// 0x32de33ad
- (id)_numberBadgeAttributes;	// 0x32de3a91
- (id)_ordinalAttributes;	// 0x32de34d5
- (id)_resizeImage:(id)image;	// 0x32de2d05
- (void)_restartImageResizing;	// 0x32de06d1
- (void)_scaleImage:(id)image;	// 0x32de3b1d
- (void)_setArtworkIdentifier:(id)identifier;	// 0x32de0791
- (void)_setAttributedTitle:(id)title withCrossfade:(BOOL)crossfade;	// 0x32de0a19
- (void)_setFinalFormImage:(id)image;	// 0x32de0659
- (void)_setFinalFormImage:(id)image needsLayout:(BOOL)layout;	// 0x32de0579
- (void)_setTempImage:(id)image;	// 0x32de0741
- (void)_startDeletterboxTaskForImage:(id)image;	// 0x32de0385
- (void)_startImageProcessingTaskForImage:(id)image;	// 0x32de2911
- (id)_subtitleAttributes;	// 0x32de3219
- (id)_titleAttributes;	// 0x32de37b9
- (void)_updateArtwork;	// 0x32de2df9
- (void)_updateDefaultArtwork;	// 0x32de0fe1
- (void)_updateDeferredArtwork;	// 0x32de2775
- (void)_updateTextLayerOpacity;	// 0x32de0b41
- (BOOL)_usesDeferredArtworkLoading;	// 0x32de0135
- (NSRange)accessibilityIndexRange;	// 0x32de317d
// converted property getter: - (id)accessibilityLabel;	// 0x32de3121
- (id)accessibilitySecondaryLabel;	// 0x32de30c1
// converted property getter: - (BOOL)alwaysShowTitles;	// 0x32de0029
- (id)badge;	// 0x32de009d
// converted property getter: - (id)badgeImage;	// 0x32ddff81
// converted property getter: - (float)badgeOpacity;	// 0x32ddffb1
// converted property getter: - (int)badgePosition;	// 0x32ddff91
// converted property getter: - (float)badgeScale;	// 0x32ddffa1
- (void)controlWasActivated;	// 0x32de2165
- (void)controlWasDeactivated;	// 0x32de20a9
- (void)controlWasFocused;	// 0x32de120d
- (void)controlWasUnfocused;	// 0x32de11d1
// converted property getter: - (float)cornerRadius;	// 0x32ddff51
// converted property getter: - (BOOL)cropAndFill;	// 0x32ddff61
// converted property getter: - (float)cropAspectRatio;	// 0x32ddff71
- (void)dealloc;	// 0x32de2509
// converted property getter: - (id)defaultImage;	// 0x32ddfe79
// converted property getter: - (BOOL)deletterboxImage;	// 0x32de0079
- (id)description;	// 0x32de21c1
- (void)drawInContext:(CGContextRef)context;	// 0x32de30b5
- (CGRect)focusCursorFrame;	// 0x32de4d45
// converted property getter: - (float)focusedBadgeOpacity;	// 0x32ddffc1
- (void)hideTextLayers;	// 0x32de1179
// converted property getter: - (id)image;	// 0x32de0059
// converted property getter: - (id)imageProxy;	// 0x32ddfeb9
- (BOOL)isAccessibilityElement;	// 0x32de0089
- (void)layoutSubcontrols;	// 0x32de3f11
// converted property getter: - (int)numberBadgeValue;	// 0x32ddffd1
// converted property getter: - (BOOL)onlyShowSubtitlesWhenFocused;	// 0x32de0049
// converted property getter: - (int)ordinal;	// 0x32de1cfd
// converted property getter: - (CGColorRef)posterBorderColor;	// 0x32ddfe89
// converted property getter: - (float)posterBorderWidth;	// 0x32ddfe99
// converted property getter: - (int)posterStyle;	// 0x32ddfea9
- (float)preferredCursorRadius;	// 0x32de008d
// converted property getter: - (float)reflectionAmount;	// 0x32ddff1d
// converted property getter: - (float)reflectionBaseline;	// 0x32ddff2d
- (void)scrollingCompleted;	// 0x32de113d
// converted property setter: - (void)setAccessibilityLabel:(id)label;	// 0x32de1101
// converted property setter: - (void)setAlwaysShowTitles:(BOOL)titles;	// 0x32de14c9
- (void)setBadgeImage:(id)image atPosition:(int)position;	// 0x32de1a7d
// converted property setter: - (void)setBadgeOpacity:(float)opacity;	// 0x32de19d1
// converted property setter: - (void)setBadgeScale:(float)scale;	// 0x32de1a49
// converted property setter: - (void)setCornerRadius:(float)radius;	// 0x32de1bc5
// converted property setter: - (void)setCropAndFill:(BOOL)fill;	// 0x32de1b89
// converted property setter: - (void)setCropAspectRatio:(float)ratio;	// 0x32de1b41
// converted property setter: - (void)setDefaultImage:(id)image;	// 0x32de2031
// converted property setter: - (void)setDeletterboxImage:(BOOL)image;	// 0x32de0069
- (BOOL)setEnableDecoratedImageCache:(BOOL)cache;	// 0x32ddfec9
// converted property setter: - (void)setFocusedBadgeOpacity:(float)opacity;	// 0x32de1959
// converted property setter: - (void)setImage:(id)image;	// 0x32de1249
- (void)setImageEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x32de1f05
// converted property setter: - (void)setImageProxy:(id)proxy;	// 0x32de1f65
- (void)setNonAttributedSubtitle:(id)subtitle;	// 0x32de1309
- (void)setNonAttributedTitle:(id)title;	// 0x32de15f5
- (void)setNonAttributedTitleWithCrossfade:(id)crossfade;	// 0x32de1585
// converted property setter: - (void)setNumberBadgeValue:(int)value;	// 0x32de16c5
// converted property setter: - (void)setOnlyShowSubtitlesWhenFocused:(BOOL)focused;	// 0x32de0039
// converted property setter: - (void)setOrdinal:(int)ordinal;	// 0x32de1d39
// converted property setter: - (void)setPosterBorderColor:(CGColorRef)color;	// 0x32de2739
// converted property setter: - (void)setPosterBorderWidth:(float)width;	// 0x32de1ffd
// converted property setter: - (void)setPosterStyle:(int)style;	// 0x32de542d
// converted property setter: - (void)setReflectionAmount:(float)amount;	// 0x32de1eb9
// converted property setter: - (void)setReflectionBaseline:(float)baseline;	// 0x32de1e85
// converted property setter: - (void)setSpinnerEnabled:(BOOL)enabled;	// 0x32de1be9
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x32de13a9
// converted property setter: - (void)setTitle:(id)title;	// 0x32de16ad
// converted property setter: - (void)setTitleVerticalOffset:(float)offset;	// 0x32de14f1
// converted property setter: - (void)setTitleWidthScale:(float)scale;	// 0x32de1525
- (void)setTitleWithCrossfade:(id)crossfade;	// 0x32de1695
// converted property getter: - (BOOL)spinnerEnabled;	// 0x32ddff3d
// converted property getter: - (id)subtitle;	// 0x32de12e9
// converted property getter: - (id)title;	// 0x32de1565
- (id)titleControl;	// 0x32ddffe1
// converted property getter: - (float)titleVerticalOffset;	// 0x32de0019
// converted property getter: - (float)titleWidthScale;	// 0x32ddfff1
@end

