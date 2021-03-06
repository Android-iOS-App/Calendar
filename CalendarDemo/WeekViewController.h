//
//  WeekViewController.h
//  CalendarDemo - Graphical Calendars Library for iOS
//
//  Copyright (c) 2014-2015 iOS Developer.. All rights reserved.
//

#import "MGCDayPlannerEKViewController.h"
#import "MainViewController.h"


@protocol WeekViewControllerDelegate <MGCDayPlannerEKViewControllerDelegate, CalendarViewControllerDelegate, UIViewControllerTransitioningDelegate>

@end


@interface WeekViewController : MGCDayPlannerEKViewController <CalendarViewControllerNavigation>

@property (nonatomic, weak) id<WeekViewControllerDelegate> delegate;

@end
