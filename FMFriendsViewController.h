//
//  FMFriendsViewController.h
//  Ribbit
//
//  Created by Fredrick Myers on 11/1/13.
//  Copyright (c) 2013 Fredrick Myers. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface FMFriendsViewController : UITableViewController

@property (nonatomic, strong) PFRelation *friendsRelation;
@property (nonatomic, strong) NSArray *friends;

@end
