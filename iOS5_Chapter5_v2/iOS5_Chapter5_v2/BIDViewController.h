//
//  BIDViewController.h
//  iOS5_Chapter5_v2
//
//  Created by Maria Alice C. Lim on 11/28/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIView *portrait;
@property (strong, nonatomic) IBOutlet UIView *landscape;
@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *foos;
@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *bars;
- (IBAction)buttonTapped:(id)sender;

@end
