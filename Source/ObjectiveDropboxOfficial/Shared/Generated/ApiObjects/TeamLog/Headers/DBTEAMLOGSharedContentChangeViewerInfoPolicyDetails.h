///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSharedContentChangeViewerInfoPolicyDetails;
@class DBTEAMLOGSharedContentViewerInfoPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedContentChangeViewerInfoPolicyDetails` struct.
///
/// Changed whether members can see who viewed the shared file or folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedContentChangeViewerInfoPolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Target asset index.
@property (nonatomic, readonly) NSNumber *targetIndex;

/// Original shared folder name.
@property (nonatomic, readonly, copy, nullable) NSString *originalFolderName;

/// Shared folder type. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *sharedFolderType;

/// New viewer info policy.
@property (nonatomic, readonly) DBTEAMLOGSharedContentViewerInfoPolicy *dNewValue;

/// Previous view info policy. Might be missing due to historical data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGSharedContentViewerInfoPolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param targetIndex Target asset index.
/// @param dNewValue New viewer info policy.
/// @param originalFolderName Original shared folder name.
/// @param sharedFolderType Shared folder type. Might be missing due to
/// historical data gap.
/// @param previousValue Previous view info policy. Might be missing due to
/// historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithTargetIndex:(NSNumber *)targetIndex
                          dNewValue:(DBTEAMLOGSharedContentViewerInfoPolicy *)dNewValue
                 originalFolderName:(nullable NSString *)originalFolderName
                   sharedFolderType:(nullable NSString *)sharedFolderType
                      previousValue:(nullable DBTEAMLOGSharedContentViewerInfoPolicy *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param targetIndex Target asset index.
/// @param dNewValue New viewer info policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithTargetIndex:(NSNumber *)targetIndex
                          dNewValue:(DBTEAMLOGSharedContentViewerInfoPolicy *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedContentChangeViewerInfoPolicyDetails`
/// struct.
///
@interface DBTEAMLOGSharedContentChangeViewerInfoPolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedContentChangeViewerInfoPolicyDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSharedContentChangeViewerInfoPolicyDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentChangeViewerInfoPolicyDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGSharedContentChangeViewerInfoPolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharedContentChangeViewerInfoPolicyDetails`
/// instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentChangeViewerInfoPolicyDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGSharedContentChangeViewerInfoPolicyDetails` object.
///
+ (DBTEAMLOGSharedContentChangeViewerInfoPolicyDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
