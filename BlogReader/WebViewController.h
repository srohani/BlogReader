//
//  WebViewController.h
//  BlogReader
//
//  Created by Samer Rohani on 2015-10-12.
//  Copyright © 2015 Samer Rohani. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController

@property (strong,nonatomic) NSURL *blogPostURL;
@property (strong, nonatomic) IBOutlet UIWebView *webView;

@end
