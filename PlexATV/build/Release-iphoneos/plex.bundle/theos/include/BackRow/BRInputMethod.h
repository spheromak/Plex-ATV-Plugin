/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */


@class BRKeyboardCandidates, NSMutableString, NSMutableArray, NSString, BRKeyboard;

__attribute__((visibility("hidden")))
@interface BRInputMethod : NSObject {
@private
	int _textEntryStyle;	// 4 = 0x4
	NSString *_mostRecentCandidateCharacter;	// 8 = 0x8
	NSMutableString *_candidatesBuffer;	// 12 = 0xc
	NSMutableArray *_keyboards;	// 16 = 0x10
	BRKeyboard *_activeKeyboard;	// 20 = 0x14
	BRKeyboardCandidates *_candidatesKeyboard;	// 24 = 0x18
}
@property(readonly, retain) BRKeyboardCandidates *candidatesKeyboard;	// G=0x32dc9b29; converted property
@property(readonly, retain) NSMutableArray *keyboards;	// G=0x32dc9b75; converted property
@property(readonly, assign) int textEntryStyle;	// G=0x32dc9a4d; converted property
- (id)init;	// 0x32dc9ca1
- (void)_createKeyboardsForTextEntryStyle:(int)textEntryStyle;	// 0x32dc9a85
- (id)candidates;	// 0x32dc9a81
// converted property getter: - (id)candidatesKeyboard;	// 0x32dc9b29
- (void)dealloc;	// 0x32dc9c21
- (BOOL)deleteText;	// 0x32dc9de9
- (void)flushText;	// 0x32dc9a89
- (BOOL)inputText:(id)text;	// 0x32dc9cfd
- (id)isoLanguageCode;	// 0x32dc9a49
// converted property getter: - (id)keyboards;	// 0x32dc9b75
- (id)mostRecentCharacter;	// 0x32dc9a71
- (id)name;	// 0x32dc9a3d
- (void)removeCandidatesKeyboard;	// 0x32dc9af1
- (void)setActiveKeyboard:(id)keyboard;	// 0x32dc9a5d
- (BOOL)setTextEntryStyle:(int)style;	// 0x32dc9ba1
// converted property getter: - (int)textEntryStyle;	// 0x32dc9a4d
- (BOOL)usesCandidateDisplayForKeyboard:(id)keyboard;	// 0x32dc9a6d
@end
