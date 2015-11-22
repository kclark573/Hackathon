//
//  SignInViewController.h
//  MyGrades
//
//  Created by Kasey Clark on 11/21/15.
//  Copyright © 2015 StraightouttaCompiler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SignInViewController : UIViewController
{
    
}


@property (weak, nonatomic) IBOutlet UITextField *txtEmail;
@property (weak, nonatomic) IBOutlet UITextField *txtPassword;


- (IBAction)btnLogIn_Click:(id)sender;
- (IBAction)btnForgottenPassword_Click:(id)sender;

@end
