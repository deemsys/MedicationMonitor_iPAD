//
//  RootViewController.h
//  PetLove
//
//  Created by CS Soon on 4/17/11.
//  Copyright 2011 Espressoft Technologies. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <UIKit/UIKit.h>
#import "SVSegmentedControl.h"


@interface Addremainder : UIViewController<UIActionSheetDelegate> {
	NSArray *petArray;
    IBOutlet UILabel *noPet;
	IBOutlet UIImageView *bgImage;
    NSMutableDictionary *recordDict;
    BOOL share1;
    
    int savedValue;
    IBOutlet UITextField*name;
    UISegmentedControl *scheduleControl;
    NSString*reminderFile;
    NSMutableArray *_RemaindersArray;
    
    NSMutableArray *dictionary;
    NSString *dicfile;
    NSMutableArray *dictionaryArray;
    UILocalNotification *notiff;
    NSString *theString;
    NSString *name1;
    IBOutlet UIButton *fromdate;
    IBOutlet UILabel *fromlabel;
    IBOutlet UIImageView *dailymask1;
    
    IBOutlet UIButton *todate;
    IBOutlet UILabel *tolabel;
    BOOL selected;
    
    IBOutlet UIDatePicker *datepicker2;
    UIDatePicker *datePicker;
    IBOutlet UIButton*once;
    IBOutlet UIButton*setdate;
    IBOutlet UILabel*dateLabel;
    IBOutlet UIImageView*mask;
    
    IBOutlet UIDatePicker *timePicker;
    IBOutlet UIButton*daily;
    IBOutlet UIButton*settime;
    IBOutlet UILabel*timeLabel;
    IBOutlet UIImageView*maskDaily;
    int alertType;
    BOOL opt;
    int row1;
    IBOutlet UITextField *selected1;
    int clicked;
    int index;
    NSString *notifname;
    NSDate *notifdate;
}
- (IBAction)changetodate:(id)sender;
- (IBAction)changefromdate:(id)sender;
@property (retain, nonatomic) IBOutlet UIDatePicker *datepicker1;
@property (retain, nonatomic) IBOutlet UIDatePicker *datepicker2;
- (IBAction)changeTimeInLabel:(id)sender;
-(IBAction)once:(id)sender;
-(IBAction)setDate;
-(IBAction)setTime;
- (IBAction)fromdate;
- (IBAction)todate:(id)sender;

- (IBAction)changeDateInLabel:(id)sender;
@property (nonatomic,retain) IBOutlet UISegmentedControl *scheduleControl;
@property (nonatomic,retain) IBOutlet UIDatePicker *datePicker;
@property (retain,nonatomic) NSArray *petArray;
@property (retain, nonatomic) NSMutableDictionary *recordDict;
@property(nonatomic)int clicked;
@property(nonatomic)int index;
@property(nonatomic,retain)IBOutlet NSString*notifname;
@property(nonatomic,retain)NSDate *notifdate;

@end
