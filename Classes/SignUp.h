//
//  SignUp.h
//  MediMoni
//
//  Created by hsa1 on 31/07/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MBProgressHUD.h"
#import "Reachability.h"
@interface SignUp : UIViewController<MBProgressHUDDelegate>
{
    MBProgressHUD *HUD;
    IBOutlet UITextField *pass,*cpass,*email,*skype,*face,*mobile,*state,*city;
    IBOutlet UITextField *zip;
    IBOutlet UITextField *name;
    IBOutlet UIButton*male,*female;
    NSString *sex;
    BOOL isConnect;
    UIImage *img;
    BOOL a,b,c1,d,e,f,g,h,i;
    IBOutlet UIButton*agebut;
    IBOutlet UIButton*countrybut;
    IBOutlet UIPickerView *pickerView;
    IBOutlet UIPickerView *pickerCountry;
    IBOutlet UILabel*agebutt;
    IBOutlet UILabel*countrybutt;
    NSMutableArray *arrayNo;
    NSMutableArray *countryname;
    IBOutlet UIImageView*us,*pa,*copa,*eid,*mob,*con,*cty;
    IBOutlet UIImageView*st;
    IBOutlet UIImageView *age;
    IBOutlet UIImageView*country;
    IBOutlet UIImageView*zipc;
}
@property (retain, nonatomic) IBOutlet UIPickerView *pickerCountry;
- (IBAction)countrybut:(id)sender;
@property (retain, nonatomic) IBOutlet UILabel *countrybutt;

- (IBAction)agebut:(id)sender;
@property (nonatomic, retain) UILabel *agebutt;
@property(nonatomic,retain)IBOutlet UIPickerView *pickerView;

- (IBAction)checkboxButton:(UIButton *)button;
//-(IBAction)clearbutton:(UIButton *)clearbutton;
-(IBAction)SingnUp;
-(BOOL)validateEmail:(NSString*)candidate;
-(BOOL)validateMobile:(NSString*)mobilenumber;
-(BOOL)validateCountry:(NSString*)country1;
-(BOOL)validateUsername:(NSString*)user;
-(BOOL)validateZip:(NSString*)zipnumber;
@end
