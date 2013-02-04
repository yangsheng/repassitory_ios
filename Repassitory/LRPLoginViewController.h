//
//  LRPLoginViewController.h
//  Repassitory
//
//  Created by Lansdon Page on 1/16/13.
//  Copyright (c) 2013 Lansdon Page. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LRPSplitViewController;

@interface LRPLoginViewController : UIViewController

//@property (weak, nonatomic) NSManagedObjectContext *managedObjectContext;
//@property (weak, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
//@property (weak, nonatomic) NSManagedObjectModel *managedObjectModel;

@property (weak, nonatomic) LRPSplitViewController *splitVC;

@property (strong, nonatomic) IBOutlet UITextField *usernameField;
@property (strong, nonatomic) IBOutlet UITextField *passwordField;


@end