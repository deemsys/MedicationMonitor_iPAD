//  RootViewController.h
//  PetLove
//
//  Created by CS Soon on 4/17/11.
//  Copyright 2011 Espressoft Technologies. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <UIKit/UIKit.h>
#import "SVSegmentedControl.h"

@interface Cremainder : UIViewController<UIActionSheetDelegate> {
	NSArray *petArray;
	IBOutlet UITableView *myTable;
	IBOutlet UILabel *noPet;
	IBOutlet UIImageView *bgImage;
    NSMutableDictionary *recordDict;
    BOOL share1;
    int savedValue;
    NSString*reminderFile;
    int k;
    NSArray *arr;
    NSMutableArray *_RemaindersArray;
    
    IBOutlet UILabel*nolab;
    
    NSMutableDictionary *dictionary;
    NSString *dicfile;
    NSMutableArray *dictionaryArray;
    
}
-(IBAction)Addremainder;
- (void)segmentedControlChangedValue:(SVSegmentedControl*)segmentedControl;
@property (retain,nonatomic) NSArray *petArray;
@property (retain, nonatomic) NSMutableDictionary *recordDict;
@end