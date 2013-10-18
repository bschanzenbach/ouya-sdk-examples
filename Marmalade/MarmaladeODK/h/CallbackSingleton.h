#ifndef __CALLBACK_SINGLETON_H__
#define __CALLBACK_SINGLETON_H__

#include <string>

class CallbacksFetchGamerUUID;
class CallbacksRequestProducts;
class CallbacksRequestPurchase;
class CallbacksRequestReceipts;

typedef struct s3eFetchGamerUuidSuccessEvent
{
	std::string m_gamerUUID;
} s3eFetchGamerUuidSuccessEvent;

typedef struct s3eFetchGamerUuidFailureEvent
{
	int m_errorCode;
	std::string m_errorMessage;
} s3eFetchGamerUuidFailureEvent;

typedef struct s3eFetchGamerUuidCancelEvent
{
} s3eFetchGamerUuidCancelEvent;

namespace OuyaSDK
{
	class CallbackSingleton
	{
	private:
		static CallbackSingleton* m_instance;

		CallbackSingleton();
		~CallbackSingleton();

	public:

		static CallbackSingleton* GetInstance();

		void RegisterNativeMethods();

		CallbacksFetchGamerUUID* m_callbacksFetchGamerUUID;
		CallbacksRequestProducts* m_callbacksRequestProducts;
		CallbacksRequestPurchase* m_callbacksRequestPurchase;
		CallbacksRequestReceipts* m_callbacksRequestReceipts;
	};
};

#endif