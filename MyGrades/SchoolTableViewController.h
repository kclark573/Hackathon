//
//  SchoolTableViewController.h
//  MyGrades
//
//  Created by Kasey Clark on 11/21/15.
//  Copyright © 2015 StraightouttaCompiler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SchoolTableViewController : UITableViewController
{
    NSMutableArray *Schools;
    NSInteger StudentID;
    NSIndexPath* IndexPath;
}

@property NSInteger StudentID;

@end
