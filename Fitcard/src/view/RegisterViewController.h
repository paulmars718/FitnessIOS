//
//  RegisterViewController.h
//  Fitcard
//
//  Created by BoHuang on 7/27/16.
//  Copyright © 2016 BoHuang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WNAActivityIndicator.h"

@interface RegisterViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIButton *btnMenu;
@property (weak, nonatomic) IBOutlet UITextField *editUser;
@property (weak, nonatomic) IBOutlet UITextField *editEmail;
@property (weak, nonatomic) IBOutlet UITextField *editPassword;
@property (weak, nonatomic) IBOutlet UIButton *btnRegister;


@property (strong, nonatomic) WNAActivityIndicator *activityIndicator;


@end
