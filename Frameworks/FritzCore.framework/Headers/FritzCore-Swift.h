#if TARGET_OS_SIMULATOR
// Generated by Apple Swift version 5.3 (swiftlang-1200.0.16.9 clang-1200.0.22.5)
#ifndef FRITZCORE_SWIFT_H
#define FRITZCORE_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="FritzCore",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class FritzSession;
@class SessionManager;

SWIFT_CLASS_NAMED("Configuration") SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@interface FritzConfiguration : NSObject
@property (nonatomic, readonly, strong) FritzSession * _Nonnull session;
@property (nonatomic, readonly, strong) SessionManager * _Nonnull sessionManager;
- (nonnull instancetype)initWithSession:(FritzSession * _Nonnull)session OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Tracks Device Orientation changes.
SWIFT_CLASS_NAMED("DeviceOrientationManager")
@interface DeviceOrientationManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)handleOrientationChangedNotification:(NSNotification * _Nonnull)notification;
@end

/// The type of error encountered
typedef SWIFT_ENUM_NAMED(NSInteger, FritzErrorCode, "ErrorCode", open) {
  FritzErrorCodeModelCompilation = 0,
  FritzErrorCodeModelDecryption = 1,
  FritzErrorCodeModelDownload = 2,
  FritzErrorCodeSessionDisabled = 3,
  FritzErrorCodeModelInitialization = 4,
};

enum LogLevel : NSInteger;

SWIFT_CLASS_NAMED("FritzCore") SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@interface FritzCore : NSObject
/// Shared configuration
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) FritzConfiguration * _Nonnull configuration;)
+ (FritzConfiguration * _Nonnull)configuration SWIFT_WARN_UNUSED_RESULT;
/// Shared configuration
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DeviceOrientationManager * _Nonnull orientationManager;)
+ (DeviceOrientationManager * _Nonnull)orientationManager SWIFT_WARN_UNUSED_RESULT;
/// Configure the Fritz SDK
+ (void)configure;
/// Configure the Fritz SDK with a custom configuration
+ (void)configureWith:(FritzConfiguration * _Nonnull)configuration;
/// Enables Fritz SDK logging
/// \param level 
/// – 0: Debug logging
/// – 1: Info logging
/// – 2: Warn logging
/// – 3: Error logging
/// – 4: Disable logging
///
+ (void)setLogLevel:(enum LogLevel)level;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




@class NSCoder;

/// Class representing a Fritz-related error
/// note:
/// You subscribe to a notification to be notified anytime an error is encountered in the SDK.
/// seealso:
/// <code>Notification.Name.fritzError</code>
SWIFT_CLASS_NAMED("FritzError") SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@interface FritzError : NSError
/// Do not create an instance of this class directly
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithDomain:(NSString * _Nonnull)domain code:(NSInteger)code userInfo:(NSDictionary<NSString *, id> * _Nullable)dict SWIFT_UNAVAILABLE;
@end

/// Logging level for the SDK
/// <ul>
///   <li>
///     debug: log all logs
///   </li>
///   <li>
///     info: log info logs or higher
///   </li>
///   <li>
///     warn: log warning logs or higher
///   </li>
///   <li>
///     error: log error logs only
///   </li>
///   <li>
///     none: disable logging
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, LogLevel, open) {
  LogLevelDebug = 0,
  LogLevelInfo = 1,
  LogLevelWarn = 2,
  LogLevelError = 3,
  LogLevelNone = 4,
};


@interface NSNotification (SWIFT_EXTENSION(FritzCore))
/// Subscribe to this notification to receive Fritz-related errors
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull FritzErrorNotificationKey;)
+ (NSString * _Nonnull)FritzErrorNotificationKey SWIFT_WARN_UNUSED_RESULT;
/// Subscribe to this notification to know when a Fritz model has been updated
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull FritzModelUpdatedNotificationKey;)
+ (NSString * _Nonnull)FritzModelUpdatedNotificationKey SWIFT_WARN_UNUSED_RESULT;
/// Subscribe to this notification to know when a Fritz activeModel has changed
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull FritzModelActiveModelChangedNotificationKey;)
+ (NSString * _Nonnull)FritzModelActiveModelChangedNotificationKey SWIFT_WARN_UNUSED_RESULT;
@end


/// Encapsualtes your App Token and the Environment in which to send all Fritz-related requests.
/// note:
/// By default the SDK will read your App Token from the <code>FritzToken</code> line in your apps Info.plist. However, by providing a <code>Session</code> when conforming to <code>BaseIdentifiedModel</code> you have the ability to use models in your app that are from different Fritz accounts. This is useful if you are an SDK author and want to include Fritz as a dependency in your SDK without affecting the end-develoeprs ability to also use Fritz with their App Token.
SWIFT_CLASS_NAMED("Session") SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@interface FritzSession : NSObject
/// Default session to use throughout SDK
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) FritzSession * _Nonnull defaultSession;)
+ (FritzSession * _Nonnull)defaultSession SWIFT_WARN_UNUSED_RESULT;
/// Create a session
- (nonnull instancetype)initWithAppToken:(NSString * _Nonnull)apiKey apiUrl:(NSString * _Nonnull)apiUrl namespace:(NSString * _Nonnull)namespace_ OBJC_DESIGNATED_INITIALIZER;
/// Create a session
- (nonnull instancetype)initWithAppToken:(NSString * _Nonnull)apiKey;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Manages session data.
SWIFT_CLASS("_TtC9FritzCore14SessionManager") SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@interface SessionManager : NSObject
/// Internal testing queue for objective c to peek into the items queue.
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull trackRequestQueueItemTypes;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
#else
// Generated by Apple Swift version 5.3 (swiftlang-1200.0.16.9 clang-1200.0.22.5)
#ifndef FRITZCORE_SWIFT_H
#define FRITZCORE_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="FritzCore",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class FritzSession;
@class SessionManager;

