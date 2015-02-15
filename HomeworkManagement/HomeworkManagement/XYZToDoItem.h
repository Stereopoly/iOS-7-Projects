//
//  XYZToDoItem.h
//  HomeworkManagement
//
//  Created by Oscar on 1/19/14.
//  Copyright (c) 2014 Oscar. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creatonDate1;

@end
