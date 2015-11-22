//
//  School.h
//  MyGrades
//
//  Created by Kasey Clark on 11/21/15.
//  Copyright © 2015 StraightouttaCompiler. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface School : NSObject
{
    
}

@property NSInteger SchoolID;
@property NSInteger StudentID;
@property NSString* SchoolName;
@property NSString* City;
@property NSString* State;

+(NSMutableArray*)GetAllSchoolsWithStudentID: (NSInteger) studentID;
@end
