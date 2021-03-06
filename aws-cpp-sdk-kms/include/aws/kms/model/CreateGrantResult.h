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
#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KMS
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_KMS_API CreateGrantResult
  {
  public:
    CreateGrantResult();
    CreateGrantResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateGrantResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /*
     <p>For more information, see <a href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant Tokens</a>. </p>
    */
    inline const Aws::String& GetGrantToken() const{ return m_grantToken; }

    /*
     <p>For more information, see <a href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant Tokens</a>. </p>
    */
    inline void SetGrantToken(const Aws::String& value) { m_grantToken = value; }

    /*
     <p>For more information, see <a href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant Tokens</a>. </p>
    */
    inline void SetGrantToken(Aws::String&& value) { m_grantToken = value; }

    /*
     <p>For more information, see <a href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant Tokens</a>. </p>
    */
    inline void SetGrantToken(const char* value) { m_grantToken.assign(value); }

    /*
     <p>For more information, see <a href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant Tokens</a>. </p>
    */
    inline CreateGrantResult& WithGrantToken(const Aws::String& value) { SetGrantToken(value); return *this;}

    /*
     <p>For more information, see <a href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant Tokens</a>. </p>
    */
    inline CreateGrantResult& WithGrantToken(Aws::String&& value) { SetGrantToken(value); return *this;}

    /*
     <p>For more information, see <a href="http://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#grant_token">Grant Tokens</a>. </p>
    */
    inline CreateGrantResult& WithGrantToken(const char* value) { SetGrantToken(value); return *this;}

    /*
     <p>Unique grant identifier. You can use the <i>GrantId</i> value to revoke a grant.</p>
    */
    inline const Aws::String& GetGrantId() const{ return m_grantId; }

    /*
     <p>Unique grant identifier. You can use the <i>GrantId</i> value to revoke a grant.</p>
    */
    inline void SetGrantId(const Aws::String& value) { m_grantId = value; }

    /*
     <p>Unique grant identifier. You can use the <i>GrantId</i> value to revoke a grant.</p>
    */
    inline void SetGrantId(Aws::String&& value) { m_grantId = value; }

    /*
     <p>Unique grant identifier. You can use the <i>GrantId</i> value to revoke a grant.</p>
    */
    inline void SetGrantId(const char* value) { m_grantId.assign(value); }

    /*
     <p>Unique grant identifier. You can use the <i>GrantId</i> value to revoke a grant.</p>
    */
    inline CreateGrantResult& WithGrantId(const Aws::String& value) { SetGrantId(value); return *this;}

    /*
     <p>Unique grant identifier. You can use the <i>GrantId</i> value to revoke a grant.</p>
    */
    inline CreateGrantResult& WithGrantId(Aws::String&& value) { SetGrantId(value); return *this;}

    /*
     <p>Unique grant identifier. You can use the <i>GrantId</i> value to revoke a grant.</p>
    */
    inline CreateGrantResult& WithGrantId(const char* value) { SetGrantId(value); return *this;}

  private:
    Aws::String m_grantToken;
    Aws::String m_grantId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
