//
//  AddSemesterViewController.h
//  MyGrades
//
//  Created by Kasey Clark on 11/21/15.
//  Copyright © 2015 StraightouttaCompiler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddSemesterViewController : UIViewController
{
    
}


@property (weak, nonatomic) IBOutlet UITextField *txtSemester;
@property (weak, nonatomic) IBOutlet UITextField *txtYear;


- (IBAction)btnSave_Click:(id)sender;
@end
