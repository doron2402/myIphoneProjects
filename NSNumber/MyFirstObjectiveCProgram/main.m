//
//  main.m
//  MyFirstObjectiveCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#import <Cocoa/Cocoa.h>

int main()
{
    NSNumber *mike;
    mike = [[NSNumber alloc] initWithInt:44];
    NSLog(@" Number mike = %@ ",mike);
    
    mike = @66;
    NSLog(@" Number mike = %@ ",mike);
    
    NSNumber *doron = @29;
    NSLog(@" Number doron = %@ ",doron);
    
    NSString *alpha = @"one";
    NSString *beta = @"beat";
    NSString *new = [alpha stringByAppendingString:beta];
    NSString *test = [[alpha stringByAppendingString: @" and "] stringByAppendingString:beta];
    NSLog(@"new: %@",test);
    
    NSString *color = @"Purple";
    NSString *preference = @"My favorite color is ";
    NSString *favorite = [preference stringByAppendingString: color];
    NSLog(@"favorite: %@",favorite);
    
    return 0;
}
