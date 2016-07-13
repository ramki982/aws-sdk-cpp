/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once

#include <aws/core/client/CoreErrors.h>
#include <aws/ec2/EC2_EXPORTS.h>

namespace Aws
{
namespace EC2
{
enum class EC2Errors
{
  //From Core//
  //////////////////////////////////////////////////////////////////////////////////////////
  INCOMPLETE_SIGNATURE = 0,
  INTERNAL_FAILURE = 1,
  INVALID_ACTION = 2,
  INVALID_CLIENT_TOKEN_ID = 3,
  INVALID_PARAMETER_COMBINATION = 4,
  INVALID_QUERY_PARAMETER = 5,
  INVALID_PARAMETER_VALUE = 6,
  MISSING_ACTION = 7, // SDK should never allow
  MISSING_AUTHENTICATION_TOKEN = 8, // SDK should never allow
  MISSING_PARAMETER = 9, // SDK should never allow
  OPT_IN_REQUIRED = 10,
  REQUEST_EXPIRED = 11,
  SERVICE_UNAVAILABLE = 12,
  THROTTLING = 13,
  VALIDATION = 14,
  ACCESS_DENIED = 15,
  RESOURCE_NOT_FOUND = 16,
  UNRECOGNIZED_CLIENT = 17,
  MALFORMED_QUERY_STRING = 18,
  NETWORK_CONNECTION = 99,
  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////

