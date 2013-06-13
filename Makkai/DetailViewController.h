//
//  DetailViewController.h
//  Makkai
//
//  Created by Andras Makkai on 13/06/13.
//  Copyright (c) 2013 Andras Makkai. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
