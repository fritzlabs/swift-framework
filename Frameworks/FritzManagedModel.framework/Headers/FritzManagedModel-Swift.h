// Generated by Apple Swift version 4.2.1 (swiftlang-1000.11.42 clang-1000.11.45.1)
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
#include <objc/NSObject.h>
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
#if __has_feature(modules)
@import CoreML;
@import Foundation;
@import FritzCore;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="FritzManagedModel",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class MLModel;

/// Manages an MLModel instance
SWIFT_PROTOCOL_NAMED("ReadModelProvider") SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@protocol FritzReadModelProvider
/// A read model
@property (nonatomic, readonly, strong) MLModel * _Nonnull model;
@optional
/// The url of the compiled model url in the bundle.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSURL * _Nonnull urlOfModelInThisBundle;)
+ (NSURL * _Nonnull)urlOfModelInThisBundle SWIFT_WARN_UNUSED_RESULT;
@end

@class FritzConfiguration;

/// This is the main entry point to exposing Fritz functionality on your Xcode-generated model classes.
/// seealso:
///
/// <code>SwiftIdentifiedModel</code>
/// <code>ObjcIdentifiedModel</code>
/// note:
/// You should not conform your generated class to this protocol directly, instead conform to either <code>SwiftIdentifiedModel</code> when using Swift, or <code>ObjcIdentifiedModel</code> when using Objective-C.
SWIFT_PROTOCOL_NAMED("BaseIdentifiedModel") SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@protocol FritzBaseIdentifiedModel <FritzReadModelProvider>
/// The Fritz model identifier that matches this class.
/// note:
/// You should copy this identifier from the Fritz dashboard
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull fritzModelIdentifier;)
+ (NSString * _Nonnull)fritzModelIdentifier SWIFT_WARN_UNUSED_RESULT;
/// This is the version of the model that is packaged with your application at submission time.
/// note:
/// As you upload newer versions of your model to the Fritz dashboard, clients will download those versions and begin using them automatically. This version is specifically for tracking the version that is installed on the device when they first download the app from the App Store. In order to maintain accurate tracking you should update this version number when you package a later version of a model into your app and resubmit to the App Store with that later version.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger fritzPackagedModelVersion;)
+ (NSInteger)fritzPackagedModelVersion SWIFT_WARN_UNUSED_RESULT;
@optional
/// Signifies whether or not the model is encrypted.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<NSNumber *> * _Nonnull fritzEncryptionSeed;)
+ (NSArray<NSNumber *> * _Nonnull)fritzEncryptionSeed SWIFT_WARN_UNUSED_RESULT;
/// A Fritz configuration encapsualtes your App Token and the Environment in which to send all Fritz-related requests.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) FritzConfiguration * _Nonnull fritzConfiguration;)
+ (FritzConfiguration * _Nonnull)fritzConfiguration SWIFT_WARN_UNUSED_RESULT;
/// Specifies whether or not phone must be connected to wifi for model downloads to happen. If not set, defaults to false, models will download over cell connections.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL fritzWifiRequiredForDownload;)
+ (BOOL)fritzWifiRequiredForDownload SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@interface FritzCore (SWIFT_EXTENSION(FritzManagedModel))
/// Removed in v1.0.0-beta.9
/// seealso:
/// <code>updateModelIfNeeded:completionHandler:</code>
+ (void)setupModel:(NSArray<Class <FritzBaseIdentifiedModel>> * _Nonnull)models completionHandler:(void (^ _Nonnull)(NSError * _Nullable))completionHandler SWIFT_UNAVAILABLE_MSG("This method is no longer needed. To manually trigger a model update, call Model.updateIfNeeded(_:)");
/// Deprecated in v1.0.0-beta.9
/// seealso:
/// <code>updateModelIfNeeded:completionHandler:</code>
+ (void)setupModel:(NSArray<Class <FritzBaseIdentifiedModel>> * _Nonnull)models SWIFT_UNAVAILABLE_MSG("This method is no longer needed. To manually trigger a model update, call Model.updateIfNeeded(_:)");
@end

