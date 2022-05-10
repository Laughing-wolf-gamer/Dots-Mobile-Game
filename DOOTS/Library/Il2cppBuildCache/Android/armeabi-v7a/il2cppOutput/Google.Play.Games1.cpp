#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t7570552C35A220ADB9666809E4D57E4C10713634;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient>
struct Action_1_tAF7B1704CEED6D4AC8D41184CCF825172C04F70B;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`2<System.Boolean,System.Object>
struct Action_2_t48DF0C0D4F3A3AB463DECA881851C95F1A5B0E72;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3;
// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>
struct Action_2_tDDB8E14DBC99ABCB290C0DB85F81AEED48751266;
// System.Action`2<System.Int32Enum,System.Object>
struct Action_2_tAEEAE0CA76819C6105A7D08A17A11166D3071492;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235;
// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>
struct List_1_t4F1ADF41FDF061275683E56A8683FE5EBAC1EB81;
// GooglePlayGames.BasicApi.Achievement[]
struct AchievementU5BU5D_tBB0B2AA716E26D850ED0A3839508BF76CB42E98A;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226;
// UnityEngine.SocialPlatforms.IAchievementDescription[]
struct IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// GooglePlayGames.BasicApi.Achievement
struct Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.SocialPlatforms.IAchievement
struct IAchievement_t2BF5C828331510A60F01770EDA23C238D9AE8057;
// UnityEngine.SocialPlatforms.IAchievementDescription
struct IAchievementDescription_t77B961C60C3D2BD1A9D9382BB753022A4AADE677;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// GooglePlayGames.BasicApi.Nearby.IDiscoveryListener
struct IDiscoveryListener_t6E104B87F6F53E4A4BBCE69C1DF7018EC4661994;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.SocialPlatforms.ILeaderboard
struct ILeaderboard_tC996640E43BF8EF5AA958F3BD43113D5A732B99B;
// GooglePlayGames.BasicApi.Nearby.IMessageListener
struct IMessageListener_t41F503B0920A55DC81DE2CB687E832CC3FE36334;
// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient
struct INearbyConnectionClient_t978B57514EA0D6526F17C194E50B4ABD9F8CFFF2;
// GooglePlayGames.BasicApi.IPlayGamesClient
struct IPlayGamesClient_t0D568BA692012153EE2C7B5010800596A19493BB;
// UnityEngine.SocialPlatforms.IScore
struct IScore_tE3BDDCDC8FB888BD6AF13EE00EF6AE225DDF2B3B;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_t7946A6078C07768D37E222231A650A7D3DFFDDD0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// GooglePlayGames.PlayGamesAchievement
struct PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD;
// GooglePlayGames.PlayGamesLeaderboard
struct PlayGamesLeaderboard_tCEB75327DF149E197EE0743B4778C0F4C12D9415;
// GooglePlayGames.PlayGamesLocalUser
struct PlayGamesLocalUser_t21A39842FC4E39CC770D47E63944148F3EB6410E;
// GooglePlayGames.PlayGamesPlatform
struct PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E;
// GooglePlayGames.PlayGamesUserProfile
struct PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35;
// GooglePlayGames.BasicApi.PlayerStats
struct PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971;
// GooglePlayGames.ReportProgress
struct ReportProgress_tFCB05EBAC6BBD08F9FB8746A3EC8B0D91258B679;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_t0CE7D6FFFF936BA700BC9CB75A500B8FBE5CCADC;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener
struct OnGameThreadDiscoveryListener_t2F3897569AFA4D8648966F7D2804DA667A59A4DB;
// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener
struct OnGameThreadMessageListener_t8B809835A244D14E8E484AC59CA36C9BAE687574;
// GooglePlayGames.OurUtils.Logger/<>c
struct U3CU3Ec_tE65C0E7E395B54F39F89DE9333CF9726DABCD6E2;
// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t7F48407653FF4480C55FD923DFD5A32792012120;
// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t1CDAE25C6F936DAD4E351DE664353A2D6ADB47BA;
// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t8C3EB2CBCC54B486570929C0CB1B344A88D2687E;
// GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tF9851EEF815EFF2FD86EE25D3BF8BA7C99DE685D;
// GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t8E5EBCFB9802F2D8BDC140E7EDBBB6940CAAA6D8;
// GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tB5A699A6B033143EDCFD3FB59ED8087C1BCFC885;
// GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t749CB46821238ACB5734BBC317F6F1AE8EBAC119;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t14B7E5F5DA4EAB0EDA3EDAC86F6A7319AA6EFC47;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_t85D7F05B06C431C4CEEC2B88F6DB8E36A9908754;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_tF176624A2AC30AD4FBD83FF4E6AF22B57A98857A;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t482CF45E992897D36E1B400985F810150DC8565E;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass42_0
struct U3CU3Ec__DisplayClass42_0_tA9D79D3A319FF2598DA2BB2A7319D6400C12FC17;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass43_0
struct U3CU3Ec__DisplayClass43_0_t564094EEDD51EBF2927EC010EDA1CB66267646D3;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass47_0
struct U3CU3Ec__DisplayClass47_0_tA9E97C753F680D6D1C315EF93F29295312E2885A;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass59_0
struct U3CU3Ec__DisplayClass59_0_t460CA602CB2BF25DD524B8B47DF1DFB9616AD844;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass67_0
struct U3CU3Ec__DisplayClass67_0_tF5C69C3E526B355B06C55DEB2F2A1368051F8944;
// GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23
struct U3CLoadImageU3Ed__23_t50C23A390C88CFA957E26C6E2AAEE8205B606D3D;
// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tE00E7C4A4C511F0253C1405877DB9BE1EF3DC378;
// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t590A18F2DC1C34840FBB4596EB881BD58E76224B;
// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t560B5B572E80403338D0A8656B9821E4BA4F71D0;
// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tE98815681BB70C450F147F714DEF2C2F3E7AB7B1;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDiscoveryListener_t6E104B87F6F53E4A4BBCE69C1DF7018EC4661994_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMessageListener_t41F503B0920A55DC81DE2CB687E832CC3FE36334_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayGamesClient_t0D568BA692012153EE2C7B5010800596A19493BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Logger_t58514BB7F8E3A48280A91AB655A3F15E6284A6D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesHelperObject_tE1771632CFF2761EFCBD79B9F192888102101C6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesLeaderboard_tCEB75327DF149E197EE0743B4778C0F4C12D9415_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignInStatus_t26D2B045A190EDD9B73B93CF9118CAD0275BE2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE65C0E7E395B54F39F89DE9333CF9726DABCD6E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E0C6CFB1B8F69C9CCBEA31C5888616C9C93F318;
IL2CPP_EXTERN_C String_t* _stringLiteral1B3C7000ACF0EB48C1458817E59DD90219ED2B97;
IL2CPP_EXTERN_C String_t* _stringLiteral24278202528A13F91A7E8306203F176C630AAF51;
IL2CPP_EXTERN_C String_t* _stringLiteral38E94795E0FDE498579C9A38DCD018ED956F9F71;
IL2CPP_EXTERN_C String_t* _stringLiteral420970FC857D0E541C788790F58AA66962B22CC8;
IL2CPP_EXTERN_C String_t* _stringLiteral44422B1D8FA435D0D343B090134AB90503F8B8DD;
IL2CPP_EXTERN_C String_t* _stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D;
IL2CPP_EXTERN_C String_t* _stringLiteral9D57A629D6E7F8930979EC2AF07A919C72FEEE0E;
IL2CPP_EXTERN_C String_t* _stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34;
IL2CPP_EXTERN_C String_t* _stringLiteralBD066E42B63E30EFFD3D9F2C9C79629108906EC6;
IL2CPP_EXTERN_C String_t* _stringLiteralC63555F5631A509A767F8CAE7C637344AE34C6D2;
IL2CPP_EXTERN_C String_t* _stringLiteralC68E6DD4D6678717C05B5B1EADED9792B1D6A551;
IL2CPP_EXTERN_C String_t* _stringLiteralC92578BDC42DAC206202E3F97935E34FD1106EAC;
IL2CPP_EXTERN_C String_t* _stringLiteralCE4B0E2541EDBBB3C6491A2744BB22061C9DD7BD;
IL2CPP_EXTERN_C String_t* _stringLiteralCE92B3B0982727A84D8DF8E6115B5FCC5E335A33;
IL2CPP_EXTERN_C String_t* _stringLiteralEA008AB922F24BD7FF67A671D99943A377F6F35A;
IL2CPP_EXTERN_C String_t* _stringLiteralF6BB44F4BC9F8D1D63EFDF77186766035805DAAF;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m7C6C3C5F1764D999D845DB6F0D77A136F423A36F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mA7A2177CF5EA8FD4A1BB48004EFF7FD908B6ECDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mB8D7E47D803C266B5DD47FD7BFD478BABD089F08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mDF86C44E0ADACB34B3B7C5D612D877175F036EF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mFF42C4E5E1C18A6D718037CC9557D468C6785BEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_WithUpdatedPlayedTime_m4283BEFBDA25DB82988DEDA0CB99217CE7C6BC26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisString_t_mC7204590354534CD963EB735FC47DB37943437E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadImageU3Ed__23_System_Collections_IEnumerator_Reset_mE532276D404AF786642EB3F391E11CB6FFDC1EB6_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct AchievementU5BU5D_tBB0B2AA716E26D850ED0A3839508BF76CB42E98A;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226;
struct IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1;
struct IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// GooglePlayGames.BasicApi.PlayerStats
struct PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971  : public RuntimeObject
{
public:
	// System.Boolean GooglePlayGames.BasicApi.PlayerStats::mValid
	bool ___mValid_1;
	// System.Int32 GooglePlayGames.BasicApi.PlayerStats::mNumberOfPurchases
	int32_t ___mNumberOfPurchases_2;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mAvgSessionLength
	float ___mAvgSessionLength_3;
	// System.Int32 GooglePlayGames.BasicApi.PlayerStats::mDaysSinceLastPlayed
	int32_t ___mDaysSinceLastPlayed_4;
	// System.Int32 GooglePlayGames.BasicApi.PlayerStats::mNumberOfSessions
	int32_t ___mNumberOfSessions_5;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mSessPercentile
	float ___mSessPercentile_6;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mSpendPercentile
	float ___mSpendPercentile_7;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mSpendProbability
	float ___mSpendProbability_8;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mChurnProbability
	float ___mChurnProbability_9;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mHighSpenderProbability
	float ___mHighSpenderProbability_10;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mTotalSpendNext28Days
	float ___mTotalSpendNext28Days_11;

public:
	inline static int32_t get_offset_of_mValid_1() { return static_cast<int32_t>(offsetof(PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971, ___mValid_1)); }
	inline bool get_mValid_1() const { return ___mValid_1; }
	inline bool* get_address_of_mValid_1() { return &___mValid_1; }
	inline void set_mValid_1(bool value)
	{
		___mValid_1 = value;
	}

	inline static int32_t get_offset_of_mNumberOfPurchases_2() { return static_cast<int32_t>(offsetof(PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971, ___mNumberOfPurchases_2)); }
	inline int32_t get_mNumberOfPurchases_2() const { return ___mNumberOfPurchases_2; }
	inline int32_t* get_address_of_mNumberOfPurchases_2() { return &___mNumberOfPurchases_2; }
	inline void set_mNumberOfPurchases_2(int32_t value)
	{
		___mNumberOfPurchases_2 = value;
	}

	inline static int32_t get_offset_of_mAvgSessionLength_3() { return static_cast<int32_t>(offsetof(PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971, ___mAvgSessionLength_3)); }
	inline float get_mAvgSessionLength_3() const { return ___mAvgSessionLength_3; }
	inline float* get_address_of_mAvgSessionLength_3() { return &___mAvgSessionLength_3; }
	inline void set_mAvgSessionLength_3(float value)
	{
		___mAvgSessionLength_3 = value;
	}

	inline static int32_t get_offset_of_mDaysSinceLastPlayed_4() { return static_cast<int32_t>(offsetof(PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971, ___mDaysSinceLastPlayed_4)); }
	inline int32_t get_mDaysSinceLastPlayed_4() const { return ___mDaysSinceLastPlayed_4; }
	inline int32_t* get_address_of_mDaysSinceLastPlayed_4() { return &___mDaysSinceLastPlayed_4; }
	inline void set_mDaysSinceLastPlayed_4(int32_t value)
	{
		___mDaysSinceLastPlayed_4 = value;
	}

	inline static int32_t get_offset_of_mNumberOfSessions_5() { return static_cast<int32_t>(offsetof(PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971, ___mNumberOfSessions_5)); }
	inline int32_t get_mNumberOfSessions_5() const { return ___mNumberOfSessions_5; }
	inline int32_t* get_address_of_mNumberOfSessions_5() { return &___mNumberOfSessions_5; }
	inline void set_mNumberOfSessions_5(int32_t value)
	{
		___mNumberOfSessions_5 = value;
	}

	inline static int32_t get_offset_of_mSessPercentile_6() { return static_cast<int32_t>(offsetof(PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971, ___mSessPercentile_6)); }
	inline float get_mSessPercentile_6() const { return ___mSessPercentile_6; }
	inline float* get_address_of_mSessPercentile_6() { return &___mSessPercentile_6; }
	inline void set_mSessPercentile_6(float value)
	{
		___mSessPercentile_6 = value;
	}

	inline static int32_t get_offset_of_mSpendPercentile_7() { return static_cast<int32_t>(offsetof(PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971, ___mSpendPercentile_7)); }
	inline float get_mSpendPercentile_7() const { return ___mSpendPercentile_7; }
	inline float* get_address_of_mSpendPercentile_7() { return &___mSpendPercentile_7; }
	inline void set_mSpendPercentile_7(float value)
	{
		___mSpendPercentile_7 = value;
	}

	inline static int32_t get_offset_of_mSpendProbability_8() { return static_cast<int32_t>(offsetof(PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971, ___mSpendProbability_8)); }
	inline float get_mSpendProbability_8() const { return ___mSpendProbability_8; }
	inline float* get_address_of_mSpendProbability_8() { return &___mSpendProbability_8; }
	inline void set_mSpendProbability_8(float value)
	{
		___mSpendProbability_8 = value;
	}

	inline static int32_t get_offset_of_mChurnProbability_9() { return static_cast<int32_t>(offsetof(PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971, ___mChurnProbability_9)); }
	inline float get_mChurnProbability_9() const { return ___mChurnProbability_9; }
	inline float* get_address_of_mChurnProbability_9() { return &___mChurnProbability_9; }
	inline void set_mChurnProbability_9(float value)
	{
		___mChurnProbability_9 = value;
	}

	inline static int32_t get_offset_of_mHighSpenderProbability_10() { return static_cast<int32_t>(offsetof(PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971, ___mHighSpenderProbability_10)); }
	inline float get_mHighSpenderProbability_10() const { return ___mHighSpenderProbability_10; }
	inline float* get_address_of_mHighSpenderProbability_10() { return &___mHighSpenderProbability_10; }
	inline void set_mHighSpenderProbability_10(float value)
	{
		___mHighSpenderProbability_10 = value;
	}

	inline static int32_t get_offset_of_mTotalSpendNext28Days_11() { return static_cast<int32_t>(offsetof(PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971, ___mTotalSpendNext28Days_11)); }
	inline float get_mTotalSpendNext28Days_11() const { return ___mTotalSpendNext28Days_11; }
	inline float* get_address_of_mTotalSpendNext28Days_11() { return &___mTotalSpendNext28Days_11; }
	inline void set_mTotalSpendNext28Days_11(float value)
	{
		___mTotalSpendNext28Days_11 = value;
	}
};

struct PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971_StaticFields
{
public:
	// System.Single GooglePlayGames.BasicApi.PlayerStats::UNSET_VALUE
	float ___UNSET_VALUE_0;

public:
	inline static int32_t get_offset_of_UNSET_VALUE_0() { return static_cast<int32_t>(offsetof(PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971_StaticFields, ___UNSET_VALUE_0)); }
	inline float get_UNSET_VALUE_0() const { return ___UNSET_VALUE_0; }
	inline float* get_address_of_UNSET_VALUE_0() { return &___UNSET_VALUE_0; }
	inline void set_UNSET_VALUE_0(float value)
	{
		___UNSET_VALUE_0 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener
struct OnGameThreadDiscoveryListener_t2F3897569AFA4D8648966F7D2804DA667A59A4DB  : public RuntimeObject
{
public:
	// GooglePlayGames.BasicApi.Nearby.IDiscoveryListener GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener::mListener
	RuntimeObject* ___mListener_0;

public:
	inline static int32_t get_offset_of_mListener_0() { return static_cast<int32_t>(offsetof(OnGameThreadDiscoveryListener_t2F3897569AFA4D8648966F7D2804DA667A59A4DB, ___mListener_0)); }
	inline RuntimeObject* get_mListener_0() const { return ___mListener_0; }
	inline RuntimeObject** get_address_of_mListener_0() { return &___mListener_0; }
	inline void set_mListener_0(RuntimeObject* value)
	{
		___mListener_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mListener_0), (void*)value);
	}
};


// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener
struct OnGameThreadMessageListener_t8B809835A244D14E8E484AC59CA36C9BAE687574  : public RuntimeObject
{
public:
	// GooglePlayGames.BasicApi.Nearby.IMessageListener GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener::mListener
	RuntimeObject* ___mListener_0;

public:
	inline static int32_t get_offset_of_mListener_0() { return static_cast<int32_t>(offsetof(OnGameThreadMessageListener_t8B809835A244D14E8E484AC59CA36C9BAE687574, ___mListener_0)); }
	inline RuntimeObject* get_mListener_0() const { return ___mListener_0; }
	inline RuntimeObject** get_address_of_mListener_0() { return &___mListener_0; }
	inline void set_mListener_0(RuntimeObject* value)
	{
		___mListener_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mListener_0), (void*)value);
	}
};


