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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/sns/model/ConfirmSubscriptionResult.h>
#include <aws/sns/model/CreatePlatformApplicationResult.h>
#include <aws/sns/model/CreatePlatformEndpointResult.h>
#include <aws/sns/model/CreateTopicResult.h>
#include <aws/sns/model/GetEndpointAttributesResult.h>
#include <aws/sns/model/GetPlatformApplicationAttributesResult.h>
#include <aws/sns/model/GetSubscriptionAttributesResult.h>
#include <aws/sns/model/GetTopicAttributesResult.h>
#include <aws/sns/model/ListEndpointsByPlatformApplicationResult.h>
#include <aws/sns/model/ListPlatformApplicationsResult.h>
#include <aws/sns/model/ListSubscriptionsResult.h>
#include <aws/sns/model/ListSubscriptionsByTopicResult.h>
#include <aws/sns/model/ListTagsForResourceResult.h>
#include <aws/sns/model/ListTopicsResult.h>
#include <aws/sns/model/PublishResult.h>
#include <aws/sns/model/SubscribeResult.h>
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

namespace SNS
{

namespace Model
{
        class AddPermissionRequest;
        class AddTagsToResourceRequest;
        class ConfirmSubscriptionRequest;
        class CreatePlatformApplicationRequest;
        class CreatePlatformEndpointRequest;
        class CreateTopicRequest;
        class DeleteEndpointRequest;
        class DeletePlatformApplicationRequest;
        class DeleteTopicRequest;
        class GetEndpointAttributesRequest;
        class GetPlatformApplicationAttributesRequest;
        class GetSubscriptionAttributesRequest;
        class GetTopicAttributesRequest;
        class ListEndpointsByPlatformApplicationRequest;
        class ListPlatformApplicationsRequest;
        class ListSubscriptionsRequest;
        class ListSubscriptionsByTopicRequest;
        class ListTagsForResourceRequest;
        class ListTopicsRequest;
        class PublishRequest;
        class RemovePermissionRequest;
        class RemoveTagsFromResourceRequest;
        class SetEndpointAttributesRequest;
        class SetPlatformApplicationAttributesRequest;
        class SetSubscriptionAttributesRequest;
        class SetTopicAttributesRequest;
        class SubscribeRequest;
        class UnsubscribeRequest;

        typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> AddPermissionOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> AddTagsToResourceOutcome;
        typedef Utils::Outcome<ConfirmSubscriptionResult, Client::AWSError<SNSErrors>> ConfirmSubscriptionOutcome;
        typedef Utils::Outcome<CreatePlatformApplicationResult, Client::AWSError<SNSErrors>> CreatePlatformApplicationOutcome;
        typedef Utils::Outcome<CreatePlatformEndpointResult, Client::AWSError<SNSErrors>> CreatePlatformEndpointOutcome;
        typedef Utils::Outcome<CreateTopicResult, Client::AWSError<SNSErrors>> CreateTopicOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> DeleteEndpointOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> DeletePlatformApplicationOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> DeleteTopicOutcome;
        typedef Utils::Outcome<GetEndpointAttributesResult, Client::AWSError<SNSErrors>> GetEndpointAttributesOutcome;
        typedef Utils::Outcome<GetPlatformApplicationAttributesResult, Client::AWSError<SNSErrors>> GetPlatformApplicationAttributesOutcome;
        typedef Utils::Outcome<GetSubscriptionAttributesResult, Client::AWSError<SNSErrors>> GetSubscriptionAttributesOutcome;
        typedef Utils::Outcome<GetTopicAttributesResult, Client::AWSError<SNSErrors>> GetTopicAttributesOutcome;
        typedef Utils::Outcome<ListEndpointsByPlatformApplicationResult, Client::AWSError<SNSErrors>> ListEndpointsByPlatformApplicationOutcome;
        typedef Utils::Outcome<ListPlatformApplicationsResult, Client::AWSError<SNSErrors>> ListPlatformApplicationsOutcome;
        typedef Utils::Outcome<ListSubscriptionsResult, Client::AWSError<SNSErrors>> ListSubscriptionsOutcome;
        typedef Utils::Outcome<ListSubscriptionsByTopicResult, Client::AWSError<SNSErrors>> ListSubscriptionsByTopicOutcome;
        typedef Utils::Outcome<ListTagsForResourceResult, Client::AWSError<SNSErrors>> ListTagsForResourceOutcome;
        typedef Utils::Outcome<ListTopicsResult, Client::AWSError<SNSErrors>> ListTopicsOutcome;
        typedef Utils::Outcome<PublishResult, Client::AWSError<SNSErrors>> PublishOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> RemovePermissionOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> RemoveTagsFromResourceOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> SetEndpointAttributesOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> SetPlatformApplicationAttributesOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> SetSubscriptionAttributesOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> SetTopicAttributesOutcome;
        typedef Utils::Outcome<SubscribeResult, Client::AWSError<SNSErrors>> SubscribeOutcome;
        typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> UnsubscribeOutcome;

