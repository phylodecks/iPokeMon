//
//  GamePokemonHPBar.h
//  Pokemon
//
//  Created by Kaijie Yu on 2/27/12.
//  Copyright 2012 Kjuly. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface GamePokemonHPBar : CCNode {
  CCSprite * hpMaxBar_;
  CCSprite * hpBar_;
}

@property (nonatomic, retain) CCSprite * hpMaxBar;
@property (nonatomic, retain) CCSprite * hpBar;

- (id)initWithHP:(int)hp hpMax:(int)hpMax;
- (void)update:(ccTime)dt withCurrntHP:(int)currHP currentHPMax:(int)currHPMax;

@end
