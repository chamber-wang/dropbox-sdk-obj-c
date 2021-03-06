///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMActiveWebSession;
@class DBTEAMDesktopClientSession;
@class DBTEAMListMemberDevicesResult;
@class DBTEAMMobileClientSession;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListMemberDevicesResult` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMListMemberDevicesResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// List of web sessions made by this team member
@property (nonatomic, readonly, nullable) NSArray<DBTEAMActiveWebSession *> *activeWebSessions;

/// List of desktop clients used by this team member
@property (nonatomic, readonly, nullable) NSArray<DBTEAMDesktopClientSession *> *desktopClientSessions;

/// List of mobile client used by this team member
@property (nonatomic, readonly, nullable) NSArray<DBTEAMMobileClientSession *> *mobileClientSessions;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param activeWebSessions List of web sessions made by this team member
/// @param desktopClientSessions List of desktop clients used by this team
/// member
/// @param mobileClientSessions List of mobile client used by this team member
///
/// @return An initialized instance.
///
- (instancetype)initWithActiveWebSessions:(nullable NSArray<DBTEAMActiveWebSession *> *)activeWebSessions
                    desktopClientSessions:(nullable NSArray<DBTEAMDesktopClientSession *> *)desktopClientSessions
                     mobileClientSessions:(nullable NSArray<DBTEAMMobileClientSession *> *)mobileClientSessions;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListMemberDevicesResult` struct.
///
@interface DBTEAMListMemberDevicesResultSerializer : NSObject

///
/// Serializes `DBTEAMListMemberDevicesResult` instances.
///
/// @param instance An instance of the `DBTEAMListMemberDevicesResult` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMListMemberDevicesResult` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMListMemberDevicesResult *)instance;

///
/// Deserializes `DBTEAMListMemberDevicesResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMListMemberDevicesResult` API object.
///
/// @return An instantiation of the `DBTEAMListMemberDevicesResult` object.
///
+ (DBTEAMListMemberDevicesResult *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