        typedef std::future<AddPermissionOutcome> AddPermissionOutcomeCallable;
        typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
        typedef std::future<ConfirmSubscriptionOutcome> ConfirmSubscriptionOutcomeCallable;
        typedef std::future<CreatePlatformApplicationOutcome> CreatePlatformApplicationOutcomeCallable;
        typedef std::future<CreatePlatformEndpointOutcome> CreatePlatformEndpointOutcomeCallable;
        typedef std::future<CreateTopicOutcome> CreateTopicOutcomeCallable;
        typedef std::future<DeleteEndpointOutcome> DeleteEndpointOutcomeCallable;
        typedef std::future<DeletePlatformApplicationOutcome> DeletePlatformApplicationOutcomeCallable;
        typedef std::future<DeleteTopicOutcome> DeleteTopicOutcomeCallable;
        typedef std::future<GetEndpointAttributesOutcome> GetEndpointAttributesOutcomeCallable;
        typedef std::future<GetPlatformApplicationAttributesOutcome> GetPlatformApplicationAttributesOutcomeCallable;
        typedef std::future<GetSubscriptionAttributesOutcome> GetSubscriptionAttributesOutcomeCallable;
        typedef std::future<GetTopicAttributesOutcome> GetTopicAttributesOutcomeCallable;
        typedef std::future<ListEndpointsByPlatformApplicationOutcome> ListEndpointsByPlatformApplicationOutcomeCallable;
        typedef std::future<ListPlatformApplicationsOutcome> ListPlatformApplicationsOutcomeCallable;
        typedef std::future<ListSubscriptionsOutcome> ListSubscriptionsOutcomeCallable;
        typedef std::future<ListSubscriptionsByTopicOutcome> ListSubscriptionsByTopicOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListTopicsOutcome> ListTopicsOutcomeCallable;
        typedef std::future<PublishOutcome> PublishOutcomeCallable;
        typedef std::future<RemovePermissionOutcome> RemovePermissionOutcomeCallable;
        typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
        typedef std::future<SetEndpointAttributesOutcome> SetEndpointAttributesOutcomeCallable;
        typedef std::future<SetPlatformApplicationAttributesOutcome> SetPlatformApplicationAttributesOutcomeCallable;
        typedef std::future<SetSubscriptionAttributesOutcome> SetSubscriptionAttributesOutcomeCallable;
        typedef std::future<SetTopicAttributesOutcome> SetTopicAttributesOutcomeCallable;
        typedef std::future<SubscribeOutcome> SubscribeOutcomeCallable;
        typedef std::future<UnsubscribeOutcome> UnsubscribeOutcomeCallable;
} // namespace Model

  class SNSClient;

