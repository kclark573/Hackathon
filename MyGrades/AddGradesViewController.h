//
//  AddGradesViewController.h
//  MyGrades
//
//  Created by Kasey Clark on 11/21/15.
//  Copyright © 2015 StraightouttaCompiler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddGradesViewController : UIViewController
{
    
}

@property (weak, nonatomic) IBOutlet UITextField *txtCategory;
@property (weak, nonatomic) IBOutlet UITextField *txtName;
@property (weak, nonatomic) IBOutlet UITextField *txtGrade;
@property (weak, nonatomic) IBOutlet UILabel *lblWhatIf;


- (IBAction)btnWhatIf_Click:(id)sender;
- (IBAction)btnSave_Click:(id)sender;

@end
