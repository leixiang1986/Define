//
//  Header.h
//  TempTest
//
//  Created by 雷祥 on 16/12/23.
//  Copyright © 2016年 leixiang. All rights reserved.
//

#ifndef Header_h
#define Header_h
//主线程 异步
#define dispatch_main_async_safe(block) \
if ([NSThread isMainThread]) {\
block();\
}\
else {\
dispatch_async(dispatch_get_main_queue(), block);\
}

//主线程 同步
#define dispatch_main_sync_safe(block) \
if ([NSThread isMainThread]) { \
block();\
}\
else { \
dispatch_sync(dispatch_get_main_queue(), ^{ \
block();\
});\
}

//弱引用
#define WEAKSELF(weakSelf) __weak typeof(&*self) weakSelf = self;

//强引用
#define STRONGSELF(strongSelf) __strong typeof(&*weakSelf) strongSelf = weakSelf;



#endif /* Header_h */