// GooglePlayGames.OurUtils.Logger/<>c
struct U3CU3Ec_tE65C0E7E395B54F39F89DE9333CF9726DABCD6E2  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE65C0E7E395B54F39F89DE9333CF9726DABCD6E2_StaticFields
{
public:
	// GooglePlayGames.OurUtils.Logger/<>c GooglePlayGames.OurUtils.Logger/<>c::<>9
	U3CU3Ec_tE65C0E7E395B54F39F89DE9333CF9726DABCD6E2 * ___U3CU3E9_0;
	// System.Action GooglePlayGames.OurUtils.Logger/<>c::<>9__12_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__12_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE65C0E7E395B54F39F89DE9333CF9726DABCD6E2_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE65C0E7E395B54F39F89DE9333CF9726DABCD6E2 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE65C0E7E395B54F39F89DE9333CF9726DABCD6E2 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE65C0E7E395B54F39F89DE9333CF9726DABCD6E2 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE65C0E7E395B54F39F89DE9333CF9726DABCD6E2_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}
};


// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t7F48407653FF4480C55FD923DFD5A32792012120  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0::msg
	String_t* ___msg_0;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t7F48407653FF4480C55FD923DFD5A32792012120, ___msg_0)); }
	inline String_t* get_msg_0() const { return ___msg_0; }
	inline String_t** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(String_t* value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_0), (void*)value);
	}
};


// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t1CDAE25C6F936DAD4E351DE664353A2D6ADB47BA  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0::msg
	String_t* ___msg_0;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t1CDAE25C6F936DAD4E351DE664353A2D6ADB47BA, ___msg_0)); }
	inline String_t* get_msg_0() const { return ___msg_0; }
	inline String_t** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(String_t* value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_0), (void*)value);
	}
};


// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t8C3EB2CBCC54B486570929C0CB1B344A88D2687E  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0::msg
	String_t* ___msg_0;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t8C3EB2CBCC54B486570929C0CB1B344A88D2687E, ___msg_0)); }
	inline String_t* get_msg_0() const { return ___msg_0; }
	inline String_t** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(String_t* value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_0), (void*)value);
	}
};


// GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tF9851EEF815EFF2FD86EE25D3BF8BA7C99DE685D  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::action
	RuntimeObject* ___action_0;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tF9851EEF815EFF2FD86EE25D3BF8BA7C99DE685D, ___action_0)); }
	inline RuntimeObject* get_action_0() const { return ___action_0; }
	inline RuntimeObject** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(RuntimeObject* value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t8E5EBCFB9802F2D8BDC140E7EDBBB6940CAAA6D8  : public RuntimeObject
{
public:
	// GooglePlayGames.PlayGamesLocalUser GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass22_0::<>4__this
	PlayGamesLocalUser_t21A39842FC4E39CC770D47E63944148F3EB6410E * ___U3CU3E4__this_0;
	// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats> GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass22_0::callback
	Action_2_tDDB8E14DBC99ABCB290C0DB85F81AEED48751266 * ___callback_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t8E5EBCFB9802F2D8BDC140E7EDBBB6940CAAA6D8, ___U3CU3E4__this_0)); }
	inline PlayGamesLocalUser_t21A39842FC4E39CC770D47E63944148F3EB6410E * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PlayGamesLocalUser_t21A39842FC4E39CC770D47E63944148F3EB6410E ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PlayGamesLocalUser_t21A39842FC4E39CC770D47E63944148F3EB6410E * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t8E5EBCFB9802F2D8BDC140E7EDBBB6940CAAA6D8, ___callback_1)); }
	inline Action_2_tDDB8E14DBC99ABCB290C0DB85F81AEED48751266 * get_callback_1() const { return ___callback_1; }
	inline Action_2_tDDB8E14DBC99ABCB290C0DB85F81AEED48751266 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_2_tDDB8E14DBC99ABCB290C0DB85F81AEED48751266 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};


// GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tB5A699A6B033143EDCFD3FB59ED8087C1BCFC885  : public RuntimeObject
{
public:
	// System.Action`1<System.Boolean> GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass3_0::callback
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tB5A699A6B033143EDCFD3FB59ED8087C1BCFC885, ___callback_0)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_callback_0() const { return ___callback_0; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t749CB46821238ACB5734BBC317F6F1AE8EBAC119  : public RuntimeObject
{
public:
	// System.Action`2<System.Boolean,System.String> GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass4_0::callback
	Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t749CB46821238ACB5734BBC317F6F1AE8EBAC119, ___callback_0)); }
	inline Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t14B7E5F5DA4EAB0EDA3EDAC86F6A7319AA6EFC47  : public RuntimeObject
{
public:
	// System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass22_0::callback
	Action_1_tAF7B1704CEED6D4AC8D41184CCF825172C04F70B * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t14B7E5F5DA4EAB0EDA3EDAC86F6A7319AA6EFC47, ___callback_0)); }
	inline Action_1_tAF7B1704CEED6D4AC8D41184CCF825172C04F70B * get_callback_0() const { return ___callback_0; }
	inline Action_1_tAF7B1704CEED6D4AC8D41184CCF825172C04F70B ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tAF7B1704CEED6D4AC8D41184CCF825172C04F70B * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_t85D7F05B06C431C4CEEC2B88F6DB8E36A9908754  : public RuntimeObject
{
public:
	// System.Action`1<System.Boolean> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass26_0::callback
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass26_0_t85D7F05B06C431C4CEEC2B88F6DB8E36A9908754, ___callback_0)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_callback_0() const { return ___callback_0; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_tF176624A2AC30AD4FBD83FF4E6AF22B57A98857A  : public RuntimeObject
{
public:
	// System.Action`2<System.Boolean,System.String> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass27_0::callback
	Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_0_tF176624A2AC30AD4FBD83FF4E6AF22B57A98857A, ___callback_0)); }
	inline Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t482CF45E992897D36E1B400985F810150DC8565E  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass36_0::achievementID
	String_t* ___achievementID_0;
	// System.Double GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass36_0::progress
	double ___progress_1;
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass36_0::<>4__this
	PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * ___U3CU3E4__this_2;
	// System.Action`1<System.Boolean> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass36_0::callback
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback_3;

public:
	inline static int32_t get_offset_of_achievementID_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t482CF45E992897D36E1B400985F810150DC8565E, ___achievementID_0)); }
	inline String_t* get_achievementID_0() const { return ___achievementID_0; }
	inline String_t** get_address_of_achievementID_0() { return &___achievementID_0; }
	inline void set_achievementID_0(String_t* value)
	{
		___achievementID_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___achievementID_0), (void*)value);
	}

	inline static int32_t get_offset_of_progress_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t482CF45E992897D36E1B400985F810150DC8565E, ___progress_1)); }
	inline double get_progress_1() const { return ___progress_1; }
	inline double* get_address_of_progress_1() { return &___progress_1; }
	inline void set_progress_1(double value)
	{
		___progress_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t482CF45E992897D36E1B400985F810150DC8565E, ___U3CU3E4__this_2)); }
	inline PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_callback_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t482CF45E992897D36E1B400985F810150DC8565E, ___callback_3)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_callback_3() const { return ___callback_3; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_callback_3() { return &___callback_3; }
	inline void set_callback_3(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_3), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass42_0
struct U3CU3Ec__DisplayClass42_0_tA9D79D3A319FF2598DA2BB2A7319D6400C12FC17  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass42_0::callback
	Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass42_0_tA9D79D3A319FF2598DA2BB2A7319D6400C12FC17, ___callback_0)); }
	inline Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass43_0
struct U3CU3Ec__DisplayClass43_0_t564094EEDD51EBF2927EC010EDA1CB66267646D3  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass43_0::callback
	Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass43_0_t564094EEDD51EBF2927EC010EDA1CB66267646D3, ___callback_0)); }
	inline Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass47_0
struct U3CU3Ec__DisplayClass47_0_tA9E97C753F680D6D1C315EF93F29295312E2885A  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.SocialPlatforms.IScore[]> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass47_0::callback
	Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_0_tA9E97C753F680D6D1C315EF93F29295312E2885A, ___callback_0)); }
	inline Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * get_callback_0() const { return ___callback_0; }
	inline Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass59_0
struct U3CU3Ec__DisplayClass59_0_t460CA602CB2BF25DD524B8B47DF1DFB9616AD844  : public RuntimeObject
{
public:
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass59_0::<>4__this
	PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * ___U3CU3E4__this_0;
	// UnityEngine.SocialPlatforms.ILeaderboard GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass59_0::board
	RuntimeObject* ___board_1;
	// System.Action`1<System.Boolean> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass59_0::callback
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass59_0_t460CA602CB2BF25DD524B8B47DF1DFB9616AD844, ___U3CU3E4__this_0)); }
	inline PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_board_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass59_0_t460CA602CB2BF25DD524B8B47DF1DFB9616AD844, ___board_1)); }
	inline RuntimeObject* get_board_1() const { return ___board_1; }
	inline RuntimeObject** get_address_of_board_1() { return &___board_1; }
	inline void set_board_1(RuntimeObject* value)
	{
		___board_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___board_1), (void*)value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass59_0_t460CA602CB2BF25DD524B8B47DF1DFB9616AD844, ___callback_2)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_callback_2() const { return ___callback_2; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_2), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass67_0
struct U3CU3Ec__DisplayClass67_0_tF5C69C3E526B355B06C55DEB2F2A1368051F8944  : public RuntimeObject
{
public:
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass67_0::<>4__this
	PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * ___U3CU3E4__this_0;
	// GooglePlayGames.PlayGamesLeaderboard GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass67_0::board
	PlayGamesLeaderboard_tCEB75327DF149E197EE0743B4778C0F4C12D9415 * ___board_1;
	// System.Action`1<System.Boolean> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass67_0::callback
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass67_0_tF5C69C3E526B355B06C55DEB2F2A1368051F8944, ___U3CU3E4__this_0)); }
	inline PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_board_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass67_0_tF5C69C3E526B355B06C55DEB2F2A1368051F8944, ___board_1)); }
	inline PlayGamesLeaderboard_tCEB75327DF149E197EE0743B4778C0F4C12D9415 * get_board_1() const { return ___board_1; }
	inline PlayGamesLeaderboard_tCEB75327DF149E197EE0743B4778C0F4C12D9415 ** get_address_of_board_1() { return &___board_1; }
	inline void set_board_1(PlayGamesLeaderboard_tCEB75327DF149E197EE0743B4778C0F4C12D9415 * value)
	{
		___board_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___board_1), (void*)value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass67_0_tF5C69C3E526B355B06C55DEB2F2A1368051F8944, ___callback_2)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_callback_2() const { return ___callback_2; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_2), (void*)value);
	}
};


// GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23
struct U3CLoadImageU3Ed__23_t50C23A390C88CFA957E26C6E2AAEE8205B606D3D  : public RuntimeObject
{
public:
	// System.Int32 GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GooglePlayGames.PlayGamesUserProfile GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::<>4__this
	PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35 * ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::<www>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwwwU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__23_t50C23A390C88CFA957E26C6E2AAEE8205B606D3D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__23_t50C23A390C88CFA957E26C6E2AAEE8205B606D3D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__23_t50C23A390C88CFA957E26C6E2AAEE8205B606D3D, ___U3CU3E4__this_2)); }
	inline PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__23_t50C23A390C88CFA957E26C6E2AAEE8205B606D3D, ___U3CwwwU3E5__2_3)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwwwU3E5__2_3() const { return ___U3CwwwU3E5__2_3; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwwwU3E5__2_3() { return &___U3CwwwU3E5__2_3; }
	inline void set_U3CwwwU3E5__2_3(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwwwU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_3), (void*)value);
	}
};


// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t590A18F2DC1C34840FBB4596EB881BD58E76224B  : public RuntimeObject
{
public:
	// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0::<>4__this
	OnGameThreadDiscoveryListener_t2F3897569AFA4D8648966F7D2804DA667A59A4DB * ___U3CU3E4__this_0;
	// System.String GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0::lostEndpointId
	String_t* ___lostEndpointId_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t590A18F2DC1C34840FBB4596EB881BD58E76224B, ___U3CU3E4__this_0)); }
	inline OnGameThreadDiscoveryListener_t2F3897569AFA4D8648966F7D2804DA667A59A4DB * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnGameThreadDiscoveryListener_t2F3897569AFA4D8648966F7D2804DA667A59A4DB ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnGameThreadDiscoveryListener_t2F3897569AFA4D8648966F7D2804DA667A59A4DB * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_lostEndpointId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t590A18F2DC1C34840FBB4596EB881BD58E76224B, ___lostEndpointId_1)); }
	inline String_t* get_lostEndpointId_1() const { return ___lostEndpointId_1; }
	inline String_t** get_address_of_lostEndpointId_1() { return &___lostEndpointId_1; }
	inline void set_lostEndpointId_1(String_t* value)
	{
		___lostEndpointId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lostEndpointId_1), (void*)value);
	}
};


// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t560B5B572E80403338D0A8656B9821E4BA4F71D0  : public RuntimeObject
{
public:
	// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::<>4__this
	OnGameThreadMessageListener_t8B809835A244D14E8E484AC59CA36C9BAE687574 * ___U3CU3E4__this_0;
	// System.String GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::remoteEndpointId
	String_t* ___remoteEndpointId_1;
	// System.Byte[] GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data_2;
	// System.Boolean GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::isReliableMessage
	bool ___isReliableMessage_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t560B5B572E80403338D0A8656B9821E4BA4F71D0, ___U3CU3E4__this_0)); }
	inline OnGameThreadMessageListener_t8B809835A244D14E8E484AC59CA36C9BAE687574 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnGameThreadMessageListener_t8B809835A244D14E8E484AC59CA36C9BAE687574 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnGameThreadMessageListener_t8B809835A244D14E8E484AC59CA36C9BAE687574 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_remoteEndpointId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t560B5B572E80403338D0A8656B9821E4BA4F71D0, ___remoteEndpointId_1)); }
	inline String_t* get_remoteEndpointId_1() const { return ___remoteEndpointId_1; }
	inline String_t** get_address_of_remoteEndpointId_1() { return &___remoteEndpointId_1; }
	inline void set_remoteEndpointId_1(String_t* value)
	{
		___remoteEndpointId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteEndpointId_1), (void*)value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t560B5B572E80403338D0A8656B9821E4BA4F71D0, ___data_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_data_2() const { return ___data_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_2), (void*)value);
	}

	inline static int32_t get_offset_of_isReliableMessage_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t560B5B572E80403338D0A8656B9821E4BA4F71D0, ___isReliableMessage_3)); }
	inline bool get_isReliableMessage_3() const { return ___isReliableMessage_3; }
	inline bool* get_address_of_isReliableMessage_3() { return &___isReliableMessage_3; }
	inline void set_isReliableMessage_3(bool value)
	{
		___isReliableMessage_3 = value;
	}
};


// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tE98815681BB70C450F147F714DEF2C2F3E7AB7B1  : public RuntimeObject
{
public:
	// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass3_0::<>4__this
	OnGameThreadMessageListener_t8B809835A244D14E8E484AC59CA36C9BAE687574 * ___U3CU3E4__this_0;
	// System.String GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass3_0::remoteEndpointId
	String_t* ___remoteEndpointId_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tE98815681BB70C450F147F714DEF2C2F3E7AB7B1, ___U3CU3E4__this_0)); }
	inline OnGameThreadMessageListener_t8B809835A244D14E8E484AC59CA36C9BAE687574 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnGameThreadMessageListener_t8B809835A244D14E8E484AC59CA36C9BAE687574 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnGameThreadMessageListener_t8B809835A244D14E8E484AC59CA36C9BAE687574 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_remoteEndpointId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tE98815681BB70C450F147F714DEF2C2F3E7AB7B1, ___remoteEndpointId_1)); }
	inline String_t* get_remoteEndpointId_1() const { return ___remoteEndpointId_1; }
	inline String_t** get_address_of_remoteEndpointId_1() { return &___remoteEndpointId_1; }
	inline void set_remoteEndpointId_1(String_t* value)
	{
		___remoteEndpointId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteEndpointId_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_tC75D8291178BBEE47B9464CA22842AC3C54412D1 
{
public:
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mEndpointId
	String_t* ___mEndpointId_0;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mName
	String_t* ___mName_1;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mServiceId
	String_t* ___mServiceId_2;

public:
	inline static int32_t get_offset_of_mEndpointId_0() { return static_cast<int32_t>(offsetof(EndpointDetails_tC75D8291178BBEE47B9464CA22842AC3C54412D1, ___mEndpointId_0)); }
	inline String_t* get_mEndpointId_0() const { return ___mEndpointId_0; }
	inline String_t** get_address_of_mEndpointId_0() { return &___mEndpointId_0; }
	inline void set_mEndpointId_0(String_t* value)
	{
		___mEndpointId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mEndpointId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mName_1() { return static_cast<int32_t>(offsetof(EndpointDetails_tC75D8291178BBEE47B9464CA22842AC3C54412D1, ___mName_1)); }
	inline String_t* get_mName_1() const { return ___mName_1; }
	inline String_t** get_address_of_mName_1() { return &___mName_1; }
	inline void set_mName_1(String_t* value)
	{
		___mName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mName_1), (void*)value);
	}

	inline static int32_t get_offset_of_mServiceId_2() { return static_cast<int32_t>(offsetof(EndpointDetails_tC75D8291178BBEE47B9464CA22842AC3C54412D1, ___mServiceId_2)); }
	inline String_t* get_mServiceId_2() const { return ___mServiceId_2; }
	inline String_t** get_address_of_mServiceId_2() { return &___mServiceId_2; }
	inline void set_mServiceId_2(String_t* value)
	{
		___mServiceId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mServiceId_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_tC75D8291178BBEE47B9464CA22842AC3C54412D1_marshaled_pinvoke
{
	char* ___mEndpointId_0;
	char* ___mName_1;
	char* ___mServiceId_2;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_tC75D8291178BBEE47B9464CA22842AC3C54412D1_marshaled_com
{
	Il2CppChar* ___mEndpointId_0;
	Il2CppChar* ___mName_1;
	Il2CppChar* ___mServiceId_2;
};

// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.SocialPlatforms.Range
struct Range_t70C133E51417BC822E878050C90A577A69B671DC 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.Range::from
	int32_t ___from_0;
	// System.Int32 UnityEngine.SocialPlatforms.Range::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_from_0() { return static_cast<int32_t>(offsetof(Range_t70C133E51417BC822E878050C90A577A69B671DC, ___from_0)); }
	inline int32_t get_from_0() const { return ___from_0; }
	inline int32_t* get_address_of_from_0() { return &___from_0; }
	inline void set_from_0(int32_t value)
	{
		___from_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Range_t70C133E51417BC822E878050C90A577A69B671DC, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// GooglePlayGames.BasicApi.Achievement
struct Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.BasicApi.Achievement::mId
	String_t* ___mId_1;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsIncremental
	bool ___mIsIncremental_2;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsRevealed
	bool ___mIsRevealed_3;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsUnlocked
	bool ___mIsUnlocked_4;
	// System.Int32 GooglePlayGames.BasicApi.Achievement::mCurrentSteps
	int32_t ___mCurrentSteps_5;
	// System.Int32 GooglePlayGames.BasicApi.Achievement::mTotalSteps
	int32_t ___mTotalSteps_6;
	// System.String GooglePlayGames.BasicApi.Achievement::mDescription
	String_t* ___mDescription_7;
	// System.String GooglePlayGames.BasicApi.Achievement::mName
	String_t* ___mName_8;
	// System.Int64 GooglePlayGames.BasicApi.Achievement::mLastModifiedTime
	int64_t ___mLastModifiedTime_9;
	// System.UInt64 GooglePlayGames.BasicApi.Achievement::mPoints
	uint64_t ___mPoints_10;
	// System.String GooglePlayGames.BasicApi.Achievement::mRevealedImageUrl
	String_t* ___mRevealedImageUrl_11;
	// System.String GooglePlayGames.BasicApi.Achievement::mUnlockedImageUrl
	String_t* ___mUnlockedImageUrl_12;

public:
	inline static int32_t get_offset_of_mId_1() { return static_cast<int32_t>(offsetof(Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2, ___mId_1)); }
	inline String_t* get_mId_1() const { return ___mId_1; }
	inline String_t** get_address_of_mId_1() { return &___mId_1; }
	inline void set_mId_1(String_t* value)
	{
		___mId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_1), (void*)value);
	}

	inline static int32_t get_offset_of_mIsIncremental_2() { return static_cast<int32_t>(offsetof(Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2, ___mIsIncremental_2)); }
	inline bool get_mIsIncremental_2() const { return ___mIsIncremental_2; }
	inline bool* get_address_of_mIsIncremental_2() { return &___mIsIncremental_2; }
	inline void set_mIsIncremental_2(bool value)
	{
		___mIsIncremental_2 = value;
	}

	inline static int32_t get_offset_of_mIsRevealed_3() { return static_cast<int32_t>(offsetof(Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2, ___mIsRevealed_3)); }
	inline bool get_mIsRevealed_3() const { return ___mIsRevealed_3; }
	inline bool* get_address_of_mIsRevealed_3() { return &___mIsRevealed_3; }
	inline void set_mIsRevealed_3(bool value)
	{
		___mIsRevealed_3 = value;
	}

	inline static int32_t get_offset_of_mIsUnlocked_4() { return static_cast<int32_t>(offsetof(Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2, ___mIsUnlocked_4)); }
	inline bool get_mIsUnlocked_4() const { return ___mIsUnlocked_4; }
	inline bool* get_address_of_mIsUnlocked_4() { return &___mIsUnlocked_4; }
	inline void set_mIsUnlocked_4(bool value)
	{
		___mIsUnlocked_4 = value;
	}

	inline static int32_t get_offset_of_mCurrentSteps_5() { return static_cast<int32_t>(offsetof(Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2, ___mCurrentSteps_5)); }
	inline int32_t get_mCurrentSteps_5() const { return ___mCurrentSteps_5; }
	inline int32_t* get_address_of_mCurrentSteps_5() { return &___mCurrentSteps_5; }
	inline void set_mCurrentSteps_5(int32_t value)
	{
		___mCurrentSteps_5 = value;
	}

	inline static int32_t get_offset_of_mTotalSteps_6() { return static_cast<int32_t>(offsetof(Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2, ___mTotalSteps_6)); }
	inline int32_t get_mTotalSteps_6() const { return ___mTotalSteps_6; }
	inline int32_t* get_address_of_mTotalSteps_6() { return &___mTotalSteps_6; }
	inline void set_mTotalSteps_6(int32_t value)
	{
		___mTotalSteps_6 = value;
	}

	inline static int32_t get_offset_of_mDescription_7() { return static_cast<int32_t>(offsetof(Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2, ___mDescription_7)); }
	inline String_t* get_mDescription_7() const { return ___mDescription_7; }
	inline String_t** get_address_of_mDescription_7() { return &___mDescription_7; }
	inline void set_mDescription_7(String_t* value)
	{
		___mDescription_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDescription_7), (void*)value);
	}

	inline static int32_t get_offset_of_mName_8() { return static_cast<int32_t>(offsetof(Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2, ___mName_8)); }
	inline String_t* get_mName_8() const { return ___mName_8; }
	inline String_t** get_address_of_mName_8() { return &___mName_8; }
	inline void set_mName_8(String_t* value)
	{
		___mName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mName_8), (void*)value);
	}

	inline static int32_t get_offset_of_mLastModifiedTime_9() { return static_cast<int32_t>(offsetof(Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2, ___mLastModifiedTime_9)); }
	inline int64_t get_mLastModifiedTime_9() const { return ___mLastModifiedTime_9; }
	inline int64_t* get_address_of_mLastModifiedTime_9() { return &___mLastModifiedTime_9; }
	inline void set_mLastModifiedTime_9(int64_t value)
	{
		___mLastModifiedTime_9 = value;
	}

	inline static int32_t get_offset_of_mPoints_10() { return static_cast<int32_t>(offsetof(Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2, ___mPoints_10)); }
	inline uint64_t get_mPoints_10() const { return ___mPoints_10; }
	inline uint64_t* get_address_of_mPoints_10() { return &___mPoints_10; }
	inline void set_mPoints_10(uint64_t value)
	{
		___mPoints_10 = value;
	}

	inline static int32_t get_offset_of_mRevealedImageUrl_11() { return static_cast<int32_t>(offsetof(Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2, ___mRevealedImageUrl_11)); }
	inline String_t* get_mRevealedImageUrl_11() const { return ___mRevealedImageUrl_11; }
	inline String_t** get_address_of_mRevealedImageUrl_11() { return &___mRevealedImageUrl_11; }
	inline void set_mRevealedImageUrl_11(String_t* value)
	{
		___mRevealedImageUrl_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRevealedImageUrl_11), (void*)value);
	}

	inline static int32_t get_offset_of_mUnlockedImageUrl_12() { return static_cast<int32_t>(offsetof(Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2, ___mUnlockedImageUrl_12)); }
	inline String_t* get_mUnlockedImageUrl_12() const { return ___mUnlockedImageUrl_12; }
	inline String_t** get_address_of_mUnlockedImageUrl_12() { return &___mUnlockedImageUrl_12; }
	inline void set_mUnlockedImageUrl_12(String_t* value)
	{
		___mUnlockedImageUrl_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUnlockedImageUrl_12), (void*)value);
	}
};

struct Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2_StaticFields
{
public:
	// System.DateTime GooglePlayGames.BasicApi.Achievement::UnixEpoch
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___UnixEpoch_0;

public:
	inline static int32_t get_offset_of_UnixEpoch_0() { return static_cast<int32_t>(offsetof(Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2_StaticFields, ___UnixEpoch_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_UnixEpoch_0() const { return ___UnixEpoch_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_UnixEpoch_0() { return &___UnixEpoch_0; }
	inline void set_UnixEpoch_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___UnixEpoch_0 = value;
	}
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// GooglePlayGames.BasicApi.CommonStatusCodes
struct CommonStatusCodes_t9287CF84D9A8417E5C11430E382BE4B9A6AEEA86 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.CommonStatusCodes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CommonStatusCodes_t9287CF84D9A8417E5C11430E382BE4B9A6AEEA86, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// GooglePlayGames.PlayGamesAchievement
struct PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD  : public RuntimeObject
{
public:
	// GooglePlayGames.ReportProgress GooglePlayGames.PlayGamesAchievement::mProgressCallback
	ReportProgress_tFCB05EBAC6BBD08F9FB8746A3EC8B0D91258B679 * ___mProgressCallback_0;
	// System.String GooglePlayGames.PlayGamesAchievement::mId
	String_t* ___mId_1;
	// System.Boolean GooglePlayGames.PlayGamesAchievement::mIsIncremental
	bool ___mIsIncremental_2;
	// System.Int32 GooglePlayGames.PlayGamesAchievement::mCurrentSteps
	int32_t ___mCurrentSteps_3;
	// System.Int32 GooglePlayGames.PlayGamesAchievement::mTotalSteps
	int32_t ___mTotalSteps_4;
	// System.Double GooglePlayGames.PlayGamesAchievement::mPercentComplete
	double ___mPercentComplete_5;
	// System.Boolean GooglePlayGames.PlayGamesAchievement::mCompleted
	bool ___mCompleted_6;
	// System.Boolean GooglePlayGames.PlayGamesAchievement::mHidden
	bool ___mHidden_7;
	// System.DateTime GooglePlayGames.PlayGamesAchievement::mLastModifiedTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___mLastModifiedTime_8;
	// System.String GooglePlayGames.PlayGamesAchievement::mTitle
	String_t* ___mTitle_9;
	// System.String GooglePlayGames.PlayGamesAchievement::mRevealedImageUrl
	String_t* ___mRevealedImageUrl_10;
	// System.String GooglePlayGames.PlayGamesAchievement::mUnlockedImageUrl
	String_t* ___mUnlockedImageUrl_11;
	// UnityEngine.Networking.UnityWebRequest GooglePlayGames.PlayGamesAchievement::mImageFetcher
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___mImageFetcher_12;
	// UnityEngine.Texture2D GooglePlayGames.PlayGamesAchievement::mImage
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___mImage_13;
	// System.String GooglePlayGames.PlayGamesAchievement::mDescription
	String_t* ___mDescription_14;
	// System.UInt64 GooglePlayGames.PlayGamesAchievement::mPoints
	uint64_t ___mPoints_15;

public:
	inline static int32_t get_offset_of_mProgressCallback_0() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD, ___mProgressCallback_0)); }
	inline ReportProgress_tFCB05EBAC6BBD08F9FB8746A3EC8B0D91258B679 * get_mProgressCallback_0() const { return ___mProgressCallback_0; }
	inline ReportProgress_tFCB05EBAC6BBD08F9FB8746A3EC8B0D91258B679 ** get_address_of_mProgressCallback_0() { return &___mProgressCallback_0; }
	inline void set_mProgressCallback_0(ReportProgress_tFCB05EBAC6BBD08F9FB8746A3EC8B0D91258B679 * value)
	{
		___mProgressCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mProgressCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_mId_1() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD, ___mId_1)); }
	inline String_t* get_mId_1() const { return ___mId_1; }
	inline String_t** get_address_of_mId_1() { return &___mId_1; }
	inline void set_mId_1(String_t* value)
	{
		___mId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_1), (void*)value);
	}

	inline static int32_t get_offset_of_mIsIncremental_2() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD, ___mIsIncremental_2)); }
	inline bool get_mIsIncremental_2() const { return ___mIsIncremental_2; }
	inline bool* get_address_of_mIsIncremental_2() { return &___mIsIncremental_2; }
	inline void set_mIsIncremental_2(bool value)
	{
		___mIsIncremental_2 = value;
	}

	inline static int32_t get_offset_of_mCurrentSteps_3() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD, ___mCurrentSteps_3)); }
	inline int32_t get_mCurrentSteps_3() const { return ___mCurrentSteps_3; }
	inline int32_t* get_address_of_mCurrentSteps_3() { return &___mCurrentSteps_3; }
	inline void set_mCurrentSteps_3(int32_t value)
	{
		___mCurrentSteps_3 = value;
	}

	inline static int32_t get_offset_of_mTotalSteps_4() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD, ___mTotalSteps_4)); }
	inline int32_t get_mTotalSteps_4() const { return ___mTotalSteps_4; }
	inline int32_t* get_address_of_mTotalSteps_4() { return &___mTotalSteps_4; }
	inline void set_mTotalSteps_4(int32_t value)
	{
		___mTotalSteps_4 = value;
	}

	inline static int32_t get_offset_of_mPercentComplete_5() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD, ___mPercentComplete_5)); }
	inline double get_mPercentComplete_5() const { return ___mPercentComplete_5; }
	inline double* get_address_of_mPercentComplete_5() { return &___mPercentComplete_5; }
	inline void set_mPercentComplete_5(double value)
	{
		___mPercentComplete_5 = value;
	}

	inline static int32_t get_offset_of_mCompleted_6() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD, ___mCompleted_6)); }
	inline bool get_mCompleted_6() const { return ___mCompleted_6; }
	inline bool* get_address_of_mCompleted_6() { return &___mCompleted_6; }
	inline void set_mCompleted_6(bool value)
	{
		___mCompleted_6 = value;
	}

	inline static int32_t get_offset_of_mHidden_7() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD, ___mHidden_7)); }
	inline bool get_mHidden_7() const { return ___mHidden_7; }
	inline bool* get_address_of_mHidden_7() { return &___mHidden_7; }
	inline void set_mHidden_7(bool value)
	{
		___mHidden_7 = value;
	}

	inline static int32_t get_offset_of_mLastModifiedTime_8() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD, ___mLastModifiedTime_8)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_mLastModifiedTime_8() const { return ___mLastModifiedTime_8; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_mLastModifiedTime_8() { return &___mLastModifiedTime_8; }
	inline void set_mLastModifiedTime_8(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___mLastModifiedTime_8 = value;
	}

	inline static int32_t get_offset_of_mTitle_9() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD, ___mTitle_9)); }
	inline String_t* get_mTitle_9() const { return ___mTitle_9; }
	inline String_t** get_address_of_mTitle_9() { return &___mTitle_9; }
	inline void set_mTitle_9(String_t* value)
	{
		___mTitle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTitle_9), (void*)value);
	}

	inline static int32_t get_offset_of_mRevealedImageUrl_10() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD, ___mRevealedImageUrl_10)); }
	inline String_t* get_mRevealedImageUrl_10() const { return ___mRevealedImageUrl_10; }
	inline String_t** get_address_of_mRevealedImageUrl_10() { return &___mRevealedImageUrl_10; }
	inline void set_mRevealedImageUrl_10(String_t* value)
	{
		___mRevealedImageUrl_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRevealedImageUrl_10), (void*)value);
	}

	inline static int32_t get_offset_of_mUnlockedImageUrl_11() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD, ___mUnlockedImageUrl_11)); }
	inline String_t* get_mUnlockedImageUrl_11() const { return ___mUnlockedImageUrl_11; }
	inline String_t** get_address_of_mUnlockedImageUrl_11() { return &___mUnlockedImageUrl_11; }
	inline void set_mUnlockedImageUrl_11(String_t* value)
	{
		___mUnlockedImageUrl_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUnlockedImageUrl_11), (void*)value);
	}

	inline static int32_t get_offset_of_mImageFetcher_12() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD, ___mImageFetcher_12)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_mImageFetcher_12() const { return ___mImageFetcher_12; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_mImageFetcher_12() { return &___mImageFetcher_12; }
	inline void set_mImageFetcher_12(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___mImageFetcher_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImageFetcher_12), (void*)value);
	}

	inline static int32_t get_offset_of_mImage_13() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD, ___mImage_13)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_mImage_13() const { return ___mImage_13; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_mImage_13() { return &___mImage_13; }
	inline void set_mImage_13(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___mImage_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImage_13), (void*)value);
	}

	inline static int32_t get_offset_of_mDescription_14() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD, ___mDescription_14)); }
	inline String_t* get_mDescription_14() const { return ___mDescription_14; }
	inline String_t** get_address_of_mDescription_14() { return &___mDescription_14; }
	inline void set_mDescription_14(String_t* value)
	{
		___mDescription_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDescription_14), (void*)value);
	}

	inline static int32_t get_offset_of_mPoints_15() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD, ___mPoints_15)); }
	inline uint64_t get_mPoints_15() const { return ___mPoints_15; }
	inline uint64_t* get_address_of_mPoints_15() { return &___mPoints_15; }
	inline void set_mPoints_15(uint64_t value)
	{
		___mPoints_15 = value;
	}
};


