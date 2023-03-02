/**
SVGKDefine_Private.h

SVGKDefine define some common macro used for private header.
*/

#ifndef SVGKDefine_Private_h
#define SVGKDefine_Private_h

#import "SVGKDefine.h"

// These macro is only used inside framework project, does not expose to public header and effect user's define

#define SVGKIT_LOG_CONTEXT 556

void SVGKitLogError(NSString *myString, ...);

void SVGKitLogWarn(NSString *myString, ...);

void SVGKitLogInfo(NSString *myString, ...);

void SVGKitLogDebug(NSString *myString, ...);

void SVGKitLogVerbose(NSString *myString, ...);

#if DEBUG
static const int ddLogLevel = 31;
#else
static const int ddLogLevel = 3;
#endif

#if SVGKIT_MAC
#define NSStringFromCGRect(rect) NSStringFromRect(rect)
#define NSStringFromCGSize(size) NSStringFromSize(size)
#define NSStringFromCGPoint(point) NSStringFromPoint(point)
#endif

#endif /* SVGKDefine_Private_h */
