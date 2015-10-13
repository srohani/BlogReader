//
//  BlogPost.h
//  BlogReader
//
//  Created by Samer Rohani on 2015-10-07.
//  Copyright © 2015 Samer Rohani. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject


@property (nonatomic,strong) NSString *title;
@property (nonatomic,strong) NSString *author;
@property (nonatomic,strong) NSString *thumbnail;
@property (nonatomic,strong) NSString *date;
@property (nonatomic,strong) NSURL *url;

- (id) initWithTitle: (NSString *) title; //designated init
+ (id) blogPostWithTitle: (NSString *) title;

- (NSURL *) thumbnailURL;
-(NSString *) formattedDate;

@end

