//
//  AppDelegate.h
//  WaterWilfred
//
//  Created by Kiara Robles on 10/16/15.
//  Copyright © 2015 Kiara Robles. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic) NSUInteger numberOfCups;
@property (nonatomic) NSUInteger numberOfOunces;

//- (void)saveContext;
//- (NSURL *)applicationDocumentsDirectory;


@end

