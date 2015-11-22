//
//  AddClassViewController.h
//  MyGrades
//
//  Created by Kasey Clark on 11/21/15.
//  Copyright © 2015 StraightouttaCompiler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddClassViewController : UIViewController
{
    
}

@property (weak, nonatomic) IBOutlet UITextField *txtName;
@property (weak, nonatomic) IBOutlet UITextField *txtFinalGrade;
@property (weak, nonatomic) IBOutlet UITextField *txtHomeworkPercent;
@property (weak, nonatomic) IBOutlet UITextField *txtQuizPercent;
@property (weak, nonatomic) IBOutlet UITextField *txtFirstExamPercent;
@property (weak, nonatomic) IBOutlet UITextField *txtSecondExamPercent;
@property (weak, nonatomic) IBOutlet UITextField *txtThirdExamPercent;
@property (weak, nonatomic) IBOutlet UITextField *txtFourthExamPercent;
@property (weak, nonatomic) IBOutlet UITextField *txtFinalExamPercent;
@property (weak, nonatomic) IBOutlet UITextField *txtProjectPercent;
@property (weak, nonatomic) IBOutlet UITextField *txtOtherPercent;


- (IBAction)btnSave_Click:(id)sender;

@end
