//
//  ToDoDetailViewController.h
//  ToDoList
//
//  Created by Nidhi Gupta on 10/15/13.
//  Copyright (c) 2013 zynga. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ToDoDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
