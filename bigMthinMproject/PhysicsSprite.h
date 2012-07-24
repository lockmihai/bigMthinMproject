//
//  PhysicsSprite.h
//  bigMthinMproject
//
//  Created by Mihail Aurelian Olteanu on 7/24/12.
//  Copyright __MyCompanyName__ 2012. All rights reserved.
//

#import "cocos2d.h"
#import "chipmunk.h"

@interface PhysicsSprite : CCSprite
{
	cpBody *body_;	// strong ref
}

-(void) setPhysicsBody:(cpBody*)body;

@end