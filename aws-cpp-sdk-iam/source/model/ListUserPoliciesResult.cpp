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
#include <aws/iam/model/ListUserPoliciesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListUserPoliciesResult::ListUserPoliciesResult() : 
    m_isTruncated(false)
{
}

ListUserPoliciesResult::ListUserPoliciesResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_isTruncated(false)
{
  *this = result;
}

ListUserPoliciesResult& ListUserPoliciesResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (rootNode.GetName() != "ListUserPoliciesResult")
  {
    resultNode = rootNode.FirstChild("ListUserPoliciesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode policyNamesNode = resultNode.FirstChild("PolicyNames");
    if(!policyNamesNode.IsNull())
    {
      XmlNode policyNamesMember = policyNamesNode.FirstChild("member");
      while(!policyNamesMember.IsNull())
      {
        m_policyNames.push_back(StringUtils::Trim(policyNamesMember.GetText().c_str()));
        policyNamesMember = policyNamesMember.NextNode("member");
      }

    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(isTruncatedNode.GetText().c_str()).c_str());
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = StringUtils::Trim(markerNode.GetText().c_str());
    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}
