#pragma once

#import <Foundation/Foundation.h>

@class WRLDMenuOption;

NS_ASSUME_NONNULL_BEGIN

@interface WRLDMenuGroup : NSObject

@property (nonatomic, readonly) NSString* title;

- (instancetype)initWithTitle:(nullable NSString *)title;

- (NSMutableArray *)getOptions;

- (bool)hasTitle;

- (void)addOption:(WRLDMenuOption *)option;

- (void)addOption:(NSString *)text
          context:(nullable NSObject *)context;

@end

NS_ASSUME_NONNULL_END
