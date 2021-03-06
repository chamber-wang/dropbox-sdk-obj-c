///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSharedContentChangeDownloadsPolicyDetails;
@class DBTEAMLOGSharedContentDownloadsPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedContentChangeDownloadsPolicyDetails` struct.
///
/// Changed whether members can download the shared file or folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedContentChangeDownloadsPolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Target asset index.
@property (nonatomic, readonly) NSNumber *targetIndex;

/// Original shared folder name.
@property (nonatomic, readonly, copy, nullable) NSString *originalFolderName;

/// Shared folder type. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *sharedFolderType;

/// New downlaod policy.
@property (nonatomic, readonly) DBTEAMLOGSharedContentDownloadsPolicy *dNewValue;

/// Previous downlaod policy. Might be missing due to historical data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGSharedContentDownloadsPolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param targetIndex Target asset index.
/// @param dNewValue New downlaod policy.
/// @param originalFolderName Original shared folder name.
/// @param sharedFolderType Shared folder type. Might be missing due to
/// historical data gap.
/// @param previousValue Previous downlaod policy. Might be missing due to
/// historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithTargetIndex:(NSNumber *)targetIndex
                          dNewValue:(DBTEAMLOGSharedContentDownloadsPolicy *)dNewValue
                 originalFolderName:(nullable NSString *)originalFolderName
                   sharedFolderType:(nullable NSString *)sharedFolderType
                      previousValue:(nullable DBTEAMLOGSharedContentDownloadsPolicy *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param targetIndex Target asset index.
/// @param dNewValue New downlaod policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithTargetIndex:(NSNumber *)targetIndex
                          dNewValue:(DBTEAMLOGSharedContentDownloadsPolicy *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedContentChangeDownloadsPolicyDetails`
/// struct.
///
@interface DBTEAMLOGSharedContentChangeDownloadsPolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedContentChangeDownloadsPolicyDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSharedContentChangeDownloadsPolicyDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentChangeDownloadsPolicyDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGSharedContentChangeDownloadsPolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharedContentChangeDownloadsPolicyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentChangeDownloadsPolicyDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGSharedContentChangeDownloadsPolicyDetails` object.
///
+ (DBTEAMLOGSharedContentChangeDownloadsPolicyDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
