//
// Copyright (c) 2013 Robert Wijas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UISSMacros.h"
@import UIKit;

#define UISS_PARSER_DEFAULT_GROUP_PREFIX @"@"

@class UISSConfig;

@interface UISSParser : NSObject

@property (nonatomic, strong) UISSConfig *config;
@property (nonatomic, assign) UIUserInterfaceIdiom userInterfaceIdiom;
@property (nonatomic, strong) NSString *groupPrefix;

// returns array of PropertySetters
- (NSArray *)parseDictionary:(NSDictionary *)dictionary;
- (NSArray *)parseDictionary:(NSDictionary *)dictionary errors:(NSMutableArray *)errors;

@end
