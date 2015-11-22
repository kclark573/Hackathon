//
//  SemesterTableViewController.h
//  MyGrades
//
//  Created by Kasey Clark on 11/21/15.
//  Copyright © 2015 StraightouttaCompiler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SemesterTableViewController : UITableViewController
{
    NSInteger _SchoolID;
}


@property NSInteger SemesterID;
@property NSInteger SchoolID;
@property NSString* SemesterType;
@property NSInteger SemesterYear;

@end
