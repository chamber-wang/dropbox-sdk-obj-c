///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMRevokeDeviceSessionError;
@class DBTEAMRevokeDeviceSessionStatus;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RevokeDeviceSessionStatus` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMRevokeDeviceSessionStatus : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Result of the revoking request
@property (nonatomic, readonly) NSNumber *success;

/// The error cause in case of a failure
@property (nonatomic, readonly, nullable) DBTEAMRevokeDeviceSessionError *errorType;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param success Result of the revoking request
/// @param errorType The error cause in case of a failure
///
/// @return An initialized instance.
///
- (instancetype)initWithSuccess:(NSNumber *)success errorType:(nullable DBTEAMRevokeDeviceSessionError *)errorType;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param success Result of the revoking request
///
/// @return An initialized instance.
///
- (instancetype)initWithSuccess:(NSNumber *)success;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `RevokeDeviceSessionStatus` struct.
///
@interface DBTEAMRevokeDeviceSessionStatusSerializer : NSObject

///
/// Serializes `DBTEAMRevokeDeviceSessionStatus` instances.
///
/// @param instance An instance of the `DBTEAMRevokeDeviceSessionStatus` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMRevokeDeviceSessionStatus` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMRevokeDeviceSessionStatus *)instance;

///
/// Deserializes `DBTEAMRevokeDeviceSessionStatus` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMRevokeDeviceSessionStatus` API object.
///
/// @return An instantiation of the `DBTEAMRevokeDeviceSessionStatus` object.
///
+ (DBTEAMRevokeDeviceSessionStatus *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
