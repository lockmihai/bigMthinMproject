//
//  HelloWorldLayer.h
//  bigMthinMproject
//
//  Created by Mihail Aurelian Olteanu on 7/24/12.
//  Copyright __MyCompanyName__ 2012. All rights reserved.
//


#import <GameKit/GameKit.h>

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// Importing Chipmunk headers
#import "chipmunk.h"

@interface HelloWorldLayer : CCLayer <GKAchievementViewControllerDelegate, GKLeaderboardViewControllerDelegate>
{
	CCTexture2D *spriteTexture_; // weak ref
	
	cpSpace *space_; // strong ref
	
	cpShape *walls_[4];
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
