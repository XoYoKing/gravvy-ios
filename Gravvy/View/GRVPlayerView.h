//
//  GRVPlayerView.h
//  Gravvy
//
//  Created by Nnoduka Eruchalu on 5/24/15.
//  Copyright (c) 2015 Nnoduka Eruchalu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

/**
 * GRVPlayerView is used to play the visual component of a video asset.
 * This view contains an AVPlayerLayer layer to which the  output of an AVPlayer
 * object can be directed.
 *
 * @ref https://developer.apple.com/library/ios/documentation/AudioVideo/Conceptual/AVFoundationPG/Articles/02_Playback.html#//apple_ref/doc/uid/TP40010188-CH3-SW2
 */
@interface GRVPlayerView : UIView

@property (strong, nonatomic) AVPlayer *player;

@end
