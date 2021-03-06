///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGPaperChangePolicyDetails;
@class DBTEAMLOGPaperPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperChangePolicyDetails` struct.
///
/// Enabled or disabled Dropbox Paper for the team.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGPaperChangePolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New Dropbox Paper policy.
@property (nonatomic, readonly) DBTEAMLOGPaperPolicy *dNewValue;

/// Previous Dropbox Paper policy. Might be missing due to historical data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGPaperPolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New Dropbox Paper policy.
/// @param previousValue Previous Dropbox Paper policy. Might be missing due to
/// historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGPaperPolicy *)dNewValue
                    previousValue:(nullable DBTEAMLOGPaperPolicy *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param dNewValue New Dropbox Paper policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGPaperPolicy *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PaperChangePolicyDetails` struct.
///
@interface DBTEAMLOGPaperChangePolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGPaperChangePolicyDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGPaperChangePolicyDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperChangePolicyDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGPaperChangePolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGPaperChangePolicyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperChangePolicyDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGPaperChangePolicyDetails` object.
///
+ (DBTEAMLOGPaperChangePolicyDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