// GooglePlayGames.PlayGamesPlatform
struct PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E  : public RuntimeObject
{
public:
	// GooglePlayGames.PlayGamesLocalUser GooglePlayGames.PlayGamesPlatform::mLocalUser
	PlayGamesLocalUser_t21A39842FC4E39CC770D47E63944148F3EB6410E * ___mLocalUser_3;
	// GooglePlayGames.BasicApi.IPlayGamesClient GooglePlayGames.PlayGamesPlatform::mClient
	RuntimeObject* ___mClient_4;
	// System.String GooglePlayGames.PlayGamesPlatform::mDefaultLbUi
	String_t* ___mDefaultLbUi_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GooglePlayGames.PlayGamesPlatform::mIdMap
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___mIdMap_6;

public:
	inline static int32_t get_offset_of_mLocalUser_3() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E, ___mLocalUser_3)); }
	inline PlayGamesLocalUser_t21A39842FC4E39CC770D47E63944148F3EB6410E * get_mLocalUser_3() const { return ___mLocalUser_3; }
	inline PlayGamesLocalUser_t21A39842FC4E39CC770D47E63944148F3EB6410E ** get_address_of_mLocalUser_3() { return &___mLocalUser_3; }
	inline void set_mLocalUser_3(PlayGamesLocalUser_t21A39842FC4E39CC770D47E63944148F3EB6410E * value)
	{
		___mLocalUser_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLocalUser_3), (void*)value);
	}

	inline static int32_t get_offset_of_mClient_4() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E, ___mClient_4)); }
	inline RuntimeObject* get_mClient_4() const { return ___mClient_4; }
	inline RuntimeObject** get_address_of_mClient_4() { return &___mClient_4; }
	inline void set_mClient_4(RuntimeObject* value)
	{
		___mClient_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mClient_4), (void*)value);
	}

	inline static int32_t get_offset_of_mDefaultLbUi_5() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E, ___mDefaultLbUi_5)); }
	inline String_t* get_mDefaultLbUi_5() const { return ___mDefaultLbUi_5; }
	inline String_t** get_address_of_mDefaultLbUi_5() { return &___mDefaultLbUi_5; }
	inline void set_mDefaultLbUi_5(String_t* value)
	{
		___mDefaultLbUi_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDefaultLbUi_5), (void*)value);
	}

	inline static int32_t get_offset_of_mIdMap_6() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E, ___mIdMap_6)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_mIdMap_6() const { return ___mIdMap_6; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_mIdMap_6() { return &___mIdMap_6; }
	inline void set_mIdMap_6(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___mIdMap_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mIdMap_6), (void*)value);
	}
};

struct PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_StaticFields
{
public:
	// GooglePlayGames.PlayGamesPlatform modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sInstance
	PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * ___sInstance_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sNearbyInitializePending
	bool ___sNearbyInitializePending_1;
	// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sNearbyConnectionClient
	RuntimeObject* ___sNearbyConnectionClient_2;

public:
	inline static int32_t get_offset_of_sInstance_0() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_StaticFields, ___sInstance_0)); }
	inline PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * get_sInstance_0() const { return ___sInstance_0; }
	inline PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E ** get_address_of_sInstance_0() { return &___sInstance_0; }
	inline void set_sInstance_0(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * value)
	{
		___sInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_0), (void*)value);
	}

	inline static int32_t get_offset_of_sNearbyInitializePending_1() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_StaticFields, ___sNearbyInitializePending_1)); }
	inline bool get_sNearbyInitializePending_1() const { return ___sNearbyInitializePending_1; }
	inline bool* get_address_of_sNearbyInitializePending_1() { return &___sNearbyInitializePending_1; }
	inline void set_sNearbyInitializePending_1(bool value)
	{
		___sNearbyInitializePending_1 = value;
	}

	inline static int32_t get_offset_of_sNearbyConnectionClient_2() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_StaticFields, ___sNearbyConnectionClient_2)); }
	inline RuntimeObject* get_sNearbyConnectionClient_2() const { return ___sNearbyConnectionClient_2; }
	inline RuntimeObject** get_address_of_sNearbyConnectionClient_2() { return &___sNearbyConnectionClient_2; }
	inline void set_sNearbyConnectionClient_2(RuntimeObject* value)
	{
		___sNearbyConnectionClient_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sNearbyConnectionClient_2), (void*)value);
	}
};


// GooglePlayGames.PlayGamesUserProfile
struct PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.PlayGamesUserProfile::mDisplayName
	String_t* ___mDisplayName_0;
	// System.String GooglePlayGames.PlayGamesUserProfile::mPlayerId
	String_t* ___mPlayerId_1;
	// System.String GooglePlayGames.PlayGamesUserProfile::mAvatarUrl
	String_t* ___mAvatarUrl_2;
	// System.Boolean GooglePlayGames.PlayGamesUserProfile::mIsFriend
	bool ___mIsFriend_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesUserProfile::mImageLoading
	bool ___mImageLoading_4;
	// UnityEngine.Texture2D GooglePlayGames.PlayGamesUserProfile::mImage
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___mImage_5;

public:
	inline static int32_t get_offset_of_mDisplayName_0() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35, ___mDisplayName_0)); }
	inline String_t* get_mDisplayName_0() const { return ___mDisplayName_0; }
	inline String_t** get_address_of_mDisplayName_0() { return &___mDisplayName_0; }
	inline void set_mDisplayName_0(String_t* value)
	{
		___mDisplayName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDisplayName_0), (void*)value);
	}

	inline static int32_t get_offset_of_mPlayerId_1() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35, ___mPlayerId_1)); }
	inline String_t* get_mPlayerId_1() const { return ___mPlayerId_1; }
	inline String_t** get_address_of_mPlayerId_1() { return &___mPlayerId_1; }
	inline void set_mPlayerId_1(String_t* value)
	{
		___mPlayerId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPlayerId_1), (void*)value);
	}

	inline static int32_t get_offset_of_mAvatarUrl_2() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35, ___mAvatarUrl_2)); }
	inline String_t* get_mAvatarUrl_2() const { return ___mAvatarUrl_2; }
	inline String_t** get_address_of_mAvatarUrl_2() { return &___mAvatarUrl_2; }
	inline void set_mAvatarUrl_2(String_t* value)
	{
		___mAvatarUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAvatarUrl_2), (void*)value);
	}

	inline static int32_t get_offset_of_mIsFriend_3() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35, ___mIsFriend_3)); }
	inline bool get_mIsFriend_3() const { return ___mIsFriend_3; }
	inline bool* get_address_of_mIsFriend_3() { return &___mIsFriend_3; }
	inline void set_mIsFriend_3(bool value)
	{
		___mIsFriend_3 = value;
	}

	inline static int32_t get_offset_of_mImageLoading_4() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35, ___mImageLoading_4)); }
	inline bool get_mImageLoading_4() const { return ___mImageLoading_4; }
	inline bool* get_address_of_mImageLoading_4() { return &___mImageLoading_4; }
	inline void set_mImageLoading_4(bool value)
	{
		___mImageLoading_4 = value;
	}

	inline static int32_t get_offset_of_mImage_5() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35, ___mImage_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_mImage_5() const { return ___mImage_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_mImage_5() { return &___mImage_5; }
	inline void set_mImage_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___mImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImage_5), (void*)value);
	}
};


// GooglePlayGames.BasicApi.ResponseStatus
struct ResponseStatus_t6EB9EB817DC59FADD99CCED9637D2784850AB3FC 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.ResponseStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResponseStatus_t6EB9EB817DC59FADD99CCED9637D2784850AB3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.SignInStatus
struct SignInStatus_t26D2B045A190EDD9B73B93CF9118CAD0275BE2D0 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SignInStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SignInStatus_t26D2B045A190EDD9B73B93CF9118CAD0275BE2D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SocialPlatforms.TimeScope
struct TimeScope_t0FDB33C00FF0784F8194FEF48B2BD78C0F9A7759 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.TimeScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeScope_t0FDB33C00FF0784F8194FEF48B2BD78C0F9A7759, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.SocialPlatforms.UserScope
struct UserScope_t7EB5D79B9892B749665A462B4832F78C3F57A4C7 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserScope_t7EB5D79B9892B749665A462B4832F78C3F57A4C7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status
struct Status_tC4476C8B8AF8959D9CDA3895E5ECA1988CCEE1DC 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_tC4476C8B8AF8959D9CDA3895E5ECA1988CCEE1DC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tE00E7C4A4C511F0253C1405877DB9BE1EF3DC378  : public RuntimeObject
{
public:
	// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0::<>4__this
	OnGameThreadDiscoveryListener_t2F3897569AFA4D8648966F7D2804DA667A59A4DB * ___U3CU3E4__this_0;
	// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0::discoveredEndpoint
	EndpointDetails_tC75D8291178BBEE47B9464CA22842AC3C54412D1  ___discoveredEndpoint_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tE00E7C4A4C511F0253C1405877DB9BE1EF3DC378, ___U3CU3E4__this_0)); }
	inline OnGameThreadDiscoveryListener_t2F3897569AFA4D8648966F7D2804DA667A59A4DB * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnGameThreadDiscoveryListener_t2F3897569AFA4D8648966F7D2804DA667A59A4DB ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnGameThreadDiscoveryListener_t2F3897569AFA4D8648966F7D2804DA667A59A4DB * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_discoveredEndpoint_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tE00E7C4A4C511F0253C1405877DB9BE1EF3DC378, ___discoveredEndpoint_1)); }
	inline EndpointDetails_tC75D8291178BBEE47B9464CA22842AC3C54412D1  get_discoveredEndpoint_1() const { return ___discoveredEndpoint_1; }
	inline EndpointDetails_tC75D8291178BBEE47B9464CA22842AC3C54412D1 * get_address_of_discoveredEndpoint_1() { return &___discoveredEndpoint_1; }
	inline void set_discoveredEndpoint_1(EndpointDetails_tC75D8291178BBEE47B9464CA22842AC3C54412D1  value)
	{
		___discoveredEndpoint_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___discoveredEndpoint_1))->___mEndpointId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___discoveredEndpoint_1))->___mName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___discoveredEndpoint_1))->___mServiceId_2), (void*)NULL);
		#endif
	}
};


// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F 
{
public:
	// T System.Nullable`1::value
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F, ___value_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_value_0() const { return ___value_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_t7946A6078C07768D37E222231A650A7D3DFFDDD0  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::mId
	String_t* ___mId_0;
	// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.LeaderboardScoreData::mStatus
	int32_t ___mStatus_1;
	// System.UInt64 GooglePlayGames.BasicApi.LeaderboardScoreData::mApproxCount
	uint64_t ___mApproxCount_2;
	// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::mTitle
	String_t* ___mTitle_3;
	// UnityEngine.SocialPlatforms.IScore GooglePlayGames.BasicApi.LeaderboardScoreData::mPlayerScore
	RuntimeObject* ___mPlayerScore_4;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::mPrevPage
	ScorePageToken_t0CE7D6FFFF936BA700BC9CB75A500B8FBE5CCADC * ___mPrevPage_5;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::mNextPage
	ScorePageToken_t0CE7D6FFFF936BA700BC9CB75A500B8FBE5CCADC * ___mNextPage_6;
	// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore> GooglePlayGames.BasicApi.LeaderboardScoreData::mScores
	List_1_t4F1ADF41FDF061275683E56A8683FE5EBAC1EB81 * ___mScores_7;

public:
	inline static int32_t get_offset_of_mId_0() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t7946A6078C07768D37E222231A650A7D3DFFDDD0, ___mId_0)); }
	inline String_t* get_mId_0() const { return ___mId_0; }
	inline String_t** get_address_of_mId_0() { return &___mId_0; }
	inline void set_mId_0(String_t* value)
	{
		___mId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mStatus_1() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t7946A6078C07768D37E222231A650A7D3DFFDDD0, ___mStatus_1)); }
	inline int32_t get_mStatus_1() const { return ___mStatus_1; }
	inline int32_t* get_address_of_mStatus_1() { return &___mStatus_1; }
	inline void set_mStatus_1(int32_t value)
	{
		___mStatus_1 = value;
	}

	inline static int32_t get_offset_of_mApproxCount_2() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t7946A6078C07768D37E222231A650A7D3DFFDDD0, ___mApproxCount_2)); }
	inline uint64_t get_mApproxCount_2() const { return ___mApproxCount_2; }
	inline uint64_t* get_address_of_mApproxCount_2() { return &___mApproxCount_2; }
	inline void set_mApproxCount_2(uint64_t value)
	{
		___mApproxCount_2 = value;
	}

	inline static int32_t get_offset_of_mTitle_3() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t7946A6078C07768D37E222231A650A7D3DFFDDD0, ___mTitle_3)); }
	inline String_t* get_mTitle_3() const { return ___mTitle_3; }
	inline String_t** get_address_of_mTitle_3() { return &___mTitle_3; }
	inline void set_mTitle_3(String_t* value)
	{
		___mTitle_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTitle_3), (void*)value);
	}

	inline static int32_t get_offset_of_mPlayerScore_4() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t7946A6078C07768D37E222231A650A7D3DFFDDD0, ___mPlayerScore_4)); }
	inline RuntimeObject* get_mPlayerScore_4() const { return ___mPlayerScore_4; }
	inline RuntimeObject** get_address_of_mPlayerScore_4() { return &___mPlayerScore_4; }
	inline void set_mPlayerScore_4(RuntimeObject* value)
	{
		___mPlayerScore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPlayerScore_4), (void*)value);
	}

	inline static int32_t get_offset_of_mPrevPage_5() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t7946A6078C07768D37E222231A650A7D3DFFDDD0, ___mPrevPage_5)); }
	inline ScorePageToken_t0CE7D6FFFF936BA700BC9CB75A500B8FBE5CCADC * get_mPrevPage_5() const { return ___mPrevPage_5; }
	inline ScorePageToken_t0CE7D6FFFF936BA700BC9CB75A500B8FBE5CCADC ** get_address_of_mPrevPage_5() { return &___mPrevPage_5; }
	inline void set_mPrevPage_5(ScorePageToken_t0CE7D6FFFF936BA700BC9CB75A500B8FBE5CCADC * value)
	{
		___mPrevPage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPrevPage_5), (void*)value);
	}

	inline static int32_t get_offset_of_mNextPage_6() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t7946A6078C07768D37E222231A650A7D3DFFDDD0, ___mNextPage_6)); }
	inline ScorePageToken_t0CE7D6FFFF936BA700BC9CB75A500B8FBE5CCADC * get_mNextPage_6() const { return ___mNextPage_6; }
	inline ScorePageToken_t0CE7D6FFFF936BA700BC9CB75A500B8FBE5CCADC ** get_address_of_mNextPage_6() { return &___mNextPage_6; }
	inline void set_mNextPage_6(ScorePageToken_t0CE7D6FFFF936BA700BC9CB75A500B8FBE5CCADC * value)
	{
		___mNextPage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNextPage_6), (void*)value);
	}

	inline static int32_t get_offset_of_mScores_7() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t7946A6078C07768D37E222231A650A7D3DFFDDD0, ___mScores_7)); }
	inline List_1_t4F1ADF41FDF061275683E56A8683FE5EBAC1EB81 * get_mScores_7() const { return ___mScores_7; }
	inline List_1_t4F1ADF41FDF061275683E56A8683FE5EBAC1EB81 ** get_address_of_mScores_7() { return &___mScores_7; }
	inline void set_mScores_7(List_1_t4F1ADF41FDF061275683E56A8683FE5EBAC1EB81 * value)
	{
		___mScores_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mScores_7), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// GooglePlayGames.PlayGamesLeaderboard
struct PlayGamesLeaderboard_tCEB75327DF149E197EE0743B4778C0F4C12D9415  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.PlayGamesLeaderboard::mId
	String_t* ___mId_0;
	// UnityEngine.SocialPlatforms.UserScope GooglePlayGames.PlayGamesLeaderboard::mUserScope
	int32_t ___mUserScope_1;
	// UnityEngine.SocialPlatforms.Range GooglePlayGames.PlayGamesLeaderboard::mRange
	Range_t70C133E51417BC822E878050C90A577A69B671DC  ___mRange_2;
	// UnityEngine.SocialPlatforms.TimeScope GooglePlayGames.PlayGamesLeaderboard::mTimeScope
	int32_t ___mTimeScope_3;
	// System.String[] GooglePlayGames.PlayGamesLeaderboard::mFilteredUserIds
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___mFilteredUserIds_4;
	// System.Boolean GooglePlayGames.PlayGamesLeaderboard::mLoading
	bool ___mLoading_5;
	// UnityEngine.SocialPlatforms.IScore GooglePlayGames.PlayGamesLeaderboard::mLocalUserScore
	RuntimeObject* ___mLocalUserScore_6;
	// System.UInt32 GooglePlayGames.PlayGamesLeaderboard::mMaxRange
	uint32_t ___mMaxRange_7;
	// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore> GooglePlayGames.PlayGamesLeaderboard::mScoreList
	List_1_t4F1ADF41FDF061275683E56A8683FE5EBAC1EB81 * ___mScoreList_8;
	// System.String GooglePlayGames.PlayGamesLeaderboard::mTitle
	String_t* ___mTitle_9;

