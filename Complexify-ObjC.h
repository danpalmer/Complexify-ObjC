//
//  Complexify-ObjC.h
//
//  Created by Mert Dümenci on 3/12/13.
//  Copyright (c) 2013 Mert Dümenci. All rights reserved.
//
//  Based on Dan Palmer's jQuery Complexify Plugin
//  http://danpalmer.me/jquery-complexify/

#import <Foundation/Foundation.h>

typedef void(^ComplexifyCallback)(BOOL, double);

@interface Complexify : NSObject

/*!
 * @brief
 *   Takes a password and checks it returning the values immediately. This function is synchronous
 *   and does not invoke GCD, allowing the user to wrap it in a dispatch call to their own queue if
 *   wanted.
 * @param password The password to check
 * @param completionHandler The ComplexifyCallback block to receive the output.
 */
+ (void)checkComplexityOfPassword:(NSString *)password completionHandler:(ComplexifyCallback)completionHandler;

/*!
 * @brief
 *   Takes a password and checks it on a global queue with priority DISPATCH_QUEUE_PRIORITY_DEFAULT.
 *   The results are returned on the main queue. This is useful for calculating complexity in the
 *   background and returning data to the user interface.
 * @param password The password to check
 * @param completionHandler The ComplexifyCallback block to receive the output.
 */
+ (void)checkComplexityInBackgroundOfPassword:(NSString *)password completionHandler:(ComplexifyCallback)completionHandler;

@end