@class FritzModelConfiguration;
@class SessionManager;
@class MLModelDescription;
@protocol MLFeatureProvider;
@class MLPredictionOptions;

SWIFT_CLASS_NAMED("FritzMLModel") SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@interface FritzMLModel : MLModel
@property (nonatomic, readonly, strong) FritzModelConfiguration * _Nonnull activeModelConfig;
/// Initialize model with an model type
- (nonnull instancetype)initWithIdentifiedModel:(MLModel * _Nonnull)model config:(FritzModelConfiguration * _Nonnull)activeModelConfig sessionManager:(SessionManager * _Nonnull)sessionManager OBJC_DESIGNATED_INITIALIZER;
/// Proxy model description
@property (nonatomic, readonly, strong) MLModelDescription * _Nonnull modelDescription;
/// Override prediction method and pass input/output to analytics
- (id <MLFeatureProvider> _Nullable)predictionFromFeatures:(id <MLFeatureProvider> _Nonnull)input error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
/// Override prediction method and pass input/output to analytics
- (id <MLFeatureProvider> _Nullable)predictionFromFeatures:(id <MLFeatureProvider> _Nonnull)input options:(MLPredictionOptions * _Nonnull)options error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// Coordinates tasks for interacting with Fritz Models.
SWIFT_CLASS("_TtC17FritzManagedModel17FritzManagedModel") SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@interface FritzManagedModel : NSObject
/// Currenly active model configuration.
@property (nonatomic, strong) FritzModelConfiguration * _Nonnull activeModelConfig;
/// Model Identifier of active model.
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
/// Model Version number of active model.
@property (nonatomic, readonly) NSInteger version;
/// If true, the active model config version is downloaded.
@property (nonatomic, readonly) BOOL isVersionDownloaded;
/// If true, there is at least one active model downloaded
@property (nonatomic, readonly) BOOL hasDownloadedModel;
/// The type of the identified model, if initialized from a conformed model.
/// Storing this gives us access to the url of the identified model, so you can call
/// self.loadModel() and load the model included in the package.
@property (nonatomic, readonly) Class <FritzBaseIdentifiedModel> _Nullable packagedIdentifiedModelType;
/// Creates FritzManagedModel from model configuration.
/// \param modelConfig Specifies which model class is operating on.
///
/// \param sessionManager Optional SessionManager. If not included uses default globally shared SessionManager.
///
/// \param loadActiveFromDisk If true (default) will load latest model downloaded over the air.
///
/// \param packagedIdentifiedModelType Optional identified model type packaged in app.
///
- (nonnull instancetype)initWithModelConfig:(FritzModelConfiguration * _Nonnull)modelConfig sessionManager:(SessionManager * _Nullable)sessionManager loadActive:(BOOL)loadActiveFromDisk packagedModelType:(Class <FritzBaseIdentifiedModel> _Nullable)packagedIdentifiedModelType OBJC_DESIGNATED_INITIALIZER;
/// Creates FritzManagedModel from a packaged MLModel with BaseIdentifiedModel extension.  Used when model is included in application package.
/// \param identifiedModel Included MLModel class.
///
- (nonnull instancetype)initWithIdentifiedModel:(id <FritzBaseIdentifiedModel> _Nonnull)identifiedModel;
/// Creates FritzManagedModel from a packaged MLModel with BaseIdentifiedModel extension.  Used when model is included in application package.
/// \param identifiedModelType Type of conformed model.
///
- (nonnull instancetype)initWithIdentifiedModelType:(Class <FritzBaseIdentifiedModel> _Nonnull)identifiedModelType;
/// Deletes all state relating to managed model version.
/// This removes all downloaded versions for this model identifier and any cached
/// server values for it.
- (BOOL)deleteAndReturnError:(NSError * _Nullable * _Nullable)error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end






SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@interface FritzManagedModel (SWIFT_EXTENSION(FritzManagedModel))
/// Check server for latest active model defined in webapp and update local model state if different from webapp.
/// If a model is updated, an .activeModelChanged notification is broadcast.
/// \param completionHandler Completion handler called with result of update operation.
///
- (void)updateModelIfNeededWithSkipCache:(BOOL)skipCache completionHandler:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completionHandler;
@end


SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@interface FritzManagedModel (SWIFT_EXTENSION(FritzManagedModel))
- (void)downloadAndFetchModelWithCompletionHandler:(void (^ _Nonnull)(FritzMLModel * _Nullable, NSError * _Nullable))completionHandler;
/// Loads previously downloaded model from disk or uses the identified model included in the app.
/// \param identifiedModel Identified model included with bundle.
///
///
/// returns:
/// MLModel for activeModelConfig
- (MLModel * _Nonnull)loadMLModelWithIdentifiedModel:(id <FritzBaseIdentifiedModel> _Nonnull)identifiedModel SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@interface FritzManagedModel (SWIFT_EXTENSION(FritzManagedModel))
/// Load FritzMLModel from stored Fritz Model (as defined by active model metadata) or model included in app bundle.
/// \param identifiedModel Conformed MLModel.
///
///
/// returns:
/// FritzMLModel.
- (FritzMLModel * _Nonnull)loadModelWithIdentifiedModel:(id <FritzBaseIdentifiedModel> _Nonnull)identifiedModel SWIFT_WARN_UNUSED_RESULT;
/// Loads a model previously downloaded OTA if it exists.
///
/// returns:
/// nil if no model downloaded or FritzMLModel if it does.
- (FritzMLModel * _Nullable)loadModel SWIFT_WARN_UNUSED_RESULT;
/// Loads model when no model is included in application bundle.  If a model has previously been downloaded, it will be used. If not, it will be downloaded from Fritz.
/// If <code>fetchModel</code> is called multiple times and a download request is already happening, a new downloaded request will not be started.  All completionHandlers will be resolved when active request is completed.
/// \param completionHandler Completion handler returning ManagedMLModel if successfully loaded model.
///
- (void)fetchModelWithCompletionHandler:(void (^ _Nonnull)(FritzMLModel * _Nullable, NSError * _Nullable))completionHandler;
/// Trigger model download without waiting for response.
- (void)startDownload;
@end


SWIFT_CLASS_NAMED("FritzModelConfiguration") SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@interface FritzModelConfiguration : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull identifier;
@property (nonatomic, readonly) NSInteger version;
/// Tags data set in webapp.  Pulls from most recently updated active server response if one exists.
@property (nonatomic, copy) NSArray<NSString *> * _Nullable tags;
/// Model Metadata set in webapp. Uses cached server model info if it exists.
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nullable metadata;
/// Model downloads will only happen
@property (nonatomic) BOOL wifiRequiredForModelDownload;
/// Whether or not this model should use CPU and GPU only (not using the ANE).
@property (nonatomic, readonly) BOOL cpuAndGPUOnly;
@property (nonatomic, readonly) BOOL isOTA;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)initWithIdentifier:(NSString * _Nonnull)identifier version:(NSInteger)version encryptionSeed:(NSArray<NSNumber *> * _Nullable)encryptionSeed src:(NSURL * _Nullable)src tags:(NSArray<NSString *> * _Nullable)tags isWifiRequiredForDownloads:(BOOL)wifiRequiredForModelDownload metadata:(NSDictionary<NSString *, NSString *> * _Nullable)metadata cpuAndGPUOnly:(BOOL)cpuAndGPUOnly OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithIdentifier:(NSString * _Nonnull)identifier version:(NSInteger)version cpuAndGPUOnly:(BOOL)cpuAndGPUOnly;
- (nonnull instancetype)initFromIdentifiedModel:(id <FritzBaseIdentifiedModel> _Nonnull)identifiedModel;
- (nonnull instancetype)initFromIdentifiedModelType:(Class <FritzBaseIdentifiedModel> _Nonnull)identifiedModelType;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSUInteger hash;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_AVAILABILITY(ios,introduced=11.0)
@interface FritzModelConfiguration (SWIFT_EXTENSION(FritzManagedModel))
/// Create managed model from current FritzModelConfiguration
- (FritzManagedModel * _Nonnull)buildManagedModel SWIFT_WARN_UNUSED_RESULT;
@end




