//
//  SSXmppBlocks.h
//  SSXmpp
//
//  Created by Jitendra on 19/10/15.
//  Copyright (c) 2015 Jitendra. All rights reserved.
//

#import "SSXmppConstant.h"

typedef void (^SSUnRegistrationblock)(NSDictionary* result);
typedef void (^SSRegistrationblock)(NSDictionary* result);
typedef void (^SSLoginblock)(NSDictionary* result);
typedef void (^SSAllUserblock)(NSDictionary* result);
typedef void (^SSUserFriendsblock)(NSDictionary* result);
typedef void (^SSAddFriendsblock)(NSDictionary* result);
typedef void (^SSOnOfflineblock)(NSDictionary* result);
typedef void (^SSChatblock)(NSDictionary* result);
typedef void (^SSUserVcardblock)(NSDictionary* result);


typedef void (^SSRoomFriendblock)(NSDictionary* result);
typedef void (^SSCreateRoomblock)(NSDictionary* result);
typedef void (^SSLastOnlineblock)(NSDictionary* result);
