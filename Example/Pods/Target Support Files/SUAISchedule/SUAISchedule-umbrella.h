#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "Enums.h"
#import "Links.h"
#import "SUAILoader.h"
#import "SUAIAuditory.h"
#import "SUAIDay.h"
#import "SUAIEntity.h"
#import "SUAIPair.h"
#import "SUAISchedule.h"
#import "SUAIManager.h"
#import "SUAIParser.h"
#import "NSString+Enums.h"

FOUNDATION_EXPORT double SUAIScheduleVersionNumber;
FOUNDATION_EXPORT const unsigned char SUAIScheduleVersionString[];