  ACTIVE_VPC_PEERING_CONNECTION_PER_VPC_LIMIT_EXCEEDED= static_cast<int>(Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  ADDRESS_LIMIT_EXCEEDED,
  ATTACHMENT_LIMIT_EXCEEDED,
  BUNDLING_IN_PROGRESS,
  CANNOT_DELETE,
  CONCURRENT_SNAPSHOT_LIMIT_EXCEEDED,
  CONCURRENT_TAG_ACCESS,
  CUSTOMER_GATEWAY_LIMIT_EXCEEDED,
  DEPENDENCY_VIOLATION,
  DISK_IMAGE_SIZE_TOO_LARGE,
  ENCRYPTED_VOLUMES_NOT_SUPPORTED,
  FILTER_LIMIT_EXCEEDED,
  FLOW_LOGS_LIMIT_EXCEEDED,
  FLOW_LOG_ALREADY_EXISTS,
  GATEWAY__NOT_ATTACHED,
  INCORRECT_INSTANCE_STATE,
  INCORRECT_STATE,
  INSTANCE_ALREADY_LINKED,
  INSTANCE_LIMIT_EXCEEDED,
  INSUFFICIENT_FREE_ADDRESSES_IN_SUBNET,
  INSUFFICIENT_RESERVED_INSTANCES_CAPACITY,
  INTERNET_GATEWAY_LIMIT_EXCEEDED,
  INVALID_ADDRESS_I_D__NOT_FOUND,
  INVALID_ADDRESS__MALFORMED,
  INVALID_ADDRESS__NOT_FOUND,
  INVALID_ALLOCATION_I_D__NOT_FOUND,
  INVALID_ASSOCIATION_I_D__NOT_FOUND,
  INVALID_ATTACHMENT_I_D__NOT_FOUND,
  INVALID_ATTACHMENT__NOT_FOUND,
  INVALID_A_M_I_ATTRIBUTE_ITEM_VALUE,
  INVALID_A_M_I_I_D__MALFORMED,
  INVALID_A_M_I_I_D__NOT_FOUND,
  INVALID_A_M_I_I_D__UNAVAILABLE,
  INVALID_A_M_I_NAME__DUPLICATE,
  INVALID_A_M_I_NAME__MALFORMED,
  INVALID_BLOCK_DEVICE_MAPPING,
  INVALID_BUNDLE_I_D__NOT_FOUND,
  INVALID_CONVERSION_TASK_ID,
  INVALID_CUSTOMER_GATEWAY_ID__MALFORMED,
  INVALID_CUSTOMER_GATEWAY_I_D__NOT_FOUND,
  INVALID_CUSTOMER_GATEWAY__DUPLICATE_IP_ADDRESS,
  INVALID_DEVICE__IN_USE,
  INVALID_DHCP_OPTIONS_ID__MALFORMED,
  INVALID_DHCP_OPTIONS_I_D__NOT_FOUND,
  INVALID_DHCP_OPTION_I_D__NOT_FOUND,
  INVALID_EXPORT_TASK_I_D__NOT_FOUND,
  INVALID_FILTER,
  INVALID_FLOW_LOG_ID__NOT_FOUND,
  INVALID_FORMAT,
  INVALID_GATEWAY_I_D__NOT_FOUND,
  INVALID_GROUP_ID__MALFORMED,
  INVALID_GROUP__DUPLICATE,
  INVALID_GROUP__IN_USE,
  INVALID_GROUP__NOT_FOUND,
  INVALID_GROUP__RESERVED,
  INVALID_INPUT,
  INVALID_INSTANCE_ATTRIBUTE_VALUE,
  INVALID_INSTANCE_I_D,
  INVALID_INSTANCE_I_D__MALFORMED,
  INVALID_INSTANCE_I_D__NOT_FOUND,
  INVALID_INSTANCE_I_D__NOT_LINKABLE,
  INVALID_INSTANCE_TYPE,
  INVALID_INTERFACE__IP_ADDRESS_LIMIT_EXCEEDED,
  INVALID_INTERNET_GATEWAY_I_D__NOT_FOUND,
  INVALID_I_D,
  INVALID_I_P_ADDRESS__IN_USE,
  INVALID_KEY_PAIR__DUPLICATE,
  INVALID_KEY_PAIR__FORMAT,
  INVALID_KEY_PAIR__NOT_FOUND,
  INVALID_KEY__FORMAT,
  INVALID_MANIFEST,
  INVALID_NETWORK_ACL_ENTRY__NOT_FOUND,
  INVALID_NETWORK_ACL_I_D__NOT_FOUND,
  INVALID_NETWORK_INTERFACE_ATTACHMENT_I_D__MALFORMED,
  INVALID_NETWORK_INTERFACE_ID__MALFORMED,
  INVALID_NETWORK_INTERFACE_I_D__NOT_FOUND,
  INVALID_OPTION__CONFLICT,
  INVALID_PERMISSION__DUPLICATE,
  INVALID_PERMISSION__MALFORMED,
  INVALID_PERMISSION__NOT_FOUND,
  INVALID_PLACEMENT_GROUP__DUPLICATE,
  INVALID_PLACEMENT_GROUP__IN_USE,
  INVALID_PLACEMENT_GROUP__UNKNOWN,
  INVALID_POLICY_DOCUMENT,
  INVALID_PREFIX_LIST_ID__MALFORMED,
  INVALID_PREFIX_LIST_ID__NOT_FOUND,
  INVALID_REQUEST,
  INVALID_RESERVATION_I_D__MALFORMED,
  INVALID_RESERVATION_I_D__NOT_FOUND,
  INVALID_RESERVED_INSTANCES_ID,
  INVALID_RESERVED_INSTANCES_OFFERING_ID,
  INVALID_ROUTE_TABLE_ID__MALFORMED,
  INVALID_ROUTE_TABLE_I_D__NOT_FOUND,
  INVALID_ROUTE__MALFORMED,
  INVALID_ROUTE__NOT_FOUND,
  INVALID_SECURITY_GROUP_I_D__NOT_FOUND,
  INVALID_SECURITY__REQUEST_HAS_EXPIRED,
  INVALID_SERVICE_NAME,
  INVALID_SNAPSHOT_I_D__MALFORMED,
  INVALID_SNAPSHOT__IN_USE,
  INVALID_SNAPSHOT__NOT_FOUND,
  INVALID_SPOT_DATAFEED__NOT_FOUND,
  INVALID_SPOT_FLEET_REQUEST_CONFIG,
  INVALID_SPOT_FLEET_REQUEST_ID__MALFORMED,
  INVALID_SPOT_FLEET_REQUEST_ID__NOT_FOUND,
  INVALID_SPOT_INSTANCE_REQUEST_I_D__MALFORMED,
  INVALID_SPOT_INSTANCE_REQUEST_I_D__NOT_FOUND,
  INVALID_STATE,
  INVALID_STATE_TRANSITION,
  INVALID_SUBNET_I_D__NOT_FOUND,
  INVALID_SUBNET__CONFLICT,
  INVALID_USER_I_D__MALFORMED,
  INVALID_VOLUME_I_D__DUPLICATE,
  INVALID_VOLUME_I_D__MALFORMED,
  INVALID_VOLUME_I_D__ZONE_MISMATCH,
  INVALID_VOLUME__NOT_FOUND,
  INVALID_VOLUME__ZONE_MISMATCH,
  INVALID_VPC_ENDPOINT_ID__MALFORMED,
  INVALID_VPC_ENDPOINT_ID__NOT_FOUND,
  INVALID_VPC_I_D__NOT_FOUND,
  INVALID_VPC_PEERING_CONNECTION_ID__MALFORMED,
  INVALID_VPC_PEERING_CONNECTION_I_D__NOT_FOUND,
  INVALID_VPC_RANGE,
  INVALID_VPC_STATE,
  INVALID_VPN_CONNECTION_I_D,
  INVALID_VPN_CONNECTION_I_D__NOT_FOUND,
  INVALID_VPN_GATEWAY_ATTACHMENT__NOT_FOUND,
  INVALID_VPN_GATEWAY_I_D__NOT_FOUND,
  INVALID_ZONE__NOT_FOUND,
  LEGACY_SECURITY_GROUP,
  MAX_I_O_P_S_LIMIT_EXCEEDED,
  MAX_SPOT_FLEET_REQUEST_COUNT_EXCEEDED,
  MAX_SPOT_INSTANCE_COUNT_EXCEEDED,
  NETWORK_ACL_ENTRY_ALREADY_EXISTS,
  NETWORK_ACL_ENTRY_LIMIT_EXCEEDED,
  NETWORK_ACL_LIMIT_EXCEEDED,
  NON_E_B_S_INSTANCE,
  NOT_EXPORTABLE,
  OPERATION_NOT_PERMITTED,
  OUTSTANDING_VPC_PEERING_CONNECTION_LIMIT_EXCEEDED,
  PENDING_SNAPSHOT_LIMIT_EXCEEDED,
  PRIVATE_IP_ADDRESS_LIMIT_EXCEEDED,
  REQUEST_RESOURCE_COUNT_EXCEEDED,
  RESERVED_INSTANCES_LIMIT_EXCEEDED,
  RESOURCE_COUNT_EXCEEDED,
  RESOURCE_LIMIT_EXCEEDED,
  RESOURCE__ALREADY_ASSOCIATED,
  ROUTE_ALREADY_EXISTS,
  ROUTE_LIMIT_EXCEEDED,
  ROUTE_TABLE_LIMIT_EXCEEDED,
  RULES_PER_SECURITY_GROUP_LIMIT_EXCEEDED,
  SECURITY_GROUPS_PER_INSTANCE_LIMIT_EXCEEDED,
  SECURITY_GROUPS_PER_INTERFACE_LIMIT_EXCEEDED,
  SECURITY_GROUP_LIMIT_EXCEEDED,
  SIGNATURE_DOES_NOT_MATCH,
  SNAPSHOT_LIMIT_EXCEEDED,
  SUBNET_LIMIT_EXCEEDED,
  TAG_LIMIT_EXCEEDED,
  UNKNOWN_VOLUME_TYPE,
  UNSUPPORTED,
  UNSUPPORTED_OPERATION,
  VOLUME_IN_USE,
  VOLUME_LIMIT_EXCEEDED,
  VOLUME_TYPE_NOT_AVAILABLE_IN_ZONE,
  VPC_CIDR_CONFLICT,
  VPC_ENDPOINT_LIMIT_EXCEEDED,
  VPC_LIMIT_EXCEEDED,
  VPC_PEERING_CONNECTION_ALREADY_EXISTS,
  VPN_CONNECTION_LIMIT_EXCEEDED,
  VPN_GATEWAY_ATTACHMENT_LIMIT_EXCEEDED,
  VPN_GATEWAY_LIMIT_EXCEEDED,
  V_P_C_ID_NOT_SPECIFIED,
  V_P_C_RESOURCE_NOT_SPECIFIED
};
namespace EC2ErrorMapper
{
  AWS_EC2_API Client::AWSError<Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace EC2
} // namespace Aws