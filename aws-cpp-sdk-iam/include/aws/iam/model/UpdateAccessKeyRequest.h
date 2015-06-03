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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/statusType.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /*
  */
  class AWS_IAM_API UpdateAccessKeyRequest : public IAMRequest
  {
  public:
    UpdateAccessKeyRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The name of the user whose key you want to update.</p>
    */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    /*
     <p>The name of the user whose key you want to update.</p>
    */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /*
     <p>The name of the user whose key you want to update.</p>
    */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /*
     <p>The name of the user whose key you want to update.</p>
    */
    inline UpdateAccessKeyRequest&  WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /*
     <p>The name of the user whose key you want to update.</p>
    */
    inline UpdateAccessKeyRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

    /*
     <p>The access key ID of the secret access key you want to update.</p>
    */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }
    /*
     <p>The access key ID of the secret access key you want to update.</p>
    */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyId = value; }

    /*
     <p>The access key ID of the secret access key you want to update.</p>
    */
    inline void SetAccessKeyId(const char* value) { m_accessKeyId.assign(value); }

    /*
     <p>The access key ID of the secret access key you want to update.</p>
    */
    inline UpdateAccessKeyRequest&  WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /*
     <p>The access key ID of the secret access key you want to update.</p>
    */
    inline UpdateAccessKeyRequest& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}

    /*
     <p> The status you want to assign to the secret access key. <code>Active</code> means the key can be used for API calls to AWS, while <code>Inactive</code> means the key cannot be used. </p>
    */
    inline const statusType& GetStatus() const{ return m_status; }
    /*
     <p> The status you want to assign to the secret access key. <code>Active</code> means the key can be used for API calls to AWS, while <code>Inactive</code> means the key cannot be used. </p>
    */
    inline void SetStatus(const statusType& value) { m_status = value; }

    /*
     <p> The status you want to assign to the secret access key. <code>Active</code> means the key can be used for API calls to AWS, while <code>Inactive</code> means the key cannot be used. </p>
    */
    inline UpdateAccessKeyRequest&  WithStatus(const statusType& value) { SetStatus(value); return *this;}

  private:
    Aws::String m_userName;
    bool m_userNameHasBeenSet;
    Aws::String m_accessKeyId;
    statusType m_status;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws