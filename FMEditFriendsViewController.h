//
//  FMEditFriendsViewController.h
//  Ribbit
//
//  Created by Fredrick Myers on 11/1/13.
//  Copyright (c) 2013 Fredrick Myers. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface FMEditFriendsViewController : UITableViewController

@property (nonatomic, strong) NSArray *allUsers;
@property (nonatomic, strong) PFUser *currentUser;
@property (nonatomic, strong) NSMutableArray *friends;

- (BOOL) isFriend:(PFUser *)user;

@end
