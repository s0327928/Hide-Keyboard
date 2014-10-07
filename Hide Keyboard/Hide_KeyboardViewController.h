//
//  Hide_KeyboardViewController.h
//  Hide Keyboard
//
//  Created by Levi Orsinger on 9/15/14.
//  Copyright (c) 2014 Levi Orsinger. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Hide_KeyboardViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *txtOne;
@property (weak, nonatomic) IBOutlet UITextField *txtTwo;
@property (weak, nonatomic) IBOutlet UITextField *txtThree;
@property (weak, nonatomic) IBOutlet UITextField *txtFour;
@property (weak, nonatomic) IBOutlet UITextField *txtFive;
-(IBAction) doneEditing:(id) sender;
@property (weak, nonatomic) IBOutlet UIScrollView *scrollview;

@end
