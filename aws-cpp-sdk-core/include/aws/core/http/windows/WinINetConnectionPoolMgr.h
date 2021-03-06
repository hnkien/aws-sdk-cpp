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

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/http/windows/WinConnectionPoolMgr.h>

namespace Aws
{
namespace Http
{

/**
* Connection pool manager for wininet api.
*/
class AWS_CORE_API WinINetConnectionPoolMgr : public WinConnectionPoolMgr
{
public:
    WinINetConnectionPoolMgr(void* iOpenHandle, unsigned maxConnectionsPerHost, long requestTimeout, long connectTimeout);

    virtual ~WinINetConnectionPoolMgr();

    const char* GetLogTag() const override { return "WinInetConnectionPoolMgr"; }

private:     

    virtual void DoCloseHandle(void* handle) const override;

    virtual void* CreateNewConnection(const Aws::String& host, HostConnectionContainer& connectionContainer) const override;

    WinINetConnectionPoolMgr(const WinINetConnectionPoolMgr&) = delete;
    const WinINetConnectionPoolMgr& operator = (const WinINetConnectionPoolMgr&) = delete;
    WinINetConnectionPoolMgr(const WinINetConnectionPoolMgr&&) = delete;
    const WinINetConnectionPoolMgr& operator = (const WinINetConnectionPoolMgr&&) = delete;    

};   

} // namespace Http
} // namespace Aws
