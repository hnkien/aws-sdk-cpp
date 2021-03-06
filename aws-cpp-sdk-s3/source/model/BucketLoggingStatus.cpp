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
#include <aws/s3/model/BucketLoggingStatus.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

BucketLoggingStatus::BucketLoggingStatus() : 
    m_loggingEnabledHasBeenSet(false)
{
}

BucketLoggingStatus::BucketLoggingStatus(const XmlNode& xmlNode) : 
    m_loggingEnabledHasBeenSet(false)
{
  *this = xmlNode;
}

BucketLoggingStatus& BucketLoggingStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode loggingEnabledNode = resultNode.FirstChild("LoggingEnabled");
    if(loggingEnabledNode.IsNull())
    {
      loggingEnabledNode = resultNode;
    }

    if(!loggingEnabledNode.IsNull())
    {
      m_loggingEnabled = loggingEnabledNode;
      m_loggingEnabledHasBeenSet = true;
    }
  }

  return *this;
}

void BucketLoggingStatus::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_loggingEnabledHasBeenSet)
  {
   XmlNode loggingEnabledNode = parentNode.CreateChildElement("LoggingEnabled");
   m_loggingEnabled.AddToNode(loggingEnabledNode);
  }

}
