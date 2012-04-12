//
//  FifthViewController.h
//  StoryNav
//
//  Created by apple on 12-1-7.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FifthViewController : UIViewController
{
    IBOutlet UILabel *label;
}
@property (nonatomic,strong) NSString *string;

@property(nonatomic ,retain) NSArray *jsonArray;

@end
