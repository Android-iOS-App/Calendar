//
//  NSCalendar+MGCAdditions.h
//  Graphical Calendars Library for iOS
//
//  Distributed under the MIT License
//  Get the latest version from here:
//
//	https://github.com/SymonhayMoroz/Calendar
//
//  Copyright (c) 2014-2015 iOS Developer.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
//

#import <Foundation/Foundation.h>


@interface NSCalendar (MGCAdditions)

+ (NSCalendar*)mgc_calendarFromPreferenceString:(NSString*)string;

- (NSDate*)mgc_startOfDayForDate:(NSDate*)date;
- (NSDate*)mgc_nextStartOfDayForDate:(NSDate*)date;
- (NSDate*)mgc_startOfWeekForDate:(NSDate*)date;
- (NSDate*)mgc_nextStartOfWeekForDate:(NSDate*)date;
- (NSDate*)mgc_startOfMonthForDate:(NSDate*)date;
- (NSDate*)mgc_nextStartOfMonthForDate:(NSDate*)date;
- (NSDate*)mgc_startOfYearForDate:(NSDate*)date;
- (NSUInteger)mgc_indexOfWeekInMonthForDate:(NSDate*)date;

- (BOOL)mgc_isDate:(NSDate*)date1 sameDayAsDate:(NSDate*)date2;
- (BOOL)mgc_isDate:(NSDate*)date1 sameMonthAsDate:(NSDate*)date2;

@end
