//
//  MainViewController.m
//  RSSReader
//
//  Created by Dean Collins on 5/04/09.
//  Copyright 2009 Big Click Studios. All rights reserved.
//

#import "MainViewController.h"
#import "RootViewController.h"
#import "NewViewController.h"
#import "Communicate.h"
#import "LoginScreen.h"
#import "Cremainder.h"
#import "Appoinment.h"
#import "Assessment.h"
//#import "GTabBar.h"
#import "Welcome.h"


@implementation UINavigationBar (CustomImage)

- (void)drawRect:(CGRect)rect {
    UIImage *image = [UIImage imageNamed: @"Top_Panel.png"];
    [image drawInRect:CGRectMake(0, 40, self.frame.size.width, 103)];
}

@end
@implementation MainViewController

@synthesize navigationController;
@synthesize recordDict;


- (void)viewDidLoad 
{
   
   
    UIImageView *i=[[UIImageView alloc]initWithImage:[UIImage imageNamed:@"BG.jpg"]];
     [self.view addSubview:i];
    [self.view sendSubviewToBack:i];
	[super viewDidLoad];
	//NSLog(@"Main View Did Load: %@", self.tabBarItem.title);

	if(self.tabBarItem.title == @"Home") 
    {
        
        if ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone) {
         
           LoginScreen*browseViewController = [[LoginScreen alloc] initWithNibName:@"LoginScreen" bundle:nil];
            browseViewController.view.backgroundColor=[UIColor clearColor];
            
            [self pushViewController:browseViewController animated:YES];
            [browseViewController release];
        } else {
          

            LoginScreen *browseViewController = [[LoginScreen alloc] initWithNibName:@"LoginScreen" bundle:nil];
            browseViewController.view.backgroundColor=[UIColor clearColor];
            
            [self pushViewController:browseViewController animated:YES];
            [browseViewController release];
            
            
        }

        
		
	}
    else if (self.tabBarItem.title == @"Medications")
    {	
		
        RootViewController *browseViewController = [[RootViewController alloc] initWithNibName:@"roor" bundle:nil];
        browseViewController.view.backgroundColor=[UIColor clearColor];
         browseViewController.recordDict=recordDict;
        
		[self pushViewController:browseViewController animated:YES];
		[browseViewController release];
      
	}
    else if (self.tabBarItem.title == @"Remainders")
    {	
      
        Cremainder *browseViewController = [[Cremainder alloc] initWithNibName:@"Cremainder" bundle:nil];
        browseViewController.view.backgroundColor=[UIColor clearColor];
        browseViewController.recordDict=recordDict;
		[self pushViewController:browseViewController animated:YES];
		[browseViewController release];
	}
    else if (self.tabBarItem.title == @"Assessments")
    {
        Assessment *browseViewController = [[Assessment alloc] initWithNibName:@"Assessment" bundle:nil];
        browseViewController.view.backgroundColor=[UIColor clearColor];
        
		[self pushViewController:browseViewController animated:YES];
		[browseViewController release];
       //  UITabBarItem *tabBarItem = [[tabItemsArray items] objectAtIndex:4];
        //[tabBarItem setEnabled:FALSE];
        //[[[[self.tabBarController tabBar]items]objectAtIndex:4]setEnabled:FALSE];
        //self.tabBarController.tabBar.hidden=YES;
        
        
	}
    
    else if (self.tabBarItem.title == @"Appoinments") 
    {	
       
        Appoinment *browseViewController = [[Appoinment alloc] initWithNibName:@"Appoinment" bundle:nil];
        browseViewController.view.backgroundColor=[UIColor clearColor];
        
		[self pushViewController:browseViewController animated:YES];
        
		[browseViewController release];
         
	}
    else if (self.tabBarItem.title == @"Communicate") 
    {	
        Communicate *browseViewController = [[Communicate alloc] initWithNibName:@"Communicate" bundle:nil];
        browseViewController.view.backgroundColor=[UIColor clearColor];
        
		[self pushViewController:browseViewController animated:YES];
		[browseViewController release];

	}
    else if (self.tabBarItem.title == @"Settings") 
    {
        NewViewController *browseViewController = [[NewViewController alloc] initWithNibName:@"NewViewController" bundle:nil];
        browseViewController.view.backgroundColor=[UIColor clearColor];
        
		[self pushViewController:browseViewController animated:YES];
		[browseViewController release];
	}

}

- (void)didReceiveMemoryWarning
{
    
    [super didReceiveMemoryWarning];
    // Releases the view if it doesn't have a superview
    // Release anything that's not essential, such as cached data
}


- (void)dealloc {
    [super dealloc];
	[navigationController release];
}


@end
