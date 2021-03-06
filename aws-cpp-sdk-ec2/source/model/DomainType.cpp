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
#include <aws/ec2/model/DomainType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int vpc_HASH = HashingUtils::HashString("vpc");
static const int standard_HASH = HashingUtils::HashString("standard");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace DomainTypeMapper
{
DomainType GetDomainTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == vpc_HASH)
  {
    return DomainType::vpc;
  }
  else if (hashCode == standard_HASH)
  {
    return DomainType::standard;
  }

  return DomainType::NOT_SET;
}

Aws::String GetNameForDomainType(DomainType value)
{
  switch(value)
  {
  case DomainType::vpc:
    return "vpc";
  case DomainType::standard:
    return "standard";
  default:
    return "";
  }
}

} // namespace DomainTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
