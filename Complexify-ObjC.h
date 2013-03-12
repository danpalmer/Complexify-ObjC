//
//  Complexify-ObjC.h
//
//  Created by Mert Dümenci on 3/12/13.
//  Copyright (c) 2013 Mert Dümenci. All rights reserved.
//
//  Based on Dan Palmer's jQuery Complexify Plugin
//  http://danpalmer.me/jquery-complexify/

#import <Foundation/Foundation.h>

@interface Complexify : NSObject

+ (void)checkComplexityOfPassword:(NSString *)password completionHandler:(void(^)(BOOL valid, CGFloat complexity))completionHandler;

@end
