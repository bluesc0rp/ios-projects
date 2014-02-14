//
//  CRTimeRangePickerCell.h
//  AlarmClock
//
//  Created by Cornelia Rehbein on 13/02/14.
//  Copyright (c) 2014 Cornelia Rehbein. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CRTimerCell : UITableViewCell

@property(strong, nonatomic) UILabel* countDownLabel;
@property(strong, nonatomic) UIDatePicker* timePicker;

- (NSTimeInterval)currentTimeInterval;

- (void)startTimerWithTimeInterval:(NSTimeInterval)timeInSeconds;
- (void)updateTimerWithTimeInterval:(NSTimeInterval)remainingTimeInSeconds;
- (void)stopTimer;

@end
