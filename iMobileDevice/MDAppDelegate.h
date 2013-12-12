//
//  MDAppDelegate.h
//  iMobileDevice
//
//  Created by Duyen Hoa Ha on 26/11/2013.
//  Copyright (c) 2013 Duyen Hoa Ha. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <DeviceAdapter.h>
#import "PXSourceList.h"
@class AMDevice;
@interface MDAppDelegate : NSObject <NSApplicationDelegate, NSMenuDelegate, DeviceAdapterDelegate, NSTableViewDataSource, NSTableViewDelegate, PXSourceListDataSource, PXSourceListDelegate> {
    NSMutableArray *listApplications;
    
    AMDevice *currentDevice;
    
    IBOutlet PXSourceList *sourceList;
	NSMutableArray *sourceListItems;
}

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (weak) IBOutlet NSScrollView *scrollListConnectedDevice;

@property (nonatomic) IBOutlet NSPopUpButton *popUpBtnApps;

- (IBAction)saveAction:(id)sender;

@end