SWIFT_CLASS_NAMED("Configuration") SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@interface FritzConfiguration : NSObject
@property (nonatomic, readonly, strong) FritzSession * _Nonnull session;
@property (nonatomic, readonly, strong) SessionManager * _Nonnull sessionManager;
- (nonnull instancetype)initWithSession:(FritzSession * _Nonnull)session OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Tracks Device Orientation changes.
SWIFT_CLASS_NAMED("DeviceOrientationManager")
@interface DeviceOrientationManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)handleOrientationChangedNotification:(NSNotification * _Nonnull)notification;
@end

/// The type of error encountered
typedef SWIFT_ENUM_NAMED(NSInteger, FritzErrorCode, "ErrorCode", open) {
  FritzErrorCodeModelCompilation = 0,
  FritzErrorCodeModelDecryption = 1,
  FritzErrorCodeModelDownload = 2,
  FritzErrorCodeSessionDisabled = 3,
  FritzErrorCodeModelInitialization = 4,
};

enum LogLevel : NSInteger;

SWIFT_CLASS_NAMED("FritzCore") SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@interface FritzCore : NSObject
/// Shared configuration
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) FritzConfiguration * _Nonnull configuration;)
+ (FritzConfiguration * _Nonnull)configuration SWIFT_WARN_UNUSED_RESULT;
/// Shared configuration
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) DeviceOrientationManager * _Nonnull orientationManager;)
+ (DeviceOrientationManager * _Nonnull)orientationManager SWIFT_WARN_UNUSED_RESULT;
/// Configure the Fritz SDK
+ (void)configure;
/// Configure the Fritz SDK with a custom configuration
+ (void)configureWith:(FritzConfiguration * _Nonnull)configuration;
/// Enables Fritz SDK logging
/// \param level 
/// – 0: Debug logging
/// – 1: Info logging
/// – 2: Warn logging
/// – 3: Error logging
/// – 4: Disable logging
///
+ (void)setLogLevel:(enum LogLevel)level;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




@class NSCoder;

/// Class representing a Fritz-related error
/// note:
/// You subscribe to a notification to be notified anytime an error is encountered in the SDK.
/// seealso:
/// <code>Notification.Name.fritzError</code>
SWIFT_CLASS_NAMED("FritzError") SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@interface FritzError : NSError
/// Do not create an instance of this class directly
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithDomain:(NSString * _Nonnull)domain code:(NSInteger)code userInfo:(NSDictionary<NSString *, id> * _Nullable)dict SWIFT_UNAVAILABLE;
@end

/// Logging level for the SDK
/// <ul>
///   <li>
///     debug: log all logs
///   </li>
///   <li>
///     info: log info logs or higher
///   </li>
///   <li>
///     warn: log warning logs or higher
///   </li>
///   <li>
///     error: log error logs only
///   </li>
///   <li>
///     none: disable logging
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, LogLevel, open) {
  LogLevelDebug = 0,
  LogLevelInfo = 1,
  LogLevelWarn = 2,
  LogLevelError = 3,
  LogLevelNone = 4,
};


@interface NSNotification (SWIFT_EXTENSION(FritzCore))
/// Subscribe to this notification to receive Fritz-related errors
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull FritzErrorNotificationKey;)
+ (NSString * _Nonnull)FritzErrorNotificationKey SWIFT_WARN_UNUSED_RESULT;
/// Subscribe to this notification to know when a Fritz model has been updated
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull FritzModelUpdatedNotificationKey;)
+ (NSString * _Nonnull)FritzModelUpdatedNotificationKey SWIFT_WARN_UNUSED_RESULT;
/// Subscribe to this notification to know when a Fritz activeModel has changed
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull FritzModelActiveModelChangedNotificationKey;)
+ (NSString * _Nonnull)FritzModelActiveModelChangedNotificationKey SWIFT_WARN_UNUSED_RESULT;
@end


/// Encapsualtes your App Token and the Environment in which to send all Fritz-related requests.
/// note:
/// By default the SDK will read your App Token from the <code>FritzToken</code> line in your apps Info.plist. However, by providing a <code>Session</code> when conforming to <code>BaseIdentifiedModel</code> you have the ability to use models in your app that are from different Fritz accounts. This is useful if you are an SDK author and want to include Fritz as a dependency in your SDK without affecting the end-develoeprs ability to also use Fritz with their App Token.
SWIFT_CLASS_NAMED("Session") SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@interface FritzSession : NSObject
/// Default session to use throughout SDK
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) FritzSession * _Nonnull defaultSession;)
+ (FritzSession * _Nonnull)defaultSession SWIFT_WARN_UNUSED_RESULT;
/// Create a session
- (nonnull instancetype)initWithAppToken:(NSString * _Nonnull)apiKey apiUrl:(NSString * _Nonnull)apiUrl namespace:(NSString * _Nonnull)namespace_ OBJC_DESIGNATED_INITIALIZER;
/// Create a session
- (nonnull instancetype)initWithAppToken:(NSString * _Nonnull)apiKey;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Manages session data.
SWIFT_CLASS("_TtC9FritzCore14SessionManager") SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@interface SessionManager : NSObject
/// Internal testing queue for objective c to peek into the items queue.
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull trackRequestQueueItemTypes;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
#endif
