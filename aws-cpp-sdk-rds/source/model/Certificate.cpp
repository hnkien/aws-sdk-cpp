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
#include <aws/rds/model/Certificate.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Certificate::Certificate() : 
    m_certificateIdentifierHasBeenSet(false),
    m_certificateTypeHasBeenSet(false),
    m_thumbprintHasBeenSet(false),
    m_validFrom(0.0),
    m_validFromHasBeenSet(false),
    m_validTill(0.0),
    m_validTillHasBeenSet(false)
{
}

Certificate::Certificate(const XmlNode& xmlNode) : 
    m_certificateIdentifierHasBeenSet(false),
    m_certificateTypeHasBeenSet(false),
    m_thumbprintHasBeenSet(false),
    m_validFrom(0.0),
    m_validFromHasBeenSet(false),
    m_validTill(0.0),
    m_validTillHasBeenSet(false)
{
  *this = xmlNode;
}

Certificate& Certificate::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode certificateIdentifierNode = resultNode.FirstChild("CertificateIdentifier");
    if(!certificateIdentifierNode.IsNull())
    {
      m_certificateIdentifier = StringUtils::Trim(certificateIdentifierNode.GetText().c_str());
      m_certificateIdentifierHasBeenSet = true;
    }
    XmlNode certificateTypeNode = resultNode.FirstChild("CertificateType");
    if(!certificateTypeNode.IsNull())
    {
      m_certificateType = StringUtils::Trim(certificateTypeNode.GetText().c_str());
      m_certificateTypeHasBeenSet = true;
    }
    XmlNode thumbprintNode = resultNode.FirstChild("Thumbprint");
    if(!thumbprintNode.IsNull())
    {
      m_thumbprint = StringUtils::Trim(thumbprintNode.GetText().c_str());
      m_thumbprintHasBeenSet = true;
    }
    XmlNode validFromNode = resultNode.FirstChild("ValidFrom");
    if(!validFromNode.IsNull())
    {
      m_validFrom = StringUtils::ConvertToDouble(StringUtils::Trim(validFromNode.GetText().c_str()).c_str());
      m_validFromHasBeenSet = true;
    }
    XmlNode validTillNode = resultNode.FirstChild("ValidTill");
    if(!validTillNode.IsNull())
    {
      m_validTill = StringUtils::ConvertToDouble(StringUtils::Trim(validTillNode.GetText().c_str()).c_str());
      m_validTillHasBeenSet = true;
    }
  }

  return *this;
}

void Certificate::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_certificateIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".CertificateIdentifier=" << StringUtils::URLEncode(m_certificateIdentifier.c_str()) << "&";
  }
  if(m_certificateTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CertificateType=" << StringUtils::URLEncode(m_certificateType.c_str()) << "&";
  }
  if(m_thumbprintHasBeenSet)
  {
      oStream << location << index << locationValue << ".Thumbprint=" << StringUtils::URLEncode(m_thumbprint.c_str()) << "&";
  }
  if(m_validFromHasBeenSet)
  {
      oStream << location << index << locationValue << ".ValidFrom=" << m_validFrom << "&";
  }
  if(m_validTillHasBeenSet)
  {
      oStream << location << index << locationValue << ".ValidTill=" << m_validTill << "&";
  }
}

void Certificate::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_certificateIdentifierHasBeenSet)
  {
      oStream << location << ".CertificateIdentifier=" << StringUtils::URLEncode(m_certificateIdentifier.c_str()) << "&";
  }
  if(m_certificateTypeHasBeenSet)
  {
      oStream << location << ".CertificateType=" << StringUtils::URLEncode(m_certificateType.c_str()) << "&";
  }
  if(m_thumbprintHasBeenSet)
  {
      oStream << location << ".Thumbprint=" << StringUtils::URLEncode(m_thumbprint.c_str()) << "&";
  }
  if(m_validFromHasBeenSet)
  {
      oStream << location << ".ValidFrom=" << m_validFrom << "&";
  }
  if(m_validTillHasBeenSet)
  {
      oStream << location << ".ValidTill=" << m_validTill << "&";
  }
}