/// Manages interacting with models using tags created in the webapp.
SWIFT_CLASS_NAMED("ModelTagManager") SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@interface ModelTagManager : NSObject
/// Tags applied to models to query for.
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull tags;
- (nonnull instancetype)initWithTags:(NSArray<NSString *> * _Nonnull)tags sessionManager:(SessionManager * _Nullable)sessionManager OBJC_DESIGNATED_INITIALIZER;
/// Gets managed models matching tags, pulling from data already queries from API.
/// Does not query the API, only checks model data stored locally. To update tags with latest known data,
/// use <code>fetchModelsForTags</code>.
/// \param wifiRequiredForModelDownload Optional value to require wifi when downloading models loaded from tags.
///
///
/// returns:
/// List of FritzManagedModel matching tags.
- (NSArray<FritzManagedModel *> * _Nonnull)getModelsForTagsWithWifiRequired:(BOOL)wifiRequiredForModelDownload SWIFT_WARN_UNUSED_RESULT;
/// Fetch FritzManagedModels from Fritz API that match tags. If the request fails for any reason, it
/// will query local store and return existing models that match models.
/// \param wifiRequiredForModelDownload Optional value to require wifi when downloading models loaded from tags.
///
/// \param completionHandler Called after models for tags are loaded.
///
- (void)fetchModelsForTagsWithWifiRequired:(BOOL)wifiRequiredForModelDownload completionHandler:(void (^ _Nonnull)(NSArray<FritzManagedModel *> * _Nullable, NSError * _Nullable))completionHandler;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@interface NSObject (SWIFT_EXTENSION(FritzManagedModel))
/// Injects a Fritz managed model into this instance allowing the SDK to instrument model predications.
/// warning:
/// When Xcode generates a Swift class based on a MLModel file it provides a read-write model property that allows the SDK to safely overwrite the model with a Fritz managed model. When using Objective-C, Xcode generates a class with a readonly model property which forces us to use <code>setValue:forKey:</code> instead of a type-safe setter. It’s crucial to test your apps on future beta versions of iOS as Apple could change the underlying implementation of the model property causing this method to crash. If this is the case, we will have updated SDKs ready for those newer versions.
/// note:
/// This method will have no affect on any object that does not conform to <code>ObjcIdentifiedModel</code>.
///
/// returns:
/// The same instance that this method was called.
- (nonnull instancetype)fritz SWIFT_WARN_UNUSED_RESULT;
/// Manually check for an OTA model update
- (void)updateIfNeeded;
/// Manually check for an OTA model update
+ (void)updateIfNeeded;
@end


/// Conform your Xcode-generated Objective-C class to this protocol to expose Fritz functionality
/// seealso:
/// <code>BaseIdentifiedModel</code>
SWIFT_PROTOCOL_NAMED("ObjcIdentifiedModel")
@protocol FritzObjcIdentifiedModel <FritzBaseIdentifiedModel>
@end



/// Manages an MLModel instance
SWIFT_PROTOCOL_NAMED("ReadWriteModelProvider") SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@protocol FritzReadWriteModelProvider <FritzReadModelProvider>
/// A read-write model
@property (nonatomic, strong) MLModel * _Nonnull model;
@end


















/// Conform your Xcode-generated Swift class to this protocol to expose Fritz functionality
/// seealso:
/// <code>BaseIdentifiedModel</code>
SWIFT_PROTOCOL_NAMED("SwiftIdentifiedModel") SWIFT_AVAILABILITY(watchos,introduced=4.0) SWIFT_AVAILABILITY(tvos,introduced=11.0) SWIFT_AVAILABILITY(ios,introduced=11.0) SWIFT_AVAILABILITY(macos,introduced=10.13)
@protocol FritzSwiftIdentifiedModel <FritzBaseIdentifiedModel, FritzReadWriteModelProvider>
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
