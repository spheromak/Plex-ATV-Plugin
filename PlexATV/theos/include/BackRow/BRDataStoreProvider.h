/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRProvider.h"
//

@class BRDataStore;
@protocol BRControlFactory;

@interface BRDataStoreProvider : NSObject <BRProvider> {
@private
	id<BRControlFactory> _controlFactory;	// 4 = 0x4
	BRDataStore *_dataStore;	// 8 = 0x8
}
@property(retain) id controlFactory;	// G=0x32df4229; S=0x32df46b5; converted property
@property(readonly, retain) BRDataStore *dataStore;	// G=0x32df4239; converted property
+ (id)providerWithDataStore:(id)dataStore;	// 0x32df4945
+ (id)providerWithDataStore:(id)dataStore controlFactory:(id)factory;	// 0x32df490d
- (id)initWithDataStore:(id)dataStore;	// 0x32df47a9
- (id)initWithDataStore:(id)dataStore controlFactory:(id)factory;	// 0x32df4771
- (void)_databaseMessagesSuppressed:(id)suppressed;	// 0x32df45b1
- (void)_databaseObjectWasAdded:(id)added;	// 0x32df44cd
- (void)_databaseObjectWasModified:(id)modified;	// 0x32df43a9
- (void)_databaseObjectWillBeDeleted:(id)_databaseObject;	// 0x32df42fd
- (void)_hostAvailabilityChanged:(id)changed;	// 0x32df42a5
- (void)_updateDataIfNeeded:(id)needed;	// 0x32df4249
// converted property getter: - (id)controlFactory;	// 0x32df4229
- (id)data;	// 0x32df45d1
- (id)dataAtIndex:(long)index;	// 0x32df4651
- (long)dataCount;	// 0x32df4685
// converted property getter: - (id)dataStore;	// 0x32df4239
- (void)dealloc;	// 0x32df46ed
- (id)hashForDataAtIndex:(long)index;	// 0x32df460d
// converted property setter: - (void)setControlFactory:(id)factory;	// 0x32df46b5
@end

