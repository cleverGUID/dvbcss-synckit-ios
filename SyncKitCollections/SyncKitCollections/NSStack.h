//
//  NSStack.h
//  
//
//  Created by Rajiv Ramdhany on 24/09/2014.
//  Copyright (c) 2014 BBC R&D. All rights reserved.
//

//  Copyright 2015 British Broadcasting Corporation
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import <Foundation/Foundation.h>

/**
 A stack implementation using NSMutableArray
 */
@interface NSStack : NSObject <NSFastEnumeration>

@property (nonatomic, assign, readonly) NSUInteger count;

- (id)initWithArray:(NSArray*)array;

- (void)pushObject:(id)object;
- (void)pushObjects:(NSArray*)objects;
- (id)popObject;
- (id)peekObject;

@end
