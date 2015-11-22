//
//  SchoolTableViewController.m
//  MyGrades
//
//  Created by Kasey Clark on 11/21/15.
//  Copyright © 2015 StraightouttaCompiler. All rights reserved.
//

#import "SchoolTableViewController.h"
#import "School.h"
#import "SemesterTableViewController.h"

@interface SchoolTableViewController ()

@end

@implementation SchoolTableViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.navigationItem.rightBarButtonItem = self.editButtonItem;
    
    Schools = [School GetAllSchoolsWithStudentID:StudentID];
    [Schools addObject:@"Add School"];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return Schools.count;
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell;
    
    if(indexPath.row == (Schools.count - 1))
    {
        cell = [tableView dequeueReusableCellWithIdentifier:@"AddSchoolCell" forIndexPath:indexPath];
        cell.textLabel.text = [Schools objectAtIndex:indexPath.row];
    }
    
    else
    {
        cell = [tableView dequeueReusableCellWithIdentifier:@"SchoolCell" forIndexPath:indexPath];
        School* temp = [Schools objectAtIndex:indexPath.row];
        cell.textLabel.text = temp.SchoolName;
        cell.detailTextLabel.text = [[NSString alloc] initWithFormat:@"%@, %@", temp.City, temp.State];
    }
    
    
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    IndexPath = indexPath;
    
    if(indexPath.row == (Schools.count - 1))
        [self performSegueWithIdentifier:@"School2AddUpdateSchool" sender:self];
    
    else
        [self performSegueWithIdentifier:@"School2Semester" sender:self];
}

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    if([[segue identifier] isEqualToString:@"School2AddUpdateSchool"])
    {
        
    }
    
    else if([[segue identifier] isEqualToString:@"School2Semester"])
    {
        SemesterTableViewController* semester = [segue destinationViewController];
        School* temp = [Schools objectAtIndex:IndexPath.row];
        semester.SchoolID = temp.SchoolID;
    }
}


/*
// Override to support conditional editing of the table view.
- (BOOL)tableView:(UITableView *)tableView canEditRowAtIndexPath:(NSIndexPath *)indexPath {
    // Return NO if you do not want the specified item to be editable.
    return YES;
}
*/

/*
// Override to support editing the table view.
- (void)tableView:(UITableView *)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath {
    if (editingStyle == UITableViewCellEditingStyleDelete) {
        // Delete the row from the data source
        [tableView deleteRowsAtIndexPaths:@[indexPath] withRowAnimation:UITableViewRowAnimationFade];
    } else if (editingStyle == UITableViewCellEditingStyleInsert) {
        // Create a new instance of the appropriate class, insert it into the array, and add a new row to the table view
    }   
}
*/

/*
// Override to support rearranging the table view.
- (void)tableView:(UITableView *)tableView moveRowAtIndexPath:(NSIndexPath *)fromIndexPath toIndexPath:(NSIndexPath *)toIndexPath {
}
*/

/*
// Override to support conditional rearranging of the table view.
- (BOOL)tableView:(UITableView *)tableView canMoveRowAtIndexPath:(NSIndexPath *)indexPath {
    // Return NO if you do not want the item to be re-orderable.
    return YES;
}
*/

/*
#pragma mark - Navigation

*/

@end
