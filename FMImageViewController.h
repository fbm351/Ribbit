//
//  FMImageViewController.h
//  Ribbit
//
//  Created by Fredrick Myers on 11/6/13.
//  Copyright (c) 2013 Fredrick Myers. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
@interface FMImageViewController : UIViewController

@property (nonatomic, strong) PFObject *message;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end