public:
	inline static int32_t get_offset_of_mId_0() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_tCEB75327DF149E197EE0743B4778C0F4C12D9415, ___mId_0)); }
	inline String_t* get_mId_0() const { return ___mId_0; }
	inline String_t** get_address_of_mId_0() { return &___mId_0; }
	inline void set_mId_0(String_t* value)
	{
		___mId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mUserScope_1() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_tCEB75327DF149E197EE0743B4778C0F4C12D9415, ___mUserScope_1)); }
	inline int32_t get_mUserScope_1() const { return ___mUserScope_1; }
	inline int32_t* get_address_of_mUserScope_1() { return &___mUserScope_1; }
	inline void set_mUserScope_1(int32_t value)
	{
		___mUserScope_1 = value;
	}

	inline static int32_t get_offset_of_mRange_2() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_tCEB75327DF149E197EE0743B4778C0F4C12D9415, ___mRange_2)); }
	inline Range_t70C133E51417BC822E878050C90A577A69B671DC  get_mRange_2() const { return ___mRange_2; }
	inline Range_t70C133E51417BC822E878050C90A577A69B671DC * get_address_of_mRange_2() { return &___mRange_2; }
	inline void set_mRange_2(Range_t70C133E51417BC822E878050C90A577A69B671DC  value)
	{
		___mRange_2 = value;
	}

	inline static int32_t get_offset_of_mTimeScope_3() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_tCEB75327DF149E197EE0743B4778C0F4C12D9415, ___mTimeScope_3)); }
	inline int32_t get_mTimeScope_3() const { return ___mTimeScope_3; }
	inline int32_t* get_address_of_mTimeScope_3() { return &___mTimeScope_3; }
	inline void set_mTimeScope_3(int32_t value)
	{
		___mTimeScope_3 = value;
	}

	inline static int32_t get_offset_of_mFilteredUserIds_4() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_tCEB75327DF149E197EE0743B4778C0F4C12D9415, ___mFilteredUserIds_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_mFilteredUserIds_4() const { return ___mFilteredUserIds_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_mFilteredUserIds_4() { return &___mFilteredUserIds_4; }
	inline void set_mFilteredUserIds_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___mFilteredUserIds_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mFilteredUserIds_4), (void*)value);
	}

	inline static int32_t get_offset_of_mLoading_5() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_tCEB75327DF149E197EE0743B4778C0F4C12D9415, ___mLoading_5)); }
	inline bool get_mLoading_5() const { return ___mLoading_5; }
	inline bool* get_address_of_mLoading_5() { return &___mLoading_5; }
	inline void set_mLoading_5(bool value)
	{
		___mLoading_5 = value;
	}

	inline static int32_t get_offset_of_mLocalUserScore_6() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_tCEB75327DF149E197EE0743B4778C0F4C12D9415, ___mLocalUserScore_6)); }
	inline RuntimeObject* get_mLocalUserScore_6() const { return ___mLocalUserScore_6; }
	inline RuntimeObject** get_address_of_mLocalUserScore_6() { return &___mLocalUserScore_6; }
	inline void set_mLocalUserScore_6(RuntimeObject* value)
	{
		___mLocalUserScore_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLocalUserScore_6), (void*)value);
	}

	inline static int32_t get_offset_of_mMaxRange_7() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_tCEB75327DF149E197EE0743B4778C0F4C12D9415, ___mMaxRange_7)); }
	inline uint32_t get_mMaxRange_7() const { return ___mMaxRange_7; }
	inline uint32_t* get_address_of_mMaxRange_7() { return &___mMaxRange_7; }
	inline void set_mMaxRange_7(uint32_t value)
	{
		___mMaxRange_7 = value;
	}

	inline static int32_t get_offset_of_mScoreList_8() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_tCEB75327DF149E197EE0743B4778C0F4C12D9415, ___mScoreList_8)); }
	inline List_1_t4F1ADF41FDF061275683E56A8683FE5EBAC1EB81 * get_mScoreList_8() const { return ___mScoreList_8; }
	inline List_1_t4F1ADF41FDF061275683E56A8683FE5EBAC1EB81 ** get_address_of_mScoreList_8() { return &___mScoreList_8; }
	inline void set_mScoreList_8(List_1_t4F1ADF41FDF061275683E56A8683FE5EBAC1EB81 * value)
	{
		___mScoreList_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mScoreList_8), (void*)value);
	}

	inline static int32_t get_offset_of_mTitle_9() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_tCEB75327DF149E197EE0743B4778C0F4C12D9415, ___mTitle_9)); }
	inline String_t* get_mTitle_9() const { return ___mTitle_9; }
	inline String_t** get_address_of_mTitle_9() { return &___mTitle_9; }
	inline void set_mTitle_9(String_t* value)
	{
		___mTitle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTitle_9), (void*)value);
	}
};


// GooglePlayGames.PlayGamesLocalUser
struct PlayGamesLocalUser_t21A39842FC4E39CC770D47E63944148F3EB6410E  : public PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35
{
public:
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesLocalUser::mPlatform
	PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * ___mPlatform_6;
	// GooglePlayGames.BasicApi.PlayerStats GooglePlayGames.PlayGamesLocalUser::mStats
	PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971 * ___mStats_7;

public:
	inline static int32_t get_offset_of_mPlatform_6() { return static_cast<int32_t>(offsetof(PlayGamesLocalUser_t21A39842FC4E39CC770D47E63944148F3EB6410E, ___mPlatform_6)); }
	inline PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * get_mPlatform_6() const { return ___mPlatform_6; }
	inline PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E ** get_address_of_mPlatform_6() { return &___mPlatform_6; }
	inline void set_mPlatform_6(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * value)
	{
		___mPlatform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPlatform_6), (void*)value);
	}

	inline static int32_t get_offset_of_mStats_7() { return static_cast<int32_t>(offsetof(PlayGamesLocalUser_t21A39842FC4E39CC770D47E63944148F3EB6410E, ___mStats_7)); }
	inline PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971 * get_mStats_7() const { return ___mStats_7; }
	inline PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971 ** get_address_of_mStats_7() { return &___mStats_7; }
	inline void set_mStats_7(PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971 * value)
	{
		___mStats_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mStats_7), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t7570552C35A220ADB9666809E4D57E4C10713634  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient>
struct Action_1_tAF7B1704CEED6D4AC8D41184CCF825172C04F70B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Boolean,System.String>
struct Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>
struct Action_2_tDDB8E14DBC99ABCB290C0DB85F81AEED48751266  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_tF028D310D07296EE51D7F46B293043FDC13ADC03 
{
public:
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewPngCoverImage
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewPlayedTime
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;

public:
	inline static int32_t get_offset_of_mDescriptionUpdated_0() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_tF028D310D07296EE51D7F46B293043FDC13ADC03, ___mDescriptionUpdated_0)); }
	inline bool get_mDescriptionUpdated_0() const { return ___mDescriptionUpdated_0; }
	inline bool* get_address_of_mDescriptionUpdated_0() { return &___mDescriptionUpdated_0; }
	inline void set_mDescriptionUpdated_0(bool value)
	{
		___mDescriptionUpdated_0 = value;
	}

	inline static int32_t get_offset_of_mNewDescription_1() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_tF028D310D07296EE51D7F46B293043FDC13ADC03, ___mNewDescription_1)); }
	inline String_t* get_mNewDescription_1() const { return ___mNewDescription_1; }
	inline String_t** get_address_of_mNewDescription_1() { return &___mNewDescription_1; }
	inline void set_mNewDescription_1(String_t* value)
	{
		___mNewDescription_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewDescription_1), (void*)value);
	}

	inline static int32_t get_offset_of_mCoverImageUpdated_2() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_tF028D310D07296EE51D7F46B293043FDC13ADC03, ___mCoverImageUpdated_2)); }
	inline bool get_mCoverImageUpdated_2() const { return ___mCoverImageUpdated_2; }
	inline bool* get_address_of_mCoverImageUpdated_2() { return &___mCoverImageUpdated_2; }
	inline void set_mCoverImageUpdated_2(bool value)
	{
		___mCoverImageUpdated_2 = value;
	}

	inline static int32_t get_offset_of_mNewPngCoverImage_3() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_tF028D310D07296EE51D7F46B293043FDC13ADC03, ___mNewPngCoverImage_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_mNewPngCoverImage_3() const { return ___mNewPngCoverImage_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_mNewPngCoverImage_3() { return &___mNewPngCoverImage_3; }
	inline void set_mNewPngCoverImage_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___mNewPngCoverImage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewPngCoverImage_3), (void*)value);
	}

	inline static int32_t get_offset_of_mNewPlayedTime_4() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_tF028D310D07296EE51D7F46B293043FDC13ADC03, ___mNewPlayedTime_4)); }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  get_mNewPlayedTime_4() const { return ___mNewPlayedTime_4; }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * get_address_of_mNewPlayedTime_4() { return &___mNewPlayedTime_4; }
	inline void set_mNewPlayedTime_4(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  value)
	{
		___mNewPlayedTime_4 = value;
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_tF028D310D07296EE51D7F46B293043FDC13ADC03_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_tF028D310D07296EE51D7F46B293043FDC13ADC03_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;
};

// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A 
{
public:
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPngCoverImage
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPlayedTime
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;

public:
	inline static int32_t get_offset_of_mDescriptionUpdated_0() { return static_cast<int32_t>(offsetof(Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A, ___mDescriptionUpdated_0)); }
	inline bool get_mDescriptionUpdated_0() const { return ___mDescriptionUpdated_0; }
	inline bool* get_address_of_mDescriptionUpdated_0() { return &___mDescriptionUpdated_0; }
	inline void set_mDescriptionUpdated_0(bool value)
	{
		___mDescriptionUpdated_0 = value;
	}

	inline static int32_t get_offset_of_mNewDescription_1() { return static_cast<int32_t>(offsetof(Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A, ___mNewDescription_1)); }
	inline String_t* get_mNewDescription_1() const { return ___mNewDescription_1; }
	inline String_t** get_address_of_mNewDescription_1() { return &___mNewDescription_1; }
	inline void set_mNewDescription_1(String_t* value)
	{
		___mNewDescription_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewDescription_1), (void*)value);
	}

	inline static int32_t get_offset_of_mCoverImageUpdated_2() { return static_cast<int32_t>(offsetof(Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A, ___mCoverImageUpdated_2)); }
	inline bool get_mCoverImageUpdated_2() const { return ___mCoverImageUpdated_2; }
	inline bool* get_address_of_mCoverImageUpdated_2() { return &___mCoverImageUpdated_2; }
	inline void set_mCoverImageUpdated_2(bool value)
	{
		___mCoverImageUpdated_2 = value;
	}

	inline static int32_t get_offset_of_mNewPngCoverImage_3() { return static_cast<int32_t>(offsetof(Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A, ___mNewPngCoverImage_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_mNewPngCoverImage_3() const { return ___mNewPngCoverImage_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_mNewPngCoverImage_3() { return &___mNewPngCoverImage_3; }
	inline void set_mNewPngCoverImage_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___mNewPngCoverImage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewPngCoverImage_3), (void*)value);
	}

	inline static int32_t get_offset_of_mNewPlayedTime_4() { return static_cast<int32_t>(offsetof(Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A, ___mNewPlayedTime_4)); }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  get_mNewPlayedTime_4() const { return ___mNewPlayedTime_4; }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * get_address_of_mNewPlayedTime_4() { return &___mNewPlayedTime_4; }
	inline void set_mNewPlayedTime_4(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  value)
	{
		___mNewPlayedTime_4 = value;
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___mNewPlayedTime_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// GooglePlayGames.OurUtils.PlayGamesHelperObject
struct PlayGamesHelperObject_tE1771632CFF2761EFCBD79B9F192888102101C6A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<System.Action> GooglePlayGames.OurUtils.PlayGamesHelperObject::localQueue
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ___localQueue_7;

public:
	inline static int32_t get_offset_of_localQueue_7() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_tE1771632CFF2761EFCBD79B9F192888102101C6A, ___localQueue_7)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get_localQueue_7() const { return ___localQueue_7; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of_localQueue_7() { return &___localQueue_7; }
	inline void set_localQueue_7(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		___localQueue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localQueue_7), (void*)value);
	}
};

struct PlayGamesHelperObject_tE1771632CFF2761EFCBD79B9F192888102101C6A_StaticFields
{
public:
	// GooglePlayGames.OurUtils.PlayGamesHelperObject GooglePlayGames.OurUtils.PlayGamesHelperObject::instance
	PlayGamesHelperObject_tE1771632CFF2761EFCBD79B9F192888102101C6A * ___instance_4;
	// System.Boolean GooglePlayGames.OurUtils.PlayGamesHelperObject::sIsDummy
	bool ___sIsDummy_5;
	// System.Collections.Generic.List`1<System.Action> GooglePlayGames.OurUtils.PlayGamesHelperObject::sQueue
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ___sQueue_6;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.OurUtils.PlayGamesHelperObject::sQueueEmpty
	bool ___sQueueEmpty_8;
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> GooglePlayGames.OurUtils.PlayGamesHelperObject::sPauseCallbackList
	List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * ___sPauseCallbackList_9;
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> GooglePlayGames.OurUtils.PlayGamesHelperObject::sFocusCallbackList
	List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * ___sFocusCallbackList_10;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_tE1771632CFF2761EFCBD79B9F192888102101C6A_StaticFields, ___instance_4)); }
	inline PlayGamesHelperObject_tE1771632CFF2761EFCBD79B9F192888102101C6A * get_instance_4() const { return ___instance_4; }
	inline PlayGamesHelperObject_tE1771632CFF2761EFCBD79B9F192888102101C6A ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(PlayGamesHelperObject_tE1771632CFF2761EFCBD79B9F192888102101C6A * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_sIsDummy_5() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_tE1771632CFF2761EFCBD79B9F192888102101C6A_StaticFields, ___sIsDummy_5)); }
	inline bool get_sIsDummy_5() const { return ___sIsDummy_5; }
	inline bool* get_address_of_sIsDummy_5() { return &___sIsDummy_5; }
	inline void set_sIsDummy_5(bool value)
	{
		___sIsDummy_5 = value;
	}

	inline static int32_t get_offset_of_sQueue_6() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_tE1771632CFF2761EFCBD79B9F192888102101C6A_StaticFields, ___sQueue_6)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get_sQueue_6() const { return ___sQueue_6; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of_sQueue_6() { return &___sQueue_6; }
	inline void set_sQueue_6(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		___sQueue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sQueue_6), (void*)value);
	}

	inline static int32_t get_offset_of_sQueueEmpty_8() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_tE1771632CFF2761EFCBD79B9F192888102101C6A_StaticFields, ___sQueueEmpty_8)); }
	inline bool get_sQueueEmpty_8() const { return ___sQueueEmpty_8; }
	inline bool* get_address_of_sQueueEmpty_8() { return &___sQueueEmpty_8; }
	inline void set_sQueueEmpty_8(bool value)
	{
		___sQueueEmpty_8 = value;
	}

	inline static int32_t get_offset_of_sPauseCallbackList_9() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_tE1771632CFF2761EFCBD79B9F192888102101C6A_StaticFields, ___sPauseCallbackList_9)); }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * get_sPauseCallbackList_9() const { return ___sPauseCallbackList_9; }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 ** get_address_of_sPauseCallbackList_9() { return &___sPauseCallbackList_9; }
	inline void set_sPauseCallbackList_9(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * value)
	{
		___sPauseCallbackList_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sPauseCallbackList_9), (void*)value);
	}

	inline static int32_t get_offset_of_sFocusCallbackList_10() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_tE1771632CFF2761EFCBD79B9F192888102101C6A_StaticFields, ___sFocusCallbackList_10)); }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * get_sFocusCallbackList_10() const { return ___sFocusCallbackList_10; }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 ** get_address_of_sFocusCallbackList_10() { return &___sFocusCallbackList_10; }
	inline void set_sFocusCallbackList_10(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * value)
	{
		___sFocusCallbackList_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sFocusCallbackList_10), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// GooglePlayGames.BasicApi.Achievement[]
struct AchievementU5BU5D_tBB0B2AA716E26D850ED0A3839508BF76CB42E98A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2 * m_Items[1];

public:
	inline Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IAchievementDescription[]
