//
//  Copyright (c) 2018 Open Whisper Systems. All rights reserved.
//

#import "ConversationViewCell.h"

NS_ASSUME_NONNULL_BEGIN

extern const CGFloat OWSMessageCellCornerRadius;

@interface OWSMessageCell : ConversationViewCell

+ (NSString *)cellReuseIdentifier;

@end

NS_ASSUME_NONNULL_END
