//
//  School.m
//  MyGrades
//
//  Created by Kasey Clark on 11/21/15.
//  Copyright © 2015 StraightouttaCompiler. All rights reserved.
//

#import "School.h"

@implementation School

+(NSMutableArray*)GetAllSchoolsWithStudentID: (NSInteger) studentID
{
    NSMutableArray* schools = [[NSMutableArray alloc] init];
    
    School* school = [[School alloc] init];
    school.StudentID = studentID;
    school.SchoolID = 1;
    school.SchoolName = @"UHCL";
    school.City = @"Clear Lake";
    school.State = @"Texas";
    
    [schools addObject:school];
    
    return schools;
}

@end
