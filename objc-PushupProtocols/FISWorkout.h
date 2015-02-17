//
//  Workout.h
//  objc-PushupProtocols
//
//  Created by Zachary Drossman on 2/12/15.
//  Copyright (c) 2015 Zachary Drossman. All rights reserved.
//

#import <Foundation/Foundation.h>
@class FISExercise;

@interface FISWorkout : NSObject

@property (strong, nonatomic) NSDate *timestamp;
@property (strong, nonatomic) NSNumber *reps;
@property (strong, nonatomic) NSNumber *sets;
@property (strong, nonatomic) NSNumber *numberOfWorkoutBuddies;
@property (strong, nonatomic) NSDate* computedDate;
@property (strong, nonatomic) FISExercise *exercise;

-(instancetype)initWithReps:(NSNumber *)reps sets:(NSNumber *)sets numberOfWorkoutBuddies:(NSNumber *)workoutBuddies timeStamp:(NSDate *)timestamp;

@end
