///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMRevokeLinkedAppError;
@class DBTEAMRevokeLinkedAppStatus;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RevokeLinkedAppStatus` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMRevokeLinkedAppStatus : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Result of the revoking request
@property (nonatomic, readonly) NSNumber *success;

/// The error cause in case of a failure
@property (nonatomic, readonly, nullable) DBTEAMRevokeLinkedAppError *errorType;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param success Result of the revoking request
/// @param errorType The error cause in case of a failure
///
/// @return An initialized instance.
///
- (instancetype)initWithSuccess:(NSNumber *)success errorType:(nullable DBTEAMRevokeLinkedAppError *)errorType;

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
/// The serialization class for the `RevokeLinkedAppStatus` struct.
///
@interface DBTEAMRevokeLinkedAppStatusSerializer : NSObject

///
/// Serializes `DBTEAMRevokeLinkedAppStatus` instances.
///
/// @param instance An instance of the `DBTEAMRevokeLinkedAppStatus` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMRevokeLinkedAppStatus` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMRevokeLinkedAppStatus *)instance;

///
/// Deserializes `DBTEAMRevokeLinkedAppStatus` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMRevokeLinkedAppStatus` API object.
///
/// @return An instantiation of the `DBTEAMRevokeLinkedAppStatus` object.
///
+ (DBTEAMRevokeLinkedAppStatus *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
