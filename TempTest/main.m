//
//  main.m
//  TempTest
//
//  Created by 雷祥 on 16/12/23.
//  Copyright © 2016年 leixiang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"


int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");
//        NSLog(,call(123, 123));
        Person *person = [[Person alloc] init];
        [person test];
        
    }
    return 0;
}