    typedef std::function<void(const SNSClient*, const Model::AddPermissionRequest&, const Model::AddPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddPermissionResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ConfirmSubscriptionRequest&, const Model::ConfirmSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmSubscriptionResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::CreatePlatformApplicationRequest&, const Model::CreatePlatformApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePlatformApplicationResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::CreatePlatformEndpointRequest&, const Model::CreatePlatformEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePlatformEndpointResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::CreateTopicRequest&, const Model::CreateTopicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTopicResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::DeleteEndpointRequest&, const Model::DeleteEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::DeletePlatformApplicationRequest&, const Model::DeletePlatformApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePlatformApplicationResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::DeleteTopicRequest&, const Model::DeleteTopicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTopicResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::GetEndpointAttributesRequest&, const Model::GetEndpointAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEndpointAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::GetPlatformApplicationAttributesRequest&, const Model::GetPlatformApplicationAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPlatformApplicationAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::GetSubscriptionAttributesRequest&, const Model::GetSubscriptionAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubscriptionAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::GetTopicAttributesRequest&, const Model::GetTopicAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTopicAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListEndpointsByPlatformApplicationRequest&, const Model::ListEndpointsByPlatformApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEndpointsByPlatformApplicationResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListPlatformApplicationsRequest&, const Model::ListPlatformApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPlatformApplicationsResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListSubscriptionsRequest&, const Model::ListSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListSubscriptionsByTopicRequest&, const Model::ListSubscriptionsByTopicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscriptionsByTopicResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListTopicsRequest&, const Model::ListTopicsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTopicsResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::PublishRequest&, const Model::PublishOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PublishResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::RemovePermissionRequest&, const Model::RemovePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemovePermissionResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromResourceResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::SetEndpointAttributesRequest&, const Model::SetEndpointAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetEndpointAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::SetPlatformApplicationAttributesRequest&, const Model::SetPlatformApplicationAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetPlatformApplicationAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::SetSubscriptionAttributesRequest&, const Model::SetSubscriptionAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetSubscriptionAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::SetTopicAttributesRequest&, const Model::SetTopicAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetTopicAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::SubscribeRequest&, const Model::SubscribeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubscribeResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::UnsubscribeRequest&, const Model::UnsubscribeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnsubscribeResponseReceivedHandler;

  /*
    <fullname>Amazon Simple Notification Service</fullname> <p>Amazon Simple Notification Service (Amazon SNS) is a web service that enables you to build distributed web-enabled applications. Applications can use Amazon SNS to easily push real-time notification messages to interested subscribers over multiple delivery protocols. For more information about this product see <a href="http://aws.amazon.com/sns/">http://aws.amazon.com/sns</a>. For detailed information about Amazon SNS features and their associated API calls, see the <a href="http://docs.aws.amazon.com/sns/latest/dg/">Amazon SNS Developer Guide</a>. </p> <p>We also provide SDKs that enable you to access Amazon SNS from your preferred programming language. The SDKs contain functionality that automatically takes care of tasks such as: cryptographically signing your service requests, retrying requests, and handling error responses. For a list of available SDKs, go to <a href="http://aws.amazon.com/tools/">Tools for Amazon Web Services</a>. </p>
  */
  class AWS_SNS_API SNSClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

        /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SNSClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SNSClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SNSClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
            const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

        ~SNSClient();
        /*
            <p>Adds a statement to a topic's access control policy, granting access for the specified AWS accounts to the specified actions.</p>
        */
        Model::AddPermissionOutcome AddPermission(const Model::AddPermissionRequest& request) const;

        /*
            <p>Adds a statement to a topic's access control policy, granting access for the specified AWS accounts to the specified actions.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::AddPermissionOutcomeCallable AddPermissionCallable(const Model::AddPermissionRequest& request) const;

        /*
            <p>Adds a statement to a topic's access control policy, granting access for the specified AWS accounts to the specified actions.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void AddPermissionAsync(const Model::AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            
        */
        Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

        /*
            

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;

        /*
            

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void AddTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Verifies an endpoint owner's intent to receive messages by validating the token sent to the endpoint by an earlier <code>Subscribe</code> action. If the token is valid, the action creates a new subscription and returns its Amazon Resource Name (ARN). This call requires an AWS signature only when the <code>AuthenticateOnUnsubscribe</code> flag is set to "true".</p>
        */
        Model::ConfirmSubscriptionOutcome ConfirmSubscription(const Model::ConfirmSubscriptionRequest& request) const;

        /*
            <p>Verifies an endpoint owner's intent to receive messages by validating the token sent to the endpoint by an earlier <code>Subscribe</code> action. If the token is valid, the action creates a new subscription and returns its Amazon Resource Name (ARN). This call requires an AWS signature only when the <code>AuthenticateOnUnsubscribe</code> flag is set to "true".</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ConfirmSubscriptionOutcomeCallable ConfirmSubscriptionCallable(const Model::ConfirmSubscriptionRequest& request) const;

        /*
            <p>Verifies an endpoint owner's intent to receive messages by validating the token sent to the endpoint by an earlier <code>Subscribe</code> action. If the token is valid, the action creates a new subscription and returns its Amazon Resource Name (ARN). This call requires an AWS signature only when the <code>AuthenticateOnUnsubscribe</code> flag is set to "true".</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ConfirmSubscriptionAsync(const Model::ConfirmSubscriptionRequest& request, const ConfirmSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Creates a platform application object for one of the supported push notification services, such as APNS and GCM, to which devices and mobile apps may register. You must specify PlatformPrincipal and PlatformCredential attributes when using the <code>CreatePlatformApplication</code> action. The PlatformPrincipal is received from the notification service. For APNS/APNS_SANDBOX, PlatformPrincipal is "SSL certificate". For GCM, PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client id". The PlatformCredential is also received from the notification service. For APNS/APNS_SANDBOX, PlatformCredential is "private key". For GCM, PlatformCredential is "API key". For ADM, PlatformCredential is "client secret". The PlatformApplicationArn that is returned when using <code>CreatePlatformApplication</code> is then used as an attribute for the <code>CreatePlatformEndpoint</code> action. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>
        */
        Model::CreatePlatformApplicationOutcome CreatePlatformApplication(const Model::CreatePlatformApplicationRequest& request) const;

        /*
            <p>Creates a platform application object for one of the supported push notification services, such as APNS and GCM, to which devices and mobile apps may register. You must specify PlatformPrincipal and PlatformCredential attributes when using the <code>CreatePlatformApplication</code> action. The PlatformPrincipal is received from the notification service. For APNS/APNS_SANDBOX, PlatformPrincipal is "SSL certificate". For GCM, PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client id". The PlatformCredential is also received from the notification service. For APNS/APNS_SANDBOX, PlatformCredential is "private key". For GCM, PlatformCredential is "API key". For ADM, PlatformCredential is "client secret". The PlatformApplicationArn that is returned when using <code>CreatePlatformApplication</code> is then used as an attribute for the <code>CreatePlatformEndpoint</code> action. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreatePlatformApplicationOutcomeCallable CreatePlatformApplicationCallable(const Model::CreatePlatformApplicationRequest& request) const;

        /*
            <p>Creates a platform application object for one of the supported push notification services, such as APNS and GCM, to which devices and mobile apps may register. You must specify PlatformPrincipal and PlatformCredential attributes when using the <code>CreatePlatformApplication</code> action. The PlatformPrincipal is received from the notification service. For APNS/APNS_SANDBOX, PlatformPrincipal is "SSL certificate". For GCM, PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client id". The PlatformCredential is also received from the notification service. For APNS/APNS_SANDBOX, PlatformCredential is "private key". For GCM, PlatformCredential is "API key". For ADM, PlatformCredential is "client secret". The PlatformApplicationArn that is returned when using <code>CreatePlatformApplication</code> is then used as an attribute for the <code>CreatePlatformEndpoint</code> action. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreatePlatformApplicationAsync(const Model::CreatePlatformApplicationRequest& request, const CreatePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Creates an endpoint for a device and mobile app on one of the supported push notification services, such as GCM and APNS. <code>CreatePlatformEndpoint</code> requires the PlatformApplicationArn that is returned from <code>CreatePlatformApplication</code>. The EndpointArn that is returned when using <code>CreatePlatformEndpoint</code> can then be used by the <code>Publish</code> action to send a message to a mobile app or by the <code>Subscribe</code> action for subscription to a topic. The <code>CreatePlatformEndpoint</code> action is idempotent, so if the requester already owns an endpoint with the same device token and attributes, that endpoint's ARN is returned without creating a new endpoint. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p> <p>When using <code>CreatePlatformEndpoint</code> with Baidu, two attributes must be provided: ChannelId and UserId. The token field must also contain the ChannelId. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePushBaiduEndpoint.html">Creating an Amazon SNS Endpoint for Baidu</a>. </p>
        */
        Model::CreatePlatformEndpointOutcome CreatePlatformEndpoint(const Model::CreatePlatformEndpointRequest& request) const;

        /*
            <p>Creates an endpoint for a device and mobile app on one of the supported push notification services, such as GCM and APNS. <code>CreatePlatformEndpoint</code> requires the PlatformApplicationArn that is returned from <code>CreatePlatformApplication</code>. The EndpointArn that is returned when using <code>CreatePlatformEndpoint</code> can then be used by the <code>Publish</code> action to send a message to a mobile app or by the <code>Subscribe</code> action for subscription to a topic. The <code>CreatePlatformEndpoint</code> action is idempotent, so if the requester already owns an endpoint with the same device token and attributes, that endpoint's ARN is returned without creating a new endpoint. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p> <p>When using <code>CreatePlatformEndpoint</code> with Baidu, two attributes must be provided: ChannelId and UserId. The token field must also contain the ChannelId. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePushBaiduEndpoint.html">Creating an Amazon SNS Endpoint for Baidu</a>. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreatePlatformEndpointOutcomeCallable CreatePlatformEndpointCallable(const Model::CreatePlatformEndpointRequest& request) const;

        /*
            <p>Creates an endpoint for a device and mobile app on one of the supported push notification services, such as GCM and APNS. <code>CreatePlatformEndpoint</code> requires the PlatformApplicationArn that is returned from <code>CreatePlatformApplication</code>. The EndpointArn that is returned when using <code>CreatePlatformEndpoint</code> can then be used by the <code>Publish</code> action to send a message to a mobile app or by the <code>Subscribe</code> action for subscription to a topic. The <code>CreatePlatformEndpoint</code> action is idempotent, so if the requester already owns an endpoint with the same device token and attributes, that endpoint's ARN is returned without creating a new endpoint. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p> <p>When using <code>CreatePlatformEndpoint</code> with Baidu, two attributes must be provided: ChannelId and UserId. The token field must also contain the ChannelId. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePushBaiduEndpoint.html">Creating an Amazon SNS Endpoint for Baidu</a>. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreatePlatformEndpointAsync(const Model::CreatePlatformEndpointRequest& request, const CreatePlatformEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Creates a topic to which notifications can be published. Users can create at most 3000 topics. For more information, see <a href="http://aws.amazon.com/sns/">http://aws.amazon.com/sns</a>. This action is idempotent, so if the requester already owns a topic with the specified name, that topic's ARN is returned without creating a new topic.</p>
        */
        Model::CreateTopicOutcome CreateTopic(const Model::CreateTopicRequest& request) const;

        /*
            <p>Creates a topic to which notifications can be published. Users can create at most 3000 topics. For more information, see <a href="http://aws.amazon.com/sns/">http://aws.amazon.com/sns</a>. This action is idempotent, so if the requester already owns a topic with the specified name, that topic's ARN is returned without creating a new topic.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::CreateTopicOutcomeCallable CreateTopicCallable(const Model::CreateTopicRequest& request) const;

        /*
            <p>Creates a topic to which notifications can be published. Users can create at most 3000 topics. For more information, see <a href="http://aws.amazon.com/sns/">http://aws.amazon.com/sns</a>. This action is idempotent, so if the requester already owns a topic with the specified name, that topic's ARN is returned without creating a new topic.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void CreateTopicAsync(const Model::CreateTopicRequest& request, const CreateTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes the endpoint from Amazon SNS. This action is idempotent. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>
        */
        Model::DeleteEndpointOutcome DeleteEndpoint(const Model::DeleteEndpointRequest& request) const;

        /*
            <p>Deletes the endpoint from Amazon SNS. This action is idempotent. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteEndpointOutcomeCallable DeleteEndpointCallable(const Model::DeleteEndpointRequest& request) const;

        /*
            <p>Deletes the endpoint from Amazon SNS. This action is idempotent. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteEndpointAsync(const Model::DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes a platform application object for one of the supported push notification services, such as APNS and GCM. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>
        */
        Model::DeletePlatformApplicationOutcome DeletePlatformApplication(const Model::DeletePlatformApplicationRequest& request) const;

        /*
            <p>Deletes a platform application object for one of the supported push notification services, such as APNS and GCM. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeletePlatformApplicationOutcomeCallable DeletePlatformApplicationCallable(const Model::DeletePlatformApplicationRequest& request) const;

        /*
            <p>Deletes a platform application object for one of the supported push notification services, such as APNS and GCM. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeletePlatformApplicationAsync(const Model::DeletePlatformApplicationRequest& request, const DeletePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes a topic and all its subscriptions. Deleting a topic might prevent some messages previously sent to the topic from being delivered to subscribers. This action is idempotent, so deleting a topic that does not exist does not result in an error.</p>
        */
        Model::DeleteTopicOutcome DeleteTopic(const Model::DeleteTopicRequest& request) const;

        /*
            <p>Deletes a topic and all its subscriptions. Deleting a topic might prevent some messages previously sent to the topic from being delivered to subscribers. This action is idempotent, so deleting a topic that does not exist does not result in an error.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::DeleteTopicOutcomeCallable DeleteTopicCallable(const Model::DeleteTopicRequest& request) const;

        /*
            <p>Deletes a topic and all its subscriptions. Deleting a topic might prevent some messages previously sent to the topic from being delivered to subscribers. This action is idempotent, so deleting a topic that does not exist does not result in an error.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void DeleteTopicAsync(const Model::DeleteTopicRequest& request, const DeleteTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Retrieves the endpoint attributes for a device on one of the supported push notification services, such as GCM and APNS. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>
        */
        Model::GetEndpointAttributesOutcome GetEndpointAttributes(const Model::GetEndpointAttributesRequest& request) const;

        /*
            <p>Retrieves the endpoint attributes for a device on one of the supported push notification services, such as GCM and APNS. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetEndpointAttributesOutcomeCallable GetEndpointAttributesCallable(const Model::GetEndpointAttributesRequest& request) const;

        /*
            <p>Retrieves the endpoint attributes for a device on one of the supported push notification services, such as GCM and APNS. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetEndpointAttributesAsync(const Model::GetEndpointAttributesRequest& request, const GetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Retrieves the attributes of the platform application object for the supported push notification services, such as APNS and GCM. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>
        */
        Model::GetPlatformApplicationAttributesOutcome GetPlatformApplicationAttributes(const Model::GetPlatformApplicationAttributesRequest& request) const;

        /*
            <p>Retrieves the attributes of the platform application object for the supported push notification services, such as APNS and GCM. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetPlatformApplicationAttributesOutcomeCallable GetPlatformApplicationAttributesCallable(const Model::GetPlatformApplicationAttributesRequest& request) const;

        /*
            <p>Retrieves the attributes of the platform application object for the supported push notification services, such as APNS and GCM. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetPlatformApplicationAttributesAsync(const Model::GetPlatformApplicationAttributesRequest& request, const GetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Returns all of the properties of a subscription.</p>
        */
        Model::GetSubscriptionAttributesOutcome GetSubscriptionAttributes(const Model::GetSubscriptionAttributesRequest& request) const;

        /*
            <p>Returns all of the properties of a subscription.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetSubscriptionAttributesOutcomeCallable GetSubscriptionAttributesCallable(const Model::GetSubscriptionAttributesRequest& request) const;

        /*
            <p>Returns all of the properties of a subscription.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetSubscriptionAttributesAsync(const Model::GetSubscriptionAttributesRequest& request, const GetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Returns all of the properties of a topic. Topic properties returned might differ based on the authorization of the user. </p>
        */
        Model::GetTopicAttributesOutcome GetTopicAttributes(const Model::GetTopicAttributesRequest& request) const;

        /*
            <p>Returns all of the properties of a topic. Topic properties returned might differ based on the authorization of the user. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::GetTopicAttributesOutcomeCallable GetTopicAttributesCallable(const Model::GetTopicAttributesRequest& request) const;

        /*
            <p>Returns all of the properties of a topic. Topic properties returned might differ based on the authorization of the user. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void GetTopicAttributesAsync(const Model::GetTopicAttributesRequest& request, const GetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists the endpoints and endpoint attributes for devices in a supported push notification service, such as GCM and APNS. The results for <code>ListEndpointsByPlatformApplication</code> are paginated and return a limited list of endpoints, up to 100. If additional records are available after the first page results, then a NextToken string will be returned. To receive the next page, you call <code>ListEndpointsByPlatformApplication</code> again using the NextToken string received from the previous call. When there are no more records to return, NextToken will be null. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>
        */
        Model::ListEndpointsByPlatformApplicationOutcome ListEndpointsByPlatformApplication(const Model::ListEndpointsByPlatformApplicationRequest& request) const;

        /*
            <p>Lists the endpoints and endpoint attributes for devices in a supported push notification service, such as GCM and APNS. The results for <code>ListEndpointsByPlatformApplication</code> are paginated and return a limited list of endpoints, up to 100. If additional records are available after the first page results, then a NextToken string will be returned. To receive the next page, you call <code>ListEndpointsByPlatformApplication</code> again using the NextToken string received from the previous call. When there are no more records to return, NextToken will be null. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListEndpointsByPlatformApplicationOutcomeCallable ListEndpointsByPlatformApplicationCallable(const Model::ListEndpointsByPlatformApplicationRequest& request) const;

        /*
            <p>Lists the endpoints and endpoint attributes for devices in a supported push notification service, such as GCM and APNS. The results for <code>ListEndpointsByPlatformApplication</code> are paginated and return a limited list of endpoints, up to 100. If additional records are available after the first page results, then a NextToken string will be returned. To receive the next page, you call <code>ListEndpointsByPlatformApplication</code> again using the NextToken string received from the previous call. When there are no more records to return, NextToken will be null. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListEndpointsByPlatformApplicationAsync(const Model::ListEndpointsByPlatformApplicationRequest& request, const ListEndpointsByPlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Lists the platform application objects for the supported push notification services, such as APNS and GCM. The results for <code>ListPlatformApplications</code> are paginated and return a limited list of applications, up to 100. If additional records are available after the first page results, then a NextToken string will be returned. To receive the next page, you call <code>ListPlatformApplications</code> using the NextToken string received from the previous call. When there are no more records to return, NextToken will be null. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>
        */
        Model::ListPlatformApplicationsOutcome ListPlatformApplications(const Model::ListPlatformApplicationsRequest& request) const;

        /*
            <p>Lists the platform application objects for the supported push notification services, such as APNS and GCM. The results for <code>ListPlatformApplications</code> are paginated and return a limited list of applications, up to 100. If additional records are available after the first page results, then a NextToken string will be returned. To receive the next page, you call <code>ListPlatformApplications</code> using the NextToken string received from the previous call. When there are no more records to return, NextToken will be null. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListPlatformApplicationsOutcomeCallable ListPlatformApplicationsCallable(const Model::ListPlatformApplicationsRequest& request) const;

        /*
            <p>Lists the platform application objects for the supported push notification services, such as APNS and GCM. The results for <code>ListPlatformApplications</code> are paginated and return a limited list of applications, up to 100. If additional records are available after the first page results, then a NextToken string will be returned. To receive the next page, you call <code>ListPlatformApplications</code> using the NextToken string received from the previous call. When there are no more records to return, NextToken will be null. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListPlatformApplicationsAsync(const Model::ListPlatformApplicationsRequest& request, const ListPlatformApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Returns a list of the requester's subscriptions. Each call returns a limited list of subscriptions, up to 100. If there are more subscriptions, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in a new <code>ListSubscriptions</code> call to get further results.</p>
        */
        Model::ListSubscriptionsOutcome ListSubscriptions(const Model::ListSubscriptionsRequest& request) const;

        /*
            <p>Returns a list of the requester's subscriptions. Each call returns a limited list of subscriptions, up to 100. If there are more subscriptions, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in a new <code>ListSubscriptions</code> call to get further results.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListSubscriptionsOutcomeCallable ListSubscriptionsCallable(const Model::ListSubscriptionsRequest& request) const;

        /*
            <p>Returns a list of the requester's subscriptions. Each call returns a limited list of subscriptions, up to 100. If there are more subscriptions, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in a new <code>ListSubscriptions</code> call to get further results.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListSubscriptionsAsync(const Model::ListSubscriptionsRequest& request, const ListSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Returns a list of the subscriptions to a specific topic. Each call returns a limited list of subscriptions, up to 100. If there are more subscriptions, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in a new <code>ListSubscriptionsByTopic</code> call to get further results.</p>
        */
        Model::ListSubscriptionsByTopicOutcome ListSubscriptionsByTopic(const Model::ListSubscriptionsByTopicRequest& request) const;

        /*
            <p>Returns a list of the subscriptions to a specific topic. Each call returns a limited list of subscriptions, up to 100. If there are more subscriptions, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in a new <code>ListSubscriptionsByTopic</code> call to get further results.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListSubscriptionsByTopicOutcomeCallable ListSubscriptionsByTopicCallable(const Model::ListSubscriptionsByTopicRequest& request) const;

        /*
            <p>Returns a list of the subscriptions to a specific topic. Each call returns a limited list of subscriptions, up to 100. If there are more subscriptions, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in a new <code>ListSubscriptionsByTopic</code> call to get further results.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListSubscriptionsByTopicAsync(const Model::ListSubscriptionsByTopicRequest& request, const ListSubscriptionsByTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            
        */
        Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /*
            

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /*
            

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Returns a list of the requester's topics. Each call returns a limited list of topics, up to 100. If there are more topics, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in a new <code>ListTopics</code> call to get further results.</p>
        */
        Model::ListTopicsOutcome ListTopics(const Model::ListTopicsRequest& request) const;

        /*
            <p>Returns a list of the requester's topics. Each call returns a limited list of topics, up to 100. If there are more topics, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in a new <code>ListTopics</code> call to get further results.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::ListTopicsOutcomeCallable ListTopicsCallable(const Model::ListTopicsRequest& request) const;

        /*
            <p>Returns a list of the requester's topics. Each call returns a limited list of topics, up to 100. If there are more topics, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in a new <code>ListTopics</code> call to get further results.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void ListTopicsAsync(const Model::ListTopicsRequest& request, const ListTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Sends a message to all of a topic's subscribed endpoints. When a <code>messageId</code> is returned, the message has been saved and Amazon SNS will attempt to deliver it to the topic's subscribers shortly. The format of the outgoing message to each subscribed endpoint depends on the notification protocol selected.</p> <p>To use the <code>Publish</code> action for sending a message to a mobile endpoint, such as an app on a Kindle device or mobile phone, you must specify the EndpointArn. The EndpointArn is returned when making a call with the <code>CreatePlatformEndpoint</code> action. The second example below shows a request and response for publishing to a mobile endpoint. </p>
        */
        Model::PublishOutcome Publish(const Model::PublishRequest& request) const;

        /*
            <p>Sends a message to all of a topic's subscribed endpoints. When a <code>messageId</code> is returned, the message has been saved and Amazon SNS will attempt to deliver it to the topic's subscribers shortly. The format of the outgoing message to each subscribed endpoint depends on the notification protocol selected.</p> <p>To use the <code>Publish</code> action for sending a message to a mobile endpoint, such as an app on a Kindle device or mobile phone, you must specify the EndpointArn. The EndpointArn is returned when making a call with the <code>CreatePlatformEndpoint</code> action. The second example below shows a request and response for publishing to a mobile endpoint. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::PublishOutcomeCallable PublishCallable(const Model::PublishRequest& request) const;

        /*
            <p>Sends a message to all of a topic's subscribed endpoints. When a <code>messageId</code> is returned, the message has been saved and Amazon SNS will attempt to deliver it to the topic's subscribers shortly. The format of the outgoing message to each subscribed endpoint depends on the notification protocol selected.</p> <p>To use the <code>Publish</code> action for sending a message to a mobile endpoint, such as an app on a Kindle device or mobile phone, you must specify the EndpointArn. The EndpointArn is returned when making a call with the <code>CreatePlatformEndpoint</code> action. The second example below shows a request and response for publishing to a mobile endpoint. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void PublishAsync(const Model::PublishRequest& request, const PublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Removes a statement from a topic's access control policy.</p>
        */
        Model::RemovePermissionOutcome RemovePermission(const Model::RemovePermissionRequest& request) const;

        /*
            <p>Removes a statement from a topic's access control policy.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::RemovePermissionOutcomeCallable RemovePermissionCallable(const Model::RemovePermissionRequest& request) const;

        /*
            <p>Removes a statement from a topic's access control policy.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void RemovePermissionAsync(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            
        */
        Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /*
            

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;

        /*
            

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void RemoveTagsFromResourceAsync(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Sets the attributes for an endpoint for a device on one of the supported push notification services, such as GCM and APNS. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>
        */
        Model::SetEndpointAttributesOutcome SetEndpointAttributes(const Model::SetEndpointAttributesRequest& request) const;

        /*
            <p>Sets the attributes for an endpoint for a device on one of the supported push notification services, such as GCM and APNS. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::SetEndpointAttributesOutcomeCallable SetEndpointAttributesCallable(const Model::SetEndpointAttributesRequest& request) const;

        /*
            <p>Sets the attributes for an endpoint for a device on one of the supported push notification services, such as GCM and APNS. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void SetEndpointAttributesAsync(const Model::SetEndpointAttributesRequest& request, const SetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Sets the attributes of the platform application object for the supported push notification services, such as APNS and GCM. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>
        */
        Model::SetPlatformApplicationAttributesOutcome SetPlatformApplicationAttributes(const Model::SetPlatformApplicationAttributesRequest& request) const;

        /*
            <p>Sets the attributes of the platform application object for the supported push notification services, such as APNS and GCM. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::SetPlatformApplicationAttributesOutcomeCallable SetPlatformApplicationAttributesCallable(const Model::SetPlatformApplicationAttributesRequest& request) const;

        /*
            <p>Sets the attributes of the platform application object for the supported push notification services, such as APNS and GCM. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void SetPlatformApplicationAttributesAsync(const Model::SetPlatformApplicationAttributesRequest& request, const SetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Allows a subscription owner to set an attribute of the topic to a new value.</p>
        */
        Model::SetSubscriptionAttributesOutcome SetSubscriptionAttributes(const Model::SetSubscriptionAttributesRequest& request) const;

        /*
            <p>Allows a subscription owner to set an attribute of the topic to a new value.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::SetSubscriptionAttributesOutcomeCallable SetSubscriptionAttributesCallable(const Model::SetSubscriptionAttributesRequest& request) const;

        /*
            <p>Allows a subscription owner to set an attribute of the topic to a new value.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void SetSubscriptionAttributesAsync(const Model::SetSubscriptionAttributesRequest& request, const SetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Allows a topic owner to set an attribute of the topic to a new value.</p>
        */
        Model::SetTopicAttributesOutcome SetTopicAttributes(const Model::SetTopicAttributesRequest& request) const;

        /*
            <p>Allows a topic owner to set an attribute of the topic to a new value.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::SetTopicAttributesOutcomeCallable SetTopicAttributesCallable(const Model::SetTopicAttributesRequest& request) const;

        /*
            <p>Allows a topic owner to set an attribute of the topic to a new value.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void SetTopicAttributesAsync(const Model::SetTopicAttributesRequest& request, const SetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Prepares to subscribe an endpoint by sending the endpoint a confirmation message. To actually create a subscription, the endpoint owner must call the <code>ConfirmSubscription</code> action with the token from the confirmation message. Confirmation tokens are valid for three days.</p>
        */
        Model::SubscribeOutcome Subscribe(const Model::SubscribeRequest& request) const;

        /*
            <p>Prepares to subscribe an endpoint by sending the endpoint a confirmation message. To actually create a subscription, the endpoint owner must call the <code>ConfirmSubscription</code> action with the token from the confirmation message. Confirmation tokens are valid for three days.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::SubscribeOutcomeCallable SubscribeCallable(const Model::SubscribeRequest& request) const;

        /*
            <p>Prepares to subscribe an endpoint by sending the endpoint a confirmation message. To actually create a subscription, the endpoint owner must call the <code>ConfirmSubscription</code> action with the token from the confirmation message. Confirmation tokens are valid for three days.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void SubscribeAsync(const Model::SubscribeRequest& request, const SubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /*
            <p>Deletes a subscription. If the subscription requires authentication for deletion, only the owner of the subscription or the topic's owner can unsubscribe, and an AWS signature is required. If the <code>Unsubscribe</code> call does not require authentication and the requester is not the subscription owner, a final cancellation message is delivered to the endpoint, so that the endpoint owner can easily resubscribe to the topic if the <code>Unsubscribe</code> request was unintended.</p>
        */
        Model::UnsubscribeOutcome Unsubscribe(const Model::UnsubscribeRequest& request) const;

        /*
            <p>Deletes a subscription. If the subscription requires authentication for deletion, only the owner of the subscription or the topic's owner can unsubscribe, and an AWS signature is required. If the <code>Unsubscribe</code> call does not require authentication and the requester is not the subscription owner, a final cancellation message is delivered to the endpoint, so that the endpoint owner can easily resubscribe to the topic if the <code>Unsubscribe</code> request was unintended.</p>

        returns a future to the operation so that it can be executed in parallel to other requests.
        */
        Model::UnsubscribeOutcomeCallable UnsubscribeCallable(const Model::UnsubscribeRequest& request) const;

        /*
            <p>Deletes a subscription. If the subscription requires authentication for deletion, only the owner of the subscription or the topic's owner can unsubscribe, and an AWS signature is required. If the <code>Unsubscribe</code> call does not require authentication and the requester is not the subscription owner, a final cancellation message is delivered to the endpoint, so that the endpoint owner can easily resubscribe to the topic if the <code>Unsubscribe</code> request was unintended.</p>

        Queues the request into a thread executor and triggers associated callback when operation has finished.
        */
        void UnsubscribeAsync(const Model::UnsubscribeRequest& request, const UnsubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

/**Async helpers**/
        void AddPermissionAsyncHelper(const Model::AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddTagsToResourceAsyncHelper(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmSubscriptionAsyncHelper(const Model::ConfirmSubscriptionRequest& request, const ConfirmSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePlatformApplicationAsyncHelper(const Model::CreatePlatformApplicationRequest& request, const CreatePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePlatformEndpointAsyncHelper(const Model::CreatePlatformEndpointRequest& request, const CreatePlatformEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTopicAsyncHelper(const Model::CreateTopicRequest& request, const CreateTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEndpointAsyncHelper(const Model::DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePlatformApplicationAsyncHelper(const Model::DeletePlatformApplicationRequest& request, const DeletePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTopicAsyncHelper(const Model::DeleteTopicRequest& request, const DeleteTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEndpointAttributesAsyncHelper(const Model::GetEndpointAttributesRequest& request, const GetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPlatformApplicationAttributesAsyncHelper(const Model::GetPlatformApplicationAttributesRequest& request, const GetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSubscriptionAttributesAsyncHelper(const Model::GetSubscriptionAttributesRequest& request, const GetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTopicAttributesAsyncHelper(const Model::GetTopicAttributesRequest& request, const GetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEndpointsByPlatformApplicationAsyncHelper(const Model::ListEndpointsByPlatformApplicationRequest& request, const ListEndpointsByPlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPlatformApplicationsAsyncHelper(const Model::ListPlatformApplicationsRequest& request, const ListPlatformApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSubscriptionsAsyncHelper(const Model::ListSubscriptionsRequest& request, const ListSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSubscriptionsByTopicAsyncHelper(const Model::ListSubscriptionsByTopicRequest& request, const ListSubscriptionsByTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTopicsAsyncHelper(const Model::ListTopicsRequest& request, const ListTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PublishAsyncHelper(const Model::PublishRequest& request, const PublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemovePermissionAsyncHelper(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsFromResourceAsyncHelper(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetEndpointAttributesAsyncHelper(const Model::SetEndpointAttributesRequest& request, const SetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetPlatformApplicationAttributesAsyncHelper(const Model::SetPlatformApplicationAttributesRequest& request, const SetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetSubscriptionAttributesAsyncHelper(const Model::SetSubscriptionAttributesRequest& request, const SetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetTopicAttributesAsyncHelper(const Model::SetTopicAttributesRequest& request, const SetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SubscribeAsyncHelper(const Model::SubscribeRequest& request, const SubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UnsubscribeAsyncHelper(const Model::UnsubscribeRequest& request, const UnsubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace SNS
} // namespace Aws
