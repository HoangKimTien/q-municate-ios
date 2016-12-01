//
//  QMSiriHelper.h
//  Q-municate
//
//  Created by Vitaliy Gurkovsky on 11/23/16.
//  Copyright © 2016 Quickblox. All rights reserved.
//

#import <QMServices.h>

@class INPerson;

@interface QMSiriHelper : NSObject

@property (strong, nonatomic, readonly) QBUUser *currentUser;

+ (instancetype)instance;

- (void)contactsMatchingName:(NSString *)displayName withCompletionBlock:(void (^)(NSArray<INPerson*> *matchingContacts))completion;

- (void)dialogIDForUserWithID:(NSInteger)userID withCompletion:(void(^)(NSString *dialogID))completion;

@end
