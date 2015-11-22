//
//  AddUpdateSchoolViewController.h
//  MyGrades
//
//  Created by Kasey Clark on 11/21/15.
//  Copyright © 2015 StraightouttaCompiler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddUpdateSchoolViewController : UIViewController
{
    
}


@property (strong, nonatomic) IBOutlet UIView *txtSchoolName;
@property (weak, nonatomic) IBOutlet UITextField *txtCity;
@property (weak, nonatomic) IBOutlet UITextField *txtState;

@property (weak, nonatomic) IBOutlet UIButton *btnSave;
- (IBAction)btnSave_Click:(id)sender;

@end
