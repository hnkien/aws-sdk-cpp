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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/autoscaling/model/AttachLoadBalancersResult.h>
#include <aws/autoscaling/model/CompleteLifecycleActionResult.h>
#include <aws/autoscaling/model/DeleteLifecycleHookResult.h>
#include <aws/autoscaling/model/DescribeAccountLimitsResult.h>
#include <aws/autoscaling/model/DescribeAdjustmentTypesResult.h>
#include <aws/autoscaling/model/DescribeAutoScalingGroupsResult.h>
#include <aws/autoscaling/model/DescribeAutoScalingInstancesResult.h>
#include <aws/autoscaling/model/DescribeAutoScalingNotificationTypesResult.h>
#include <aws/autoscaling/model/DescribeLaunchConfigurationsResult.h>
#include <aws/autoscaling/model/DescribeLifecycleHookTypesResult.h>
#include <aws/autoscaling/model/DescribeLifecycleHooksResult.h>
#include <aws/autoscaling/model/DescribeLoadBalancersResult.h>
#include <aws/autoscaling/model/DescribeMetricCollectionTypesResult.h>
#include <aws/autoscaling/model/DescribeNotificationConfigurationsResult.h>
#include <aws/autoscaling/model/DescribePoliciesResult.h>
#include <aws/autoscaling/model/DescribeScalingActivitiesResult.h>
#include <aws/autoscaling/model/DescribeScalingProcessTypesResult.h>
#include <aws/autoscaling/model/DescribeScheduledActionsResult.h>
#include <aws/autoscaling/model/DescribeTagsResult.h>
#include <aws/autoscaling/model/DescribeTerminationPolicyTypesResult.h>
#include <aws/autoscaling/model/DetachInstancesResult.h>
#include <aws/autoscaling/model/DetachLoadBalancersResult.h>
#include <aws/autoscaling/model/EnterStandbyResult.h>
#include <aws/autoscaling/model/ExitStandbyResult.h>
#include <aws/autoscaling/model/PutLifecycleHookResult.h>
#include <aws/autoscaling/model/PutScalingPolicyResult.h>
#include <aws/autoscaling/model/RecordLifecycleActionHeartbeatResult.h>
#include <aws/autoscaling/model/TerminateInstanceInAutoScalingGroupResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace AutoScaling
{

namespace Model
{
        class AttachInstancesRequest;
        class AttachLoadBalancersRequest;
        class CompleteLifecycleActionRequest;
        class CreateAutoScalingGroupRequest;
        class CreateLaunchConfigurationRequest;
        class CreateOrUpdateTagsRequest;
        class DeleteAutoScalingGroupRequest;
        class DeleteLaunchConfigurationRequest;
        class DeleteLifecycleHookRequest;
        class DeleteNotificationConfigurationRequest;
        class DeletePolicyRequest;
        class DeleteScheduledActionRequest;
        class DeleteTagsRequest;
        class DescribeAccountLimitsRequest;
        class DescribeAdjustmentTypesRequest;
        class DescribeAutoScalingGroupsRequest;
        class DescribeAutoScalingInstancesRequest;
        class DescribeAutoScalingNotificationTypesRequest;
        class DescribeLaunchConfigurationsRequest;
        class DescribeLifecycleHookTypesRequest;
        class DescribeLifecycleHooksRequest;
        class DescribeLoadBalancersRequest;
        class DescribeMetricCollectionTypesRequest;
        class DescribeNotificationConfigurationsRequest;
        class DescribePoliciesRequest;
        class DescribeScalingActivitiesRequest;
        class DescribeScalingProcessTypesRequest;
        class DescribeScheduledActionsRequest;
        class DescribeTagsRequest;
        class DescribeTerminationPolicyTypesRequest;
        class DetachInstancesRequest;
        class DetachLoadBalancersRequest;
        class DisableMetricsCollectionRequest;
        class EnableMetricsCollectionRequest;
        class EnterStandbyRequest;
        class ExecutePolicyRequest;
        class ExitStandbyRequest;
        class PutLifecycleHookRequest;
        class PutNotificationConfigurationRequest;
        class PutScalingPolicyRequest;
        class PutScheduledUpdateGroupActionRequest;
        class RecordLifecycleActionHeartbeatRequest;
        class ResumeProcessesRequest;
        class SetDesiredCapacityRequest;
        class SetInstanceHealthRequest;
        class SuspendProcessesRequest;
        class TerminateInstanceInAutoScalingGroupRequest;
        class UpdateAutoScalingGroupRequest;

        typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> AttachInstancesOutcome;
        typedef Utils::Outcome<AttachLoadBalancersResult, Client::AWSError<AutoScalingErrors>> AttachLoadBalancersOutcome;
        typedef Utils::Outcome<CompleteLifecycleActionResult, Client::AWSError<AutoScalingErrors>> CompleteLifecycleActionOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> CreateAutoScalingGroupOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> CreateLaunchConfigurationOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> CreateOrUpdateTagsOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> DeleteAutoScalingGroupOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> DeleteLaunchConfigurationOutcome;
        typedef Utils::Outcome<DeleteLifecycleHookResult, Client::AWSError<AutoScalingErrors>> DeleteLifecycleHookOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> DeleteNotificationConfigurationOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> DeletePolicyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> DeleteScheduledActionOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> DeleteTagsOutcome;
        typedef Utils::Outcome<DescribeAccountLimitsResult, Client::AWSError<AutoScalingErrors>> DescribeAccountLimitsOutcome;
        typedef Utils::Outcome<DescribeAdjustmentTypesResult, Client::AWSError<AutoScalingErrors>> DescribeAdjustmentTypesOutcome;
        typedef Utils::Outcome<DescribeAutoScalingGroupsResult, Client::AWSError<AutoScalingErrors>> DescribeAutoScalingGroupsOutcome;
        typedef Utils::Outcome<DescribeAutoScalingInstancesResult, Client::AWSError<AutoScalingErrors>> DescribeAutoScalingInstancesOutcome;
        typedef Utils::Outcome<DescribeAutoScalingNotificationTypesResult, Client::AWSError<AutoScalingErrors>> DescribeAutoScalingNotificationTypesOutcome;
        typedef Utils::Outcome<DescribeLaunchConfigurationsResult, Client::AWSError<AutoScalingErrors>> DescribeLaunchConfigurationsOutcome;
        typedef Utils::Outcome<DescribeLifecycleHookTypesResult, Client::AWSError<AutoScalingErrors>> DescribeLifecycleHookTypesOutcome;
        typedef Utils::Outcome<DescribeLifecycleHooksResult, Client::AWSError<AutoScalingErrors>> DescribeLifecycleHooksOutcome;
        typedef Utils::Outcome<DescribeLoadBalancersResult, Client::AWSError<AutoScalingErrors>> DescribeLoadBalancersOutcome;
        typedef Utils::Outcome<DescribeMetricCollectionTypesResult, Client::AWSError<AutoScalingErrors>> DescribeMetricCollectionTypesOutcome;
        typedef Utils::Outcome<DescribeNotificationConfigurationsResult, Client::AWSError<AutoScalingErrors>> DescribeNotificationConfigurationsOutcome;
        typedef Utils::Outcome<DescribePoliciesResult, Client::AWSError<AutoScalingErrors>> DescribePoliciesOutcome;
        typedef Utils::Outcome<DescribeScalingActivitiesResult, Client::AWSError<AutoScalingErrors>> DescribeScalingActivitiesOutcome;
        typedef Utils::Outcome<DescribeScalingProcessTypesResult, Client::AWSError<AutoScalingErrors>> DescribeScalingProcessTypesOutcome;
        typedef Utils::Outcome<DescribeScheduledActionsResult, Client::AWSError<AutoScalingErrors>> DescribeScheduledActionsOutcome;
        typedef Utils::Outcome<DescribeTagsResult, Client::AWSError<AutoScalingErrors>> DescribeTagsOutcome;
        typedef Utils::Outcome<DescribeTerminationPolicyTypesResult, Client::AWSError<AutoScalingErrors>> DescribeTerminationPolicyTypesOutcome;
        typedef Utils::Outcome<DetachInstancesResult, Client::AWSError<AutoScalingErrors>> DetachInstancesOutcome;
        typedef Utils::Outcome<DetachLoadBalancersResult, Client::AWSError<AutoScalingErrors>> DetachLoadBalancersOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> DisableMetricsCollectionOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> EnableMetricsCollectionOutcome;
        typedef Utils::Outcome<EnterStandbyResult, Client::AWSError<AutoScalingErrors>> EnterStandbyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> ExecutePolicyOutcome;
        typedef Utils::Outcome<ExitStandbyResult, Client::AWSError<AutoScalingErrors>> ExitStandbyOutcome;
        typedef Utils::Outcome<PutLifecycleHookResult, Client::AWSError<AutoScalingErrors>> PutLifecycleHookOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> PutNotificationConfigurationOutcome;
        typedef Utils::Outcome<PutScalingPolicyResult, Client::AWSError<AutoScalingErrors>> PutScalingPolicyOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> PutScheduledUpdateGroupActionOutcome;
        typedef Utils::Outcome<RecordLifecycleActionHeartbeatResult, Client::AWSError<AutoScalingErrors>> RecordLifecycleActionHeartbeatOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> ResumeProcessesOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> SetDesiredCapacityOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> SetInstanceHealthOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> SuspendProcessesOutcome;
        typedef Utils::Outcome<TerminateInstanceInAutoScalingGroupResult, Client::AWSError<AutoScalingErrors>> TerminateInstanceInAutoScalingGroupOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<AutoScalingErrors>> UpdateAutoScalingGroupOutcome;

        typedef std::future<AttachInstancesOutcome> AttachInstancesOutcomeCallable;
        typedef std::future<AttachLoadBalancersOutcome> AttachLoadBalancersOutcomeCallable;
        typedef std::future<CompleteLifecycleActionOutcome> CompleteLifecycleActionOutcomeCallable;
        typedef std::future<CreateAutoScalingGroupOutcome> CreateAutoScalingGroupOutcomeCallable;
        typedef std::future<CreateLaunchConfigurationOutcome> CreateLaunchConfigurationOutcomeCallable;
        typedef std::future<CreateOrUpdateTagsOutcome> CreateOrUpdateTagsOutcomeCallable;
        typedef std::future<DeleteAutoScalingGroupOutcome> DeleteAutoScalingGroupOutcomeCallable;
        typedef std::future<DeleteLaunchConfigurationOutcome> DeleteLaunchConfigurationOutcomeCallable;
        typedef std::future<DeleteLifecycleHookOutcome> DeleteLifecycleHookOutcomeCallable;
        typedef std::future<DeleteNotificationConfigurationOutcome> DeleteNotificationConfigurationOutcomeCallable;
        typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
        typedef std::future<DeleteScheduledActionOutcome> DeleteScheduledActionOutcomeCallable;
        typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
        typedef std::future<DescribeAccountLimitsOutcome> DescribeAccountLimitsOutcomeCallable;
        typedef std::future<DescribeAdjustmentTypesOutcome> DescribeAdjustmentTypesOutcomeCallable;
        typedef std::future<DescribeAutoScalingGroupsOutcome> DescribeAutoScalingGroupsOutcomeCallable;
        typedef std::future<DescribeAutoScalingInstancesOutcome> DescribeAutoScalingInstancesOutcomeCallable;
        typedef std::future<DescribeAutoScalingNotificationTypesOutcome> DescribeAutoScalingNotificationTypesOutcomeCallable;
        typedef std::future<DescribeLaunchConfigurationsOutcome> DescribeLaunchConfigurationsOutcomeCallable;
        typedef std::future<DescribeLifecycleHookTypesOutcome> DescribeLifecycleHookTypesOutcomeCallable;
        typedef std::future<DescribeLifecycleHooksOutcome> DescribeLifecycleHooksOutcomeCallable;
        typedef std::future<DescribeLoadBalancersOutcome> DescribeLoadBalancersOutcomeCallable;
        typedef std::future<DescribeMetricCollectionTypesOutcome> DescribeMetricCollectionTypesOutcomeCallable;
        typedef std::future<DescribeNotificationConfigurationsOutcome> DescribeNotificationConfigurationsOutcomeCallable;
        typedef std::future<DescribePoliciesOutcome> DescribePoliciesOutcomeCallable;
        typedef std::future<DescribeScalingActivitiesOutcome> DescribeScalingActivitiesOutcomeCallable;
        typedef std::future<DescribeScalingProcessTypesOutcome> DescribeScalingProcessTypesOutcomeCallable;
        typedef std::future<DescribeScheduledActionsOutcome> DescribeScheduledActionsOutcomeCallable;
        typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
        typedef std::future<DescribeTerminationPolicyTypesOutcome> DescribeTerminationPolicyTypesOutcomeCallable;
        typedef std::future<DetachInstancesOutcome> DetachInstancesOutcomeCallable;
        typedef std::future<DetachLoadBalancersOutcome> DetachLoadBalancersOutcomeCallable;
        typedef std::future<DisableMetricsCollectionOutcome> DisableMetricsCollectionOutcomeCallable;
        typedef std::future<EnableMetricsCollectionOutcome> EnableMetricsCollectionOutcomeCallable;
        typedef std::future<EnterStandbyOutcome> EnterStandbyOutcomeCallable;
        typedef std::future<ExecutePolicyOutcome> ExecutePolicyOutcomeCallable;
        typedef std::future<ExitStandbyOutcome> ExitStandbyOutcomeCallable;
        typedef std::future<PutLifecycleHookOutcome> PutLifecycleHookOutcomeCallable;
        typedef std::future<PutNotificationConfigurationOutcome> PutNotificationConfigurationOutcomeCallable;
        typedef std::future<PutScalingPolicyOutcome> PutScalingPolicyOutcomeCallable;
        typedef std::future<PutScheduledUpdateGroupActionOutcome> PutScheduledUpdateGroupActionOutcomeCallable;
        typedef std::future<RecordLifecycleActionHeartbeatOutcome> RecordLifecycleActionHeartbeatOutcomeCallable;
        typedef std::future<ResumeProcessesOutcome> ResumeProcessesOutcomeCallable;
        typedef std::future<SetDesiredCapacityOutcome> SetDesiredCapacityOutcomeCallable;
        typedef std::future<SetInstanceHealthOutcome> SetInstanceHealthOutcomeCallable;
        typedef std::future<SuspendProcessesOutcome> SuspendProcessesOutcomeCallable;
        typedef std::future<TerminateInstanceInAutoScalingGroupOutcome> TerminateInstanceInAutoScalingGroupOutcomeCallable;
        typedef std::future<UpdateAutoScalingGroupOutcome> UpdateAutoScalingGroupOutcomeCallable;
} // namespace Model

  class AutoScalingClient;

    typedef std::function<void(const AutoScalingClient*, const Model::AttachInstancesRequest&, const Model::AttachInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachInstancesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::AttachLoadBalancersRequest&, const Model::AttachLoadBalancersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachLoadBalancersResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::CompleteLifecycleActionRequest&, const Model::CompleteLifecycleActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CompleteLifecycleActionResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::CreateAutoScalingGroupRequest&, const Model::CreateAutoScalingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAutoScalingGroupResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::CreateLaunchConfigurationRequest&, const Model::CreateLaunchConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLaunchConfigurationResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::CreateOrUpdateTagsRequest&, const Model::CreateOrUpdateTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOrUpdateTagsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DeleteAutoScalingGroupRequest&, const Model::DeleteAutoScalingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAutoScalingGroupResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DeleteLaunchConfigurationRequest&, const Model::DeleteLaunchConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLaunchConfigurationResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DeleteLifecycleHookRequest&, const Model::DeleteLifecycleHookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLifecycleHookResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DeleteNotificationConfigurationRequest&, const Model::DeleteNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNotificationConfigurationResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DeletePolicyRequest&, const Model::DeletePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePolicyResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DeleteScheduledActionRequest&, const Model::DeleteScheduledActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScheduledActionResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeAccountLimitsRequest&, const Model::DescribeAccountLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountLimitsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeAdjustmentTypesRequest&, const Model::DescribeAdjustmentTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAdjustmentTypesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeAutoScalingGroupsRequest&, const Model::DescribeAutoScalingGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAutoScalingGroupsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeAutoScalingInstancesRequest&, const Model::DescribeAutoScalingInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAutoScalingInstancesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeAutoScalingNotificationTypesRequest&, const Model::DescribeAutoScalingNotificationTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAutoScalingNotificationTypesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeLaunchConfigurationsRequest&, const Model::DescribeLaunchConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLaunchConfigurationsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeLifecycleHookTypesRequest&, const Model::DescribeLifecycleHookTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLifecycleHookTypesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeLifecycleHooksRequest&, const Model::DescribeLifecycleHooksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLifecycleHooksResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeLoadBalancersRequest&, const Model::DescribeLoadBalancersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoadBalancersResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeMetricCollectionTypesRequest&, const Model::DescribeMetricCollectionTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMetricCollectionTypesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeNotificationConfigurationsRequest&, const Model::DescribeNotificationConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNotificationConfigurationsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribePoliciesRequest&, const Model::DescribePoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePoliciesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeScalingActivitiesRequest&, const Model::DescribeScalingActivitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScalingActivitiesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeScalingProcessTypesRequest&, const Model::DescribeScalingProcessTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScalingProcessTypesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeScheduledActionsRequest&, const Model::DescribeScheduledActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScheduledActionsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagsResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DescribeTerminationPolicyTypesRequest&, const Model::DescribeTerminationPolicyTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTerminationPolicyTypesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DetachInstancesRequest&, const Model::DetachInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachInstancesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DetachLoadBalancersRequest&, const Model::DetachLoadBalancersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachLoadBalancersResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::DisableMetricsCollectionRequest&, const Model::DisableMetricsCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableMetricsCollectionResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::EnableMetricsCollectionRequest&, const Model::EnableMetricsCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableMetricsCollectionResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::EnterStandbyRequest&, const Model::EnterStandbyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnterStandbyResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::ExecutePolicyRequest&, const Model::ExecutePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecutePolicyResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::ExitStandbyRequest&, const Model::ExitStandbyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExitStandbyResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::PutLifecycleHookRequest&, const Model::PutLifecycleHookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLifecycleHookResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::PutNotificationConfigurationRequest&, const Model::PutNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutNotificationConfigurationResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::PutScalingPolicyRequest&, const Model::PutScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::PutScheduledUpdateGroupActionRequest&, const Model::PutScheduledUpdateGroupActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutScheduledUpdateGroupActionResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::RecordLifecycleActionHeartbeatRequest&, const Model::RecordLifecycleActionHeartbeatOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RecordLifecycleActionHeartbeatResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::ResumeProcessesRequest&, const Model::ResumeProcessesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResumeProcessesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::SetDesiredCapacityRequest&, const Model::SetDesiredCapacityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetDesiredCapacityResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::SetInstanceHealthRequest&, const Model::SetInstanceHealthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetInstanceHealthResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::SuspendProcessesRequest&, const Model::SuspendProcessesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SuspendProcessesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::TerminateInstanceInAutoScalingGroupRequest&, const Model::TerminateInstanceInAutoScalingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateInstanceInAutoScalingGroupResponseReceivedHandler;
    typedef std::function<void(const AutoScalingClient*, const Model::UpdateAutoScalingGroupRequest&, const Model::UpdateAutoScalingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAutoScalingGroupResponseReceivedHandler;

  /*
    <fullname>Auto Scaling</fullname> <p>Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies, schedules, and health checks. Use this service in conjunction with the Amazon CloudWatch and Elastic Load Balancing services.</p>
  */
  class AWS_AUTOSCALING_API AutoScalingClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

        /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AutoScalingClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AutoScalingClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AutoScalingClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
            const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

        ~AutoScalingClient();
        /*
            <p>Attaches one or more EC2 instances to the specified Auto Scaling group.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/attach-instance-asg.html">Attach EC2 Instances to Your Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>
        */
        Model::AttachInstancesOutcome AttachInstances(const Model::AttachInstancesRequest& request) const;

        /*
            <p>Attaches one or more EC2 instances to the specified Auto Scaling group.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/attach-instance-asg.html">Attach EC2 Instances to Your Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::AttachInstancesOutcomeCallable AttachInstancesCallable(const Model::AttachInstancesRequest& request) const;

        /*
            <p>Attaches one or more EC2 instances to the specified Auto Scaling group.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/attach-instance-asg.html">Attach EC2 Instances to Your Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void AttachInstancesAsync(const Model::AttachInstancesRequest& request, const AttachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Attaches one or more load balancers to the specified Auto Scaling group.</p> <p>To describe the load balancers for an Auto Scaling group, use <a>DescribeLoadBalancers</a>. To detach the load balancer from the Auto Scaling group, use <a>DetachLoadBalancers</a>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/attach-load-balancer-asg.html">Attach a Load Balancer to Your Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>
        */
        Model::AttachLoadBalancersOutcome AttachLoadBalancers(const Model::AttachLoadBalancersRequest& request) const;

        /*
            <p>Attaches one or more load balancers to the specified Auto Scaling group.</p> <p>To describe the load balancers for an Auto Scaling group, use <a>DescribeLoadBalancers</a>. To detach the load balancer from the Auto Scaling group, use <a>DetachLoadBalancers</a>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/attach-load-balancer-asg.html">Attach a Load Balancer to Your Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::AttachLoadBalancersOutcomeCallable AttachLoadBalancersCallable(const Model::AttachLoadBalancersRequest& request) const;

        /*
            <p>Attaches one or more load balancers to the specified Auto Scaling group.</p> <p>To describe the load balancers for an Auto Scaling group, use <a>DescribeLoadBalancers</a>. To detach the load balancer from the Auto Scaling group, use <a>DetachLoadBalancers</a>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/attach-load-balancer-asg.html">Attach a Load Balancer to Your Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void AttachLoadBalancersAsync(const Model::AttachLoadBalancersRequest& request, const AttachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Completes the lifecycle action for the associated token initiated under the given lifecycle hook with the specified result. </p> <p>This operation is a part of the basic sequence for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>Create a notification target. A target can be either an Amazon SQS queue or an Amazon SNS topic.</li> <li>Create an IAM role. This role allows Auto Scaling to publish lifecycle notifications to the designated SQS queue or SNS topic.</li> <li>Create the lifecycle hook. You can create a hook that acts when instances launch or when instances terminate.</li> <li>If necessary, record the lifecycle action heartbeat to keep the instance in a pending state.</li> <li> <b>Complete the lifecycle action</b>.</li> </ol> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingPendingState.html">Auto Scaling Pending State</a> and <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingTerminatingState.html">Auto Scaling Terminating State</a> in the <i>Auto Scaling Developer Guide</i>.</p>
        */
        Model::CompleteLifecycleActionOutcome CompleteLifecycleAction(const Model::CompleteLifecycleActionRequest& request) const;

        /*
            <p>Completes the lifecycle action for the associated token initiated under the given lifecycle hook with the specified result. </p> <p>This operation is a part of the basic sequence for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>Create a notification target. A target can be either an Amazon SQS queue or an Amazon SNS topic.</li> <li>Create an IAM role. This role allows Auto Scaling to publish lifecycle notifications to the designated SQS queue or SNS topic.</li> <li>Create the lifecycle hook. You can create a hook that acts when instances launch or when instances terminate.</li> <li>If necessary, record the lifecycle action heartbeat to keep the instance in a pending state.</li> <li> <b>Complete the lifecycle action</b>.</li> </ol> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingPendingState.html">Auto Scaling Pending State</a> and <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingTerminatingState.html">Auto Scaling Terminating State</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CompleteLifecycleActionOutcomeCallable CompleteLifecycleActionCallable(const Model::CompleteLifecycleActionRequest& request) const;

        /*
            <p>Completes the lifecycle action for the associated token initiated under the given lifecycle hook with the specified result. </p> <p>This operation is a part of the basic sequence for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>Create a notification target. A target can be either an Amazon SQS queue or an Amazon SNS topic.</li> <li>Create an IAM role. This role allows Auto Scaling to publish lifecycle notifications to the designated SQS queue or SNS topic.</li> <li>Create the lifecycle hook. You can create a hook that acts when instances launch or when instances terminate.</li> <li>If necessary, record the lifecycle action heartbeat to keep the instance in a pending state.</li> <li> <b>Complete the lifecycle action</b>.</li> </ol> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingPendingState.html">Auto Scaling Pending State</a> and <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingTerminatingState.html">Auto Scaling Terminating State</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CompleteLifecycleActionAsync(const Model::CompleteLifecycleActionRequest& request, const CompleteLifecycleActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Creates an Auto Scaling group with the specified name and attributes.</p> <p>If you exceed your maximum limit of Auto Scaling groups, which by default is 20 per region, the call fails. For information about viewing and updating this limit, see <a>DescribeAccountLimits</a>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingGroup.html">Auto Scaling Groups</a> in the <i>Auto Scaling Developer Guide</i>.</p>
        */
        Model::CreateAutoScalingGroupOutcome CreateAutoScalingGroup(const Model::CreateAutoScalingGroupRequest& request) const;

        /*
            <p>Creates an Auto Scaling group with the specified name and attributes.</p> <p>If you exceed your maximum limit of Auto Scaling groups, which by default is 20 per region, the call fails. For information about viewing and updating this limit, see <a>DescribeAccountLimits</a>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingGroup.html">Auto Scaling Groups</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreateAutoScalingGroupOutcomeCallable CreateAutoScalingGroupCallable(const Model::CreateAutoScalingGroupRequest& request) const;

        /*
            <p>Creates an Auto Scaling group with the specified name and attributes.</p> <p>If you exceed your maximum limit of Auto Scaling groups, which by default is 20 per region, the call fails. For information about viewing and updating this limit, see <a>DescribeAccountLimits</a>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingGroup.html">Auto Scaling Groups</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreateAutoScalingGroupAsync(const Model::CreateAutoScalingGroupRequest& request, const CreateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Creates a launch configuration.</p> <p>If you exceed your maximum limit of launch configurations, which by default is 100 per region, the call fails. For information about viewing and updating this limit, see <a>DescribeAccountLimits</a>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/LaunchConfiguration.html">Launch Configurations</a> in the <i>Auto Scaling Developer Guide</i>.</p>
        */
        Model::CreateLaunchConfigurationOutcome CreateLaunchConfiguration(const Model::CreateLaunchConfigurationRequest& request) const;

        /*
            <p>Creates a launch configuration.</p> <p>If you exceed your maximum limit of launch configurations, which by default is 100 per region, the call fails. For information about viewing and updating this limit, see <a>DescribeAccountLimits</a>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/LaunchConfiguration.html">Launch Configurations</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreateLaunchConfigurationOutcomeCallable CreateLaunchConfigurationCallable(const Model::CreateLaunchConfigurationRequest& request) const;

        /*
            <p>Creates a launch configuration.</p> <p>If you exceed your maximum limit of launch configurations, which by default is 100 per region, the call fails. For information about viewing and updating this limit, see <a>DescribeAccountLimits</a>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/LaunchConfiguration.html">Launch Configurations</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreateLaunchConfigurationAsync(const Model::CreateLaunchConfigurationRequest& request, const CreateLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Creates or updates tags for the specified Auto Scaling group.</p> <p>A tag is defined by its resource ID, resource type, key, value, and propagate flag. The value and the propagate flag are optional parameters. The only supported resource type is <code>auto-scaling-group</code>, and the resource ID must be the name of the group. The <code>PropagateAtLaunch</code> flag determines whether the tag is added to instances launched in the group. Valid values are <code>true</code> or <code>false</code>.</p> <p>When you specify a tag with a key that already exists, the operation overwrites the previous tag definition, and you do not get an error message.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/ASTagging.html">Tagging Auto Scaling Groups and Instances</a> in the <i>Auto Scaling Developer Guide</i>.</p>
        */
        Model::CreateOrUpdateTagsOutcome CreateOrUpdateTags(const Model::CreateOrUpdateTagsRequest& request) const;

        /*
            <p>Creates or updates tags for the specified Auto Scaling group.</p> <p>A tag is defined by its resource ID, resource type, key, value, and propagate flag. The value and the propagate flag are optional parameters. The only supported resource type is <code>auto-scaling-group</code>, and the resource ID must be the name of the group. The <code>PropagateAtLaunch</code> flag determines whether the tag is added to instances launched in the group. Valid values are <code>true</code> or <code>false</code>.</p> <p>When you specify a tag with a key that already exists, the operation overwrites the previous tag definition, and you do not get an error message.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/ASTagging.html">Tagging Auto Scaling Groups and Instances</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreateOrUpdateTagsOutcomeCallable CreateOrUpdateTagsCallable(const Model::CreateOrUpdateTagsRequest& request) const;

        /*
            <p>Creates or updates tags for the specified Auto Scaling group.</p> <p>A tag is defined by its resource ID, resource type, key, value, and propagate flag. The value and the propagate flag are optional parameters. The only supported resource type is <code>auto-scaling-group</code>, and the resource ID must be the name of the group. The <code>PropagateAtLaunch</code> flag determines whether the tag is added to instances launched in the group. Valid values are <code>true</code> or <code>false</code>.</p> <p>When you specify a tag with a key that already exists, the operation overwrites the previous tag definition, and you do not get an error message.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/ASTagging.html">Tagging Auto Scaling Groups and Instances</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreateOrUpdateTagsAsync(const Model::CreateOrUpdateTagsRequest& request, const CreateOrUpdateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes the specified Auto Scaling group.</p> <p>The group must have no instances and no scaling activities in progress.</p> <p>To remove all instances before calling <code>DeleteAutoScalingGroup</code>, call <a>UpdateAutoScalingGroup</a> to set the minimum and maximum size of the Auto Scaling group to zero.</p>
        */
        Model::DeleteAutoScalingGroupOutcome DeleteAutoScalingGroup(const Model::DeleteAutoScalingGroupRequest& request) const;

        /*
            <p>Deletes the specified Auto Scaling group.</p> <p>The group must have no instances and no scaling activities in progress.</p> <p>To remove all instances before calling <code>DeleteAutoScalingGroup</code>, call <a>UpdateAutoScalingGroup</a> to set the minimum and maximum size of the Auto Scaling group to zero.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteAutoScalingGroupOutcomeCallable DeleteAutoScalingGroupCallable(const Model::DeleteAutoScalingGroupRequest& request) const;

        /*
            <p>Deletes the specified Auto Scaling group.</p> <p>The group must have no instances and no scaling activities in progress.</p> <p>To remove all instances before calling <code>DeleteAutoScalingGroup</code>, call <a>UpdateAutoScalingGroup</a> to set the minimum and maximum size of the Auto Scaling group to zero.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteAutoScalingGroupAsync(const Model::DeleteAutoScalingGroupRequest& request, const DeleteAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes the specified launch configuration.</p> <p>The launch configuration must not be attached to an Auto Scaling group. When this call completes, the launch configuration is no longer available for use.</p>
        */
        Model::DeleteLaunchConfigurationOutcome DeleteLaunchConfiguration(const Model::DeleteLaunchConfigurationRequest& request) const;

        /*
            <p>Deletes the specified launch configuration.</p> <p>The launch configuration must not be attached to an Auto Scaling group. When this call completes, the launch configuration is no longer available for use.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteLaunchConfigurationOutcomeCallable DeleteLaunchConfigurationCallable(const Model::DeleteLaunchConfigurationRequest& request) const;

        /*
            <p>Deletes the specified launch configuration.</p> <p>The launch configuration must not be attached to an Auto Scaling group. When this call completes, the launch configuration is no longer available for use.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteLaunchConfigurationAsync(const Model::DeleteLaunchConfigurationRequest& request, const DeleteLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes the specified lifecycle hook.</p> <p>If there are any outstanding lifecycle actions, they are completed first (<code>ABANDON</code> for launching instances, <code>CONTINUE</code> for terminating instances).</p>
        */
        Model::DeleteLifecycleHookOutcome DeleteLifecycleHook(const Model::DeleteLifecycleHookRequest& request) const;

        /*
            <p>Deletes the specified lifecycle hook.</p> <p>If there are any outstanding lifecycle actions, they are completed first (<code>ABANDON</code> for launching instances, <code>CONTINUE</code> for terminating instances).</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteLifecycleHookOutcomeCallable DeleteLifecycleHookCallable(const Model::DeleteLifecycleHookRequest& request) const;

        /*
            <p>Deletes the specified lifecycle hook.</p> <p>If there are any outstanding lifecycle actions, they are completed first (<code>ABANDON</code> for launching instances, <code>CONTINUE</code> for terminating instances).</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteLifecycleHookAsync(const Model::DeleteLifecycleHookRequest& request, const DeleteLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes the specified notification.</p>
        */
        Model::DeleteNotificationConfigurationOutcome DeleteNotificationConfiguration(const Model::DeleteNotificationConfigurationRequest& request) const;

        /*
            <p>Deletes the specified notification.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteNotificationConfigurationOutcomeCallable DeleteNotificationConfigurationCallable(const Model::DeleteNotificationConfigurationRequest& request) const;

        /*
            <p>Deletes the specified notification.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteNotificationConfigurationAsync(const Model::DeleteNotificationConfigurationRequest& request, const DeleteNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes the specified Auto Scaling policy.</p>
        */
        Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

        /*
            <p>Deletes the specified Auto Scaling policy.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const Model::DeletePolicyRequest& request) const;

        /*
            <p>Deletes the specified Auto Scaling policy.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeletePolicyAsync(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes the specified scheduled action.</p>
        */
        Model::DeleteScheduledActionOutcome DeleteScheduledAction(const Model::DeleteScheduledActionRequest& request) const;

        /*
            <p>Deletes the specified scheduled action.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteScheduledActionOutcomeCallable DeleteScheduledActionCallable(const Model::DeleteScheduledActionRequest& request) const;

        /*
            <p>Deletes the specified scheduled action.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteScheduledActionAsync(const Model::DeleteScheduledActionRequest& request, const DeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes the specified tags.</p>
        */
        Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /*
            <p>Deletes the specified tags.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request) const;

        /*
            <p>Deletes the specified tags.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Describes the current Auto Scaling resource limits for your AWS account.</p> <p>For information about requesting an increase in these limits, see <a href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">AWS Service Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>
        */
        Model::DescribeAccountLimitsOutcome DescribeAccountLimits(const Model::DescribeAccountLimitsRequest& request) const;

        /*
            <p>Describes the current Auto Scaling resource limits for your AWS account.</p> <p>For information about requesting an increase in these limits, see <a href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">AWS Service Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DescribeAccountLimitsOutcomeCallable DescribeAccountLimitsCallable(const Model::DescribeAccountLimitsRequest& request) const;

        /*
            <p>Describes the current Auto Scaling resource limits for your AWS account.</p> <p>For information about requesting an increase in these limits, see <a href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">AWS Service Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DescribeAccountLimitsAsync(const Model::DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Describes the policy adjustment types for use with <a>PutScalingPolicy</a>.</p>
        */
        Model::DescribeAdjustmentTypesOutcome DescribeAdjustmentTypes(const Model::DescribeAdjustmentTypesRequest& request) const;

        /*
            <p>Describes the policy adjustment types for use with <a>PutScalingPolicy</a>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DescribeAdjustmentTypesOutcomeCallable DescribeAdjustmentTypesCallable(const Model::DescribeAdjustmentTypesRequest& request) const;

        /*
            <p>Describes the policy adjustment types for use with <a>PutScalingPolicy</a>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DescribeAdjustmentTypesAsync(const Model::DescribeAdjustmentTypesRequest& request, const DescribeAdjustmentTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Describes one or more Auto Scaling groups. If a list of names is not provided, the call describes all Auto Scaling groups.</p>
        */
        Model::DescribeAutoScalingGroupsOutcome DescribeAutoScalingGroups(const Model::DescribeAutoScalingGroupsRequest& request) const;

        /*
            <p>Describes one or more Auto Scaling groups. If a list of names is not provided, the call describes all Auto Scaling groups.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DescribeAutoScalingGroupsOutcomeCallable DescribeAutoScalingGroupsCallable(const Model::DescribeAutoScalingGroupsRequest& request) const;

        /*
            <p>Describes one or more Auto Scaling groups. If a list of names is not provided, the call describes all Auto Scaling groups.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DescribeAutoScalingGroupsAsync(const Model::DescribeAutoScalingGroupsRequest& request, const DescribeAutoScalingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Describes one or more Auto Scaling instances. If a list is not provided, the call describes all instances.</p>
        */
        Model::DescribeAutoScalingInstancesOutcome DescribeAutoScalingInstances(const Model::DescribeAutoScalingInstancesRequest& request) const;

        /*
            <p>Describes one or more Auto Scaling instances. If a list is not provided, the call describes all instances.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DescribeAutoScalingInstancesOutcomeCallable DescribeAutoScalingInstancesCallable(const Model::DescribeAutoScalingInstancesRequest& request) const;

        /*
            <p>Describes one or more Auto Scaling instances. If a list is not provided, the call describes all instances.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DescribeAutoScalingInstancesAsync(const Model::DescribeAutoScalingInstancesRequest& request, const DescribeAutoScalingInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Describes the notification types that are supported by Auto Scaling.</p>
        */
        Model::DescribeAutoScalingNotificationTypesOutcome DescribeAutoScalingNotificationTypes(const Model::DescribeAutoScalingNotificationTypesRequest& request) const;

        /*
            <p>Describes the notification types that are supported by Auto Scaling.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DescribeAutoScalingNotificationTypesOutcomeCallable DescribeAutoScalingNotificationTypesCallable(const Model::DescribeAutoScalingNotificationTypesRequest& request) const;

        /*
            <p>Describes the notification types that are supported by Auto Scaling.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DescribeAutoScalingNotificationTypesAsync(const Model::DescribeAutoScalingNotificationTypesRequest& request, const DescribeAutoScalingNotificationTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Describes one or more launch configurations. If you omit the list of names, then the call describes all launch configurations.</p>
        */
        Model::DescribeLaunchConfigurationsOutcome DescribeLaunchConfigurations(const Model::DescribeLaunchConfigurationsRequest& request) const;

        /*
            <p>Describes one or more launch configurations. If you omit the list of names, then the call describes all launch configurations.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DescribeLaunchConfigurationsOutcomeCallable DescribeLaunchConfigurationsCallable(const Model::DescribeLaunchConfigurationsRequest& request) const;

        /*
            <p>Describes one or more launch configurations. If you omit the list of names, then the call describes all launch configurations.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DescribeLaunchConfigurationsAsync(const Model::DescribeLaunchConfigurationsRequest& request, const DescribeLaunchConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Describes the available types of lifecycle hooks.</p>
        */
        Model::DescribeLifecycleHookTypesOutcome DescribeLifecycleHookTypes(const Model::DescribeLifecycleHookTypesRequest& request) const;

        /*
            <p>Describes the available types of lifecycle hooks.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DescribeLifecycleHookTypesOutcomeCallable DescribeLifecycleHookTypesCallable(const Model::DescribeLifecycleHookTypesRequest& request) const;

        /*
            <p>Describes the available types of lifecycle hooks.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DescribeLifecycleHookTypesAsync(const Model::DescribeLifecycleHookTypesRequest& request, const DescribeLifecycleHookTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Describes the lifecycle hooks for the specified Auto Scaling group.</p>
        */
        Model::DescribeLifecycleHooksOutcome DescribeLifecycleHooks(const Model::DescribeLifecycleHooksRequest& request) const;

        /*
            <p>Describes the lifecycle hooks for the specified Auto Scaling group.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DescribeLifecycleHooksOutcomeCallable DescribeLifecycleHooksCallable(const Model::DescribeLifecycleHooksRequest& request) const;

        /*
            <p>Describes the lifecycle hooks for the specified Auto Scaling group.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DescribeLifecycleHooksAsync(const Model::DescribeLifecycleHooksRequest& request, const DescribeLifecycleHooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Describes the load balancers for the specified Auto Scaling group.</p>
        */
        Model::DescribeLoadBalancersOutcome DescribeLoadBalancers(const Model::DescribeLoadBalancersRequest& request) const;

        /*
            <p>Describes the load balancers for the specified Auto Scaling group.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DescribeLoadBalancersOutcomeCallable DescribeLoadBalancersCallable(const Model::DescribeLoadBalancersRequest& request) const;

        /*
            <p>Describes the load balancers for the specified Auto Scaling group.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DescribeLoadBalancersAsync(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Describes the available CloudWatch metrics for Auto Scaling.</p> <p>Note that the <code>GroupStandbyInstances</code> metric is not returned by default. You must explicitly request this metric when calling <a>EnableMetricsCollection</a>.</p>
        */
        Model::DescribeMetricCollectionTypesOutcome DescribeMetricCollectionTypes(const Model::DescribeMetricCollectionTypesRequest& request) const;

        /*
            <p>Describes the available CloudWatch metrics for Auto Scaling.</p> <p>Note that the <code>GroupStandbyInstances</code> metric is not returned by default. You must explicitly request this metric when calling <a>EnableMetricsCollection</a>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DescribeMetricCollectionTypesOutcomeCallable DescribeMetricCollectionTypesCallable(const Model::DescribeMetricCollectionTypesRequest& request) const;

        /*
            <p>Describes the available CloudWatch metrics for Auto Scaling.</p> <p>Note that the <code>GroupStandbyInstances</code> metric is not returned by default. You must explicitly request this metric when calling <a>EnableMetricsCollection</a>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DescribeMetricCollectionTypesAsync(const Model::DescribeMetricCollectionTypesRequest& request, const DescribeMetricCollectionTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Describes the notification actions associated with the specified Auto Scaling group.</p>
        */
        Model::DescribeNotificationConfigurationsOutcome DescribeNotificationConfigurations(const Model::DescribeNotificationConfigurationsRequest& request) const;

        /*
            <p>Describes the notification actions associated with the specified Auto Scaling group.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DescribeNotificationConfigurationsOutcomeCallable DescribeNotificationConfigurationsCallable(const Model::DescribeNotificationConfigurationsRequest& request) const;

        /*
            <p>Describes the notification actions associated with the specified Auto Scaling group.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DescribeNotificationConfigurationsAsync(const Model::DescribeNotificationConfigurationsRequest& request, const DescribeNotificationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Describes the policies for the specified Auto Scaling group.</p>
        */
        Model::DescribePoliciesOutcome DescribePolicies(const Model::DescribePoliciesRequest& request) const;

        /*
            <p>Describes the policies for the specified Auto Scaling group.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DescribePoliciesOutcomeCallable DescribePoliciesCallable(const Model::DescribePoliciesRequest& request) const;

        /*
            <p>Describes the policies for the specified Auto Scaling group.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DescribePoliciesAsync(const Model::DescribePoliciesRequest& request, const DescribePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Describes one or more scaling activities for the specified Auto Scaling group. If you omit the <code>ActivityIds</code>, the call returns all activities from the past six weeks. Activities are sorted by the start time. Activities still in progress appear first on the list.</p>
        */
        Model::DescribeScalingActivitiesOutcome DescribeScalingActivities(const Model::DescribeScalingActivitiesRequest& request) const;

        /*
            <p>Describes one or more scaling activities for the specified Auto Scaling group. If you omit the <code>ActivityIds</code>, the call returns all activities from the past six weeks. Activities are sorted by the start time. Activities still in progress appear first on the list.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DescribeScalingActivitiesOutcomeCallable DescribeScalingActivitiesCallable(const Model::DescribeScalingActivitiesRequest& request) const;

        /*
            <p>Describes one or more scaling activities for the specified Auto Scaling group. If you omit the <code>ActivityIds</code>, the call returns all activities from the past six weeks. Activities are sorted by the start time. Activities still in progress appear first on the list.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DescribeScalingActivitiesAsync(const Model::DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Describes the scaling process types for use with <a>ResumeProcesses</a> and <a>SuspendProcesses</a>.</p>
        */
        Model::DescribeScalingProcessTypesOutcome DescribeScalingProcessTypes(const Model::DescribeScalingProcessTypesRequest& request) const;

        /*
            <p>Describes the scaling process types for use with <a>ResumeProcesses</a> and <a>SuspendProcesses</a>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DescribeScalingProcessTypesOutcomeCallable DescribeScalingProcessTypesCallable(const Model::DescribeScalingProcessTypesRequest& request) const;

        /*
            <p>Describes the scaling process types for use with <a>ResumeProcesses</a> and <a>SuspendProcesses</a>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DescribeScalingProcessTypesAsync(const Model::DescribeScalingProcessTypesRequest& request, const DescribeScalingProcessTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Describes the actions scheduled for your Auto Scaling group that haven't run. To describe the actions that have already run, use <a>DescribeScalingActivities</a>.</p>
        */
        Model::DescribeScheduledActionsOutcome DescribeScheduledActions(const Model::DescribeScheduledActionsRequest& request) const;

        /*
            <p>Describes the actions scheduled for your Auto Scaling group that haven't run. To describe the actions that have already run, use <a>DescribeScalingActivities</a>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DescribeScheduledActionsOutcomeCallable DescribeScheduledActionsCallable(const Model::DescribeScheduledActionsRequest& request) const;

        /*
            <p>Describes the actions scheduled for your Auto Scaling group that haven't run. To describe the actions that have already run, use <a>DescribeScalingActivities</a>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DescribeScheduledActionsAsync(const Model::DescribeScheduledActionsRequest& request, const DescribeScheduledActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Describes the specified tags.</p> <p>You can use filters to limit the results. For example, you can query for the tags for a specific Auto Scaling group. You can specify multiple values for a filter. A tag must match at least one of the specified values for it to be included in the results.</p> <p>You can also specify multiple filters. The result includes information for a particular tag only if it matches all the filters. If there's no match, no special message is returned.</p>
        */
        Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

        /*
            <p>Describes the specified tags.</p> <p>You can use filters to limit the results. For example, you can query for the tags for a specific Auto Scaling group. You can specify multiple values for a filter. A tag must match at least one of the specified values for it to be included in the results.</p> <p>You can also specify multiple filters. The result includes information for a particular tag only if it matches all the filters. If there's no match, no special message is returned.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request) const;

        /*
            <p>Describes the specified tags.</p> <p>You can use filters to limit the results. For example, you can query for the tags for a specific Auto Scaling group. You can specify multiple values for a filter. A tag must match at least one of the specified values for it to be included in the results.</p> <p>You can also specify multiple filters. The result includes information for a particular tag only if it matches all the filters. If there's no match, no special message is returned.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Describes the termination policies supported by Auto Scaling.</p>
        */
        Model::DescribeTerminationPolicyTypesOutcome DescribeTerminationPolicyTypes(const Model::DescribeTerminationPolicyTypesRequest& request) const;

        /*
            <p>Describes the termination policies supported by Auto Scaling.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DescribeTerminationPolicyTypesOutcomeCallable DescribeTerminationPolicyTypesCallable(const Model::DescribeTerminationPolicyTypesRequest& request) const;

        /*
            <p>Describes the termination policies supported by Auto Scaling.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DescribeTerminationPolicyTypesAsync(const Model::DescribeTerminationPolicyTypesRequest& request, const DescribeTerminationPolicyTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Removes one or more instances from the specified Auto Scaling group. After the instances are detached, you can manage them independently from the rest of the Auto Scaling group.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/detach-instance-asg.html">Detach EC2 Instances from Your Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>
        */
        Model::DetachInstancesOutcome DetachInstances(const Model::DetachInstancesRequest& request) const;

        /*
            <p>Removes one or more instances from the specified Auto Scaling group. After the instances are detached, you can manage them independently from the rest of the Auto Scaling group.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/detach-instance-asg.html">Detach EC2 Instances from Your Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DetachInstancesOutcomeCallable DetachInstancesCallable(const Model::DetachInstancesRequest& request) const;

        /*
            <p>Removes one or more instances from the specified Auto Scaling group. After the instances are detached, you can manage them independently from the rest of the Auto Scaling group.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/detach-instance-asg.html">Detach EC2 Instances from Your Auto Scaling Group</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DetachInstancesAsync(const Model::DetachInstancesRequest& request, const DetachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Removes one or more load balancers from the specified Auto Scaling group.</p> <p>When you detach a load balancer, it enters the <code>Removing</code> state while deregistering the instances in the group. When all instances are deregistered, then you can no longer describe the load balancer using <a>DescribeLoadBalancers</a>. Note that the instances remain running.</p>
        */
        Model::DetachLoadBalancersOutcome DetachLoadBalancers(const Model::DetachLoadBalancersRequest& request) const;

        /*
            <p>Removes one or more load balancers from the specified Auto Scaling group.</p> <p>When you detach a load balancer, it enters the <code>Removing</code> state while deregistering the instances in the group. When all instances are deregistered, then you can no longer describe the load balancer using <a>DescribeLoadBalancers</a>. Note that the instances remain running.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DetachLoadBalancersOutcomeCallable DetachLoadBalancersCallable(const Model::DetachLoadBalancersRequest& request) const;

        /*
            <p>Removes one or more load balancers from the specified Auto Scaling group.</p> <p>When you detach a load balancer, it enters the <code>Removing</code> state while deregistering the instances in the group. When all instances are deregistered, then you can no longer describe the load balancer using <a>DescribeLoadBalancers</a>. Note that the instances remain running.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DetachLoadBalancersAsync(const Model::DetachLoadBalancersRequest& request, const DetachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Disables monitoring of the specified metrics for the specified Auto Scaling group.</p>
        */
        Model::DisableMetricsCollectionOutcome DisableMetricsCollection(const Model::DisableMetricsCollectionRequest& request) const;

        /*
            <p>Disables monitoring of the specified metrics for the specified Auto Scaling group.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DisableMetricsCollectionOutcomeCallable DisableMetricsCollectionCallable(const Model::DisableMetricsCollectionRequest& request) const;

        /*
            <p>Disables monitoring of the specified metrics for the specified Auto Scaling group.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DisableMetricsCollectionAsync(const Model::DisableMetricsCollectionRequest& request, const DisableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Enables monitoring of the specified metrics for the specified Auto Scaling group.</p> <p>You can only enable metrics collection if <code>InstanceMonitoring</code> in the launch configuration for the group is set to <code>True</code>.</p>
        */
        Model::EnableMetricsCollectionOutcome EnableMetricsCollection(const Model::EnableMetricsCollectionRequest& request) const;

        /*
            <p>Enables monitoring of the specified metrics for the specified Auto Scaling group.</p> <p>You can only enable metrics collection if <code>InstanceMonitoring</code> in the launch configuration for the group is set to <code>True</code>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::EnableMetricsCollectionOutcomeCallable EnableMetricsCollectionCallable(const Model::EnableMetricsCollectionRequest& request) const;

        /*
            <p>Enables monitoring of the specified metrics for the specified Auto Scaling group.</p> <p>You can only enable metrics collection if <code>InstanceMonitoring</code> in the launch configuration for the group is set to <code>True</code>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void EnableMetricsCollectionAsync(const Model::EnableMetricsCollectionRequest& request, const EnableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Moves the specified instances into <code>Standby</code> mode.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingInServiceState.html">Auto Scaling InService State</a> in the <i>Auto Scaling Developer Guide</i>.</p>
        */
        Model::EnterStandbyOutcome EnterStandby(const Model::EnterStandbyRequest& request) const;

        /*
            <p>Moves the specified instances into <code>Standby</code> mode.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingInServiceState.html">Auto Scaling InService State</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::EnterStandbyOutcomeCallable EnterStandbyCallable(const Model::EnterStandbyRequest& request) const;

        /*
            <p>Moves the specified instances into <code>Standby</code> mode.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingInServiceState.html">Auto Scaling InService State</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void EnterStandbyAsync(const Model::EnterStandbyRequest& request, const EnterStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Executes the specified policy.</p>
        */
        Model::ExecutePolicyOutcome ExecutePolicy(const Model::ExecutePolicyRequest& request) const;

        /*
            <p>Executes the specified policy.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ExecutePolicyOutcomeCallable ExecutePolicyCallable(const Model::ExecutePolicyRequest& request) const;

        /*
            <p>Executes the specified policy.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ExecutePolicyAsync(const Model::ExecutePolicyRequest& request, const ExecutePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Moves the specified instances out of <code>Standby</code> mode.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingInServiceState.html">Auto Scaling InService State</a> in the <i>Auto Scaling Developer Guide</i>.</p>
        */
        Model::ExitStandbyOutcome ExitStandby(const Model::ExitStandbyRequest& request) const;

        /*
            <p>Moves the specified instances out of <code>Standby</code> mode.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingInServiceState.html">Auto Scaling InService State</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ExitStandbyOutcomeCallable ExitStandbyCallable(const Model::ExitStandbyRequest& request) const;

        /*
            <p>Moves the specified instances out of <code>Standby</code> mode.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingInServiceState.html">Auto Scaling InService State</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ExitStandbyAsync(const Model::ExitStandbyRequest& request, const ExitStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Creates or updates a lifecycle hook for the specified Auto Scaling Group.</p> <p>A lifecycle hook tells Auto Scaling that you want to perform an action on an instance that is not actively in service; for example, either when the instance launches or before the instance terminates.</p> <p>This operation is a part of the basic sequence for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>Create a notification target. A target can be either an Amazon SQS queue or an Amazon SNS topic.</li> <li>Create an IAM role. This role allows Auto Scaling to publish lifecycle notifications to the designated SQS queue or SNS topic.</li> <li><b>Create the lifecycle hook. You can create a hook that acts when instances launch or when instances terminate.</b></li> <li>If necessary, record the lifecycle action heartbeat to keep the instance in a pending state.</li> <li>Complete the lifecycle action.</li> </ol> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingPendingState.html">Auto Scaling Pending State</a> and <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingTerminatingState.html">Auto Scaling Terminating State</a> in the <i>Auto Scaling Developer Guide</i>.</p> <p>If you exceed your maximum limit of lifecycle hooks, which by default is 50 per region, the call fails. For information about updating this limit, see <a href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">AWS Service Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>
        */
        Model::PutLifecycleHookOutcome PutLifecycleHook(const Model::PutLifecycleHookRequest& request) const;

        /*
            <p>Creates or updates a lifecycle hook for the specified Auto Scaling Group.</p> <p>A lifecycle hook tells Auto Scaling that you want to perform an action on an instance that is not actively in service; for example, either when the instance launches or before the instance terminates.</p> <p>This operation is a part of the basic sequence for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>Create a notification target. A target can be either an Amazon SQS queue or an Amazon SNS topic.</li> <li>Create an IAM role. This role allows Auto Scaling to publish lifecycle notifications to the designated SQS queue or SNS topic.</li> <li><b>Create the lifecycle hook. You can create a hook that acts when instances launch or when instances terminate.</b></li> <li>If necessary, record the lifecycle action heartbeat to keep the instance in a pending state.</li> <li>Complete the lifecycle action.</li> </ol> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingPendingState.html">Auto Scaling Pending State</a> and <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingTerminatingState.html">Auto Scaling Terminating State</a> in the <i>Auto Scaling Developer Guide</i>.</p> <p>If you exceed your maximum limit of lifecycle hooks, which by default is 50 per region, the call fails. For information about updating this limit, see <a href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">AWS Service Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::PutLifecycleHookOutcomeCallable PutLifecycleHookCallable(const Model::PutLifecycleHookRequest& request) const;

        /*
            <p>Creates or updates a lifecycle hook for the specified Auto Scaling Group.</p> <p>A lifecycle hook tells Auto Scaling that you want to perform an action on an instance that is not actively in service; for example, either when the instance launches or before the instance terminates.</p> <p>This operation is a part of the basic sequence for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>Create a notification target. A target can be either an Amazon SQS queue or an Amazon SNS topic.</li> <li>Create an IAM role. This role allows Auto Scaling to publish lifecycle notifications to the designated SQS queue or SNS topic.</li> <li><b>Create the lifecycle hook. You can create a hook that acts when instances launch or when instances terminate.</b></li> <li>If necessary, record the lifecycle action heartbeat to keep the instance in a pending state.</li> <li>Complete the lifecycle action.</li> </ol> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingPendingState.html">Auto Scaling Pending State</a> and <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingTerminatingState.html">Auto Scaling Terminating State</a> in the <i>Auto Scaling Developer Guide</i>.</p> <p>If you exceed your maximum limit of lifecycle hooks, which by default is 50 per region, the call fails. For information about updating this limit, see <a href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">AWS Service Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void PutLifecycleHookAsync(const Model::PutLifecycleHookRequest& request, const PutLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Configures an Auto Scaling group to send notifications when specified events take place. Subscribers to this topic can have messages for events delivered to an endpoint such as a web server or email address. </p> <p>For more information see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/ASGettingNotifications.html">Getting Notifications When Your Auto Scaling Group Changes</a> in the <i>Auto Scaling Developer Guide</i>.</p> <p>This configuration overwrites an existing configuration.</p>
        */
        Model::PutNotificationConfigurationOutcome PutNotificationConfiguration(const Model::PutNotificationConfigurationRequest& request) const;

        /*
            <p> Configures an Auto Scaling group to send notifications when specified events take place. Subscribers to this topic can have messages for events delivered to an endpoint such as a web server or email address. </p> <p>For more information see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/ASGettingNotifications.html">Getting Notifications When Your Auto Scaling Group Changes</a> in the <i>Auto Scaling Developer Guide</i>.</p> <p>This configuration overwrites an existing configuration.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::PutNotificationConfigurationOutcomeCallable PutNotificationConfigurationCallable(const Model::PutNotificationConfigurationRequest& request) const;

        /*
            <p> Configures an Auto Scaling group to send notifications when specified events take place. Subscribers to this topic can have messages for events delivered to an endpoint such as a web server or email address. </p> <p>For more information see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/ASGettingNotifications.html">Getting Notifications When Your Auto Scaling Group Changes</a> in the <i>Auto Scaling Developer Guide</i>.</p> <p>This configuration overwrites an existing configuration.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void PutNotificationConfigurationAsync(const Model::PutNotificationConfigurationRequest& request, const PutNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Creates or updates a policy for an Auto Scaling group. To update an existing policy, use the existing policy name and set the parameters you want to change. Any existing parameter not changed in an update to an existing policy is not changed in this update request.</p> <p>If you exceed your maximum limit of step adjustments, which by default is 20 per region, the call fails. For information about updating this limit, see <a href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">AWS Service Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>
        */
        Model::PutScalingPolicyOutcome PutScalingPolicy(const Model::PutScalingPolicyRequest& request) const;

        /*
            <p>Creates or updates a policy for an Auto Scaling group. To update an existing policy, use the existing policy name and set the parameters you want to change. Any existing parameter not changed in an update to an existing policy is not changed in this update request.</p> <p>If you exceed your maximum limit of step adjustments, which by default is 20 per region, the call fails. For information about updating this limit, see <a href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">AWS Service Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::PutScalingPolicyOutcomeCallable PutScalingPolicyCallable(const Model::PutScalingPolicyRequest& request) const;

        /*
            <p>Creates or updates a policy for an Auto Scaling group. To update an existing policy, use the existing policy name and set the parameters you want to change. Any existing parameter not changed in an update to an existing policy is not changed in this update request.</p> <p>If you exceed your maximum limit of step adjustments, which by default is 20 per region, the call fails. For information about updating this limit, see <a href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">AWS Service Limits</a> in the <i>Amazon Web Services General Reference</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void PutScalingPolicyAsync(const Model::PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p> Creates or updates a scheduled scaling action for an Auto Scaling group. When updating a scheduled scaling action, if you leave a parameter unspecified, the corresponding value remains unchanged in the affected Auto Scaling group. </p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/schedule_time.html">Scheduled Scaling</a> in the <i>Auto Scaling Developer Guide</i>.</p>
        */
        Model::PutScheduledUpdateGroupActionOutcome PutScheduledUpdateGroupAction(const Model::PutScheduledUpdateGroupActionRequest& request) const;

        /*
            <p> Creates or updates a scheduled scaling action for an Auto Scaling group. When updating a scheduled scaling action, if you leave a parameter unspecified, the corresponding value remains unchanged in the affected Auto Scaling group. </p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/schedule_time.html">Scheduled Scaling</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::PutScheduledUpdateGroupActionOutcomeCallable PutScheduledUpdateGroupActionCallable(const Model::PutScheduledUpdateGroupActionRequest& request) const;

        /*
            <p> Creates or updates a scheduled scaling action for an Auto Scaling group. When updating a scheduled scaling action, if you leave a parameter unspecified, the corresponding value remains unchanged in the affected Auto Scaling group. </p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/schedule_time.html">Scheduled Scaling</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void PutScheduledUpdateGroupActionAsync(const Model::PutScheduledUpdateGroupActionRequest& request, const PutScheduledUpdateGroupActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Records a heartbeat for the lifecycle action associated with a specific token. This extends the timeout by the length of time defined by the <code>HeartbeatTimeout</code> parameter of <a>PutLifecycleHook</a>.</p> <p>This operation is a part of the basic sequence for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>Create a notification target. A target can be either an Amazon SQS queue or an Amazon SNS topic.</li> <li>Create an IAM role. This role allows Auto Scaling to publish lifecycle notifications to the designated SQS queue or SNS topic.</li> <li>Create the lifecycle hook. You can create a hook that acts when instances launch or when instances terminate.</li> <li><b>If necessary, record the lifecycle action heartbeat to keep the instance in a pending state.</b></li> <li>Complete the lifecycle action.</li> </ol> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingPendingState.html">Auto Scaling Pending State</a> and <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingTerminatingState.html">Auto Scaling Terminating State</a> in the <i>Auto Scaling Developer Guide</i>.</p>
        */
        Model::RecordLifecycleActionHeartbeatOutcome RecordLifecycleActionHeartbeat(const Model::RecordLifecycleActionHeartbeatRequest& request) const;

        /*
            <p>Records a heartbeat for the lifecycle action associated with a specific token. This extends the timeout by the length of time defined by the <code>HeartbeatTimeout</code> parameter of <a>PutLifecycleHook</a>.</p> <p>This operation is a part of the basic sequence for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>Create a notification target. A target can be either an Amazon SQS queue or an Amazon SNS topic.</li> <li>Create an IAM role. This role allows Auto Scaling to publish lifecycle notifications to the designated SQS queue or SNS topic.</li> <li>Create the lifecycle hook. You can create a hook that acts when instances launch or when instances terminate.</li> <li><b>If necessary, record the lifecycle action heartbeat to keep the instance in a pending state.</b></li> <li>Complete the lifecycle action.</li> </ol> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingPendingState.html">Auto Scaling Pending State</a> and <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingTerminatingState.html">Auto Scaling Terminating State</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::RecordLifecycleActionHeartbeatOutcomeCallable RecordLifecycleActionHeartbeatCallable(const Model::RecordLifecycleActionHeartbeatRequest& request) const;

        /*
            <p>Records a heartbeat for the lifecycle action associated with a specific token. This extends the timeout by the length of time defined by the <code>HeartbeatTimeout</code> parameter of <a>PutLifecycleHook</a>.</p> <p>This operation is a part of the basic sequence for adding a lifecycle hook to an Auto Scaling group:</p> <ol> <li>Create a notification target. A target can be either an Amazon SQS queue or an Amazon SNS topic.</li> <li>Create an IAM role. This role allows Auto Scaling to publish lifecycle notifications to the designated SQS queue or SNS topic.</li> <li>Create the lifecycle hook. You can create a hook that acts when instances launch or when instances terminate.</li> <li><b>If necessary, record the lifecycle action heartbeat to keep the instance in a pending state.</b></li> <li>Complete the lifecycle action.</li> </ol> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingPendingState.html">Auto Scaling Pending State</a> and <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/AutoScalingTerminatingState.html">Auto Scaling Terminating State</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void RecordLifecycleActionHeartbeatAsync(const Model::RecordLifecycleActionHeartbeatRequest& request, const RecordLifecycleActionHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Resumes the specified suspended Auto Scaling processes for the specified Auto Scaling group. To resume specific processes, use the <code>ScalingProcesses</code> parameter. To resume all processes, omit the <code>ScalingProcesses</code> parameter. For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/US_SuspendResume.html">Suspend and Resume Auto Scaling Processes</a> in the <i>Auto Scaling Developer Guide</i>.</p>
        */
        Model::ResumeProcessesOutcome ResumeProcesses(const Model::ResumeProcessesRequest& request) const;

        /*
            <p>Resumes the specified suspended Auto Scaling processes for the specified Auto Scaling group. To resume specific processes, use the <code>ScalingProcesses</code> parameter. To resume all processes, omit the <code>ScalingProcesses</code> parameter. For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/US_SuspendResume.html">Suspend and Resume Auto Scaling Processes</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ResumeProcessesOutcomeCallable ResumeProcessesCallable(const Model::ResumeProcessesRequest& request) const;

        /*
            <p>Resumes the specified suspended Auto Scaling processes for the specified Auto Scaling group. To resume specific processes, use the <code>ScalingProcesses</code> parameter. To resume all processes, omit the <code>ScalingProcesses</code> parameter. For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/US_SuspendResume.html">Suspend and Resume Auto Scaling Processes</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ResumeProcessesAsync(const Model::ResumeProcessesRequest& request, const ResumeProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Sets the size of the specified Auto Scaling group.</p> <p>For more information about desired capacity, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/WhatIsAutoScaling.html">What Is Auto Scaling?</a> in the <i>Auto Scaling Developer Guide</i>.</p>
        */
        Model::SetDesiredCapacityOutcome SetDesiredCapacity(const Model::SetDesiredCapacityRequest& request) const;

        /*
            <p>Sets the size of the specified Auto Scaling group.</p> <p>For more information about desired capacity, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/WhatIsAutoScaling.html">What Is Auto Scaling?</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::SetDesiredCapacityOutcomeCallable SetDesiredCapacityCallable(const Model::SetDesiredCapacityRequest& request) const;

        /*
            <p>Sets the size of the specified Auto Scaling group.</p> <p>For more information about desired capacity, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/WhatIsAutoScaling.html">What Is Auto Scaling?</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void SetDesiredCapacityAsync(const Model::SetDesiredCapacityRequest& request, const SetDesiredCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Sets the health status of the specified instance.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/healthcheck.html">Health Checks</a> in the <i>Auto Scaling Developer Guide</i>.</p>
        */
        Model::SetInstanceHealthOutcome SetInstanceHealth(const Model::SetInstanceHealthRequest& request) const;

        /*
            <p>Sets the health status of the specified instance.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/healthcheck.html">Health Checks</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::SetInstanceHealthOutcomeCallable SetInstanceHealthCallable(const Model::SetInstanceHealthRequest& request) const;

        /*
            <p>Sets the health status of the specified instance.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/healthcheck.html">Health Checks</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void SetInstanceHealthAsync(const Model::SetInstanceHealthRequest& request, const SetInstanceHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Suspends the specified Auto Scaling processes for the specified Auto Scaling group. To suspend specific processes, use the <code>ScalingProcesses</code> parameter. To suspend all processes, omit the <code>ScalingProcesses</code> parameter.</p> <p>Note that if you suspend either the <code>Launch</code> or <code>Terminate</code> process types, it can prevent other process types from functioning properly.</p> <p>To resume processes that have been suspended, use <a>ResumeProcesses</a>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/US_SuspendResume.html">Suspend and Resume Auto Scaling Processes</a> in the <i>Auto Scaling Developer Guide</i>.</p>
        */
        Model::SuspendProcessesOutcome SuspendProcesses(const Model::SuspendProcessesRequest& request) const;

        /*
            <p>Suspends the specified Auto Scaling processes for the specified Auto Scaling group. To suspend specific processes, use the <code>ScalingProcesses</code> parameter. To suspend all processes, omit the <code>ScalingProcesses</code> parameter.</p> <p>Note that if you suspend either the <code>Launch</code> or <code>Terminate</code> process types, it can prevent other process types from functioning properly.</p> <p>To resume processes that have been suspended, use <a>ResumeProcesses</a>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/US_SuspendResume.html">Suspend and Resume Auto Scaling Processes</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::SuspendProcessesOutcomeCallable SuspendProcessesCallable(const Model::SuspendProcessesRequest& request) const;

        /*
            <p>Suspends the specified Auto Scaling processes for the specified Auto Scaling group. To suspend specific processes, use the <code>ScalingProcesses</code> parameter. To suspend all processes, omit the <code>ScalingProcesses</code> parameter.</p> <p>Note that if you suspend either the <code>Launch</code> or <code>Terminate</code> process types, it can prevent other process types from functioning properly.</p> <p>To resume processes that have been suspended, use <a>ResumeProcesses</a>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/US_SuspendResume.html">Suspend and Resume Auto Scaling Processes</a> in the <i>Auto Scaling Developer Guide</i>.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void SuspendProcessesAsync(const Model::SuspendProcessesRequest& request, const SuspendProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Terminates the specified instance and optionally adjusts the desired group size.</p> <p>This call simply makes a termination request. The instances is not terminated immediately.</p>
        */
        Model::TerminateInstanceInAutoScalingGroupOutcome TerminateInstanceInAutoScalingGroup(const Model::TerminateInstanceInAutoScalingGroupRequest& request) const;

        /*
            <p>Terminates the specified instance and optionally adjusts the desired group size.</p> <p>This call simply makes a termination request. The instances is not terminated immediately.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::TerminateInstanceInAutoScalingGroupOutcomeCallable TerminateInstanceInAutoScalingGroupCallable(const Model::TerminateInstanceInAutoScalingGroupRequest& request) const;

        /*
            <p>Terminates the specified instance and optionally adjusts the desired group size.</p> <p>This call simply makes a termination request. The instances is not terminated immediately.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void TerminateInstanceInAutoScalingGroupAsync(const Model::TerminateInstanceInAutoScalingGroupRequest& request, const TerminateInstanceInAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Updates the configuration for the specified Auto Scaling group.</p> <p>To update an Auto Scaling group with a launch configuration with <code>InstanceMonitoring</code> set to <code>False</code>, you must first disable the collection of group metrics. Otherwise, you will get an error. If you have previously enabled the collection of group metrics, you can disable it using <a>DisableMetricsCollection</a>.</p> <p>The new settings are registered upon the completion of this call. Any launch configuration settings take effect on any triggers after this call returns. Scaling activities that are currently in progress aren't affected.</p> <p>Note the following:</p> <ul> <li> <p>If you specify a new value for <code>MinSize</code> without specifying a value for <code>DesiredCapacity</code>, and the new <code>MinSize</code> is larger than the current size of the group, we implicitly call <a>SetDesiredCapacity</a> to set the size of the group to the new value of <code>MinSize</code>.</p> </li> <li> <p>If you specify a new value for <code>MaxSize</code> without specifying a value for <code>DesiredCapacity</code>, and the new <code>MaxSize</code> is smaller than the current size of the group, we implicitly call <a>SetDesiredCapacity</a> to set the size of the group to the new value of <code>MaxSize</code>.</p> </li> <li> <p>All other optional parameters are left unchanged if not specified.</p> </li> </ul>
        */
        Model::UpdateAutoScalingGroupOutcome UpdateAutoScalingGroup(const Model::UpdateAutoScalingGroupRequest& request) const;

        /*
            <p>Updates the configuration for the specified Auto Scaling group.</p> <p>To update an Auto Scaling group with a launch configuration with <code>InstanceMonitoring</code> set to <code>False</code>, you must first disable the collection of group metrics. Otherwise, you will get an error. If you have previously enabled the collection of group metrics, you can disable it using <a>DisableMetricsCollection</a>.</p> <p>The new settings are registered upon the completion of this call. Any launch configuration settings take effect on any triggers after this call returns. Scaling activities that are currently in progress aren't affected.</p> <p>Note the following:</p> <ul> <li> <p>If you specify a new value for <code>MinSize</code> without specifying a value for <code>DesiredCapacity</code>, and the new <code>MinSize</code> is larger than the current size of the group, we implicitly call <a>SetDesiredCapacity</a> to set the size of the group to the new value of <code>MinSize</code>.</p> </li> <li> <p>If you specify a new value for <code>MaxSize</code> without specifying a value for <code>DesiredCapacity</code>, and the new <code>MaxSize</code> is smaller than the current size of the group, we implicitly call <a>SetDesiredCapacity</a> to set the size of the group to the new value of <code>MaxSize</code>.</p> </li> <li> <p>All other optional parameters are left unchanged if not specified.</p> </li> </ul>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UpdateAutoScalingGroupOutcomeCallable UpdateAutoScalingGroupCallable(const Model::UpdateAutoScalingGroupRequest& request) const;

        /*
            <p>Updates the configuration for the specified Auto Scaling group.</p> <p>To update an Auto Scaling group with a launch configuration with <code>InstanceMonitoring</code> set to <code>False</code>, you must first disable the collection of group metrics. Otherwise, you will get an error. If you have previously enabled the collection of group metrics, you can disable it using <a>DisableMetricsCollection</a>.</p> <p>The new settings are registered upon the completion of this call. Any launch configuration settings take effect on any triggers after this call returns. Scaling activities that are currently in progress aren't affected.</p> <p>Note the following:</p> <ul> <li> <p>If you specify a new value for <code>MinSize</code> without specifying a value for <code>DesiredCapacity</code>, and the new <code>MinSize</code> is larger than the current size of the group, we implicitly call <a>SetDesiredCapacity</a> to set the size of the group to the new value of <code>MinSize</code>.</p> </li> <li> <p>If you specify a new value for <code>MaxSize</code> without specifying a value for <code>DesiredCapacity</code>, and the new <code>MaxSize</code> is smaller than the current size of the group, we implicitly call <a>SetDesiredCapacity</a> to set the size of the group to the new value of <code>MaxSize</code>.</p> </li> <li> <p>All other optional parameters are left unchanged if not specified.</p> </li> </ul>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UpdateAutoScalingGroupAsync(const Model::UpdateAutoScalingGroupRequest& request, const UpdateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

/**Async helpers**/
        void AttachInstancesAsyncHelper(const Model::AttachInstancesRequest& request, const AttachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachLoadBalancersAsyncHelper(const Model::AttachLoadBalancersRequest& request, const AttachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CompleteLifecycleActionAsyncHelper(const Model::CompleteLifecycleActionRequest& request, const CompleteLifecycleActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAutoScalingGroupAsyncHelper(const Model::CreateAutoScalingGroupRequest& request, const CreateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLaunchConfigurationAsyncHelper(const Model::CreateLaunchConfigurationRequest& request, const CreateLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateOrUpdateTagsAsyncHelper(const Model::CreateOrUpdateTagsRequest& request, const CreateOrUpdateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAutoScalingGroupAsyncHelper(const Model::DeleteAutoScalingGroupRequest& request, const DeleteAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLaunchConfigurationAsyncHelper(const Model::DeleteLaunchConfigurationRequest& request, const DeleteLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLifecycleHookAsyncHelper(const Model::DeleteLifecycleHookRequest& request, const DeleteLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNotificationConfigurationAsyncHelper(const Model::DeleteNotificationConfigurationRequest& request, const DeleteNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePolicyAsyncHelper(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteScheduledActionAsyncHelper(const Model::DeleteScheduledActionRequest& request, const DeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTagsAsyncHelper(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountLimitsAsyncHelper(const Model::DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAdjustmentTypesAsyncHelper(const Model::DescribeAdjustmentTypesRequest& request, const DescribeAdjustmentTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAutoScalingGroupsAsyncHelper(const Model::DescribeAutoScalingGroupsRequest& request, const DescribeAutoScalingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAutoScalingInstancesAsyncHelper(const Model::DescribeAutoScalingInstancesRequest& request, const DescribeAutoScalingInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAutoScalingNotificationTypesAsyncHelper(const Model::DescribeAutoScalingNotificationTypesRequest& request, const DescribeAutoScalingNotificationTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLaunchConfigurationsAsyncHelper(const Model::DescribeLaunchConfigurationsRequest& request, const DescribeLaunchConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLifecycleHookTypesAsyncHelper(const Model::DescribeLifecycleHookTypesRequest& request, const DescribeLifecycleHookTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLifecycleHooksAsyncHelper(const Model::DescribeLifecycleHooksRequest& request, const DescribeLifecycleHooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLoadBalancersAsyncHelper(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMetricCollectionTypesAsyncHelper(const Model::DescribeMetricCollectionTypesRequest& request, const DescribeMetricCollectionTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeNotificationConfigurationsAsyncHelper(const Model::DescribeNotificationConfigurationsRequest& request, const DescribeNotificationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePoliciesAsyncHelper(const Model::DescribePoliciesRequest& request, const DescribePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScalingActivitiesAsyncHelper(const Model::DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScalingProcessTypesAsyncHelper(const Model::DescribeScalingProcessTypesRequest& request, const DescribeScalingProcessTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScheduledActionsAsyncHelper(const Model::DescribeScheduledActionsRequest& request, const DescribeScheduledActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTagsAsyncHelper(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTerminationPolicyTypesAsyncHelper(const Model::DescribeTerminationPolicyTypesRequest& request, const DescribeTerminationPolicyTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachInstancesAsyncHelper(const Model::DetachInstancesRequest& request, const DetachInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachLoadBalancersAsyncHelper(const Model::DetachLoadBalancersRequest& request, const DetachLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableMetricsCollectionAsyncHelper(const Model::DisableMetricsCollectionRequest& request, const DisableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableMetricsCollectionAsyncHelper(const Model::EnableMetricsCollectionRequest& request, const EnableMetricsCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnterStandbyAsyncHelper(const Model::EnterStandbyRequest& request, const EnterStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExecutePolicyAsyncHelper(const Model::ExecutePolicyRequest& request, const ExecutePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExitStandbyAsyncHelper(const Model::ExitStandbyRequest& request, const ExitStandbyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutLifecycleHookAsyncHelper(const Model::PutLifecycleHookRequest& request, const PutLifecycleHookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutNotificationConfigurationAsyncHelper(const Model::PutNotificationConfigurationRequest& request, const PutNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutScalingPolicyAsyncHelper(const Model::PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutScheduledUpdateGroupActionAsyncHelper(const Model::PutScheduledUpdateGroupActionRequest& request, const PutScheduledUpdateGroupActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RecordLifecycleActionHeartbeatAsyncHelper(const Model::RecordLifecycleActionHeartbeatRequest& request, const RecordLifecycleActionHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResumeProcessesAsyncHelper(const Model::ResumeProcessesRequest& request, const ResumeProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetDesiredCapacityAsyncHelper(const Model::SetDesiredCapacityRequest& request, const SetDesiredCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetInstanceHealthAsyncHelper(const Model::SetInstanceHealthRequest& request, const SetInstanceHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SuspendProcessesAsyncHelper(const Model::SuspendProcessesRequest& request, const SuspendProcessesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TerminateInstanceInAutoScalingGroupAsyncHelper(const Model::TerminateInstanceInAutoScalingGroupRequest& request, const TerminateInstanceInAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAutoScalingGroupAsyncHelper(const Model::UpdateAutoScalingGroupRequest& request, const UpdateAutoScalingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace AutoScaling
} // namespace Aws