struct IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`2<System.Int32Enum,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m152C98E120D38857ED1464915833AAE22C0812B5_gshared (Action_2_tAEEAE0CA76819C6105A7D08A17A11166D3071492 * __this, int32_t ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m05992ABB52C04142026677BB6BA902C49CB197EF_gshared (Action_2_t48DF0C0D4F3A3AB463DECA881851C95F1A5B0E72 * __this, bool ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Misc_CheckNotNull_TisRuntimeObject_m952C7AAEACD83942008120752DC00223E71D2024_gshared (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_gshared (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method);

// System.Void GooglePlayGames.OurUtils.Logger/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6599E1DC6B200EA06BD0C9FCD972F73AC2E760F0 (U3CU3Ec_tE65C0E7E395B54F39F89DE9333CF9726DABCD6E2 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String GooglePlayGames.OurUtils.Logger::ToLogMessage(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Logger_ToLogMessage_m00851D4B46F8EF53D316CF58AFA120D4B1785F97 (String_t* ___prefix0, String_t* ___logType1, String_t* ___msg2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>::Invoke(!0,!1)
inline void Action_2_Invoke_mFF42C4E5E1C18A6D718037CC9557D468C6785BEA (Action_2_tDDB8E14DBC99ABCB290C0DB85F81AEED48751266 * __this, int32_t ___arg10, PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971 * ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tDDB8E14DBC99ABCB290C0DB85F81AEED48751266 *, int32_t, PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971 *, const RuntimeMethod*))Action_2_Invoke_m152C98E120D38857ED1464915833AAE22C0812B5_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`2<System.Boolean,System.String>::Invoke(!0,!1)
inline void Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766 (Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * __this, bool ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 *, bool, String_t*, const RuntimeMethod*))Action_2_Invoke_m05992ABB52C04142026677BB6BA902C49CB197EF_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void GooglePlayGames.OurUtils.Logger::d(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_d_m474D2FA3B31A34765533EC347E7D114E87EEBC7D (String_t* ___msg0, const RuntimeMethod* method);
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient>::Invoke(!0)
inline void Action_1_Invoke_mB8D7E47D803C266B5DD47FD7BFD478BABD089F08 (Action_1_tAF7B1704CEED6D4AC8D41184CCF825172C04F70B * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAF7B1704CEED6D4AC8D41184CCF825172C04F70B *, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.String GooglePlayGames.BasicApi.Achievement::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Achievement_get_Id_m3583B62ED17B48056EEE032684B4B45825974BCB_inline (Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.BasicApi.Achievement::get_IsIncremental()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Achievement_get_IsIncremental_m668FA49C0D9FBA362B3C119226DBAF609F86A40C_inline (Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2 * __this, const RuntimeMethod* method);
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D (double* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.Logger::w(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_w_m2832F30F5266BEB4F587B69A64F615AE48482149 (String_t* ___msg0, const RuntimeMethod* method);
// System.Int32 GooglePlayGames.BasicApi.Achievement::get_TotalSteps()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Achievement_get_TotalSteps_m3E4F32AA1E2504F75E9B0F629617322056517548_inline (Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2 * __this, const RuntimeMethod* method);
// System.Int32 GooglePlayGames.PlayGamesPlatform::progressToSteps(System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesPlatform_progressToSteps_mCC0010E3A76629B4C770D5A72624BBC3B5CA711D (double ___progress0, int32_t ___totalSteps1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.Logger::e(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_e_mE40EEB8D72D17C2FDD13A2DCC5AE452B1635B50E (String_t* ___msg0, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesAchievement::.ctor(GooglePlayGames.BasicApi.Achievement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesAchievement__ctor_m741C8F2D2A4998BF036DBF265684A51C2F007BF5 (PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD * __this, Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2 * ___ach0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::Invoke(!0)
inline void Action_1_Invoke_m7C6C3C5F1764D999D845DB6F0D77A136F423A36F (Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * __this, IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 *, IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::Invoke(!0)
inline void Action_1_Invoke_mDF86C44E0ADACB34B3B7C5D612D877175F036EF3 (Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * __this, IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 *, IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// UnityEngine.SocialPlatforms.IScore[] GooglePlayGames.BasicApi.LeaderboardScoreData::get_Scores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* LeaderboardScoreData_get_Scores_m1C6059BF8B075C943DBFC3A5841E096D1F274BD7 (LeaderboardScoreData_t7946A6078C07768D37E222231A650A7D3DFFDDD0 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::Invoke(!0)
inline void Action_1_Invoke_mA7A2177CF5EA8FD4A1BB48004EFF7FD908B6ECDD (Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * __this, IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 *, IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void GooglePlayGames.PlayGamesPlatform::HandleLoadingScores(GooglePlayGames.PlayGamesLeaderboard,GooglePlayGames.BasicApi.LeaderboardScoreData,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_HandleLoadingScores_m485AD7A95EB4E9F11A06DFDE47D754345DD830E5 (PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * __this, PlayGamesLeaderboard_tCEB75327DF149E197EE0743B4778C0F4C12D9415 * ___board0, LeaderboardScoreData_t7946A6078C07768D37E222231A650A7D3DFFDDD0 * ___scoreData1, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback2, const RuntimeMethod* method);
// System.String GooglePlayGames.PlayGamesUserProfile::get_AvatarURL()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_AvatarURL_m82C543DE87E0B82E5501966450FBFEBEDCBB8A0F_inline (PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestTexture::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequestTexture_GetTexture_mAC8E7F560F2A5ED2B3DA19211968311DD6D56F37 (String_t* ___uri0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_mF8C92D10767B80877BCFE6D119CBE9090ACCDFBD (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::GetContent(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * DownloadHandlerTexture_GetContent_m7CB6BFDD4B9E159B2BB46684707DFA9668AC21E6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___www0, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Texture2D::get_blackTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * Texture2D_get_blackTexture_m7D668B534925CDB6AF411D4AA3B1733E9CF2D3BE (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.String>(T)
inline String_t* Misc_CheckNotNull_TisString_t_mC7204590354534CD963EB735FC47DB37943437E6 (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_m952C7AAEACD83942008120752DC00223E71D2024_gshared)(___value0, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A  Builder_WithUpdatedDescription_mDEBDFC760630C52D8C55B9E307316FBE5171A718 (Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A * __this, String_t* ___description0, const RuntimeMethod* method);
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A  Builder_WithUpdatedPngCoverImage_m9D11A796A13CAF8CA10369DF2C3AA7534A6D15E7 (Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___newPngCoverImage0, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(!0)
inline void Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , const RuntimeMethod*))Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_gshared)(__this, ___value0, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A  Builder_WithUpdatedPlayedTime_m4283BEFBDA25DB82988DEDA0CB99217CE7C6BC26 (Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___newPlayedTime0, const RuntimeMethod* method);
// System.Void GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::.ctor(GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedGameMetadataUpdate__ctor_m734A2A17DD7E04AB7F1A7064833918394CD9EC66 (SavedGameMetadataUpdate_tF028D310D07296EE51D7F46B293043FDC13ADC03 * __this, Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A  ___builder0, const RuntimeMethod* method);
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SavedGameMetadataUpdate_tF028D310D07296EE51D7F46B293043FDC13ADC03  Builder_Build_mA30B09EC09C5F1739067185ABBD15DCD90AEF89B (Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.OurUtils.Logger/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC91C963CBB060E19F8FFFAF626E722E42318EE83 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE65C0E7E395B54F39F89DE9333CF9726DABCD6E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE65C0E7E395B54F39F89DE9333CF9726DABCD6E2 * L_0 = (U3CU3Ec_tE65C0E7E395B54F39F89DE9333CF9726DABCD6E2 *)il2cpp_codegen_object_new(U3CU3Ec_tE65C0E7E395B54F39F89DE9333CF9726DABCD6E2_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6599E1DC6B200EA06BD0C9FCD972F73AC2E760F0(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE65C0E7E395B54F39F89DE9333CF9726DABCD6E2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE65C0E7E395B54F39F89DE9333CF9726DABCD6E2_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6599E1DC6B200EA06BD0C9FCD972F73AC2E760F0 (U3CU3Ec_tE65C0E7E395B54F39F89DE9333CF9726DABCD6E2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c::<ToLogMessage>b__12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CToLogMessageU3Eb__12_0_mAA70FAEF7BF4383DE7511201A6765189EB96E959 (U3CU3Ec_tE65C0E7E395B54F39F89DE9333CF9726DABCD6E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E0C6CFB1B8F69C9CCBEA31C5888616C9C93F318);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("*** [Play Games Plugin " + PluginVersion.VersionString + "] ERROR: Failed to format DateTime.Now"));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral0E0C6CFB1B8F69C9CCBEA31C5888616C9C93F318, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mDE4FEB8CE10DA479ABE6BA78F8F50795EA0601F6 (U3CU3Ec__DisplayClass10_0_t7F48407653FF4480C55FD923DFD5A32792012120 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0::<e>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CeU3Eb__0_m4486E7944D99C50B8CF7928B6F4DB43BBD549912 (U3CU3Ec__DisplayClass10_0_t7F48407653FF4480C55FD923DFD5A32792012120 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t58514BB7F8E3A48280A91AB655A3F15E6284A6D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning(ToLogMessage("***", "ERROR", msg)));
		String_t* L_0 = __this->get_msg_0();
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t58514BB7F8E3A48280A91AB655A3F15E6284A6D9_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Logger_ToLogMessage_m00851D4B46F8EF53D316CF58AFA120D4B1785F97(_stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34, _stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m990900FF634BDD57A165A0144529ED4F3935A6EC (U3CU3Ec__DisplayClass8_0_t1CDAE25C6F936DAD4E351DE664353A2D6ADB47BA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0::<d>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CdU3Eb__0_m7BD489D67806E9A51EF5EA75390DF59435CFE056 (U3CU3Ec__DisplayClass8_0_t1CDAE25C6F936DAD4E351DE664353A2D6ADB47BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t58514BB7F8E3A48280A91AB655A3F15E6284A6D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420970FC857D0E541C788790F58AA66962B22CC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(ToLogMessage(string.Empty, "DEBUG", msg)));
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		String_t* L_1 = __this->get_msg_0();
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t58514BB7F8E3A48280A91AB655A3F15E6284A6D9_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Logger_ToLogMessage_m00851D4B46F8EF53D316CF58AFA120D4B1785F97(L_0, _stringLiteral420970FC857D0E541C788790F58AA66962B22CC8, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m0F57799858C05723FFD1385732CBEDA03141A504 (U3CU3Ec__DisplayClass9_0_t8C3EB2CBCC54B486570929C0CB1B344A88D2687E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0::<w>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CwU3Eb__0_mEA7BAA7F45D4C2BAA993D116B86B0F3AE0905EF6 (U3CU3Ec__DisplayClass9_0_t8C3EB2CBCC54B486570929C0CB1B344A88D2687E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t58514BB7F8E3A48280A91AB655A3F15E6284A6D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC68E6DD4D6678717C05B5B1EADED9792B1D6A551);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA008AB922F24BD7FF67A671D99943A377F6F35A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning(ToLogMessage("!!!", "WARNING", msg)));
		String_t* L_0 = __this->get_msg_0();
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t58514BB7F8E3A48280A91AB655A3F15E6284A6D9_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Logger_ToLogMessage_m00851D4B46F8EF53D316CF58AFA120D4B1785F97(_stringLiteralC68E6DD4D6678717C05B5B1EADED9792B1D6A551, _stringLiteralEA008AB922F24BD7FF67A671D99943A377F6F35A, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m280B01D12C047AD438F6A80DE0B3DB038D382A18 (U3CU3Ec__DisplayClass10_0_tF9851EEF815EFF2FD86EE25D3BF8BA7C99DE685D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::<RunCoroutine>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CRunCoroutineU3Eb__0_m1D4C77D26AE2D705E0B464FB891B31D545AA9343 (U3CU3Ec__DisplayClass10_0_tF9851EEF815EFF2FD86EE25D3BF8BA7C99DE685D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_tE1771632CFF2761EFCBD79B9F192888102101C6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RunOnGameThread(() => instance.StartCoroutine(action));
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_tE1771632CFF2761EFCBD79B9F192888102101C6A_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_tE1771632CFF2761EFCBD79B9F192888102101C6A * L_0 = ((PlayGamesHelperObject_tE1771632CFF2761EFCBD79B9F192888102101C6A_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tE1771632CFF2761EFCBD79B9F192888102101C6A_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_1 = __this->get_action_0();
		NullCheck(L_0);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_mDC0061A87FCE3CDE5AD5663E40460093EE9BB295 (U3CU3Ec__DisplayClass22_0_t8E5EBCFB9802F2D8BDC140E7EDBBB6940CAAA6D8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass22_0::<GetStats>b__0(GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CGetStatsU3Eb__0_mE5956BBDEAE4AF40E90382E60B085897D5F0C7A9 (U3CU3Ec__DisplayClass22_0_t8E5EBCFB9802F2D8BDC140E7EDBBB6940CAAA6D8 * __this, int32_t ___rc0, PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971 * ___stats1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_mFF42C4E5E1C18A6D718037CC9557D468C6785BEA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mStats = stats;
		PlayGamesLocalUser_t21A39842FC4E39CC770D47E63944148F3EB6410E * L_0 = __this->get_U3CU3E4__this_0();
		PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971 * L_1 = ___stats1;
		NullCheck(L_0);
		L_0->set_mStats_7(L_1);
		// callback(rc, stats);
		Action_2_tDDB8E14DBC99ABCB290C0DB85F81AEED48751266 * L_2 = __this->get_callback_1();
		int32_t L_3 = ___rc0;
		PlayerStats_t2F9B31D6C2A37F17DE201399E90F082F6DD8C971 * L_4 = ___stats1;
		NullCheck(L_2);
		Action_2_Invoke_mFF42C4E5E1C18A6D718037CC9557D468C6785BEA(L_2, L_3, L_4, /*hidden argument*/Action_2_Invoke_mFF42C4E5E1C18A6D718037CC9557D468C6785BEA_RuntimeMethod_var);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mB4BFC0C8968924C1BEBDCBC888C84D6519A759FC (U3CU3Ec__DisplayClass3_0_tB5A699A6B033143EDCFD3FB59ED8087C1BCFC885 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass3_0::<Authenticate>b__0(GooglePlayGames.BasicApi.SignInStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CAuthenticateU3Eb__0_mCB51285318ED060FA7321A99DB89C53006A3BC8E (U3CU3Ec__DisplayClass3_0_tB5A699A6B033143EDCFD3FB59ED8087C1BCFC885 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mPlatform.Authenticate(status => callback(status == SignInStatus.Success));
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = __this->get_callback_0();
		int32_t L_1 = ___status0;
		NullCheck(L_0);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_0, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m20A10264DA96047A9AD52968F7646A3F3F9686C9 (U3CU3Ec__DisplayClass4_0_t749CB46821238ACB5734BBC317F6F1AE8EBAC119 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass4_0::<Authenticate>b__0(GooglePlayGames.BasicApi.SignInStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CAuthenticateU3Eb__0_m0A042DC8592578389506DE757B0EB311C8B68BC4 (U3CU3Ec__DisplayClass4_0_t749CB46821238ACB5734BBC317F6F1AE8EBAC119 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInStatus_t26D2B045A190EDD9B73B93CF9118CAD0275BE2D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mPlatform.Authenticate(status => callback(status == SignInStatus.Success, status.ToString()));
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_0 = __this->get_callback_0();
		int32_t L_1 = ___status0;
		RuntimeObject * L_2 = Box(SignInStatus_t26D2B045A190EDD9B73B93CF9118CAD0275BE2D0_il2cpp_TypeInfo_var, (&___status0));
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		___status0 = *(int32_t*)UnBox(L_2);
		NullCheck(L_0);
		Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766(L_0, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), L_3, /*hidden argument*/Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m08FE562CF7A64D51B618B6A0F6B6ACEDE2116601 (U3CU3Ec__DisplayClass22_0_t14B7E5F5DA4EAB0EDA3EDAC86F6A7319AA6EFC47 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass22_0::<InitializeNearby>b__0(GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CInitializeNearbyU3Eb__0_m2C9961B75AF986A306D254D23B3354295B594A55 (U3CU3Ec__DisplayClass22_0_t14B7E5F5DA4EAB0EDA3EDAC86F6A7319AA6EFC47 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mB8D7E47D803C266B5DD47FD7BFD478BABD089F08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t58514BB7F8E3A48280A91AB655A3F15E6284A6D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D57A629D6E7F8930979EC2AF07A919C72FEEE0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD066E42B63E30EFFD3D9F2C9C79629108906EC6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("Nearby Client Created!!");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t58514BB7F8E3A48280A91AB655A3F15E6284A6D9_il2cpp_TypeInfo_var);
		Logger_d_m474D2FA3B31A34765533EC347E7D114E87EEBC7D(_stringLiteral9D57A629D6E7F8930979EC2AF07A919C72FEEE0E, /*hidden argument*/NULL);
		// sNearbyConnectionClient = client;
		RuntimeObject* L_0 = ___client0;
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_il2cpp_TypeInfo_var);
		il2cpp_codegen_memory_barrier();
		((PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_il2cpp_TypeInfo_var))->set_sNearbyConnectionClient_2(L_0);
		// if (callback != null) {
		Action_1_tAF7B1704CEED6D4AC8D41184CCF825172C04F70B * L_1 = __this->get_callback_0();
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// callback.Invoke(client);
		Action_1_tAF7B1704CEED6D4AC8D41184CCF825172C04F70B * L_2 = __this->get_callback_0();
		RuntimeObject* L_3 = ___client0;
		NullCheck(L_2);
		Action_1_Invoke_mB8D7E47D803C266B5DD47FD7BFD478BABD089F08(L_2, L_3, /*hidden argument*/Action_1_Invoke_mB8D7E47D803C266B5DD47FD7BFD478BABD089F08_RuntimeMethod_var);
		// }
		return;
	}

IL_0027:
	{
		// OurUtils.Logger.d("Initialize Nearby callback is null");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t58514BB7F8E3A48280A91AB655A3F15E6284A6D9_il2cpp_TypeInfo_var);
		Logger_d_m474D2FA3B31A34765533EC347E7D114E87EEBC7D(_stringLiteralBD066E42B63E30EFFD3D9F2C9C79629108906EC6, /*hidden argument*/NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_mA7B232B0BF57B38D69F5481C748C1553C8DC22B5 (U3CU3Ec__DisplayClass26_0_t85D7F05B06C431C4CEEC2B88F6DB8E36A9908754 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass26_0::<Authenticate>b__0(GooglePlayGames.BasicApi.SignInStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0_U3CAuthenticateU3Eb__0_m5EFCAFA6B2826EF9FDFB3B4E3776F4CE05EA1957 (U3CU3Ec__DisplayClass26_0_t85D7F05B06C431C4CEEC2B88F6DB8E36A9908754 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Authenticate(status => callback(status == SignInStatus.Success));
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = __this->get_callback_0();
		int32_t L_1 = ___status0;
		NullCheck(L_0);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_0, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_m2592FF75F49AD453F96D027A3120C0D2A2D8701D (U3CU3Ec__DisplayClass27_0_tF176624A2AC30AD4FBD83FF4E6AF22B57A98857A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass27_0::<Authenticate>b__0(GooglePlayGames.BasicApi.SignInStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0_U3CAuthenticateU3Eb__0_mA745FE5B1B921FE08EDF5CB11D2C28016E855CCB (U3CU3Ec__DisplayClass27_0_tF176624A2AC30AD4FBD83FF4E6AF22B57A98857A * __this, int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInStatus_t26D2B045A190EDD9B73B93CF9118CAD0275BE2D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Authenticate(status => callback(status == SignInStatus.Success, status.ToString()));
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_0 = __this->get_callback_0();
		int32_t L_1 = ___status0;
		RuntimeObject * L_2 = Box(SignInStatus_t26D2B045A190EDD9B73B93CF9118CAD0275BE2D0_il2cpp_TypeInfo_var, (&___status0));
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		___status0 = *(int32_t*)UnBox(L_2);
		NullCheck(L_0);
		Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766(L_0, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), L_3, /*hidden argument*/Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_mEDDE840A7F53DEF1D4510D073690E95C7F295E2F (U3CU3Ec__DisplayClass36_0_t482CF45E992897D36E1B400985F810150DC8565E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass36_0::<ReportProgress>b__0(GooglePlayGames.BasicApi.Achievement[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_U3CReportProgressU3Eb__0_mA480DE673AF24E27D2E76A104B287D83BCF92A9C (U3CU3Ec__DisplayClass36_0_t482CF45E992897D36E1B400985F810150DC8565E * __this, AchievementU5BU5D_tBB0B2AA716E26D850ED0A3839508BF76CB42E98A* ___ach0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayGamesClient_t0D568BA692012153EE2C7B5010800596A19493BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t58514BB7F8E3A48280A91AB655A3F15E6284A6D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24278202528A13F91A7E8306203F176C630AAF51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38E94795E0FDE498579C9A38DCD018ED956F9F71);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC63555F5631A509A767F8CAE7C637344AE34C6D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC92578BDC42DAC206202E3F97935E34FD1106EAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE4B0E2541EDBBB3C6491A2744BB22061C9DD7BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6BB44F4BC9F8D1D63EFDF77186766035805DAAF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < ach.Length; i++)
		V_0 = 0;
		goto IL_0139;
	}

IL_0007:
	{
		// if (ach[i].Id == achievementID)
		AchievementU5BU5D_tBB0B2AA716E26D850ED0A3839508BF76CB42E98A* L_0 = ___ach0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Achievement_get_Id_m3583B62ED17B48056EEE032684B4B45825974BCB_inline(L_3, /*hidden argument*/NULL);
		String_t* L_5 = __this->get_achievementID_0();
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0135;
		}
	}
	{
		// if (ach[i].IsIncremental)
		AchievementU5BU5D_tBB0B2AA716E26D850ED0A3839508BF76CB42E98A* L_7 = ___ach0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		bool L_11;
		L_11 = Achievement_get_IsIncremental_m668FA49C0D9FBA362B3C119226DBAF609F86A40C_inline(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00bc;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.d("Progress " + progress +
		//                                   " interpreted as incremental target (approximate).");
		double* L_12 = __this->get_address_of_progress_1();
		String_t* L_13;
		L_13 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_12, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral38E94795E0FDE498579C9A38DCD018ED956F9F71, L_13, _stringLiteralCE4B0E2541EDBBB3C6491A2744BB22061C9DD7BD, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t58514BB7F8E3A48280A91AB655A3F15E6284A6D9_il2cpp_TypeInfo_var);
		Logger_d_m474D2FA3B31A34765533EC347E7D114E87EEBC7D(L_14, /*hidden argument*/NULL);
		// if (progress >= 0.0 && progress <= 1.0)
		double L_15 = __this->get_progress_1();
		if ((!(((double)L_15) >= ((double)(0.0)))))
		{
			goto IL_008c;
		}
	}
	{
		double L_16 = __this->get_progress_1();
		if ((!(((double)L_16) <= ((double)(1.0)))))
		{
			goto IL_008c;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.w(
		//     "Progress " + progress +
		//     " is less than or equal to 1. You might be trying to use values in the range of [0,1], while values are expected to be within the range [0,100]. If you are using the latter, you can safely ignore this message.");
		double* L_17 = __this->get_address_of_progress_1();
		String_t* L_18;
		L_18 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_17, /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral38E94795E0FDE498579C9A38DCD018ED956F9F71, L_18, _stringLiteralC92578BDC42DAC206202E3F97935E34FD1106EAC, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t58514BB7F8E3A48280A91AB655A3F15E6284A6D9_il2cpp_TypeInfo_var);
		Logger_w_m2832F30F5266BEB4F587B69A64F615AE48482149(L_19, /*hidden argument*/NULL);
	}

IL_008c:
	{
		// mClient.SetStepsAtLeast(achievementID, progressToSteps(progress, ach[i].TotalSteps), callback);
		PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * L_20 = __this->get_U3CU3E4__this_2();
		NullCheck(L_20);
		RuntimeObject* L_21 = L_20->get_mClient_4();
		String_t* L_22 = __this->get_achievementID_0();
		double L_23 = __this->get_progress_1();
		AchievementU5BU5D_tBB0B2AA716E26D850ED0A3839508BF76CB42E98A* L_24 = ___ach0;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2 * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		int32_t L_28;
		L_28 = Achievement_get_TotalSteps_m3E4F32AA1E2504F75E9B0F629617322056517548_inline(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E_il2cpp_TypeInfo_var);
		int32_t L_29;
		L_29 = PlayGamesPlatform_progressToSteps_mCC0010E3A76629B4C770D5A72624BBC3B5CA711D(L_23, L_28, /*hidden argument*/NULL);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_30 = __this->get_callback_3();
		NullCheck(L_21);
		InterfaceActionInvoker3< String_t*, int32_t, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * >::Invoke(14 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::SetStepsAtLeast(System.String,System.Int32,System.Action`1<System.Boolean>) */, IPlayGamesClient_t0D568BA692012153EE2C7B5010800596A19493BB_il2cpp_TypeInfo_var, L_21, L_22, L_29, L_30);
		// }
		return;
	}

IL_00bc:
	{
		// if (progress >= 100)
		double L_31 = __this->get_progress_1();
		if ((!(((double)L_31) >= ((double)(100.0)))))
		{
			goto IL_0109;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.d("Progress " + progress + " interpreted as UNLOCK.");
		double* L_32 = __this->get_address_of_progress_1();
		String_t* L_33;
		L_33 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_32, /*hidden argument*/NULL);
		String_t* L_34;
		L_34 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral38E94795E0FDE498579C9A38DCD018ED956F9F71, L_33, _stringLiteralC63555F5631A509A767F8CAE7C637344AE34C6D2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t58514BB7F8E3A48280A91AB655A3F15E6284A6D9_il2cpp_TypeInfo_var);
		Logger_d_m474D2FA3B31A34765533EC347E7D114E87EEBC7D(L_34, /*hidden argument*/NULL);
		// mClient.UnlockAchievement(achievementID, callback);
		PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * L_35 = __this->get_U3CU3E4__this_2();
		NullCheck(L_35);
		RuntimeObject* L_36 = L_35->get_mClient_4();
		String_t* L_37 = __this->get_achievementID_0();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_38 = __this->get_callback_3();
		NullCheck(L_36);
		InterfaceActionInvoker2< String_t*, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * >::Invoke(11 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::UnlockAchievement(System.String,System.Action`1<System.Boolean>) */, IPlayGamesClient_t0D568BA692012153EE2C7B5010800596A19493BB_il2cpp_TypeInfo_var, L_36, L_37, L_38);
		// }
		return;
	}

IL_0109:
	{
		// GooglePlayGames.OurUtils.Logger.d(
		//     "Progress " + progress + " not enough to unlock non-incremental achievement.");
		double* L_39 = __this->get_address_of_progress_1();
		String_t* L_40;
		L_40 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_39, /*hidden argument*/NULL);
		String_t* L_41;
		L_41 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral38E94795E0FDE498579C9A38DCD018ED956F9F71, L_40, _stringLiteral24278202528A13F91A7E8306203F176C630AAF51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t58514BB7F8E3A48280A91AB655A3F15E6284A6D9_il2cpp_TypeInfo_var);
		Logger_d_m474D2FA3B31A34765533EC347E7D114E87EEBC7D(L_41, /*hidden argument*/NULL);
		// callback.Invoke(false);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_42 = __this->get_callback_3();
		NullCheck(L_42);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_42, (bool)0, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		// return;
		return;
	}

IL_0135:
	{
		// for (int i = 0; i < ach.Length; i++)
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_0139:
	{
		// for (int i = 0; i < ach.Length; i++)
		int32_t L_44 = V_0;
		AchievementU5BU5D_tBB0B2AA716E26D850ED0A3839508BF76CB42E98A* L_45 = ___ach0;
		NullCheck(L_45);
		if ((((int32_t)L_44) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e("Unable to locate achievement " + achievementID);
		String_t* L_46 = __this->get_achievementID_0();
		String_t* L_47;
		L_47 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralF6BB44F4BC9F8D1D63EFDF77186766035805DAAF, L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t58514BB7F8E3A48280A91AB655A3F15E6284A6D9_il2cpp_TypeInfo_var);
		Logger_e_mE40EEB8D72D17C2FDD13A2DCC5AE452B1635B50E(L_47, /*hidden argument*/NULL);
		// callback.Invoke(false);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_48 = __this->get_callback_3();
		NullCheck(L_48);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_48, (bool)0, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass42_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass42_0__ctor_m47F0789505CC3921154F09464F931787710A5F07 (U3CU3Ec__DisplayClass42_0_tA9D79D3A319FF2598DA2BB2A7319D6400C12FC17 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass42_0::<LoadAchievementDescriptions>b__0(GooglePlayGames.BasicApi.Achievement[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass42_0_U3CLoadAchievementDescriptionsU3Eb__0_m67F893E840F9A936BC535EDDC7F673E71ADB736A (U3CU3Ec__DisplayClass42_0_tA9D79D3A319FF2598DA2BB2A7319D6400C12FC17 * __this, AchievementU5BU5D_tBB0B2AA716E26D850ED0A3839508BF76CB42E98A* ___ach0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m7C6C3C5F1764D999D845DB6F0D77A136F423A36F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// IAchievementDescription[] data = new IAchievementDescription[ach.Length];
		AchievementU5BU5D_tBB0B2AA716E26D850ED0A3839508BF76CB42E98A* L_0 = ___ach0;
		NullCheck(L_0);
		IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* L_1 = (IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1*)(IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1*)SZArrayNew(IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_0 = L_1;
		// for (int i = 0; i < data.Length; i++)
		V_1 = 0;
		goto IL_001c;
	}

IL_000d:
	{
		// data[i] = new PlayGamesAchievement(ach[i]);
		IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* L_2 = V_0;
		int32_t L_3 = V_1;
		AchievementU5BU5D_tBB0B2AA716E26D850ED0A3839508BF76CB42E98A* L_4 = ___ach0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD * L_8 = (PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD *)il2cpp_codegen_object_new(PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD_il2cpp_TypeInfo_var);
		PlayGamesAchievement__ctor_m741C8F2D2A4998BF036DBF265684A51C2F007BF5(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject*)L_8);
		// for (int i = 0; i < data.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_001c:
	{
		// for (int i = 0; i < data.Length; i++)
		int32_t L_10 = V_1;
		IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// callback.Invoke(data);
		Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * L_12 = __this->get_callback_0();
		IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* L_13 = V_0;
		NullCheck(L_12);
		Action_1_Invoke_m7C6C3C5F1764D999D845DB6F0D77A136F423A36F(L_12, L_13, /*hidden argument*/Action_1_Invoke_m7C6C3C5F1764D999D845DB6F0D77A136F423A36F_RuntimeMethod_var);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass43_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass43_0__ctor_mBC8AF48E6DCCD86502F23FBDD4CD85F018B04880 (U3CU3Ec__DisplayClass43_0_t564094EEDD51EBF2927EC010EDA1CB66267646D3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass43_0::<LoadAchievements>b__0(GooglePlayGames.BasicApi.Achievement[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass43_0_U3CLoadAchievementsU3Eb__0_mEE8CBB7CA13B703922EE80DFE6F55F6A53FE84C4 (U3CU3Ec__DisplayClass43_0_t564094EEDD51EBF2927EC010EDA1CB66267646D3 * __this, AchievementU5BU5D_tBB0B2AA716E26D850ED0A3839508BF76CB42E98A* ___ach0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mDF86C44E0ADACB34B3B7C5D612D877175F036EF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// IAchievement[] data = new IAchievement[ach.Length];
		AchievementU5BU5D_tBB0B2AA716E26D850ED0A3839508BF76CB42E98A* L_0 = ___ach0;
		NullCheck(L_0);
		IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* L_1 = (IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226*)(IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226*)SZArrayNew(IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_0 = L_1;
		// for (int i = 0; i < data.Length; i++)
		V_1 = 0;
		goto IL_001c;
	}

IL_000d:
	{
		// data[i] = new PlayGamesAchievement(ach[i]);
		IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* L_2 = V_0;
		int32_t L_3 = V_1;
		AchievementU5BU5D_tBB0B2AA716E26D850ED0A3839508BF76CB42E98A* L_4 = ___ach0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD * L_8 = (PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD *)il2cpp_codegen_object_new(PlayGamesAchievement_tE9C9374DF2C8E96498D7334BDB9C289EDEBAA9BD_il2cpp_TypeInfo_var);
		PlayGamesAchievement__ctor_m741C8F2D2A4998BF036DBF265684A51C2F007BF5(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject*)L_8);
		// for (int i = 0; i < data.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_001c:
	{
		// for (int i = 0; i < data.Length; i++)
		int32_t L_10 = V_1;
		IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// callback.Invoke(data);
		Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * L_12 = __this->get_callback_0();
		IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* L_13 = V_0;
		NullCheck(L_12);
		Action_1_Invoke_mDF86C44E0ADACB34B3B7C5D612D877175F036EF3(L_12, L_13, /*hidden argument*/Action_1_Invoke_mDF86C44E0ADACB34B3B7C5D612D877175F036EF3_RuntimeMethod_var);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass47_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_0__ctor_m25F8883774F4A0C6E1C2CBCBEB93B516FD0FC532 (U3CU3Ec__DisplayClass47_0_tA9E97C753F680D6D1C315EF93F29295312E2885A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass47_0::<LoadScores>b__0(GooglePlayGames.BasicApi.LeaderboardScoreData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_0_U3CLoadScoresU3Eb__0_mA58678BF6E2A19FFB4089565E9C2DB235DEC7705 (U3CU3Ec__DisplayClass47_0_tA9E97C753F680D6D1C315EF93F29295312E2885A * __this, LeaderboardScoreData_t7946A6078C07768D37E222231A650A7D3DFFDDD0 * ___scoreData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mA7A2177CF5EA8FD4A1BB48004EFF7FD908B6ECDD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (scoreData) => callback(scoreData.Scores));
		Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * L_0 = __this->get_callback_0();
		LeaderboardScoreData_t7946A6078C07768D37E222231A650A7D3DFFDDD0 * L_1 = ___scoreData0;
		NullCheck(L_1);
		IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* L_2;
		L_2 = LeaderboardScoreData_get_Scores_m1C6059BF8B075C943DBFC3A5841E096D1F274BD7(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Action_1_Invoke_mA7A2177CF5EA8FD4A1BB48004EFF7FD908B6ECDD(L_0, L_2, /*hidden argument*/Action_1_Invoke_mA7A2177CF5EA8FD4A1BB48004EFF7FD908B6ECDD_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass59_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_0__ctor_m9F2354DE51E085C7A111491092617DC54891F164 (U3CU3Ec__DisplayClass59_0_t460CA602CB2BF25DD524B8B47DF1DFB9616AD844 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass59_0::<LoadScores>b__0(GooglePlayGames.BasicApi.LeaderboardScoreData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_0_U3CLoadScoresU3Eb__0_mCCDD0AC562DA7A173699EBBD896EB7013B09D0A8 (U3CU3Ec__DisplayClass59_0_t460CA602CB2BF25DD524B8B47DF1DFB9616AD844 * __this, LeaderboardScoreData_t7946A6078C07768D37E222231A650A7D3DFFDDD0 * ___scoreData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesLeaderboard_tCEB75327DF149E197EE0743B4778C0F4C12D9415_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (scoreData) => HandleLoadingScores(
		//     (PlayGamesLeaderboard) board, scoreData, callback));
		PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * L_0 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_1 = __this->get_board_1();
		LeaderboardScoreData_t7946A6078C07768D37E222231A650A7D3DFFDDD0 * L_2 = ___scoreData0;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = __this->get_callback_2();
		NullCheck(L_0);
		PlayGamesPlatform_HandleLoadingScores_m485AD7A95EB4E9F11A06DFDE47D754345DD830E5(L_0, ((PlayGamesLeaderboard_tCEB75327DF149E197EE0743B4778C0F4C12D9415 *)CastclassClass((RuntimeObject*)L_1, PlayGamesLeaderboard_tCEB75327DF149E197EE0743B4778C0F4C12D9415_il2cpp_TypeInfo_var)), L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass67_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass67_0__ctor_mD53CAF0D2A3AD82ED58EBE4DFFC1928BDD3A2EB0 (U3CU3Ec__DisplayClass67_0_tF5C69C3E526B355B06C55DEB2F2A1368051F8944 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass67_0::<HandleLoadingScores>b__0(GooglePlayGames.BasicApi.LeaderboardScoreData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass67_0_U3CHandleLoadingScoresU3Eb__0_mA3CBDEDAEB016A7BF5A214643E6DCD9C38D743A8 (U3CU3Ec__DisplayClass67_0_tF5C69C3E526B355B06C55DEB2F2A1368051F8944 * __this, LeaderboardScoreData_t7946A6078C07768D37E222231A650A7D3DFFDDD0 * ___nextScoreData0, const RuntimeMethod* method)
{
	{
		// HandleLoadingScores(board, nextScoreData, callback));
		PlayGamesPlatform_t36A60BFBDB76D08A688B7EC6EB8C0FFA6986F58E * L_0 = __this->get_U3CU3E4__this_0();
		PlayGamesLeaderboard_tCEB75327DF149E197EE0743B4778C0F4C12D9415 * L_1 = __this->get_board_1();
		LeaderboardScoreData_t7946A6078C07768D37E222231A650A7D3DFFDDD0 * L_2 = ___nextScoreData0;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = __this->get_callback_2();
		NullCheck(L_0);
		PlayGamesPlatform_HandleLoadingScores_m485AD7A95EB4E9F11A06DFDE47D754345DD830E5(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__23__ctor_m10CF1B4A05036F1EB9059BA8B47F80C07798216F (U3CLoadImageU3Ed__23_t50C23A390C88CFA957E26C6E2AAEE8205B606D3D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__23_System_IDisposable_Dispose_m0ED6E0EEDED3618BF33E4135D8FC0F0CBC0EBF7C (U3CLoadImageU3Ed__23_t50C23A390C88CFA957E26C6E2AAEE8205B606D3D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadImageU3Ed__23_MoveNext_m683DBCBD71C7688317F756FD7DE9A8ED24264755 (U3CLoadImageU3Ed__23_t50C23A390C88CFA957E26C6E2AAEE8205B606D3D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t58514BB7F8E3A48280A91AB655A3F15E6284A6D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B3C7000ACF0EB48C1458817E59DD90219ED2B97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE92B3B0982727A84D8DF8E6115B5FCC5E335A33);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!string.IsNullOrEmpty(AvatarURL))
		PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35 * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = PlayGamesUserProfile_get_AvatarURL_m82C543DE87E0B82E5501966450FBFEBEDCBB8A0F_inline(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_00c8;
		}
	}
	{
		// UnityWebRequest www = UnityWebRequestTexture.GetTexture(AvatarURL);
		PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35 * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = PlayGamesUserProfile_get_AvatarURL_m82C543DE87E0B82E5501966450FBFEBEDCBB8A0F_inline(L_7, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9;
		L_9 = UnityWebRequestTexture_GetTexture_mAC8E7F560F2A5ED2B3DA19211968311DD6D56F37(L_8, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_3(L_9);
		// www.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_10 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_10);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_11;
		L_11 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_10, /*hidden argument*/NULL);
		goto IL_0064;
	}

IL_004d:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005d:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0064:
	{
		// while (!www.isDone)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_12 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_12);
		bool L_13;
		L_13 = UnityWebRequest_get_isDone_mF8C92D10767B80877BCFE6D119CBE9090ACCDFBD(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		// if (www.error == null)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_14 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_14);
		String_t* L_15;
		L_15 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0091;
		}
	}
	{
		// this.mImage = DownloadHandlerTexture.GetContent(www);
		PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35 * L_16 = V_1;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_17 = __this->get_U3CwwwU3E5__2_3();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18;
		L_18 = DownloadHandlerTexture_GetContent_m7CB6BFDD4B9E159B2BB46684707DFA9668AC21E6(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->set_mImage_5(L_18);
		// }
		goto IL_00b6;
	}

IL_0091:
	{
		// mImage = Texture2D.blackTexture;
		PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35 * L_19 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_20;
		L_20 = Texture2D_get_blackTexture_m7D668B534925CDB6AF411D4AA3B1733E9CF2D3BE(/*hidden argument*/NULL);
		NullCheck(L_19);
		L_19->set_mImage_5(L_20);
		// OurUtils.Logger.e("Error downloading image: " + www.error);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_21 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_21);
		String_t* L_22;
		L_22 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_21, /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralCE92B3B0982727A84D8DF8E6115B5FCC5E335A33, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t58514BB7F8E3A48280A91AB655A3F15E6284A6D9_il2cpp_TypeInfo_var);
		Logger_e_mE40EEB8D72D17C2FDD13A2DCC5AE452B1635B50E(L_23, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		// mImageLoading = false;
		PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35 * L_24 = V_1;
		NullCheck(L_24);
		il2cpp_codegen_memory_barrier();
		L_24->set_mImageLoading_4(0);
		// }
		__this->set_U3CwwwU3E5__2_3((UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)NULL);
		goto IL_00e6;
	}

IL_00c8:
	{
		// OurUtils.Logger.e("No URL found.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t58514BB7F8E3A48280A91AB655A3F15E6284A6D9_il2cpp_TypeInfo_var);
		Logger_e_mE40EEB8D72D17C2FDD13A2DCC5AE452B1635B50E(_stringLiteral1B3C7000ACF0EB48C1458817E59DD90219ED2B97, /*hidden argument*/NULL);
		// mImage = Texture2D.blackTexture;
		PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35 * L_25 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_26;
		L_26 = Texture2D_get_blackTexture_m7D668B534925CDB6AF411D4AA3B1733E9CF2D3BE(/*hidden argument*/NULL);
		NullCheck(L_25);
		L_25->set_mImage_5(L_26);
		// mImageLoading = false;
		PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35 * L_27 = V_1;
		NullCheck(L_27);
		il2cpp_codegen_memory_barrier();
		L_27->set_mImageLoading_4(0);
	}

IL_00e6:
	{
		// }
		return (bool)0;
	}
}
// System.Object GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadImageU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD3DE04FFAAD7D018AC211326541E346E405B5226 (U3CLoadImageU3Ed__23_t50C23A390C88CFA957E26C6E2AAEE8205B606D3D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__23_System_Collections_IEnumerator_Reset_mE532276D404AF786642EB3F391E11CB6FFDC1EB6 (U3CLoadImageU3Ed__23_t50C23A390C88CFA957E26C6E2AAEE8205B606D3D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadImageU3Ed__23_System_Collections_IEnumerator_Reset_mE532276D404AF786642EB3F391E11CB6FFDC1EB6_RuntimeMethod_var)));
	}
}
// System.Object GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadImageU3Ed__23_System_Collections_IEnumerator_get_Current_m87B5E058F2CE5E7F134E7F7B88DBFF81B92CBEC6 (U3CLoadImageU3Ed__23_t50C23A390C88CFA957E26C6E2AAEE8205B606D3D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A_marshal_pinvoke(const Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A& unmarshaled, Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A_marshal_pinvoke_back(const Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A_marshaled_pinvoke& marshaled, Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A_marshal_pinvoke_cleanup(Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A_marshal_com(const Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A& unmarshaled, Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A_marshaled_com& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A_marshal_com_back(const Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A_marshaled_com& marshaled, Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A_marshal_com_cleanup(Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A_marshaled_com& marshaled)
{
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A  Builder_WithUpdatedDescription_mDEBDFC760630C52D8C55B9E307316FBE5171A718 (Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A * __this, String_t* ___description0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_mC7204590354534CD963EB735FC47DB37943437E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mNewDescription = Misc.CheckNotNull(description);
		String_t* L_0 = ___description0;
		String_t* L_1;
		L_1 = Misc_CheckNotNull_TisString_t_mC7204590354534CD963EB735FC47DB37943437E6(L_0, /*hidden argument*/Misc_CheckNotNull_TisString_t_mC7204590354534CD963EB735FC47DB37943437E6_RuntimeMethod_var);
		__this->set_mNewDescription_1(L_1);
		// mDescriptionUpdated = true;
		__this->set_mDescriptionUpdated_0((bool)1);
		// return this;
		Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A  L_2 = (*(Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A *)__this);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A  Builder_WithUpdatedDescription_mDEBDFC760630C52D8C55B9E307316FBE5171A718_AdjustorThunk (RuntimeObject * __this, String_t* ___description0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A * _thisAdjusted = reinterpret_cast<Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A *>(__this + _offset);
	Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A  _returnValue;
	_returnValue = Builder_WithUpdatedDescription_mDEBDFC760630C52D8C55B9E307316FBE5171A718(_thisAdjusted, ___description0, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A  Builder_WithUpdatedPngCoverImage_m9D11A796A13CAF8CA10369DF2C3AA7534A6D15E7 (Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___newPngCoverImage0, const RuntimeMethod* method)
{
	{
		// mCoverImageUpdated = true;
		__this->set_mCoverImageUpdated_2((bool)1);
		// mNewPngCoverImage = newPngCoverImage;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___newPngCoverImage0;
		__this->set_mNewPngCoverImage_3(L_0);
		// return this;
		Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A  L_1 = (*(Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A *)__this);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A  Builder_WithUpdatedPngCoverImage_m9D11A796A13CAF8CA10369DF2C3AA7534A6D15E7_AdjustorThunk (RuntimeObject * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___newPngCoverImage0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A * _thisAdjusted = reinterpret_cast<Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A *>(__this + _offset);
	Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A  _returnValue;
	_returnValue = Builder_WithUpdatedPngCoverImage_m9D11A796A13CAF8CA10369DF2C3AA7534A6D15E7(_thisAdjusted, ___newPngCoverImage0, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A  Builder_WithUpdatedPlayedTime_m4283BEFBDA25DB82988DEDA0CB99217CE7C6BC26 (Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___newPlayedTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (newPlayedTime.TotalMilliseconds > ulong.MaxValue)
		double L_0;
		L_0 = TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&___newPlayedTime0), /*hidden argument*/NULL);
		if ((!(((double)L_0) > ((double)(1.8446744073709552E+19)))))
		{
			goto IL_001d;
		}
	}
	{
		// throw new InvalidOperationException("Timespans longer than ulong.MaxValue " +
		//                                     "milliseconds are not allowed");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral44422B1D8FA435D0D343B090134AB90503F8B8DD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Builder_WithUpdatedPlayedTime_m4283BEFBDA25DB82988DEDA0CB99217CE7C6BC26_RuntimeMethod_var)));
	}

IL_001d:
	{
		// mNewPlayedTime = newPlayedTime;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2 = ___newPlayedTime0;
		Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_RuntimeMethod_var);
		__this->set_mNewPlayedTime_4(L_3);
		// return this;
		Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A  L_4 = (*(Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A *)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C  Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A  Builder_WithUpdatedPlayedTime_m4283BEFBDA25DB82988DEDA0CB99217CE7C6BC26_AdjustorThunk (RuntimeObject * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___newPlayedTime0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A * _thisAdjusted = reinterpret_cast<Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A *>(__this + _offset);
	Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A  _returnValue;
	_returnValue = Builder_WithUpdatedPlayedTime_m4283BEFBDA25DB82988DEDA0CB99217CE7C6BC26(_thisAdjusted, ___newPlayedTime0, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SavedGameMetadataUpdate_tF028D310D07296EE51D7F46B293043FDC13ADC03  Builder_Build_mA30B09EC09C5F1739067185ABBD15DCD90AEF89B (Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A * __this, const RuntimeMethod* method)
{
	{
		// return new SavedGameMetadataUpdate(this);
		Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A  L_0 = (*(Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A *)__this);
		SavedGameMetadataUpdate_tF028D310D07296EE51D7F46B293043FDC13ADC03  L_1;
		memset((&L_1), 0, sizeof(L_1));
		SavedGameMetadataUpdate__ctor_m734A2A17DD7E04AB7F1A7064833918394CD9EC66((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  SavedGameMetadataUpdate_tF028D310D07296EE51D7F46B293043FDC13ADC03  Builder_Build_mA30B09EC09C5F1739067185ABBD15DCD90AEF89B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A * _thisAdjusted = reinterpret_cast<Builder_tD40A60FF61E76A8E034A1DC132A318697CE3F40A *>(__this + _offset);
	SavedGameMetadataUpdate_tF028D310D07296EE51D7F46B293043FDC13ADC03  _returnValue;
	_returnValue = Builder_Build_mA30B09EC09C5F1739067185ABBD15DCD90AEF89B(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m1FED27A25025174EEDE5F4D746AC15FFAD86A77D (U3CU3Ec__DisplayClass2_0_tE00E7C4A4C511F0253C1405877DB9BE1EF3DC378 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0::<OnEndpointFound>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3COnEndpointFoundU3Eb__0_mBBAE202A80C0D660DF8247412D79AC7BFAC8E3F8 (U3CU3Ec__DisplayClass2_0_tE00E7C4A4C511F0253C1405877DB9BE1EF3DC378 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDiscoveryListener_t6E104B87F6F53E4A4BBCE69C1DF7018EC4661994_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() => mListener.OnEndpointFound(discoveredEndpoint));
		OnGameThreadDiscoveryListener_t2F3897569AFA4D8648966F7D2804DA667A59A4DB * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_0();
		EndpointDetails_tC75D8291178BBEE47B9464CA22842AC3C54412D1  L_2 = __this->get_discoveredEndpoint_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< EndpointDetails_tC75D8291178BBEE47B9464CA22842AC3C54412D1  >::Invoke(0 /* System.Void GooglePlayGames.BasicApi.Nearby.IDiscoveryListener::OnEndpointFound(GooglePlayGames.BasicApi.Nearby.EndpointDetails) */, IDiscoveryListener_t6E104B87F6F53E4A4BBCE69C1DF7018EC4661994_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m8BB0E36147D1E685F79D3F17A3218A4E10D13F69 (U3CU3Ec__DisplayClass3_0_t590A18F2DC1C34840FBB4596EB881BD58E76224B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0::<OnEndpointLost>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COnEndpointLostU3Eb__0_mB673D4619741D11CD8E3293E7775EA330E025183 (U3CU3Ec__DisplayClass3_0_t590A18F2DC1C34840FBB4596EB881BD58E76224B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDiscoveryListener_t6E104B87F6F53E4A4BBCE69C1DF7018EC4661994_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() => mListener.OnEndpointLost(lostEndpointId));
		OnGameThreadDiscoveryListener_t2F3897569AFA4D8648966F7D2804DA667A59A4DB * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_0();
		String_t* L_2 = __this->get_lostEndpointId_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void GooglePlayGames.BasicApi.Nearby.IDiscoveryListener::OnEndpointLost(System.String) */, IDiscoveryListener_t6E104B87F6F53E4A4BBCE69C1DF7018EC4661994_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mB0AE64B7F1DE73E3F26FF2CAD6E138D0E5C8FFB1 (U3CU3Ec__DisplayClass2_0_t560B5B572E80403338D0A8656B9821E4BA4F71D0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::<OnMessageReceived>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3COnMessageReceivedU3Eb__0_m529619E39B535FA7DB008CC1F635830402309F38 (U3CU3Ec__DisplayClass2_0_t560B5B572E80403338D0A8656B9821E4BA4F71D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMessageListener_t41F503B0920A55DC81DE2CB687E832CC3FE36334_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() => mListener.OnMessageReceived(
		//     remoteEndpointId, data, isReliableMessage));
		OnGameThreadMessageListener_t8B809835A244D14E8E484AC59CA36C9BAE687574 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_0();
		String_t* L_2 = __this->get_remoteEndpointId_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_data_2();
		bool L_4 = __this->get_isReliableMessage_3();
		NullCheck(L_1);
		InterfaceActionInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, bool >::Invoke(0 /* System.Void GooglePlayGames.BasicApi.Nearby.IMessageListener::OnMessageReceived(System.String,System.Byte[],System.Boolean) */, IMessageListener_t41F503B0920A55DC81DE2CB687E832CC3FE36334_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m1BF4ED97E41A1C35689DA03008F24902575CF746 (U3CU3Ec__DisplayClass3_0_tE98815681BB70C450F147F714DEF2C2F3E7AB7B1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass3_0::<OnRemoteEndpointDisconnected>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COnRemoteEndpointDisconnectedU3Eb__0_m4831EA082D950ECD32926CDB3D27A53258BB5718 (U3CU3Ec__DisplayClass3_0_tE98815681BB70C450F147F714DEF2C2F3E7AB7B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMessageListener_t41F503B0920A55DC81DE2CB687E832CC3FE36334_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => mListener.OnRemoteEndpointDisconnected(remoteEndpointId));
		OnGameThreadMessageListener_t8B809835A244D14E8E484AC59CA36C9BAE687574 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_0();
		String_t* L_2 = __this->get_remoteEndpointId_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void GooglePlayGames.BasicApi.Nearby.IMessageListener::OnRemoteEndpointDisconnected(System.String) */, IMessageListener_t41F503B0920A55DC81DE2CB687E832CC3FE36334_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Achievement_get_Id_m3583B62ED17B48056EEE032684B4B45825974BCB_inline (Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2 * __this, const RuntimeMethod* method)
{
	{
		// get { return mId; }
		String_t* L_0 = __this->get_mId_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Achievement_get_IsIncremental_m668FA49C0D9FBA362B3C119226DBAF609F86A40C_inline (Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2 * __this, const RuntimeMethod* method)
{
	{
		// get { return mIsIncremental; }
		bool L_0 = __this->get_mIsIncremental_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Achievement_get_TotalSteps_m3E4F32AA1E2504F75E9B0F629617322056517548_inline (Achievement_t9482B3FA9F0A4116C945EAACC9E976A31E20C1F2 * __this, const RuntimeMethod* method)
{
	{
		// get { return mTotalSteps; }
		int32_t L_0 = __this->get_mTotalSteps_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_AvatarURL_m82C543DE87E0B82E5501966450FBFEBEDCBB8A0F_inline (PlayGamesUserProfile_t9FD75C31B76BC69D41B2406C1C08430C8730DB35 * __this, const RuntimeMethod* method)
{
	{
		// get { return mAvatarUrl; }
		String_t* L_0 = __this->get_mAvatarUrl_2();
		return L_0;
	}
}
