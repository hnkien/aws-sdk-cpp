/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/model/PolicySourceType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int user_HASH = HashingUtils::HashString("user");
static const int group_HASH = HashingUtils::HashString("group");
static const int role_HASH = HashingUtils::HashString("role");
static const int aws_managed_HASH = HashingUtils::HashString("aws-managed");
static const int user_managed_HASH = HashingUtils::HashString("user-managed");
static const int none_HASH = HashingUtils::HashString("none");

namespace Aws
{
namespace IAM
{
namespace Model
{
namespace PolicySourceTypeMapper
{
PolicySourceType GetPolicySourceTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == user_HASH)
  {
    return PolicySourceType::user;
  }
  else if (hashCode == group_HASH)
  {
    return PolicySourceType::group;
  }
  else if (hashCode == role_HASH)
  {
    return PolicySourceType::role;
  }
  else if (hashCode == aws_managed_HASH)
  {
    return PolicySourceType::aws_managed;
  }
  else if (hashCode == user_managed_HASH)
  {
    return PolicySourceType::user_managed;
  }
  else if (hashCode == none_HASH)
  {
    return PolicySourceType::none;
  }

  return PolicySourceType::NOT_SET;
}

Aws::String GetNameForPolicySourceType(PolicySourceType value)
{
  switch(value)
  {
  case PolicySourceType::user:
    return "user";
  case PolicySourceType::group:
    return "group";
  case PolicySourceType::role:
    return "role";
  case PolicySourceType::aws_managed:
    return "aws-managed";
  case PolicySourceType::user_managed:
    return "user-managed";
  case PolicySourceType::none:
    return "none";
  default:
    return "";
  }
}

} // namespace PolicySourceTypeMapper
} // namespace Model
} // namespace IAM
} // namespace Aws
