#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t4076404164;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t54765857;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t1105598098;
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t3942926697;
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_t3832220582;
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t1728761929;
// System.Action`1<System.Boolean>
struct Action_1_t1048568049;
// UnityEngine.Object
struct Object_t1699899486;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t4026259155;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t332302736;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t1816242286;
// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t3045384341;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct List_1_t2786718293;
// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_t4030213559;
// System.Text.RegularExpressions.Regex
struct Regex_t4014790103;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t4096356653;
// System.IntPtr[]
struct IntPtrU5BU5D_t618347919;
// System.Collections.IDictionary
struct IDictionary_t3032527710;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t1583881406;
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t1129894377;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1852821906;
// UnityEngine.Events.UnityAction
struct UnityAction_t1065709194;
// UnityEngine.GameObject
struct GameObject_t1817748288;
// UnityEngine.Camera
struct Camera_t2217315075;
// System.Void
struct Void_t2676950004;
// System.Char[]
struct CharU5BU5D_t1671368807;
// System.Object[]
struct ObjectU5BU5D_t846638089;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1870450026;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_t1235456057;
// System.String[]
struct StringU5BU5D_t2238447960;
// System.Int32[]
struct Int32U5BU5D_t1771696264;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t2626315871;
// UnityEngine.GUIStyle
struct GUIStyle_t350904686;
// UnityEngine.GUIContent
struct GUIContent_t2918791183;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t3580365237;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t2900809688;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t618466815;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t3837827452;
// System.IAsyncResult
struct IAsyncResult_t2663544742;
// System.AsyncCallback
struct AsyncCallback_t3736623411;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef ACHIEVEMENTDESCRIPTION_T3742507101_H
#define ACHIEVEMENTDESCRIPTION_T3742507101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct  AchievementDescription_t3742507101  : public RuntimeObject
{
public:
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Title
	String_t* ___m_Title_0;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Image
	Texture2D_t4076404164 * ___m_Image_1;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_AchievedDescription
	String_t* ___m_AchievedDescription_2;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_UnachievedDescription
	String_t* ___m_UnachievedDescription_3;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Hidden
	bool ___m_Hidden_4;
	// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Points
	int32_t ___m_Points_5;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_Title_0() { return static_cast<int32_t>(offsetof(AchievementDescription_t3742507101, ___m_Title_0)); }
	inline String_t* get_m_Title_0() const { return ___m_Title_0; }
	inline String_t** get_address_of_m_Title_0() { return &___m_Title_0; }
	inline void set_m_Title_0(String_t* value)
	{
		___m_Title_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Title_0), value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(AchievementDescription_t3742507101, ___m_Image_1)); }
	inline Texture2D_t4076404164 * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture2D_t4076404164 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture2D_t4076404164 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_1), value);
	}

	inline static int32_t get_offset_of_m_AchievedDescription_2() { return static_cast<int32_t>(offsetof(AchievementDescription_t3742507101, ___m_AchievedDescription_2)); }
	inline String_t* get_m_AchievedDescription_2() const { return ___m_AchievedDescription_2; }
	inline String_t** get_address_of_m_AchievedDescription_2() { return &___m_AchievedDescription_2; }
	inline void set_m_AchievedDescription_2(String_t* value)
	{
		___m_AchievedDescription_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_AchievedDescription_2), value);
	}

	inline static int32_t get_offset_of_m_UnachievedDescription_3() { return static_cast<int32_t>(offsetof(AchievementDescription_t3742507101, ___m_UnachievedDescription_3)); }
	inline String_t* get_m_UnachievedDescription_3() const { return ___m_UnachievedDescription_3; }
	inline String_t** get_address_of_m_UnachievedDescription_3() { return &___m_UnachievedDescription_3; }
	inline void set_m_UnachievedDescription_3(String_t* value)
	{
		___m_UnachievedDescription_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_UnachievedDescription_3), value);
	}

	inline static int32_t get_offset_of_m_Hidden_4() { return static_cast<int32_t>(offsetof(AchievementDescription_t3742507101, ___m_Hidden_4)); }
	inline bool get_m_Hidden_4() const { return ___m_Hidden_4; }
	inline bool* get_address_of_m_Hidden_4() { return &___m_Hidden_4; }
	inline void set_m_Hidden_4(bool value)
	{
		___m_Hidden_4 = value;
	}

	inline static int32_t get_offset_of_m_Points_5() { return static_cast<int32_t>(offsetof(AchievementDescription_t3742507101, ___m_Points_5)); }
	inline int32_t get_m_Points_5() const { return ___m_Points_5; }
	inline int32_t* get_address_of_m_Points_5() { return &___m_Points_5; }
	inline void set_m_Points_5(int32_t value)
	{
		___m_Points_5 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AchievementDescription_t3742507101, ___U3CidU3Ek__BackingField_6)); }
	inline String_t* get_U3CidU3Ek__BackingField_6() const { return ___U3CidU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_6() { return &___U3CidU3Ek__BackingField_6; }
	inline void set_U3CidU3Ek__BackingField_6(String_t* value)
	{
		___U3CidU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACHIEVEMENTDESCRIPTION_T3742507101_H
#ifndef UNITYEVENTBASE_T1678828438_H
#define UNITYEVENTBASE_T1678828438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t1678828438  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t54765857 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t1105598098 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t1678828438, ___m_Calls_0)); }
	inline InvokableCallList_t54765857 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t54765857 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t54765857 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t1678828438, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t1105598098 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t1105598098 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t1105598098 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t1678828438, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t1678828438, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T1678828438_H
#ifndef ATTRIBUTEHELPERENGINE_T2949765133_H
#define ATTRIBUTEHELPERENGINE_T2949765133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AttributeHelperEngine
struct  AttributeHelperEngine_t2949765133  : public RuntimeObject
{
public:

public:
};

struct AttributeHelperEngine_t2949765133_StaticFields
{
public:
	// UnityEngine.DisallowMultipleComponent[] UnityEngine.AttributeHelperEngine::_disallowMultipleComponentArray
	DisallowMultipleComponentU5BU5D_t3942926697* ____disallowMultipleComponentArray_0;
	// UnityEngine.ExecuteInEditMode[] UnityEngine.AttributeHelperEngine::_executeInEditModeArray
	ExecuteInEditModeU5BU5D_t3832220582* ____executeInEditModeArray_1;
	// UnityEngine.RequireComponent[] UnityEngine.AttributeHelperEngine::_requireComponentArray
	RequireComponentU5BU5D_t1728761929* ____requireComponentArray_2;

public:
	inline static int32_t get_offset_of__disallowMultipleComponentArray_0() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2949765133_StaticFields, ____disallowMultipleComponentArray_0)); }
	inline DisallowMultipleComponentU5BU5D_t3942926697* get__disallowMultipleComponentArray_0() const { return ____disallowMultipleComponentArray_0; }
	inline DisallowMultipleComponentU5BU5D_t3942926697** get_address_of__disallowMultipleComponentArray_0() { return &____disallowMultipleComponentArray_0; }
	inline void set__disallowMultipleComponentArray_0(DisallowMultipleComponentU5BU5D_t3942926697* value)
	{
		____disallowMultipleComponentArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____disallowMultipleComponentArray_0), value);
	}

	inline static int32_t get_offset_of__executeInEditModeArray_1() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2949765133_StaticFields, ____executeInEditModeArray_1)); }
	inline ExecuteInEditModeU5BU5D_t3832220582* get__executeInEditModeArray_1() const { return ____executeInEditModeArray_1; }
	inline ExecuteInEditModeU5BU5D_t3832220582** get_address_of__executeInEditModeArray_1() { return &____executeInEditModeArray_1; }
	inline void set__executeInEditModeArray_1(ExecuteInEditModeU5BU5D_t3832220582* value)
	{
		____executeInEditModeArray_1 = value;
		Il2CppCodeGenWriteBarrier((&____executeInEditModeArray_1), value);
	}

	inline static int32_t get_offset_of__requireComponentArray_2() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2949765133_StaticFields, ____requireComponentArray_2)); }
	inline RequireComponentU5BU5D_t1728761929* get__requireComponentArray_2() const { return ____requireComponentArray_2; }
	inline RequireComponentU5BU5D_t1728761929** get_address_of__requireComponentArray_2() { return &____requireComponentArray_2; }
	inline void set__requireComponentArray_2(RequireComponentU5BU5D_t1728761929* value)
	{
		____requireComponentArray_2 = value;
		Il2CppCodeGenWriteBarrier((&____requireComponentArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEHELPERENGINE_T2949765133_H
#ifndef VALUETYPE_T199667939_H
#define VALUETYPE_T199667939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t199667939  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t199667939_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t199667939_marshaled_com
{
};
#endif // VALUETYPE_T199667939_H
#ifndef SETUPCOROUTINE_T3257868256_H
#define SETUPCOROUTINE_T3257868256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SetupCoroutine
struct  SetupCoroutine_t3257868256  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETUPCOROUTINE_T3257868256_H
#ifndef STACKTRACEUTILITY_T1106565147_H
#define STACKTRACEUTILITY_T1106565147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StackTraceUtility
struct  StackTraceUtility_t1106565147  : public RuntimeObject
{
public:

public:
};

struct StackTraceUtility_t1106565147_StaticFields
{
public:
	// System.String UnityEngine.StackTraceUtility::projectFolder
	String_t* ___projectFolder_0;

public:
	inline static int32_t get_offset_of_projectFolder_0() { return static_cast<int32_t>(offsetof(StackTraceUtility_t1106565147_StaticFields, ___projectFolder_0)); }
	inline String_t* get_projectFolder_0() const { return ___projectFolder_0; }
	inline String_t** get_address_of_projectFolder_0() { return &___projectFolder_0; }
	inline void set_projectFolder_0(String_t* value)
	{
		___projectFolder_0 = value;
		Il2CppCodeGenWriteBarrier((&___projectFolder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACEUTILITY_T1106565147_H
#ifndef SCRIPTINGUTILS_T3304904544_H
#define SCRIPTINGUTILS_T3304904544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.ScriptingUtils
struct  ScriptingUtils_t3304904544  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTINGUTILS_T3304904544_H
#ifndef ATTRIBUTE_T3000105177_H
#define ATTRIBUTE_T3000105177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t3000105177  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T3000105177_H
#ifndef U3CUNITYENGINE_SOCIALPLATFORMS_ISOCIALPLATFORM_AUTHENTICATEU3EC__ANONSTOREY0_T3408236426_H
#define U3CUNITYENGINE_SOCIALPLATFORMS_ISOCIALPLATFORM_AUTHENTICATEU3EC__ANONSTOREY0_T3408236426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate>c__AnonStorey0
struct  U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t3408236426  : public RuntimeObject
{
public:
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate>c__AnonStorey0::callback
	Action_1_t1048568049 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t3408236426, ___callback_0)); }
	inline Action_1_t1048568049 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t1048568049 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t1048568049 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((&___callback_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNITYENGINE_SOCIALPLATFORMS_ISOCIALPLATFORM_AUTHENTICATEU3EC__ANONSTOREY0_T3408236426_H
#ifndef ARGUMENTCACHE_T618466815_H
#define ARGUMENTCACHE_T618466815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.ArgumentCache
struct  ArgumentCache_t618466815  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.ArgumentCache::m_ObjectArgument
	Object_t1699899486 * ___m_ObjectArgument_0;
	// System.String UnityEngine.Events.ArgumentCache::m_ObjectArgumentAssemblyTypeName
	String_t* ___m_ObjectArgumentAssemblyTypeName_1;
	// System.Int32 UnityEngine.Events.ArgumentCache::m_IntArgument
	int32_t ___m_IntArgument_2;
	// System.Single UnityEngine.Events.ArgumentCache::m_FloatArgument
	float ___m_FloatArgument_3;
	// System.String UnityEngine.Events.ArgumentCache::m_StringArgument
	String_t* ___m_StringArgument_4;
	// System.Boolean UnityEngine.Events.ArgumentCache::m_BoolArgument
	bool ___m_BoolArgument_5;

public:
	inline static int32_t get_offset_of_m_ObjectArgument_0() { return static_cast<int32_t>(offsetof(ArgumentCache_t618466815, ___m_ObjectArgument_0)); }
	inline Object_t1699899486 * get_m_ObjectArgument_0() const { return ___m_ObjectArgument_0; }
	inline Object_t1699899486 ** get_address_of_m_ObjectArgument_0() { return &___m_ObjectArgument_0; }
	inline void set_m_ObjectArgument_0(Object_t1699899486 * value)
	{
		___m_ObjectArgument_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgument_0), value);
	}

	inline static int32_t get_offset_of_m_ObjectArgumentAssemblyTypeName_1() { return static_cast<int32_t>(offsetof(ArgumentCache_t618466815, ___m_ObjectArgumentAssemblyTypeName_1)); }
	inline String_t* get_m_ObjectArgumentAssemblyTypeName_1() const { return ___m_ObjectArgumentAssemblyTypeName_1; }
	inline String_t** get_address_of_m_ObjectArgumentAssemblyTypeName_1() { return &___m_ObjectArgumentAssemblyTypeName_1; }
	inline void set_m_ObjectArgumentAssemblyTypeName_1(String_t* value)
	{
		___m_ObjectArgumentAssemblyTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgumentAssemblyTypeName_1), value);
	}

	inline static int32_t get_offset_of_m_IntArgument_2() { return static_cast<int32_t>(offsetof(ArgumentCache_t618466815, ___m_IntArgument_2)); }
	inline int32_t get_m_IntArgument_2() const { return ___m_IntArgument_2; }
	inline int32_t* get_address_of_m_IntArgument_2() { return &___m_IntArgument_2; }
	inline void set_m_IntArgument_2(int32_t value)
	{
		___m_IntArgument_2 = value;
	}

	inline static int32_t get_offset_of_m_FloatArgument_3() { return static_cast<int32_t>(offsetof(ArgumentCache_t618466815, ___m_FloatArgument_3)); }
	inline float get_m_FloatArgument_3() const { return ___m_FloatArgument_3; }
	inline float* get_address_of_m_FloatArgument_3() { return &___m_FloatArgument_3; }
	inline void set_m_FloatArgument_3(float value)
	{
		___m_FloatArgument_3 = value;
	}

	inline static int32_t get_offset_of_m_StringArgument_4() { return static_cast<int32_t>(offsetof(ArgumentCache_t618466815, ___m_StringArgument_4)); }
	inline String_t* get_m_StringArgument_4() const { return ___m_StringArgument_4; }
	inline String_t** get_address_of_m_StringArgument_4() { return &___m_StringArgument_4; }
	inline void set_m_StringArgument_4(String_t* value)
	{
		___m_StringArgument_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringArgument_4), value);
	}

	inline static int32_t get_offset_of_m_BoolArgument_5() { return static_cast<int32_t>(offsetof(ArgumentCache_t618466815, ___m_BoolArgument_5)); }
	inline bool get_m_BoolArgument_5() const { return ___m_BoolArgument_5; }
	inline bool* get_address_of_m_BoolArgument_5() { return &___m_BoolArgument_5; }
	inline void set_m_BoolArgument_5(bool value)
	{
		___m_BoolArgument_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTCACHE_T618466815_H
#ifndef GAMECENTERPLATFORM_T329252249_H
#define GAMECENTERPLATFORM_T329252249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
struct  GameCenterPlatform_t329252249  : public RuntimeObject
{
public:

public:
};

struct GameCenterPlatform_t329252249_StaticFields
{
public:
	// System.Action`2<System.Boolean,System.String> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_AuthenticateCallback
	Action_2_t4026259155 * ___s_AuthenticateCallback_0;
	// UnityEngine.SocialPlatforms.Impl.AchievementDescription[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_adCache
	AchievementDescriptionU5BU5D_t332302736* ___s_adCache_1;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_friends
	UserProfileU5BU5D_t1816242286* ___s_friends_2;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_users
	UserProfileU5BU5D_t1816242286* ___s_users_3;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ResetAchievements
	Action_1_t1048568049 * ___s_ResetAchievements_4;
	// UnityEngine.SocialPlatforms.Impl.LocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_LocalUser
	LocalUser_t3045384341 * ___m_LocalUser_5;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_GcBoards
	List_1_t2786718293 * ___m_GcBoards_6;

public:
	inline static int32_t get_offset_of_s_AuthenticateCallback_0() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t329252249_StaticFields, ___s_AuthenticateCallback_0)); }
	inline Action_2_t4026259155 * get_s_AuthenticateCallback_0() const { return ___s_AuthenticateCallback_0; }
	inline Action_2_t4026259155 ** get_address_of_s_AuthenticateCallback_0() { return &___s_AuthenticateCallback_0; }
	inline void set_s_AuthenticateCallback_0(Action_2_t4026259155 * value)
	{
		___s_AuthenticateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_AuthenticateCallback_0), value);
	}

	inline static int32_t get_offset_of_s_adCache_1() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t329252249_StaticFields, ___s_adCache_1)); }
	inline AchievementDescriptionU5BU5D_t332302736* get_s_adCache_1() const { return ___s_adCache_1; }
	inline AchievementDescriptionU5BU5D_t332302736** get_address_of_s_adCache_1() { return &___s_adCache_1; }
	inline void set_s_adCache_1(AchievementDescriptionU5BU5D_t332302736* value)
	{
		___s_adCache_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_adCache_1), value);
	}

	inline static int32_t get_offset_of_s_friends_2() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t329252249_StaticFields, ___s_friends_2)); }
	inline UserProfileU5BU5D_t1816242286* get_s_friends_2() const { return ___s_friends_2; }
	inline UserProfileU5BU5D_t1816242286** get_address_of_s_friends_2() { return &___s_friends_2; }
	inline void set_s_friends_2(UserProfileU5BU5D_t1816242286* value)
	{
		___s_friends_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_friends_2), value);
	}

	inline static int32_t get_offset_of_s_users_3() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t329252249_StaticFields, ___s_users_3)); }
	inline UserProfileU5BU5D_t1816242286* get_s_users_3() const { return ___s_users_3; }
	inline UserProfileU5BU5D_t1816242286** get_address_of_s_users_3() { return &___s_users_3; }
	inline void set_s_users_3(UserProfileU5BU5D_t1816242286* value)
	{
		___s_users_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_users_3), value);
	}

	inline static int32_t get_offset_of_s_ResetAchievements_4() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t329252249_StaticFields, ___s_ResetAchievements_4)); }
	inline Action_1_t1048568049 * get_s_ResetAchievements_4() const { return ___s_ResetAchievements_4; }
	inline Action_1_t1048568049 ** get_address_of_s_ResetAchievements_4() { return &___s_ResetAchievements_4; }
	inline void set_s_ResetAchievements_4(Action_1_t1048568049 * value)
	{
		___s_ResetAchievements_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_ResetAchievements_4), value);
	}

	inline static int32_t get_offset_of_m_LocalUser_5() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t329252249_StaticFields, ___m_LocalUser_5)); }
	inline LocalUser_t3045384341 * get_m_LocalUser_5() const { return ___m_LocalUser_5; }
	inline LocalUser_t3045384341 ** get_address_of_m_LocalUser_5() { return &___m_LocalUser_5; }
	inline void set_m_LocalUser_5(LocalUser_t3045384341 * value)
	{
		___m_LocalUser_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalUser_5), value);
	}

	inline static int32_t get_offset_of_m_GcBoards_6() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t329252249_StaticFields, ___m_GcBoards_6)); }
	inline List_1_t2786718293 * get_m_GcBoards_6() const { return ___m_GcBoards_6; }
	inline List_1_t2786718293 ** get_address_of_m_GcBoards_6() { return &___m_GcBoards_6; }
	inline void set_m_GcBoards_6(List_1_t2786718293 * value)
	{
		___m_GcBoards_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_GcBoards_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMECENTERPLATFORM_T329252249_H
#ifndef CLASSLIBRARYINITIALIZER_T2461508577_H
#define CLASSLIBRARYINITIALIZER_T2461508577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ClassLibraryInitializer
struct  ClassLibraryInitializer_t2461508577  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSLIBRARYINITIALIZER_T2461508577_H
#ifndef REMOTESETTINGS_T3551676527_H
#define REMOTESETTINGS_T3551676527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings
struct  RemoteSettings_t3551676527  : public RuntimeObject
{
public:

public:
};

struct RemoteSettings_t3551676527_StaticFields
{
public:
	// UnityEngine.RemoteSettings/UpdatedEventHandler UnityEngine.RemoteSettings::Updated
	UpdatedEventHandler_t4030213559 * ___Updated_0;

public:
	inline static int32_t get_offset_of_Updated_0() { return static_cast<int32_t>(offsetof(RemoteSettings_t3551676527_StaticFields, ___Updated_0)); }
	inline UpdatedEventHandler_t4030213559 * get_Updated_0() const { return ___Updated_0; }
	inline UpdatedEventHandler_t4030213559 ** get_address_of_Updated_0() { return &___Updated_0; }
	inline void set_Updated_0(UpdatedEventHandler_t4030213559 * value)
	{
		___Updated_0 = value;
		Il2CppCodeGenWriteBarrier((&___Updated_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTESETTINGS_T3551676527_H
#ifndef WEBREQUESTUTILS_T173821512_H
#define WEBREQUESTUTILS_T173821512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.WebRequestUtils
struct  WebRequestUtils_t173821512  : public RuntimeObject
{
public:

public:
};

struct WebRequestUtils_t173821512_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngineInternal.WebRequestUtils::domainRegex
	Regex_t4014790103 * ___domainRegex_0;

public:
	inline static int32_t get_offset_of_domainRegex_0() { return static_cast<int32_t>(offsetof(WebRequestUtils_t173821512_StaticFields, ___domainRegex_0)); }
	inline Regex_t4014790103 * get_domainRegex_0() const { return ___domainRegex_0; }
	inline Regex_t4014790103 ** get_address_of_domainRegex_0() { return &___domainRegex_0; }
	inline void set_domainRegex_0(Regex_t4014790103 * value)
	{
		___domainRegex_0 = value;
		Il2CppCodeGenWriteBarrier((&___domainRegex_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTUTILS_T173821512_H
#ifndef PERSISTENTCALLGROUP_T1105598098_H
#define PERSISTENTCALLGROUP_T1105598098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCallGroup
struct  PersistentCallGroup_t1105598098  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall> UnityEngine.Events.PersistentCallGroup::m_Calls
	List_1_t4096356653 * ___m_Calls_0;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(PersistentCallGroup_t1105598098, ___m_Calls_0)); }
	inline List_1_t4096356653 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline List_1_t4096356653 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(List_1_t4096356653 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALLGROUP_T1105598098_H
#ifndef EXCEPTION_T4051195559_H
#define EXCEPTION_T4051195559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t4051195559  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t618347919* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t4051195559 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t4051195559, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t618347919* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t618347919** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t618347919* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t4051195559, ___inner_exception_1)); }
	inline Exception_t4051195559 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t4051195559 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t4051195559 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t4051195559, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t4051195559, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t4051195559, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t4051195559, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t4051195559, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t4051195559, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t4051195559, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t4051195559, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t4051195559, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T4051195559_H
#ifndef INVOKABLECALLLIST_T54765857_H
#define INVOKABLECALLLIST_T54765857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCallList
struct  InvokableCallList_t54765857  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_PersistentCalls
	List_1_t1583881406 * ___m_PersistentCalls_0;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_RuntimeCalls
	List_1_t1583881406 * ___m_RuntimeCalls_1;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_ExecutingCalls
	List_1_t1583881406 * ___m_ExecutingCalls_2;
	// System.Boolean UnityEngine.Events.InvokableCallList::m_NeedsUpdate
	bool ___m_NeedsUpdate_3;

public:
	inline static int32_t get_offset_of_m_PersistentCalls_0() { return static_cast<int32_t>(offsetof(InvokableCallList_t54765857, ___m_PersistentCalls_0)); }
	inline List_1_t1583881406 * get_m_PersistentCalls_0() const { return ___m_PersistentCalls_0; }
	inline List_1_t1583881406 ** get_address_of_m_PersistentCalls_0() { return &___m_PersistentCalls_0; }
	inline void set_m_PersistentCalls_0(List_1_t1583881406 * value)
	{
		___m_PersistentCalls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_0), value);
	}

	inline static int32_t get_offset_of_m_RuntimeCalls_1() { return static_cast<int32_t>(offsetof(InvokableCallList_t54765857, ___m_RuntimeCalls_1)); }
	inline List_1_t1583881406 * get_m_RuntimeCalls_1() const { return ___m_RuntimeCalls_1; }
	inline List_1_t1583881406 ** get_address_of_m_RuntimeCalls_1() { return &___m_RuntimeCalls_1; }
	inline void set_m_RuntimeCalls_1(List_1_t1583881406 * value)
	{
		___m_RuntimeCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_RuntimeCalls_1), value);
	}

	inline static int32_t get_offset_of_m_ExecutingCalls_2() { return static_cast<int32_t>(offsetof(InvokableCallList_t54765857, ___m_ExecutingCalls_2)); }
	inline List_1_t1583881406 * get_m_ExecutingCalls_2() const { return ___m_ExecutingCalls_2; }
	inline List_1_t1583881406 ** get_address_of_m_ExecutingCalls_2() { return &___m_ExecutingCalls_2; }
	inline void set_m_ExecutingCalls_2(List_1_t1583881406 * value)
	{
		___m_ExecutingCalls_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutingCalls_2), value);
	}

	inline static int32_t get_offset_of_m_NeedsUpdate_3() { return static_cast<int32_t>(offsetof(InvokableCallList_t54765857, ___m_NeedsUpdate_3)); }
	inline bool get_m_NeedsUpdate_3() const { return ___m_NeedsUpdate_3; }
	inline bool* get_address_of_m_NeedsUpdate_3() { return &___m_NeedsUpdate_3; }
	inline void set_m_NeedsUpdate_3(bool value)
	{
		___m_NeedsUpdate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALLLIST_T54765857_H
#ifndef SENDMOUSEEVENTS_T1768250992_H
#define SENDMOUSEEVENTS_T1768250992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t1768250992  : public RuntimeObject
{
public:

public:
};

struct SendMouseEvents_t1768250992_StaticFields
{
public:
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseUsed
	bool ___s_MouseUsed_0;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t1129894377* ___m_LastHit_1;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t1129894377* ___m_MouseDownHit_2;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t1129894377* ___m_CurrentHit_3;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t1852821906* ___m_Cameras_4;

public:
	inline static int32_t get_offset_of_s_MouseUsed_0() { return static_cast<int32_t>(offsetof(SendMouseEvents_t1768250992_StaticFields, ___s_MouseUsed_0)); }
	inline bool get_s_MouseUsed_0() const { return ___s_MouseUsed_0; }
	inline bool* get_address_of_s_MouseUsed_0() { return &___s_MouseUsed_0; }
	inline void set_s_MouseUsed_0(bool value)
	{
		___s_MouseUsed_0 = value;
	}

	inline static int32_t get_offset_of_m_LastHit_1() { return static_cast<int32_t>(offsetof(SendMouseEvents_t1768250992_StaticFields, ___m_LastHit_1)); }
	inline HitInfoU5BU5D_t1129894377* get_m_LastHit_1() const { return ___m_LastHit_1; }
	inline HitInfoU5BU5D_t1129894377** get_address_of_m_LastHit_1() { return &___m_LastHit_1; }
	inline void set_m_LastHit_1(HitInfoU5BU5D_t1129894377* value)
	{
		___m_LastHit_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastHit_1), value);
	}

	inline static int32_t get_offset_of_m_MouseDownHit_2() { return static_cast<int32_t>(offsetof(SendMouseEvents_t1768250992_StaticFields, ___m_MouseDownHit_2)); }
	inline HitInfoU5BU5D_t1129894377* get_m_MouseDownHit_2() const { return ___m_MouseDownHit_2; }
	inline HitInfoU5BU5D_t1129894377** get_address_of_m_MouseDownHit_2() { return &___m_MouseDownHit_2; }
	inline void set_m_MouseDownHit_2(HitInfoU5BU5D_t1129894377* value)
	{
		___m_MouseDownHit_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_MouseDownHit_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentHit_3() { return static_cast<int32_t>(offsetof(SendMouseEvents_t1768250992_StaticFields, ___m_CurrentHit_3)); }
	inline HitInfoU5BU5D_t1129894377* get_m_CurrentHit_3() const { return ___m_CurrentHit_3; }
	inline HitInfoU5BU5D_t1129894377** get_address_of_m_CurrentHit_3() { return &___m_CurrentHit_3; }
	inline void set_m_CurrentHit_3(HitInfoU5BU5D_t1129894377* value)
	{
		___m_CurrentHit_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentHit_3), value);
	}

	inline static int32_t get_offset_of_m_Cameras_4() { return static_cast<int32_t>(offsetof(SendMouseEvents_t1768250992_StaticFields, ___m_Cameras_4)); }
	inline CameraU5BU5D_t1852821906* get_m_Cameras_4() const { return ___m_Cameras_4; }
	inline CameraU5BU5D_t1852821906** get_address_of_m_Cameras_4() { return &___m_Cameras_4; }
	inline void set_m_Cameras_4(CameraU5BU5D_t1852821906* value)
	{
		___m_Cameras_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cameras_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMOUSEEVENTS_T1768250992_H
#ifndef BASEINVOKABLECALL_T345520958_H
#define BASEINVOKABLECALL_T345520958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_t345520958  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_T345520958_H
#ifndef COLOR32_T2817865654_H
#define COLOR32_T2817865654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct ALIGN_TYPE(4) Color32_t2817865654 
{
public:
	// System.Byte UnityEngine.Color32::r
	uint8_t ___r_0;
	// System.Byte UnityEngine.Color32::g
	uint8_t ___g_1;
	// System.Byte UnityEngine.Color32::b
	uint8_t ___b_2;
	// System.Byte UnityEngine.Color32::a
	uint8_t ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color32_t2817865654, ___r_0)); }
	inline uint8_t get_r_0() const { return ___r_0; }
	inline uint8_t* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(uint8_t value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color32_t2817865654, ___g_1)); }
	inline uint8_t get_g_1() const { return ___g_1; }
	inline uint8_t* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(uint8_t value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color32_t2817865654, ___b_2)); }
	inline uint8_t get_b_2() const { return ___b_2; }
	inline uint8_t* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(uint8_t value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color32_t2817865654, ___a_3)); }
	inline uint8_t get_a_3() const { return ___a_3; }
	inline uint8_t* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(uint8_t value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2817865654_H
#ifndef COLOR_T3136506488_H
#define COLOR_T3136506488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t3136506488 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t3136506488, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t3136506488, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t3136506488, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t3136506488, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T3136506488_H
#ifndef INVOKABLECALL_T2595135181_H
#define INVOKABLECALL_T2595135181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall
struct  InvokableCall_t2595135181  : public BaseInvokableCall_t345520958
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t1065709194 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t2595135181, ___Delegate_0)); }
	inline UnityAction_t1065709194 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t1065709194 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t1065709194 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_T2595135181_H
#ifndef DEFAULTEXECUTIONORDER_T2081788771_H
#define DEFAULTEXECUTIONORDER_T2081788771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DefaultExecutionOrder
struct  DefaultExecutionOrder_t2081788771  : public Attribute_t3000105177
{
public:
	// System.Int32 UnityEngine.DefaultExecutionOrder::<order>k__BackingField
	int32_t ___U3CorderU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CorderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DefaultExecutionOrder_t2081788771, ___U3CorderU3Ek__BackingField_0)); }
	inline int32_t get_U3CorderU3Ek__BackingField_0() const { return ___U3CorderU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CorderU3Ek__BackingField_0() { return &___U3CorderU3Ek__BackingField_0; }
	inline void set_U3CorderU3Ek__BackingField_0(int32_t value)
	{
		___U3CorderU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEXECUTIONORDER_T2081788771_H
#ifndef UNITYEXCEPTION_T4243180417_H
#define UNITYEXCEPTION_T4243180417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityException
struct  UnityException_t4243180417  : public Exception_t4051195559
{
public:
	// System.String UnityEngine.UnityException::unityStackTrace
	String_t* ___unityStackTrace_12;

public:
	inline static int32_t get_offset_of_unityStackTrace_12() { return static_cast<int32_t>(offsetof(UnityException_t4243180417, ___unityStackTrace_12)); }
	inline String_t* get_unityStackTrace_12() const { return ___unityStackTrace_12; }
	inline String_t** get_address_of_unityStackTrace_12() { return &___unityStackTrace_12; }
	inline void set_unityStackTrace_12(String_t* value)
	{
		___unityStackTrace_12 = value;
		Il2CppCodeGenWriteBarrier((&___unityStackTrace_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEXCEPTION_T4243180417_H
#ifndef GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T950238300_H
#define GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T950238300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.GeneratedByOldBindingsGeneratorAttribute
struct  GeneratedByOldBindingsGeneratorAttribute_t950238300  : public Attribute_t3000105177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T950238300_H
#ifndef HITINFO_T2599499320_H
#define HITINFO_T2599499320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t2599499320 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t1817748288 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t2217315075 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t2599499320, ___target_0)); }
	inline GameObject_t1817748288 * get_target_0() const { return ___target_0; }
	inline GameObject_t1817748288 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t1817748288 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t2599499320, ___camera_1)); }
	inline Camera_t2217315075 * get_camera_1() const { return ___camera_1; }
	inline Camera_t2217315075 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t2217315075 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t2599499320_marshaled_pinvoke
{
	GameObject_t1817748288 * ___target_0;
	Camera_t2217315075 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t2599499320_marshaled_com
{
	GameObject_t1817748288 * ___target_0;
	Camera_t2217315075 * ___camera_1;
};
#endif // HITINFO_T2599499320_H
#ifndef PREFERBINARYSERIALIZATION_T3020426165_H
#define PREFERBINARYSERIALIZATION_T3020426165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PreferBinarySerialization
struct  PreferBinarySerialization_t3020426165  : public Attribute_t3000105177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREFERBINARYSERIALIZATION_T3020426165_H
#ifndef PROPERTYATTRIBUTE_T3175850472_H
#define PROPERTYATTRIBUTE_T3175850472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t3175850472  : public Attribute_t3000105177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T3175850472_H
#ifndef SERIALIZEFIELD_T1863693842_H
#define SERIALIZEFIELD_T1863693842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializeField
struct  SerializeField_t1863693842  : public Attribute_t3000105177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEFIELD_T1863693842_H
#ifndef SERIALIZEPRIVATEVARIABLES_T4284723356_H
#define SERIALIZEPRIVATEVARIABLES_T4284723356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializePrivateVariables
struct  SerializePrivateVariables_t4284723356  : public Attribute_t3000105177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEPRIVATEVARIABLES_T4284723356_H
#ifndef SELECTIONBASEATTRIBUTE_T1488500766_H
#define SELECTIONBASEATTRIBUTE_T1488500766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SelectionBaseAttribute
struct  SelectionBaseAttribute_t1488500766  : public Attribute_t3000105177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONBASEATTRIBUTE_T1488500766_H
#ifndef TIMESPAN_T1868885790_H
#define TIMESPAN_T1868885790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t1868885790 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t1868885790, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t1868885790_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t1868885790  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t1868885790  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t1868885790  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t1868885790_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t1868885790  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t1868885790 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t1868885790  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t1868885790_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t1868885790  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t1868885790 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t1868885790  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t1868885790_StaticFields, ___Zero_2)); }
	inline TimeSpan_t1868885790  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t1868885790 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t1868885790  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T1868885790_H
#ifndef WRITABLEATTRIBUTE_T2084550311_H
#define WRITABLEATTRIBUTE_T2084550311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WritableAttribute
struct  WritableAttribute_t2084550311  : public Attribute_t3000105177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITABLEATTRIBUTE_T2084550311_H
#ifndef RANGEINT_T2053840565_H
#define RANGEINT_T2053840565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeInt
struct  RangeInt_t2053840565 
{
public:
	// System.Int32 UnityEngine.RangeInt::start
	int32_t ___start_0;
	// System.Int32 UnityEngine.RangeInt::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(RangeInt_t2053840565, ___start_0)); }
	inline int32_t get_start_0() const { return ___start_0; }
	inline int32_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int32_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(RangeInt_t2053840565, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEINT_T2053840565_H
#ifndef NATIVECLASSATTRIBUTE_T987837110_H
#define NATIVECLASSATTRIBUTE_T987837110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NativeClassAttribute
struct  NativeClassAttribute_t987837110  : public Attribute_t3000105177
{
public:
	// System.String UnityEngine.NativeClassAttribute::<QualifiedNativeName>k__BackingField
	String_t* ___U3CQualifiedNativeNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CQualifiedNativeNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeClassAttribute_t987837110, ___U3CQualifiedNativeNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CQualifiedNativeNameU3Ek__BackingField_0() const { return ___U3CQualifiedNativeNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CQualifiedNativeNameU3Ek__BackingField_0() { return &___U3CQualifiedNativeNameU3Ek__BackingField_0; }
	inline void set_U3CQualifiedNativeNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CQualifiedNativeNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CQualifiedNativeNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECLASSATTRIBUTE_T987837110_H
#ifndef VECTOR3_T1874995928_H
#define VECTOR3_T1874995928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t1874995928 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t1874995928, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t1874995928, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t1874995928, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t1874995928_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t1874995928  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t1874995928  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t1874995928  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t1874995928  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t1874995928  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t1874995928  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t1874995928  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t1874995928  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t1874995928  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t1874995928  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t1874995928_StaticFields, ___zeroVector_4)); }
	inline Vector3_t1874995928  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t1874995928 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t1874995928  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t1874995928_StaticFields, ___oneVector_5)); }
	inline Vector3_t1874995928  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t1874995928 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t1874995928  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t1874995928_StaticFields, ___upVector_6)); }
	inline Vector3_t1874995928  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t1874995928 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t1874995928  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t1874995928_StaticFields, ___downVector_7)); }
	inline Vector3_t1874995928  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t1874995928 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t1874995928  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t1874995928_StaticFields, ___leftVector_8)); }
	inline Vector3_t1874995928  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t1874995928 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t1874995928  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t1874995928_StaticFields, ___rightVector_9)); }
	inline Vector3_t1874995928  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t1874995928 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t1874995928  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t1874995928_StaticFields, ___forwardVector_10)); }
	inline Vector3_t1874995928  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t1874995928 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t1874995928  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t1874995928_StaticFields, ___backVector_11)); }
	inline Vector3_t1874995928  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t1874995928 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t1874995928  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t1874995928_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t1874995928  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t1874995928 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t1874995928  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t1874995928_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t1874995928  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t1874995928 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t1874995928  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T1874995928_H
#ifndef SINGLE_T3328667513_H
#define SINGLE_T3328667513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t3328667513 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t3328667513, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T3328667513_H
#ifndef GCUSERPROFILEDATA_T442346949_H
#define GCUSERPROFILEDATA_T442346949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct  GcUserProfileData_t442346949 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::userName
	String_t* ___userName_0;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::userID
	String_t* ___userID_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::isFriend
	int32_t ___isFriend_2;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::image
	Texture2D_t4076404164 * ___image_3;

public:
	inline static int32_t get_offset_of_userName_0() { return static_cast<int32_t>(offsetof(GcUserProfileData_t442346949, ___userName_0)); }
	inline String_t* get_userName_0() const { return ___userName_0; }
	inline String_t** get_address_of_userName_0() { return &___userName_0; }
	inline void set_userName_0(String_t* value)
	{
		___userName_0 = value;
		Il2CppCodeGenWriteBarrier((&___userName_0), value);
	}

	inline static int32_t get_offset_of_userID_1() { return static_cast<int32_t>(offsetof(GcUserProfileData_t442346949, ___userID_1)); }
	inline String_t* get_userID_1() const { return ___userID_1; }
	inline String_t** get_address_of_userID_1() { return &___userID_1; }
	inline void set_userID_1(String_t* value)
	{
		___userID_1 = value;
		Il2CppCodeGenWriteBarrier((&___userID_1), value);
	}

	inline static int32_t get_offset_of_isFriend_2() { return static_cast<int32_t>(offsetof(GcUserProfileData_t442346949, ___isFriend_2)); }
	inline int32_t get_isFriend_2() const { return ___isFriend_2; }
	inline int32_t* get_address_of_isFriend_2() { return &___isFriend_2; }
	inline void set_isFriend_2(int32_t value)
	{
		___isFriend_2 = value;
	}

	inline static int32_t get_offset_of_image_3() { return static_cast<int32_t>(offsetof(GcUserProfileData_t442346949, ___image_3)); }
	inline Texture2D_t4076404164 * get_image_3() const { return ___image_3; }
	inline Texture2D_t4076404164 ** get_address_of_image_3() { return &___image_3; }
	inline void set_image_3(Texture2D_t4076404164 * value)
	{
		___image_3 = value;
		Il2CppCodeGenWriteBarrier((&___image_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t442346949_marshaled_pinvoke
{
	char* ___userName_0;
	char* ___userID_1;
	int32_t ___isFriend_2;
	Texture2D_t4076404164 * ___image_3;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t442346949_marshaled_com
{
	Il2CppChar* ___userName_0;
	Il2CppChar* ___userID_1;
	int32_t ___isFriend_2;
	Texture2D_t4076404164 * ___image_3;
};
#endif // GCUSERPROFILEDATA_T442346949_H
#ifndef GCACHIEVEMENTDESCRIPTIONDATA_T1267650014_H
#define GCACHIEVEMENTDESCRIPTIONDATA_T1267650014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct  GcAchievementDescriptionData_t1267650014 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Identifier
	String_t* ___m_Identifier_0;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Title
	String_t* ___m_Title_1;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Image
	Texture2D_t4076404164 * ___m_Image_2;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_AchievedDescription
	String_t* ___m_AchievedDescription_3;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_UnachievedDescription
	String_t* ___m_UnachievedDescription_4;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Hidden
	int32_t ___m_Hidden_5;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Points
	int32_t ___m_Points_6;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t1267650014, ___m_Identifier_0)); }
	inline String_t* get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline String_t** get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(String_t* value)
	{
		___m_Identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Identifier_0), value);
	}

	inline static int32_t get_offset_of_m_Title_1() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t1267650014, ___m_Title_1)); }
	inline String_t* get_m_Title_1() const { return ___m_Title_1; }
	inline String_t** get_address_of_m_Title_1() { return &___m_Title_1; }
	inline void set_m_Title_1(String_t* value)
	{
		___m_Title_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Title_1), value);
	}

	inline static int32_t get_offset_of_m_Image_2() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t1267650014, ___m_Image_2)); }
	inline Texture2D_t4076404164 * get_m_Image_2() const { return ___m_Image_2; }
	inline Texture2D_t4076404164 ** get_address_of_m_Image_2() { return &___m_Image_2; }
	inline void set_m_Image_2(Texture2D_t4076404164 * value)
	{
		___m_Image_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_2), value);
	}

	inline static int32_t get_offset_of_m_AchievedDescription_3() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t1267650014, ___m_AchievedDescription_3)); }
	inline String_t* get_m_AchievedDescription_3() const { return ___m_AchievedDescription_3; }
	inline String_t** get_address_of_m_AchievedDescription_3() { return &___m_AchievedDescription_3; }
	inline void set_m_AchievedDescription_3(String_t* value)
	{
		___m_AchievedDescription_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_AchievedDescription_3), value);
	}

	inline static int32_t get_offset_of_m_UnachievedDescription_4() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t1267650014, ___m_UnachievedDescription_4)); }
	inline String_t* get_m_UnachievedDescription_4() const { return ___m_UnachievedDescription_4; }
	inline String_t** get_address_of_m_UnachievedDescription_4() { return &___m_UnachievedDescription_4; }
	inline void set_m_UnachievedDescription_4(String_t* value)
	{
		___m_UnachievedDescription_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_UnachievedDescription_4), value);
	}

	inline static int32_t get_offset_of_m_Hidden_5() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t1267650014, ___m_Hidden_5)); }
	inline int32_t get_m_Hidden_5() const { return ___m_Hidden_5; }
	inline int32_t* get_address_of_m_Hidden_5() { return &___m_Hidden_5; }
	inline void set_m_Hidden_5(int32_t value)
	{
		___m_Hidden_5 = value;
	}

	inline static int32_t get_offset_of_m_Points_6() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t1267650014, ___m_Points_6)); }
	inline int32_t get_m_Points_6() const { return ___m_Points_6; }
	inline int32_t* get_address_of_m_Points_6() { return &___m_Points_6; }
	inline void set_m_Points_6(int32_t value)
	{
		___m_Points_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct GcAchievementDescriptionData_t1267650014_marshaled_pinvoke
{
	char* ___m_Identifier_0;
	char* ___m_Title_1;
	Texture2D_t4076404164 * ___m_Image_2;
	char* ___m_AchievedDescription_3;
	char* ___m_UnachievedDescription_4;
	int32_t ___m_Hidden_5;
	int32_t ___m_Points_6;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct GcAchievementDescriptionData_t1267650014_marshaled_com
{
	Il2CppChar* ___m_Identifier_0;
	Il2CppChar* ___m_Title_1;
	Texture2D_t4076404164 * ___m_Image_2;
	Il2CppChar* ___m_AchievedDescription_3;
	Il2CppChar* ___m_UnachievedDescription_4;
	int32_t ___m_Hidden_5;
	int32_t ___m_Points_6;
};
#endif // GCACHIEVEMENTDESCRIPTIONDATA_T1267650014_H
#ifndef GCACHIEVEMENTDATA_T985292318_H
#define GCACHIEVEMENTDATA_T985292318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct  GcAchievementData_t985292318 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Identifier
	String_t* ___m_Identifier_0;
	// System.Double UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_PercentCompleted
	double ___m_PercentCompleted_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Completed
	int32_t ___m_Completed_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Hidden
	int32_t ___m_Hidden_3;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_LastReportedDate
	int32_t ___m_LastReportedDate_4;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(GcAchievementData_t985292318, ___m_Identifier_0)); }
	inline String_t* get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline String_t** get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(String_t* value)
	{
		___m_Identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Identifier_0), value);
	}

	inline static int32_t get_offset_of_m_PercentCompleted_1() { return static_cast<int32_t>(offsetof(GcAchievementData_t985292318, ___m_PercentCompleted_1)); }
	inline double get_m_PercentCompleted_1() const { return ___m_PercentCompleted_1; }
	inline double* get_address_of_m_PercentCompleted_1() { return &___m_PercentCompleted_1; }
	inline void set_m_PercentCompleted_1(double value)
	{
		___m_PercentCompleted_1 = value;
	}

	inline static int32_t get_offset_of_m_Completed_2() { return static_cast<int32_t>(offsetof(GcAchievementData_t985292318, ___m_Completed_2)); }
	inline int32_t get_m_Completed_2() const { return ___m_Completed_2; }
	inline int32_t* get_address_of_m_Completed_2() { return &___m_Completed_2; }
	inline void set_m_Completed_2(int32_t value)
	{
		___m_Completed_2 = value;
	}

	inline static int32_t get_offset_of_m_Hidden_3() { return static_cast<int32_t>(offsetof(GcAchievementData_t985292318, ___m_Hidden_3)); }
	inline int32_t get_m_Hidden_3() const { return ___m_Hidden_3; }
	inline int32_t* get_address_of_m_Hidden_3() { return &___m_Hidden_3; }
	inline void set_m_Hidden_3(int32_t value)
	{
		___m_Hidden_3 = value;
	}

	inline static int32_t get_offset_of_m_LastReportedDate_4() { return static_cast<int32_t>(offsetof(GcAchievementData_t985292318, ___m_LastReportedDate_4)); }
	inline int32_t get_m_LastReportedDate_4() const { return ___m_LastReportedDate_4; }
	inline int32_t* get_address_of_m_LastReportedDate_4() { return &___m_LastReportedDate_4; }
	inline void set_m_LastReportedDate_4(int32_t value)
	{
		___m_LastReportedDate_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t985292318_marshaled_pinvoke
{
	char* ___m_Identifier_0;
	double ___m_PercentCompleted_1;
	int32_t ___m_Completed_2;
	int32_t ___m_Hidden_3;
	int32_t ___m_LastReportedDate_4;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t985292318_marshaled_com
{
	Il2CppChar* ___m_Identifier_0;
	double ___m_PercentCompleted_1;
	int32_t ___m_Completed_2;
	int32_t ___m_Hidden_3;
	int32_t ___m_LastReportedDate_4;
};
#endif // GCACHIEVEMENTDATA_T985292318_H
#ifndef GCSCOREDATA_T2742962091_H
#define GCSCOREDATA_T2742962091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct  GcScoreData_t2742962091 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Category
	String_t* ___m_Category_0;
	// System.UInt32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_ValueLow
	uint32_t ___m_ValueLow_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_ValueHigh
	int32_t ___m_ValueHigh_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Date
	int32_t ___m_Date_3;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_FormattedValue
	String_t* ___m_FormattedValue_4;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_PlayerID
	String_t* ___m_PlayerID_5;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Rank
	int32_t ___m_Rank_6;

public:
	inline static int32_t get_offset_of_m_Category_0() { return static_cast<int32_t>(offsetof(GcScoreData_t2742962091, ___m_Category_0)); }
	inline String_t* get_m_Category_0() const { return ___m_Category_0; }
	inline String_t** get_address_of_m_Category_0() { return &___m_Category_0; }
	inline void set_m_Category_0(String_t* value)
	{
		___m_Category_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Category_0), value);
	}

	inline static int32_t get_offset_of_m_ValueLow_1() { return static_cast<int32_t>(offsetof(GcScoreData_t2742962091, ___m_ValueLow_1)); }
	inline uint32_t get_m_ValueLow_1() const { return ___m_ValueLow_1; }
	inline uint32_t* get_address_of_m_ValueLow_1() { return &___m_ValueLow_1; }
	inline void set_m_ValueLow_1(uint32_t value)
	{
		___m_ValueLow_1 = value;
	}

	inline static int32_t get_offset_of_m_ValueHigh_2() { return static_cast<int32_t>(offsetof(GcScoreData_t2742962091, ___m_ValueHigh_2)); }
	inline int32_t get_m_ValueHigh_2() const { return ___m_ValueHigh_2; }
	inline int32_t* get_address_of_m_ValueHigh_2() { return &___m_ValueHigh_2; }
	inline void set_m_ValueHigh_2(int32_t value)
	{
		___m_ValueHigh_2 = value;
	}

	inline static int32_t get_offset_of_m_Date_3() { return static_cast<int32_t>(offsetof(GcScoreData_t2742962091, ___m_Date_3)); }
	inline int32_t get_m_Date_3() const { return ___m_Date_3; }
	inline int32_t* get_address_of_m_Date_3() { return &___m_Date_3; }
	inline void set_m_Date_3(int32_t value)
	{
		___m_Date_3 = value;
	}

	inline static int32_t get_offset_of_m_FormattedValue_4() { return static_cast<int32_t>(offsetof(GcScoreData_t2742962091, ___m_FormattedValue_4)); }
	inline String_t* get_m_FormattedValue_4() const { return ___m_FormattedValue_4; }
	inline String_t** get_address_of_m_FormattedValue_4() { return &___m_FormattedValue_4; }
	inline void set_m_FormattedValue_4(String_t* value)
	{
		___m_FormattedValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_FormattedValue_4), value);
	}

	inline static int32_t get_offset_of_m_PlayerID_5() { return static_cast<int32_t>(offsetof(GcScoreData_t2742962091, ___m_PlayerID_5)); }
	inline String_t* get_m_PlayerID_5() const { return ___m_PlayerID_5; }
	inline String_t** get_address_of_m_PlayerID_5() { return &___m_PlayerID_5; }
	inline void set_m_PlayerID_5(String_t* value)
	{
		___m_PlayerID_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayerID_5), value);
	}

	inline static int32_t get_offset_of_m_Rank_6() { return static_cast<int32_t>(offsetof(GcScoreData_t2742962091, ___m_Rank_6)); }
	inline int32_t get_m_Rank_6() const { return ___m_Rank_6; }
	inline int32_t* get_address_of_m_Rank_6() { return &___m_Rank_6; }
	inline void set_m_Rank_6(int32_t value)
	{
		___m_Rank_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t2742962091_marshaled_pinvoke
{
	char* ___m_Category_0;
	uint32_t ___m_ValueLow_1;
	int32_t ___m_ValueHigh_2;
	int32_t ___m_Date_3;
	char* ___m_FormattedValue_4;
	char* ___m_PlayerID_5;
	int32_t ___m_Rank_6;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t2742962091_marshaled_com
{
	Il2CppChar* ___m_Category_0;
	uint32_t ___m_ValueLow_1;
	int32_t ___m_ValueHigh_2;
	int32_t ___m_Date_3;
	Il2CppChar* ___m_FormattedValue_4;
	Il2CppChar* ___m_PlayerID_5;
	int32_t ___m_Rank_6;
};
#endif // GCSCOREDATA_T2742962091_H
#ifndef VOID_T2676950004_H
#define VOID_T2676950004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2676950004 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2676950004_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUM_T761771976_H
#define ENUM_T761771976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t761771976  : public ValueType_t199667939
{
public:

public:
};

struct Enum_t761771976_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1671368807* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t761771976_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1671368807* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1671368807** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1671368807* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t761771976_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t761771976_marshaled_com
{
};
#endif // ENUM_T761771976_H
#ifndef ASSEMBLYISEDITORASSEMBLY_T4259632327_H
#define ASSEMBLYISEDITORASSEMBLY_T4259632327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssemblyIsEditorAssembly
struct  AssemblyIsEditorAssembly_t4259632327  : public Attribute_t3000105177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYISEDITORASSEMBLY_T4259632327_H
#ifndef VECTOR2_T1870731928_H
#define VECTOR2_T1870731928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t1870731928 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t1870731928, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t1870731928, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t1870731928_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1870731928  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1870731928  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1870731928  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1870731928  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1870731928  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1870731928  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1870731928  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1870731928  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t1870731928_StaticFields, ___zeroVector_2)); }
	inline Vector2_t1870731928  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t1870731928 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t1870731928  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t1870731928_StaticFields, ___oneVector_3)); }
	inline Vector2_t1870731928  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t1870731928 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t1870731928  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t1870731928_StaticFields, ___upVector_4)); }
	inline Vector2_t1870731928  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t1870731928 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t1870731928  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t1870731928_StaticFields, ___downVector_5)); }
	inline Vector2_t1870731928  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t1870731928 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t1870731928  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t1870731928_StaticFields, ___leftVector_6)); }
	inline Vector2_t1870731928  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t1870731928 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t1870731928  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t1870731928_StaticFields, ___rightVector_7)); }
	inline Vector2_t1870731928  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t1870731928 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t1870731928  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t1870731928_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t1870731928  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t1870731928 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t1870731928  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t1870731928_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t1870731928  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t1870731928 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t1870731928  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T1870731928_H
#ifndef UNITYEVENT_T836677968_H
#define UNITYEVENT_T836677968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t836677968  : public UnityEventBase_t1678828438
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t846638089* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t836677968, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t846638089* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t846638089** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t846638089* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T836677968_H
#ifndef RANGE_T566114770_H
#define RANGE_T566114770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Range
struct  Range_t566114770 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.Range::from
	int32_t ___from_0;
	// System.Int32 UnityEngine.SocialPlatforms.Range::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_from_0() { return static_cast<int32_t>(offsetof(Range_t566114770, ___from_0)); }
	inline int32_t get_from_0() const { return ___from_0; }
	inline int32_t* get_address_of_from_0() { return &___from_0; }
	inline void set_from_0(int32_t value)
	{
		___from_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Range_t566114770, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGE_T566114770_H
#ifndef DISALLOWMULTIPLECOMPONENT_T3648812216_H
#define DISALLOWMULTIPLECOMPONENT_T3648812216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DisallowMultipleComponent
struct  DisallowMultipleComponent_t3648812216  : public Attribute_t3000105177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISALLOWMULTIPLECOMPONENT_T3648812216_H
#ifndef REQUIRECOMPONENT_T3347582808_H
#define REQUIRECOMPONENT_T3347582808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RequireComponent
struct  RequireComponent_t3347582808  : public Attribute_t3000105177
{
public:
	// System.Type UnityEngine.RequireComponent::m_Type0
	Type_t * ___m_Type0_0;
	// System.Type UnityEngine.RequireComponent::m_Type1
	Type_t * ___m_Type1_1;
	// System.Type UnityEngine.RequireComponent::m_Type2
	Type_t * ___m_Type2_2;

public:
	inline static int32_t get_offset_of_m_Type0_0() { return static_cast<int32_t>(offsetof(RequireComponent_t3347582808, ___m_Type0_0)); }
	inline Type_t * get_m_Type0_0() const { return ___m_Type0_0; }
	inline Type_t ** get_address_of_m_Type0_0() { return &___m_Type0_0; }
	inline void set_m_Type0_0(Type_t * value)
	{
		___m_Type0_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type0_0), value);
	}

	inline static int32_t get_offset_of_m_Type1_1() { return static_cast<int32_t>(offsetof(RequireComponent_t3347582808, ___m_Type1_1)); }
	inline Type_t * get_m_Type1_1() const { return ___m_Type1_1; }
	inline Type_t ** get_address_of_m_Type1_1() { return &___m_Type1_1; }
	inline void set_m_Type1_1(Type_t * value)
	{
		___m_Type1_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type1_1), value);
	}

	inline static int32_t get_offset_of_m_Type2_2() { return static_cast<int32_t>(offsetof(RequireComponent_t3347582808, ___m_Type2_2)); }
	inline Type_t * get_m_Type2_2() const { return ___m_Type2_2; }
	inline Type_t ** get_address_of_m_Type2_2() { return &___m_Type2_2; }
	inline void set_m_Type2_2(Type_t * value)
	{
		___m_Type2_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type2_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUIRECOMPONENT_T3347582808_H
#ifndef ADDCOMPONENTMENU_T471590916_H
#define ADDCOMPONENTMENU_T471590916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AddComponentMenu
struct  AddComponentMenu_t471590916  : public Attribute_t3000105177
{
public:
	// System.String UnityEngine.AddComponentMenu::m_AddComponentMenu
	String_t* ___m_AddComponentMenu_0;
	// System.Int32 UnityEngine.AddComponentMenu::m_Ordering
	int32_t ___m_Ordering_1;

public:
	inline static int32_t get_offset_of_m_AddComponentMenu_0() { return static_cast<int32_t>(offsetof(AddComponentMenu_t471590916, ___m_AddComponentMenu_0)); }
	inline String_t* get_m_AddComponentMenu_0() const { return ___m_AddComponentMenu_0; }
	inline String_t** get_address_of_m_AddComponentMenu_0() { return &___m_AddComponentMenu_0; }
	inline void set_m_AddComponentMenu_0(String_t* value)
	{
		___m_AddComponentMenu_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_AddComponentMenu_0), value);
	}

	inline static int32_t get_offset_of_m_Ordering_1() { return static_cast<int32_t>(offsetof(AddComponentMenu_t471590916, ___m_Ordering_1)); }
	inline int32_t get_m_Ordering_1() const { return ___m_Ordering_1; }
	inline int32_t* get_address_of_m_Ordering_1() { return &___m_Ordering_1; }
	inline void set_m_Ordering_1(int32_t value)
	{
		___m_Ordering_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDCOMPONENTMENU_T471590916_H
#ifndef CONTEXTMENU_T3223975351_H
#define CONTEXTMENU_T3223975351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContextMenu
struct  ContextMenu_t3223975351  : public Attribute_t3000105177
{
public:
	// System.String UnityEngine.ContextMenu::menuItem
	String_t* ___menuItem_0;
	// System.Boolean UnityEngine.ContextMenu::validate
	bool ___validate_1;
	// System.Int32 UnityEngine.ContextMenu::priority
	int32_t ___priority_2;

public:
	inline static int32_t get_offset_of_menuItem_0() { return static_cast<int32_t>(offsetof(ContextMenu_t3223975351, ___menuItem_0)); }
	inline String_t* get_menuItem_0() const { return ___menuItem_0; }
	inline String_t** get_address_of_menuItem_0() { return &___menuItem_0; }
	inline void set_menuItem_0(String_t* value)
	{
		___menuItem_0 = value;
		Il2CppCodeGenWriteBarrier((&___menuItem_0), value);
	}

	inline static int32_t get_offset_of_validate_1() { return static_cast<int32_t>(offsetof(ContextMenu_t3223975351, ___validate_1)); }
	inline bool get_validate_1() const { return ___validate_1; }
	inline bool* get_address_of_validate_1() { return &___validate_1; }
	inline void set_validate_1(bool value)
	{
		___validate_1 = value;
	}

	inline static int32_t get_offset_of_priority_2() { return static_cast<int32_t>(offsetof(ContextMenu_t3223975351, ___priority_2)); }
	inline int32_t get_priority_2() const { return ___priority_2; }
	inline int32_t* get_address_of_priority_2() { return &___priority_2; }
	inline void set_priority_2(int32_t value)
	{
		___priority_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTMENU_T3223975351_H
#ifndef EXECUTEINEDITMODE_T3411678079_H
#define EXECUTEINEDITMODE_T3411678079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ExecuteInEditMode
struct  ExecuteInEditMode_t3411678079  : public Attribute_t3000105177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEINEDITMODE_T3411678079_H
#ifndef RECT_T2469536665_H
#define RECT_T2469536665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2469536665 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2469536665, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2469536665, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2469536665, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2469536665, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2469536665_H
#ifndef IL2CPPSTRUCTALIGNMENTATTRIBUTE_T3807764866_H
#define IL2CPPSTRUCTALIGNMENTATTRIBUTE_T3807764866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.IL2CPPStructAlignmentAttribute
struct  IL2CPPStructAlignmentAttribute_t3807764866  : public Attribute_t3000105177
{
public:
	// System.Int32 UnityEngine.IL2CPPStructAlignmentAttribute::Align
	int32_t ___Align_0;

public:
	inline static int32_t get_offset_of_Align_0() { return static_cast<int32_t>(offsetof(IL2CPPStructAlignmentAttribute_t3807764866, ___Align_0)); }
	inline int32_t get_Align_0() const { return ___Align_0; }
	inline int32_t* get_address_of_Align_0() { return &___Align_0; }
	inline void set_Align_0(int32_t value)
	{
		___Align_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPSTRUCTALIGNMENTATTRIBUTE_T3807764866_H
#ifndef TRACKEDREFERENCE_T2314189973_H
#define TRACKEDREFERENCE_T2314189973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_t2314189973  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t2314189973, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t2314189973_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t2314189973_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_T2314189973_H
#ifndef TOUCHSCREENKEYBOARDTYPE_T2126995860_H
#define TOUCHSCREENKEYBOARDTYPE_T2126995860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_t2126995860 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_t2126995860, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARDTYPE_T2126995860_H
#ifndef UNITYEVENTCALLSTATE_T4219366100_H
#define UNITYEVENTCALLSTATE_T4219366100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventCallState
struct  UnityEventCallState_t4219366100 
{
public:
	// System.Int32 UnityEngine.Events.UnityEventCallState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityEventCallState_t4219366100, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTCALLSTATE_T4219366100_H
#ifndef DELEGATE_T321273466_H
#define DELEGATE_T321273466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t321273466  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1870450026 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t321273466, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t321273466, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t321273466, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t321273466, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t321273466, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t321273466, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t321273466, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t321273466, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t321273466, ___data_8)); }
	inline DelegateData_t1870450026 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1870450026 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1870450026 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T321273466_H
#ifndef PERSISTENTLISTENERMODE_T2157335686_H
#define PERSISTENTLISTENERMODE_T2157335686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentListenerMode
struct  PersistentListenerMode_t2157335686 
{
public:
	// System.Int32 UnityEngine.Events.PersistentListenerMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PersistentListenerMode_t2157335686, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTLISTENERMODE_T2157335686_H
#ifndef COLORWRITEMASK_T4194103910_H
#define COLORWRITEMASK_T4194103910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ColorWriteMask
struct  ColorWriteMask_t4194103910 
{
public:
	// System.Int32 UnityEngine.Rendering.ColorWriteMask::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColorWriteMask_t4194103910, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORWRITEMASK_T4194103910_H
#ifndef DATETIMEKIND_T3705028314_H
#define DATETIMEKIND_T3705028314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3705028314 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3705028314, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3705028314_H
#ifndef TEXTAREAATTRIBUTE_T3509639333_H
#define TEXTAREAATTRIBUTE_T3509639333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAreaAttribute
struct  TextAreaAttribute_t3509639333  : public PropertyAttribute_t3175850472
{
public:
	// System.Int32 UnityEngine.TextAreaAttribute::minLines
	int32_t ___minLines_0;
	// System.Int32 UnityEngine.TextAreaAttribute::maxLines
	int32_t ___maxLines_1;

public:
	inline static int32_t get_offset_of_minLines_0() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t3509639333, ___minLines_0)); }
	inline int32_t get_minLines_0() const { return ___minLines_0; }
	inline int32_t* get_address_of_minLines_0() { return &___minLines_0; }
	inline void set_minLines_0(int32_t value)
	{
		___minLines_0 = value;
	}

	inline static int32_t get_offset_of_maxLines_1() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t3509639333, ___maxLines_1)); }
	inline int32_t get_maxLines_1() const { return ___maxLines_1; }
	inline int32_t* get_address_of_maxLines_1() { return &___maxLines_1; }
	inline void set_maxLines_1(int32_t value)
	{
		___maxLines_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTAREAATTRIBUTE_T3509639333_H
#ifndef DBLCLICKSNAPPING_T157650003_H
#define DBLCLICKSNAPPING_T157650003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextEditor/DblClickSnapping
struct  DblClickSnapping_t157650003 
{
public:
	// System.Byte UnityEngine.TextEditor/DblClickSnapping::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DblClickSnapping_t157650003, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBLCLICKSNAPPING_T157650003_H
#ifndef INTERNAL_DRAWARGUMENTS_T1778578837_H
#define INTERNAL_DRAWARGUMENTS_T1778578837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal_DrawArguments
struct  Internal_DrawArguments_t1778578837 
{
public:
	// System.IntPtr UnityEngine.Internal_DrawArguments::target
	IntPtr_t ___target_0;
	// UnityEngine.Rect UnityEngine.Internal_DrawArguments::position
	Rect_t2469536665  ___position_1;
	// System.Int32 UnityEngine.Internal_DrawArguments::isHover
	int32_t ___isHover_2;
	// System.Int32 UnityEngine.Internal_DrawArguments::isActive
	int32_t ___isActive_3;
	// System.Int32 UnityEngine.Internal_DrawArguments::on
	int32_t ___on_4;
	// System.Int32 UnityEngine.Internal_DrawArguments::hasKeyboardFocus
	int32_t ___hasKeyboardFocus_5;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(Internal_DrawArguments_t1778578837, ___target_0)); }
	inline IntPtr_t get_target_0() const { return ___target_0; }
	inline IntPtr_t* get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(IntPtr_t value)
	{
		___target_0 = value;
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(Internal_DrawArguments_t1778578837, ___position_1)); }
	inline Rect_t2469536665  get_position_1() const { return ___position_1; }
	inline Rect_t2469536665 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Rect_t2469536665  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_isHover_2() { return static_cast<int32_t>(offsetof(Internal_DrawArguments_t1778578837, ___isHover_2)); }
	inline int32_t get_isHover_2() const { return ___isHover_2; }
	inline int32_t* get_address_of_isHover_2() { return &___isHover_2; }
	inline void set_isHover_2(int32_t value)
	{
		___isHover_2 = value;
	}

	inline static int32_t get_offset_of_isActive_3() { return static_cast<int32_t>(offsetof(Internal_DrawArguments_t1778578837, ___isActive_3)); }
	inline int32_t get_isActive_3() const { return ___isActive_3; }
	inline int32_t* get_address_of_isActive_3() { return &___isActive_3; }
	inline void set_isActive_3(int32_t value)
	{
		___isActive_3 = value;
	}

	inline static int32_t get_offset_of_on_4() { return static_cast<int32_t>(offsetof(Internal_DrawArguments_t1778578837, ___on_4)); }
	inline int32_t get_on_4() const { return ___on_4; }
	inline int32_t* get_address_of_on_4() { return &___on_4; }
	inline void set_on_4(int32_t value)
	{
		___on_4 = value;
	}

	inline static int32_t get_offset_of_hasKeyboardFocus_5() { return static_cast<int32_t>(offsetof(Internal_DrawArguments_t1778578837, ___hasKeyboardFocus_5)); }
	inline int32_t get_hasKeyboardFocus_5() const { return ___hasKeyboardFocus_5; }
	inline int32_t* get_address_of_hasKeyboardFocus_5() { return &___hasKeyboardFocus_5; }
	inline void set_hasKeyboardFocus_5(int32_t value)
	{
		___hasKeyboardFocus_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_DRAWARGUMENTS_T1778578837_H
#ifndef INTERNAL_DRAWWITHTEXTSELECTIONARGUMENTS_T1247738902_H
#define INTERNAL_DRAWWITHTEXTSELECTIONARGUMENTS_T1247738902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal_DrawWithTextSelectionArguments
struct  Internal_DrawWithTextSelectionArguments_t1247738902 
{
public:
	// System.IntPtr UnityEngine.Internal_DrawWithTextSelectionArguments::target
	IntPtr_t ___target_0;
	// UnityEngine.Rect UnityEngine.Internal_DrawWithTextSelectionArguments::position
	Rect_t2469536665  ___position_1;
	// System.Int32 UnityEngine.Internal_DrawWithTextSelectionArguments::firstPos
	int32_t ___firstPos_2;
	// System.Int32 UnityEngine.Internal_DrawWithTextSelectionArguments::lastPos
	int32_t ___lastPos_3;
	// UnityEngine.Color UnityEngine.Internal_DrawWithTextSelectionArguments::cursorColor
	Color_t3136506488  ___cursorColor_4;
	// UnityEngine.Color UnityEngine.Internal_DrawWithTextSelectionArguments::selectionColor
	Color_t3136506488  ___selectionColor_5;
	// System.Int32 UnityEngine.Internal_DrawWithTextSelectionArguments::isHover
	int32_t ___isHover_6;
	// System.Int32 UnityEngine.Internal_DrawWithTextSelectionArguments::isActive
	int32_t ___isActive_7;
	// System.Int32 UnityEngine.Internal_DrawWithTextSelectionArguments::on
	int32_t ___on_8;
	// System.Int32 UnityEngine.Internal_DrawWithTextSelectionArguments::hasKeyboardFocus
	int32_t ___hasKeyboardFocus_9;
	// System.Int32 UnityEngine.Internal_DrawWithTextSelectionArguments::drawSelectionAsComposition
	int32_t ___drawSelectionAsComposition_10;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t1247738902, ___target_0)); }
	inline IntPtr_t get_target_0() const { return ___target_0; }
	inline IntPtr_t* get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(IntPtr_t value)
	{
		___target_0 = value;
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t1247738902, ___position_1)); }
	inline Rect_t2469536665  get_position_1() const { return ___position_1; }
	inline Rect_t2469536665 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Rect_t2469536665  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_firstPos_2() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t1247738902, ___firstPos_2)); }
	inline int32_t get_firstPos_2() const { return ___firstPos_2; }
	inline int32_t* get_address_of_firstPos_2() { return &___firstPos_2; }
	inline void set_firstPos_2(int32_t value)
	{
		___firstPos_2 = value;
	}

	inline static int32_t get_offset_of_lastPos_3() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t1247738902, ___lastPos_3)); }
	inline int32_t get_lastPos_3() const { return ___lastPos_3; }
	inline int32_t* get_address_of_lastPos_3() { return &___lastPos_3; }
	inline void set_lastPos_3(int32_t value)
	{
		___lastPos_3 = value;
	}

	inline static int32_t get_offset_of_cursorColor_4() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t1247738902, ___cursorColor_4)); }
	inline Color_t3136506488  get_cursorColor_4() const { return ___cursorColor_4; }
	inline Color_t3136506488 * get_address_of_cursorColor_4() { return &___cursorColor_4; }
	inline void set_cursorColor_4(Color_t3136506488  value)
	{
		___cursorColor_4 = value;
	}

	inline static int32_t get_offset_of_selectionColor_5() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t1247738902, ___selectionColor_5)); }
	inline Color_t3136506488  get_selectionColor_5() const { return ___selectionColor_5; }
	inline Color_t3136506488 * get_address_of_selectionColor_5() { return &___selectionColor_5; }
	inline void set_selectionColor_5(Color_t3136506488  value)
	{
		___selectionColor_5 = value;
	}

	inline static int32_t get_offset_of_isHover_6() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t1247738902, ___isHover_6)); }
	inline int32_t get_isHover_6() const { return ___isHover_6; }
	inline int32_t* get_address_of_isHover_6() { return &___isHover_6; }
	inline void set_isHover_6(int32_t value)
	{
		___isHover_6 = value;
	}

	inline static int32_t get_offset_of_isActive_7() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t1247738902, ___isActive_7)); }
	inline int32_t get_isActive_7() const { return ___isActive_7; }
	inline int32_t* get_address_of_isActive_7() { return &___isActive_7; }
	inline void set_isActive_7(int32_t value)
	{
		___isActive_7 = value;
	}

	inline static int32_t get_offset_of_on_8() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t1247738902, ___on_8)); }
	inline int32_t get_on_8() const { return ___on_8; }
	inline int32_t* get_address_of_on_8() { return &___on_8; }
	inline void set_on_8(int32_t value)
	{
		___on_8 = value;
	}

	inline static int32_t get_offset_of_hasKeyboardFocus_9() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t1247738902, ___hasKeyboardFocus_9)); }
	inline int32_t get_hasKeyboardFocus_9() const { return ___hasKeyboardFocus_9; }
	inline int32_t* get_address_of_hasKeyboardFocus_9() { return &___hasKeyboardFocus_9; }
	inline void set_hasKeyboardFocus_9(int32_t value)
	{
		___hasKeyboardFocus_9 = value;
	}

	inline static int32_t get_offset_of_drawSelectionAsComposition_10() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t1247738902, ___drawSelectionAsComposition_10)); }
	inline int32_t get_drawSelectionAsComposition_10() const { return ___drawSelectionAsComposition_10; }
	inline int32_t* get_address_of_drawSelectionAsComposition_10() { return &___drawSelectionAsComposition_10; }
	inline void set_drawSelectionAsComposition_10(int32_t value)
	{
		___drawSelectionAsComposition_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_DRAWWITHTEXTSELECTIONARGUMENTS_T1247738902_H
#ifndef USERSTATE_T1300169449_H
#define USERSTATE_T1300169449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.UserState
struct  UserState_t1300169449 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UserState_t1300169449, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERSTATE_T1300169449_H
#ifndef USERSCOPE_T1971278910_H
#define USERSCOPE_T1971278910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.UserScope
struct  UserScope_t1971278910 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UserScope_t1971278910, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERSCOPE_T1971278910_H
#ifndef TIMESCOPE_T2868242971_H
#define TIMESCOPE_T2868242971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.TimeScope
struct  TimeScope_t2868242971 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.TimeScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TimeScope_t2868242971, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESCOPE_T2868242971_H
#ifndef RAY_T1507008441_H
#define RAY_T1507008441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t1507008441 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t1874995928  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t1874995928  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t1507008441, ___m_Origin_0)); }
	inline Vector3_t1874995928  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t1874995928 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t1874995928  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t1507008441, ___m_Direction_1)); }
	inline Vector3_t1874995928  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t1874995928 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t1874995928  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T1507008441_H
#ifndef SENDMESSAGEOPTIONS_T1092477406_H
#define SENDMESSAGEOPTIONS_T1092477406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMessageOptions
struct  SendMessageOptions_t1092477406 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SendMessageOptions_t1092477406, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMESSAGEOPTIONS_T1092477406_H
#ifndef RUNTIMEPLATFORM_T2149335356_H
#define RUNTIMEPLATFORM_T2149335356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t2149335356 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RuntimePlatform_t2149335356, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPLATFORM_T2149335356_H
#ifndef OPERATINGSYSTEMFAMILY_T485496440_H
#define OPERATINGSYSTEMFAMILY_T485496440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.OperatingSystemFamily
struct  OperatingSystemFamily_t485496440 
{
public:
	// System.Int32 UnityEngine.OperatingSystemFamily::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OperatingSystemFamily_t485496440, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATINGSYSTEMFAMILY_T485496440_H
#ifndef LOGTYPE_T656384674_H
#define LOGTYPE_T656384674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t656384674 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t656384674, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGTYPE_T656384674_H
#ifndef GCLEADERBOARD_T1548357845_H
#define GCLEADERBOARD_T1548357845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct  GcLeaderboard_t1548357845  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::m_InternalLeaderboard
	IntPtr_t ___m_InternalLeaderboard_0;
	// UnityEngine.SocialPlatforms.Impl.Leaderboard UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::m_GenericLeaderboard
	Leaderboard_t1235456057 * ___m_GenericLeaderboard_1;

public:
	inline static int32_t get_offset_of_m_InternalLeaderboard_0() { return static_cast<int32_t>(offsetof(GcLeaderboard_t1548357845, ___m_InternalLeaderboard_0)); }
	inline IntPtr_t get_m_InternalLeaderboard_0() const { return ___m_InternalLeaderboard_0; }
	inline IntPtr_t* get_address_of_m_InternalLeaderboard_0() { return &___m_InternalLeaderboard_0; }
	inline void set_m_InternalLeaderboard_0(IntPtr_t value)
	{
		___m_InternalLeaderboard_0 = value;
	}

	inline static int32_t get_offset_of_m_GenericLeaderboard_1() { return static_cast<int32_t>(offsetof(GcLeaderboard_t1548357845, ___m_GenericLeaderboard_1)); }
	inline Leaderboard_t1235456057 * get_m_GenericLeaderboard_1() const { return ___m_GenericLeaderboard_1; }
	inline Leaderboard_t1235456057 ** get_address_of_m_GenericLeaderboard_1() { return &___m_GenericLeaderboard_1; }
	inline void set_m_GenericLeaderboard_1(Leaderboard_t1235456057 * value)
	{
		___m_GenericLeaderboard_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_GenericLeaderboard_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t1548357845_marshaled_pinvoke
{
	intptr_t ___m_InternalLeaderboard_0;
	Leaderboard_t1235456057 * ___m_GenericLeaderboard_1;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t1548357845_marshaled_com
{
	intptr_t ___m_InternalLeaderboard_0;
	Leaderboard_t1235456057 * ___m_GenericLeaderboard_1;
};
#endif // GCLEADERBOARD_T1548357845_H
#ifndef TEXTUREWRAPMODE_T2186063332_H
#define TEXTUREWRAPMODE_T2186063332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t2186063332 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureWrapMode_t2186063332, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREWRAPMODE_T2186063332_H
#ifndef RANGEATTRIBUTE_T536801034_H
#define RANGEATTRIBUTE_T536801034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeAttribute
struct  RangeAttribute_t536801034  : public PropertyAttribute_t3175850472
{
public:
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_0;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(RangeAttribute_t536801034, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(RangeAttribute_t536801034, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEATTRIBUTE_T536801034_H
#ifndef TEXTUREFORMAT_T2536991944_H
#define TEXTUREFORMAT_T2536991944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2536991944 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2536991944, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T2536991944_H
#ifndef COMPAREFUNCTION_T324435444_H
#define COMPAREFUNCTION_T324435444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CompareFunction
struct  CompareFunction_t324435444 
{
public:
	// System.Int32 UnityEngine.Rendering.CompareFunction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompareFunction_t324435444, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREFUNCTION_T324435444_H
#ifndef STENCILOP_T3821324946_H
#define STENCILOP_T3821324946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.StencilOp
struct  StencilOp_t3821324946 
{
public:
	// System.Int32 UnityEngine.Rendering.StencilOp::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StencilOp_t3821324946, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STENCILOP_T3821324946_H
#ifndef SPACEATTRIBUTE_T658595587_H
#define SPACEATTRIBUTE_T658595587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpaceAttribute
struct  SpaceAttribute_t658595587  : public PropertyAttribute_t3175850472
{
public:
	// System.Single UnityEngine.SpaceAttribute::height
	float ___height_0;

public:
	inline static int32_t get_offset_of_height_0() { return static_cast<int32_t>(offsetof(SpaceAttribute_t658595587, ___height_0)); }
	inline float get_height_0() const { return ___height_0; }
	inline float* get_address_of_height_0() { return &___height_0; }
	inline void set_height_0(float value)
	{
		___height_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACEATTRIBUTE_T658595587_H
#ifndef KEYCODE_T1751619527_H
#define KEYCODE_T1751619527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t1751619527 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t1751619527, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T1751619527_H
#ifndef MATHFINTERNAL_T1979644577_H
#define MATHFINTERNAL_T1979644577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.MathfInternal
struct  MathfInternal_t1979644577 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MathfInternal_t1979644577__padding[1];
	};

public:
};

struct MathfInternal_t1979644577_StaticFields
{
public:
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinNormal
	float ___FloatMinNormal_0;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinDenormal
	float ___FloatMinDenormal_1;
	// System.Boolean UnityEngineInternal.MathfInternal::IsFlushToZeroEnabled
	bool ___IsFlushToZeroEnabled_2;

public:
	inline static int32_t get_offset_of_FloatMinNormal_0() { return static_cast<int32_t>(offsetof(MathfInternal_t1979644577_StaticFields, ___FloatMinNormal_0)); }
	inline float get_FloatMinNormal_0() const { return ___FloatMinNormal_0; }
	inline float* get_address_of_FloatMinNormal_0() { return &___FloatMinNormal_0; }
	inline void set_FloatMinNormal_0(float value)
	{
		___FloatMinNormal_0 = value;
	}

	inline static int32_t get_offset_of_FloatMinDenormal_1() { return static_cast<int32_t>(offsetof(MathfInternal_t1979644577_StaticFields, ___FloatMinDenormal_1)); }
	inline float get_FloatMinDenormal_1() const { return ___FloatMinDenormal_1; }
	inline float* get_address_of_FloatMinDenormal_1() { return &___FloatMinDenormal_1; }
	inline void set_FloatMinDenormal_1(float value)
	{
		___FloatMinDenormal_1 = value;
	}

	inline static int32_t get_offset_of_IsFlushToZeroEnabled_2() { return static_cast<int32_t>(offsetof(MathfInternal_t1979644577_StaticFields, ___IsFlushToZeroEnabled_2)); }
	inline bool get_IsFlushToZeroEnabled_2() const { return ___IsFlushToZeroEnabled_2; }
	inline bool* get_address_of_IsFlushToZeroEnabled_2() { return &___IsFlushToZeroEnabled_2; }
	inline void set_IsFlushToZeroEnabled_2(bool value)
	{
		___IsFlushToZeroEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHFINTERNAL_T1979644577_H
#ifndef PLANE_T3293887620_H
#define PLANE_T3293887620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Plane
struct  Plane_t3293887620 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t1874995928  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t3293887620, ___m_Normal_0)); }
	inline Vector3_t1874995928  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t1874995928 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t1874995928  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t3293887620, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANE_T3293887620_H
#ifndef TOOLTIPATTRIBUTE_T2393142556_H
#define TOOLTIPATTRIBUTE_T2393142556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TooltipAttribute
struct  TooltipAttribute_t2393142556  : public PropertyAttribute_t3175850472
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_0;

public:
	inline static int32_t get_offset_of_tooltip_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t2393142556, ___tooltip_0)); }
	inline String_t* get_tooltip_0() const { return ___tooltip_0; }
	inline String_t** get_address_of_tooltip_0() { return &___tooltip_0; }
	inline void set_tooltip_0(String_t* value)
	{
		___tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((&___tooltip_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLTIPATTRIBUTE_T2393142556_H
#ifndef CAMERACLEARFLAGS_T536205005_H
#define CAMERACLEARFLAGS_T536205005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CameraClearFlags
struct  CameraClearFlags_t536205005 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraClearFlags_t536205005, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACLEARFLAGS_T536205005_H
#ifndef DATETIME_T816944984_H
#define DATETIME_T816944984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t816944984 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t1868885790  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t816944984, ___ticks_0)); }
	inline TimeSpan_t1868885790  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t1868885790 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t1868885790  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t816944984, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t816944984_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t816944984  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t816944984  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t2238447960* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t2238447960* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t2238447960* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t2238447960* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t2238447960* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t2238447960* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t2238447960* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t1771696264* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t1771696264* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t816944984_StaticFields, ___MaxValue_2)); }
	inline DateTime_t816944984  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t816944984 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t816944984  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t816944984_StaticFields, ___MinValue_3)); }
	inline DateTime_t816944984  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t816944984 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t816944984  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t816944984_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t2238447960* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t2238447960** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t2238447960* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t816944984_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t2238447960* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t2238447960** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t2238447960* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t816944984_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t2238447960* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t2238447960** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t2238447960* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t816944984_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t2238447960* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t2238447960** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t2238447960* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t816944984_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t2238447960* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t2238447960** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t2238447960* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t816944984_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t2238447960* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t2238447960** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t2238447960* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t816944984_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t2238447960* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t2238447960** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t2238447960* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t816944984_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t1771696264* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t1771696264** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t1771696264* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t816944984_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t1771696264* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t1771696264** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t1771696264* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t816944984_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t816944984_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T816944984_H
#ifndef USERPROFILE_T778432599_H
#define USERPROFILE_T778432599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.UserProfile
struct  UserProfile_t778432599  : public RuntimeObject
{
public:
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_UserName
	String_t* ___m_UserName_0;
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_ID
	String_t* ___m_ID_1;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::m_IsFriend
	bool ___m_IsFriend_2;
	// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::m_State
	int32_t ___m_State_3;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Impl.UserProfile::m_Image
	Texture2D_t4076404164 * ___m_Image_4;

public:
	inline static int32_t get_offset_of_m_UserName_0() { return static_cast<int32_t>(offsetof(UserProfile_t778432599, ___m_UserName_0)); }
	inline String_t* get_m_UserName_0() const { return ___m_UserName_0; }
	inline String_t** get_address_of_m_UserName_0() { return &___m_UserName_0; }
	inline void set_m_UserName_0(String_t* value)
	{
		___m_UserName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_UserName_0), value);
	}

	inline static int32_t get_offset_of_m_ID_1() { return static_cast<int32_t>(offsetof(UserProfile_t778432599, ___m_ID_1)); }
	inline String_t* get_m_ID_1() const { return ___m_ID_1; }
	inline String_t** get_address_of_m_ID_1() { return &___m_ID_1; }
	inline void set_m_ID_1(String_t* value)
	{
		___m_ID_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ID_1), value);
	}

	inline static int32_t get_offset_of_m_IsFriend_2() { return static_cast<int32_t>(offsetof(UserProfile_t778432599, ___m_IsFriend_2)); }
	inline bool get_m_IsFriend_2() const { return ___m_IsFriend_2; }
	inline bool* get_address_of_m_IsFriend_2() { return &___m_IsFriend_2; }
	inline void set_m_IsFriend_2(bool value)
	{
		___m_IsFriend_2 = value;
	}

	inline static int32_t get_offset_of_m_State_3() { return static_cast<int32_t>(offsetof(UserProfile_t778432599, ___m_State_3)); }
	inline int32_t get_m_State_3() const { return ___m_State_3; }
	inline int32_t* get_address_of_m_State_3() { return &___m_State_3; }
	inline void set_m_State_3(int32_t value)
	{
		___m_State_3 = value;
	}

	inline static int32_t get_offset_of_m_Image_4() { return static_cast<int32_t>(offsetof(UserProfile_t778432599, ___m_Image_4)); }
	inline Texture2D_t4076404164 * get_m_Image_4() const { return ___m_Image_4; }
	inline Texture2D_t4076404164 ** get_address_of_m_Image_4() { return &___m_Image_4; }
	inline void set_m_Image_4(Texture2D_t4076404164 * value)
	{
		___m_Image_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERPROFILE_T778432599_H
#ifndef TEXTEDITOR_T73873660_H
#define TEXTEDITOR_T73873660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextEditor
struct  TextEditor_t73873660  : public RuntimeObject
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.TextEditor::keyboardOnScreen
	TouchScreenKeyboard_t2626315871 * ___keyboardOnScreen_0;
	// System.Int32 UnityEngine.TextEditor::controlID
	int32_t ___controlID_1;
	// UnityEngine.GUIStyle UnityEngine.TextEditor::style
	GUIStyle_t350904686 * ___style_2;
	// System.Boolean UnityEngine.TextEditor::multiline
	bool ___multiline_3;
	// System.Boolean UnityEngine.TextEditor::hasHorizontalCursorPos
	bool ___hasHorizontalCursorPos_4;
	// System.Boolean UnityEngine.TextEditor::isPasswordField
	bool ___isPasswordField_5;
	// UnityEngine.Vector2 UnityEngine.TextEditor::scrollOffset
	Vector2_t1870731928  ___scrollOffset_6;
	// UnityEngine.GUIContent UnityEngine.TextEditor::m_Content
	GUIContent_t2918791183 * ___m_Content_7;
	// System.Int32 UnityEngine.TextEditor::m_CursorIndex
	int32_t ___m_CursorIndex_8;
	// System.Int32 UnityEngine.TextEditor::m_SelectIndex
	int32_t ___m_SelectIndex_9;
	// System.Boolean UnityEngine.TextEditor::m_RevealCursor
	bool ___m_RevealCursor_10;
	// System.Boolean UnityEngine.TextEditor::m_MouseDragSelectsWholeWords
	bool ___m_MouseDragSelectsWholeWords_11;
	// System.Int32 UnityEngine.TextEditor::m_DblClickInitPos
	int32_t ___m_DblClickInitPos_12;
	// UnityEngine.TextEditor/DblClickSnapping UnityEngine.TextEditor::m_DblClickSnap
	uint8_t ___m_DblClickSnap_13;
	// System.Boolean UnityEngine.TextEditor::m_bJustSelected
	bool ___m_bJustSelected_14;
	// System.Int32 UnityEngine.TextEditor::m_iAltCursorPos
	int32_t ___m_iAltCursorPos_15;

public:
	inline static int32_t get_offset_of_keyboardOnScreen_0() { return static_cast<int32_t>(offsetof(TextEditor_t73873660, ___keyboardOnScreen_0)); }
	inline TouchScreenKeyboard_t2626315871 * get_keyboardOnScreen_0() const { return ___keyboardOnScreen_0; }
	inline TouchScreenKeyboard_t2626315871 ** get_address_of_keyboardOnScreen_0() { return &___keyboardOnScreen_0; }
	inline void set_keyboardOnScreen_0(TouchScreenKeyboard_t2626315871 * value)
	{
		___keyboardOnScreen_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyboardOnScreen_0), value);
	}

	inline static int32_t get_offset_of_controlID_1() { return static_cast<int32_t>(offsetof(TextEditor_t73873660, ___controlID_1)); }
	inline int32_t get_controlID_1() const { return ___controlID_1; }
	inline int32_t* get_address_of_controlID_1() { return &___controlID_1; }
	inline void set_controlID_1(int32_t value)
	{
		___controlID_1 = value;
	}

	inline static int32_t get_offset_of_style_2() { return static_cast<int32_t>(offsetof(TextEditor_t73873660, ___style_2)); }
	inline GUIStyle_t350904686 * get_style_2() const { return ___style_2; }
	inline GUIStyle_t350904686 ** get_address_of_style_2() { return &___style_2; }
	inline void set_style_2(GUIStyle_t350904686 * value)
	{
		___style_2 = value;
		Il2CppCodeGenWriteBarrier((&___style_2), value);
	}

	inline static int32_t get_offset_of_multiline_3() { return static_cast<int32_t>(offsetof(TextEditor_t73873660, ___multiline_3)); }
	inline bool get_multiline_3() const { return ___multiline_3; }
	inline bool* get_address_of_multiline_3() { return &___multiline_3; }
	inline void set_multiline_3(bool value)
	{
		___multiline_3 = value;
	}

	inline static int32_t get_offset_of_hasHorizontalCursorPos_4() { return static_cast<int32_t>(offsetof(TextEditor_t73873660, ___hasHorizontalCursorPos_4)); }
	inline bool get_hasHorizontalCursorPos_4() const { return ___hasHorizontalCursorPos_4; }
	inline bool* get_address_of_hasHorizontalCursorPos_4() { return &___hasHorizontalCursorPos_4; }
	inline void set_hasHorizontalCursorPos_4(bool value)
	{
		___hasHorizontalCursorPos_4 = value;
	}

	inline static int32_t get_offset_of_isPasswordField_5() { return static_cast<int32_t>(offsetof(TextEditor_t73873660, ___isPasswordField_5)); }
	inline bool get_isPasswordField_5() const { return ___isPasswordField_5; }
	inline bool* get_address_of_isPasswordField_5() { return &___isPasswordField_5; }
	inline void set_isPasswordField_5(bool value)
	{
		___isPasswordField_5 = value;
	}

	inline static int32_t get_offset_of_scrollOffset_6() { return static_cast<int32_t>(offsetof(TextEditor_t73873660, ___scrollOffset_6)); }
	inline Vector2_t1870731928  get_scrollOffset_6() const { return ___scrollOffset_6; }
	inline Vector2_t1870731928 * get_address_of_scrollOffset_6() { return &___scrollOffset_6; }
	inline void set_scrollOffset_6(Vector2_t1870731928  value)
	{
		___scrollOffset_6 = value;
	}

	inline static int32_t get_offset_of_m_Content_7() { return static_cast<int32_t>(offsetof(TextEditor_t73873660, ___m_Content_7)); }
	inline GUIContent_t2918791183 * get_m_Content_7() const { return ___m_Content_7; }
	inline GUIContent_t2918791183 ** get_address_of_m_Content_7() { return &___m_Content_7; }
	inline void set_m_Content_7(GUIContent_t2918791183 * value)
	{
		___m_Content_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Content_7), value);
	}

	inline static int32_t get_offset_of_m_CursorIndex_8() { return static_cast<int32_t>(offsetof(TextEditor_t73873660, ___m_CursorIndex_8)); }
	inline int32_t get_m_CursorIndex_8() const { return ___m_CursorIndex_8; }
	inline int32_t* get_address_of_m_CursorIndex_8() { return &___m_CursorIndex_8; }
	inline void set_m_CursorIndex_8(int32_t value)
	{
		___m_CursorIndex_8 = value;
	}

	inline static int32_t get_offset_of_m_SelectIndex_9() { return static_cast<int32_t>(offsetof(TextEditor_t73873660, ___m_SelectIndex_9)); }
	inline int32_t get_m_SelectIndex_9() const { return ___m_SelectIndex_9; }
	inline int32_t* get_address_of_m_SelectIndex_9() { return &___m_SelectIndex_9; }
	inline void set_m_SelectIndex_9(int32_t value)
	{
		___m_SelectIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_RevealCursor_10() { return static_cast<int32_t>(offsetof(TextEditor_t73873660, ___m_RevealCursor_10)); }
	inline bool get_m_RevealCursor_10() const { return ___m_RevealCursor_10; }
	inline bool* get_address_of_m_RevealCursor_10() { return &___m_RevealCursor_10; }
	inline void set_m_RevealCursor_10(bool value)
	{
		___m_RevealCursor_10 = value;
	}

	inline static int32_t get_offset_of_m_MouseDragSelectsWholeWords_11() { return static_cast<int32_t>(offsetof(TextEditor_t73873660, ___m_MouseDragSelectsWholeWords_11)); }
	inline bool get_m_MouseDragSelectsWholeWords_11() const { return ___m_MouseDragSelectsWholeWords_11; }
	inline bool* get_address_of_m_MouseDragSelectsWholeWords_11() { return &___m_MouseDragSelectsWholeWords_11; }
	inline void set_m_MouseDragSelectsWholeWords_11(bool value)
	{
		___m_MouseDragSelectsWholeWords_11 = value;
	}

	inline static int32_t get_offset_of_m_DblClickInitPos_12() { return static_cast<int32_t>(offsetof(TextEditor_t73873660, ___m_DblClickInitPos_12)); }
	inline int32_t get_m_DblClickInitPos_12() const { return ___m_DblClickInitPos_12; }
	inline int32_t* get_address_of_m_DblClickInitPos_12() { return &___m_DblClickInitPos_12; }
	inline void set_m_DblClickInitPos_12(int32_t value)
	{
		___m_DblClickInitPos_12 = value;
	}

	inline static int32_t get_offset_of_m_DblClickSnap_13() { return static_cast<int32_t>(offsetof(TextEditor_t73873660, ___m_DblClickSnap_13)); }
	inline uint8_t get_m_DblClickSnap_13() const { return ___m_DblClickSnap_13; }
	inline uint8_t* get_address_of_m_DblClickSnap_13() { return &___m_DblClickSnap_13; }
	inline void set_m_DblClickSnap_13(uint8_t value)
	{
		___m_DblClickSnap_13 = value;
	}

	inline static int32_t get_offset_of_m_bJustSelected_14() { return static_cast<int32_t>(offsetof(TextEditor_t73873660, ___m_bJustSelected_14)); }
	inline bool get_m_bJustSelected_14() const { return ___m_bJustSelected_14; }
	inline bool* get_address_of_m_bJustSelected_14() { return &___m_bJustSelected_14; }
	inline void set_m_bJustSelected_14(bool value)
	{
		___m_bJustSelected_14 = value;
	}

	inline static int32_t get_offset_of_m_iAltCursorPos_15() { return static_cast<int32_t>(offsetof(TextEditor_t73873660, ___m_iAltCursorPos_15)); }
	inline int32_t get_m_iAltCursorPos_15() const { return ___m_iAltCursorPos_15; }
	inline int32_t* get_address_of_m_iAltCursorPos_15() { return &___m_iAltCursorPos_15; }
	inline void set_m_iAltCursorPos_15(int32_t value)
	{
		___m_iAltCursorPos_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTEDITOR_T73873660_H
#ifndef LEADERBOARD_T1235456057_H
#define LEADERBOARD_T1235456057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct  Leaderboard_t1235456057  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Loading
	bool ___m_Loading_0;
	// UnityEngine.SocialPlatforms.IScore UnityEngine.SocialPlatforms.Impl.Leaderboard::m_LocalUserScore
	RuntimeObject* ___m_LocalUserScore_1;
	// System.UInt32 UnityEngine.SocialPlatforms.Impl.Leaderboard::m_MaxRange
	uint32_t ___m_MaxRange_2;
	// UnityEngine.SocialPlatforms.IScore[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Scores
	IScoreU5BU5D_t2900809688* ___m_Scores_3;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Title
	String_t* ___m_Title_4;
	// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_UserIDs
	StringU5BU5D_t2238447960* ___m_UserIDs_5;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_6;
	// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<userScope>k__BackingField
	int32_t ___U3CuserScopeU3Ek__BackingField_7;
	// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::<range>k__BackingField
	Range_t566114770  ___U3CrangeU3Ek__BackingField_8;
	// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<timeScope>k__BackingField
	int32_t ___U3CtimeScopeU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_m_Loading_0() { return static_cast<int32_t>(offsetof(Leaderboard_t1235456057, ___m_Loading_0)); }
	inline bool get_m_Loading_0() const { return ___m_Loading_0; }
	inline bool* get_address_of_m_Loading_0() { return &___m_Loading_0; }
	inline void set_m_Loading_0(bool value)
	{
		___m_Loading_0 = value;
	}

	inline static int32_t get_offset_of_m_LocalUserScore_1() { return static_cast<int32_t>(offsetof(Leaderboard_t1235456057, ___m_LocalUserScore_1)); }
	inline RuntimeObject* get_m_LocalUserScore_1() const { return ___m_LocalUserScore_1; }
	inline RuntimeObject** get_address_of_m_LocalUserScore_1() { return &___m_LocalUserScore_1; }
	inline void set_m_LocalUserScore_1(RuntimeObject* value)
	{
		___m_LocalUserScore_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalUserScore_1), value);
	}

	inline static int32_t get_offset_of_m_MaxRange_2() { return static_cast<int32_t>(offsetof(Leaderboard_t1235456057, ___m_MaxRange_2)); }
	inline uint32_t get_m_MaxRange_2() const { return ___m_MaxRange_2; }
	inline uint32_t* get_address_of_m_MaxRange_2() { return &___m_MaxRange_2; }
	inline void set_m_MaxRange_2(uint32_t value)
	{
		___m_MaxRange_2 = value;
	}

	inline static int32_t get_offset_of_m_Scores_3() { return static_cast<int32_t>(offsetof(Leaderboard_t1235456057, ___m_Scores_3)); }
	inline IScoreU5BU5D_t2900809688* get_m_Scores_3() const { return ___m_Scores_3; }
	inline IScoreU5BU5D_t2900809688** get_address_of_m_Scores_3() { return &___m_Scores_3; }
	inline void set_m_Scores_3(IScoreU5BU5D_t2900809688* value)
	{
		___m_Scores_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Scores_3), value);
	}

	inline static int32_t get_offset_of_m_Title_4() { return static_cast<int32_t>(offsetof(Leaderboard_t1235456057, ___m_Title_4)); }
	inline String_t* get_m_Title_4() const { return ___m_Title_4; }
	inline String_t** get_address_of_m_Title_4() { return &___m_Title_4; }
	inline void set_m_Title_4(String_t* value)
	{
		___m_Title_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Title_4), value);
	}

	inline static int32_t get_offset_of_m_UserIDs_5() { return static_cast<int32_t>(offsetof(Leaderboard_t1235456057, ___m_UserIDs_5)); }
	inline StringU5BU5D_t2238447960* get_m_UserIDs_5() const { return ___m_UserIDs_5; }
	inline StringU5BU5D_t2238447960** get_address_of_m_UserIDs_5() { return &___m_UserIDs_5; }
	inline void set_m_UserIDs_5(StringU5BU5D_t2238447960* value)
	{
		___m_UserIDs_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_UserIDs_5), value);
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Leaderboard_t1235456057, ___U3CidU3Ek__BackingField_6)); }
	inline String_t* get_U3CidU3Ek__BackingField_6() const { return ___U3CidU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_6() { return &___U3CidU3Ek__BackingField_6; }
	inline void set_U3CidU3Ek__BackingField_6(String_t* value)
	{
		___U3CidU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CuserScopeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Leaderboard_t1235456057, ___U3CuserScopeU3Ek__BackingField_7)); }
	inline int32_t get_U3CuserScopeU3Ek__BackingField_7() const { return ___U3CuserScopeU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CuserScopeU3Ek__BackingField_7() { return &___U3CuserScopeU3Ek__BackingField_7; }
	inline void set_U3CuserScopeU3Ek__BackingField_7(int32_t value)
	{
		___U3CuserScopeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CrangeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Leaderboard_t1235456057, ___U3CrangeU3Ek__BackingField_8)); }
	inline Range_t566114770  get_U3CrangeU3Ek__BackingField_8() const { return ___U3CrangeU3Ek__BackingField_8; }
	inline Range_t566114770 * get_address_of_U3CrangeU3Ek__BackingField_8() { return &___U3CrangeU3Ek__BackingField_8; }
	inline void set_U3CrangeU3Ek__BackingField_8(Range_t566114770  value)
	{
		___U3CrangeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CtimeScopeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Leaderboard_t1235456057, ___U3CtimeScopeU3Ek__BackingField_9)); }
	inline int32_t get_U3CtimeScopeU3Ek__BackingField_9() const { return ___U3CtimeScopeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CtimeScopeU3Ek__BackingField_9() { return &___U3CtimeScopeU3Ek__BackingField_9; }
	inline void set_U3CtimeScopeU3Ek__BackingField_9(int32_t value)
	{
		___U3CtimeScopeU3Ek__BackingField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEADERBOARD_T1235456057_H
#ifndef PERSISTENTCALL_T2857996205_H
#define PERSISTENTCALL_T2857996205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCall
struct  PersistentCall_t2857996205  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.PersistentCall::m_Target
	Object_t1699899486 * ___m_Target_0;
	// System.String UnityEngine.Events.PersistentCall::m_MethodName
	String_t* ___m_MethodName_1;
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode_2;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t618466815 * ___m_Arguments_3;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(PersistentCall_t2857996205, ___m_Target_0)); }
	inline Object_t1699899486 * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_t1699899486 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_t1699899486 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_MethodName_1() { return static_cast<int32_t>(offsetof(PersistentCall_t2857996205, ___m_MethodName_1)); }
	inline String_t* get_m_MethodName_1() const { return ___m_MethodName_1; }
	inline String_t** get_address_of_m_MethodName_1() { return &___m_MethodName_1; }
	inline void set_m_MethodName_1(String_t* value)
	{
		___m_MethodName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MethodName_1), value);
	}

	inline static int32_t get_offset_of_m_Mode_2() { return static_cast<int32_t>(offsetof(PersistentCall_t2857996205, ___m_Mode_2)); }
	inline int32_t get_m_Mode_2() const { return ___m_Mode_2; }
	inline int32_t* get_address_of_m_Mode_2() { return &___m_Mode_2; }
	inline void set_m_Mode_2(int32_t value)
	{
		___m_Mode_2 = value;
	}

	inline static int32_t get_offset_of_m_Arguments_3() { return static_cast<int32_t>(offsetof(PersistentCall_t2857996205, ___m_Arguments_3)); }
	inline ArgumentCache_t618466815 * get_m_Arguments_3() const { return ___m_Arguments_3; }
	inline ArgumentCache_t618466815 ** get_address_of_m_Arguments_3() { return &___m_Arguments_3; }
	inline void set_m_Arguments_3(ArgumentCache_t618466815 * value)
	{
		___m_Arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Arguments_3), value);
	}

	inline static int32_t get_offset_of_m_CallState_4() { return static_cast<int32_t>(offsetof(PersistentCall_t2857996205, ___m_CallState_4)); }
	inline int32_t get_m_CallState_4() const { return ___m_CallState_4; }
	inline int32_t* get_address_of_m_CallState_4() { return &___m_CallState_4; }
	inline void set_m_CallState_4(int32_t value)
	{
		___m_CallState_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALL_T2857996205_H
#ifndef MULTICASTDELEGATE_T868286602_H
#define MULTICASTDELEGATE_T868286602_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t868286602  : public Delegate_t321273466
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t868286602 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t868286602 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t868286602, ___prev_9)); }
	inline MulticastDelegate_t868286602 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t868286602 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t868286602 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t868286602, ___kpm_next_10)); }
	inline MulticastDelegate_t868286602 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t868286602 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t868286602 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T868286602_H
#ifndef ACHIEVEMENT_T4251433276_H
#define ACHIEVEMENT_T4251433276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.Achievement
struct  Achievement_t4251433276  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::m_Completed
	bool ___m_Completed_0;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::m_Hidden
	bool ___m_Hidden_1;
	// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::m_LastReportedDate
	DateTime_t816944984  ___m_LastReportedDate_2;
	// System.String UnityEngine.SocialPlatforms.Impl.Achievement::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_3;
	// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::<percentCompleted>k__BackingField
	double ___U3CpercentCompletedU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_m_Completed_0() { return static_cast<int32_t>(offsetof(Achievement_t4251433276, ___m_Completed_0)); }
	inline bool get_m_Completed_0() const { return ___m_Completed_0; }
	inline bool* get_address_of_m_Completed_0() { return &___m_Completed_0; }
	inline void set_m_Completed_0(bool value)
	{
		___m_Completed_0 = value;
	}

	inline static int32_t get_offset_of_m_Hidden_1() { return static_cast<int32_t>(offsetof(Achievement_t4251433276, ___m_Hidden_1)); }
	inline bool get_m_Hidden_1() const { return ___m_Hidden_1; }
	inline bool* get_address_of_m_Hidden_1() { return &___m_Hidden_1; }
	inline void set_m_Hidden_1(bool value)
	{
		___m_Hidden_1 = value;
	}

	inline static int32_t get_offset_of_m_LastReportedDate_2() { return static_cast<int32_t>(offsetof(Achievement_t4251433276, ___m_LastReportedDate_2)); }
	inline DateTime_t816944984  get_m_LastReportedDate_2() const { return ___m_LastReportedDate_2; }
	inline DateTime_t816944984 * get_address_of_m_LastReportedDate_2() { return &___m_LastReportedDate_2; }
	inline void set_m_LastReportedDate_2(DateTime_t816944984  value)
	{
		___m_LastReportedDate_2 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Achievement_t4251433276, ___U3CidU3Ek__BackingField_3)); }
	inline String_t* get_U3CidU3Ek__BackingField_3() const { return ___U3CidU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_3() { return &___U3CidU3Ek__BackingField_3; }
	inline void set_U3CidU3Ek__BackingField_3(String_t* value)
	{
		___U3CidU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CpercentCompletedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Achievement_t4251433276, ___U3CpercentCompletedU3Ek__BackingField_4)); }
	inline double get_U3CpercentCompletedU3Ek__BackingField_4() const { return ___U3CpercentCompletedU3Ek__BackingField_4; }
	inline double* get_address_of_U3CpercentCompletedU3Ek__BackingField_4() { return &___U3CpercentCompletedU3Ek__BackingField_4; }
	inline void set_U3CpercentCompletedU3Ek__BackingField_4(double value)
	{
		___U3CpercentCompletedU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACHIEVEMENT_T4251433276_H
#ifndef LOCALUSER_T3045384341_H
#define LOCALUSER_T3045384341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.LocalUser
struct  LocalUser_t3045384341  : public UserProfile_t778432599
{
public:
	// UnityEngine.SocialPlatforms.IUserProfile[] UnityEngine.SocialPlatforms.Impl.LocalUser::m_Friends
	IUserProfileU5BU5D_t3837827452* ___m_Friends_5;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Authenticated
	bool ___m_Authenticated_6;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Underage
	bool ___m_Underage_7;

public:
	inline static int32_t get_offset_of_m_Friends_5() { return static_cast<int32_t>(offsetof(LocalUser_t3045384341, ___m_Friends_5)); }
	inline IUserProfileU5BU5D_t3837827452* get_m_Friends_5() const { return ___m_Friends_5; }
	inline IUserProfileU5BU5D_t3837827452** get_address_of_m_Friends_5() { return &___m_Friends_5; }
	inline void set_m_Friends_5(IUserProfileU5BU5D_t3837827452* value)
	{
		___m_Friends_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Friends_5), value);
	}

	inline static int32_t get_offset_of_m_Authenticated_6() { return static_cast<int32_t>(offsetof(LocalUser_t3045384341, ___m_Authenticated_6)); }
	inline bool get_m_Authenticated_6() const { return ___m_Authenticated_6; }
	inline bool* get_address_of_m_Authenticated_6() { return &___m_Authenticated_6; }
	inline void set_m_Authenticated_6(bool value)
	{
		___m_Authenticated_6 = value;
	}

	inline static int32_t get_offset_of_m_Underage_7() { return static_cast<int32_t>(offsetof(LocalUser_t3045384341, ___m_Underage_7)); }
	inline bool get_m_Underage_7() const { return ___m_Underage_7; }
	inline bool* get_address_of_m_Underage_7() { return &___m_Underage_7; }
	inline void set_m_Underage_7(bool value)
	{
		___m_Underage_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALUSER_T3045384341_H
#ifndef UPDATEDEVENTHANDLER_T4030213559_H
#define UPDATEDEVENTHANDLER_T4030213559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings/UpdatedEventHandler
struct  UpdatedEventHandler_t4030213559  : public MulticastDelegate_t868286602
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEDEVENTHANDLER_T4030213559_H
#ifndef UNITYACTION_T1065709194_H
#define UNITYACTION_T1065709194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t1065709194  : public MulticastDelegate_t868286602
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T1065709194_H
#ifndef SCORE_T3892511509_H
#define SCORE_T3892511509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.Score
struct  Score_t3892511509  : public RuntimeObject
{
public:
	// System.DateTime UnityEngine.SocialPlatforms.Impl.Score::m_Date
	DateTime_t816944984  ___m_Date_0;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_FormattedValue
	String_t* ___m_FormattedValue_1;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_UserID
	String_t* ___m_UserID_2;
	// System.Int32 UnityEngine.SocialPlatforms.Impl.Score::m_Rank
	int32_t ___m_Rank_3;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::<leaderboardID>k__BackingField
	String_t* ___U3CleaderboardIDU3Ek__BackingField_4;
	// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::<value>k__BackingField
	int64_t ___U3CvalueU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_Date_0() { return static_cast<int32_t>(offsetof(Score_t3892511509, ___m_Date_0)); }
	inline DateTime_t816944984  get_m_Date_0() const { return ___m_Date_0; }
	inline DateTime_t816944984 * get_address_of_m_Date_0() { return &___m_Date_0; }
	inline void set_m_Date_0(DateTime_t816944984  value)
	{
		___m_Date_0 = value;
	}

	inline static int32_t get_offset_of_m_FormattedValue_1() { return static_cast<int32_t>(offsetof(Score_t3892511509, ___m_FormattedValue_1)); }
	inline String_t* get_m_FormattedValue_1() const { return ___m_FormattedValue_1; }
	inline String_t** get_address_of_m_FormattedValue_1() { return &___m_FormattedValue_1; }
	inline void set_m_FormattedValue_1(String_t* value)
	{
		___m_FormattedValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_FormattedValue_1), value);
	}

	inline static int32_t get_offset_of_m_UserID_2() { return static_cast<int32_t>(offsetof(Score_t3892511509, ___m_UserID_2)); }
	inline String_t* get_m_UserID_2() const { return ___m_UserID_2; }
	inline String_t** get_address_of_m_UserID_2() { return &___m_UserID_2; }
	inline void set_m_UserID_2(String_t* value)
	{
		___m_UserID_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_UserID_2), value);
	}

	inline static int32_t get_offset_of_m_Rank_3() { return static_cast<int32_t>(offsetof(Score_t3892511509, ___m_Rank_3)); }
	inline int32_t get_m_Rank_3() const { return ___m_Rank_3; }
	inline int32_t* get_address_of_m_Rank_3() { return &___m_Rank_3; }
	inline void set_m_Rank_3(int32_t value)
	{
		___m_Rank_3 = value;
	}

	inline static int32_t get_offset_of_U3CleaderboardIDU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Score_t3892511509, ___U3CleaderboardIDU3Ek__BackingField_4)); }
	inline String_t* get_U3CleaderboardIDU3Ek__BackingField_4() const { return ___U3CleaderboardIDU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CleaderboardIDU3Ek__BackingField_4() { return &___U3CleaderboardIDU3Ek__BackingField_4; }
	inline void set_U3CleaderboardIDU3Ek__BackingField_4(String_t* value)
	{
		___U3CleaderboardIDU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CleaderboardIDU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CvalueU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Score_t3892511509, ___U3CvalueU3Ek__BackingField_5)); }
	inline int64_t get_U3CvalueU3Ek__BackingField_5() const { return ___U3CvalueU3Ek__BackingField_5; }
	inline int64_t* get_address_of_U3CvalueU3Ek__BackingField_5() { return &___U3CvalueU3Ek__BackingField_5; }
	inline void set_U3CvalueU3Ek__BackingField_5(int64_t value)
	{
		___U3CvalueU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCORE_T3892511509_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1400 = { sizeof (TextEditor_t73873660), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1400[16] = 
{
	TextEditor_t73873660::get_offset_of_keyboardOnScreen_0(),
	TextEditor_t73873660::get_offset_of_controlID_1(),
	TextEditor_t73873660::get_offset_of_style_2(),
	TextEditor_t73873660::get_offset_of_multiline_3(),
	TextEditor_t73873660::get_offset_of_hasHorizontalCursorPos_4(),
	TextEditor_t73873660::get_offset_of_isPasswordField_5(),
	TextEditor_t73873660::get_offset_of_scrollOffset_6(),
	TextEditor_t73873660::get_offset_of_m_Content_7(),
	TextEditor_t73873660::get_offset_of_m_CursorIndex_8(),
	TextEditor_t73873660::get_offset_of_m_SelectIndex_9(),
	TextEditor_t73873660::get_offset_of_m_RevealCursor_10(),
	TextEditor_t73873660::get_offset_of_m_MouseDragSelectsWholeWords_11(),
	TextEditor_t73873660::get_offset_of_m_DblClickInitPos_12(),
	TextEditor_t73873660::get_offset_of_m_DblClickSnap_13(),
	TextEditor_t73873660::get_offset_of_m_bJustSelected_14(),
	TextEditor_t73873660::get_offset_of_m_iAltCursorPos_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1401 = { sizeof (DblClickSnapping_t157650003)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1401[3] = 
{
	DblClickSnapping_t157650003::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1402 = { sizeof (Internal_DrawArguments_t1778578837)+ sizeof (RuntimeObject), sizeof(Internal_DrawArguments_t1778578837 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1402[6] = 
{
	Internal_DrawArguments_t1778578837::get_offset_of_target_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawArguments_t1778578837::get_offset_of_position_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawArguments_t1778578837::get_offset_of_isHover_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawArguments_t1778578837::get_offset_of_isActive_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawArguments_t1778578837::get_offset_of_on_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawArguments_t1778578837::get_offset_of_hasKeyboardFocus_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1403 = { sizeof (Internal_DrawWithTextSelectionArguments_t1247738902)+ sizeof (RuntimeObject), sizeof(Internal_DrawWithTextSelectionArguments_t1247738902 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1403[11] = 
{
	Internal_DrawWithTextSelectionArguments_t1247738902::get_offset_of_target_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t1247738902::get_offset_of_position_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t1247738902::get_offset_of_firstPos_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t1247738902::get_offset_of_lastPos_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t1247738902::get_offset_of_cursorColor_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t1247738902::get_offset_of_selectionColor_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t1247738902::get_offset_of_isHover_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t1247738902::get_offset_of_isActive_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t1247738902::get_offset_of_on_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t1247738902::get_offset_of_hasKeyboardFocus_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t1247738902::get_offset_of_drawSelectionAsComposition_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1404 = { sizeof (WebRequestUtils_t173821512), -1, sizeof(WebRequestUtils_t173821512_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1404[1] = 
{
	WebRequestUtils_t173821512_StaticFields::get_offset_of_domainRegex_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1405 = { sizeof (RemoteSettings_t3551676527), -1, sizeof(RemoteSettings_t3551676527_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1405[1] = 
{
	RemoteSettings_t3551676527_StaticFields::get_offset_of_Updated_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1406 = { sizeof (UpdatedEventHandler_t4030213559), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1407 = { sizeof (GcUserProfileData_t442346949)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1407[4] = 
{
	GcUserProfileData_t442346949::get_offset_of_userName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcUserProfileData_t442346949::get_offset_of_userID_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcUserProfileData_t442346949::get_offset_of_isFriend_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcUserProfileData_t442346949::get_offset_of_image_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1408 = { sizeof (GcAchievementDescriptionData_t1267650014)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1408[7] = 
{
	GcAchievementDescriptionData_t1267650014::get_offset_of_m_Identifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t1267650014::get_offset_of_m_Title_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t1267650014::get_offset_of_m_Image_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t1267650014::get_offset_of_m_AchievedDescription_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t1267650014::get_offset_of_m_UnachievedDescription_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t1267650014::get_offset_of_m_Hidden_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t1267650014::get_offset_of_m_Points_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1409 = { sizeof (GcAchievementData_t985292318)+ sizeof (RuntimeObject), sizeof(GcAchievementData_t985292318_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1409[5] = 
{
	GcAchievementData_t985292318::get_offset_of_m_Identifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementData_t985292318::get_offset_of_m_PercentCompleted_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementData_t985292318::get_offset_of_m_Completed_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementData_t985292318::get_offset_of_m_Hidden_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementData_t985292318::get_offset_of_m_LastReportedDate_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1410 = { sizeof (GcScoreData_t2742962091)+ sizeof (RuntimeObject), sizeof(GcScoreData_t2742962091_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1410[7] = 
{
	GcScoreData_t2742962091::get_offset_of_m_Category_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t2742962091::get_offset_of_m_ValueLow_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t2742962091::get_offset_of_m_ValueHigh_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t2742962091::get_offset_of_m_Date_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t2742962091::get_offset_of_m_FormattedValue_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t2742962091::get_offset_of_m_PlayerID_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t2742962091::get_offset_of_m_Rank_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1411 = { sizeof (GameCenterPlatform_t329252249), -1, sizeof(GameCenterPlatform_t329252249_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1411[7] = 
{
	GameCenterPlatform_t329252249_StaticFields::get_offset_of_s_AuthenticateCallback_0(),
	GameCenterPlatform_t329252249_StaticFields::get_offset_of_s_adCache_1(),
	GameCenterPlatform_t329252249_StaticFields::get_offset_of_s_friends_2(),
	GameCenterPlatform_t329252249_StaticFields::get_offset_of_s_users_3(),
	GameCenterPlatform_t329252249_StaticFields::get_offset_of_s_ResetAchievements_4(),
	GameCenterPlatform_t329252249_StaticFields::get_offset_of_m_LocalUser_5(),
	GameCenterPlatform_t329252249_StaticFields::get_offset_of_m_GcBoards_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1412 = { sizeof (U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t3408236426), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1412[1] = 
{
	U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t3408236426::get_offset_of_callback_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1413 = { sizeof (LocalUser_t3045384341), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1413[3] = 
{
	LocalUser_t3045384341::get_offset_of_m_Friends_5(),
	LocalUser_t3045384341::get_offset_of_m_Authenticated_6(),
	LocalUser_t3045384341::get_offset_of_m_Underage_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1414 = { sizeof (UserProfile_t778432599), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1414[5] = 
{
	UserProfile_t778432599::get_offset_of_m_UserName_0(),
	UserProfile_t778432599::get_offset_of_m_ID_1(),
	UserProfile_t778432599::get_offset_of_m_IsFriend_2(),
	UserProfile_t778432599::get_offset_of_m_State_3(),
	UserProfile_t778432599::get_offset_of_m_Image_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1415 = { sizeof (Achievement_t4251433276), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1415[5] = 
{
	Achievement_t4251433276::get_offset_of_m_Completed_0(),
	Achievement_t4251433276::get_offset_of_m_Hidden_1(),
	Achievement_t4251433276::get_offset_of_m_LastReportedDate_2(),
	Achievement_t4251433276::get_offset_of_U3CidU3Ek__BackingField_3(),
	Achievement_t4251433276::get_offset_of_U3CpercentCompletedU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1416 = { sizeof (AchievementDescription_t3742507101), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1416[7] = 
{
	AchievementDescription_t3742507101::get_offset_of_m_Title_0(),
	AchievementDescription_t3742507101::get_offset_of_m_Image_1(),
	AchievementDescription_t3742507101::get_offset_of_m_AchievedDescription_2(),
	AchievementDescription_t3742507101::get_offset_of_m_UnachievedDescription_3(),
	AchievementDescription_t3742507101::get_offset_of_m_Hidden_4(),
	AchievementDescription_t3742507101::get_offset_of_m_Points_5(),
	AchievementDescription_t3742507101::get_offset_of_U3CidU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1417 = { sizeof (Score_t3892511509), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1417[6] = 
{
	Score_t3892511509::get_offset_of_m_Date_0(),
	Score_t3892511509::get_offset_of_m_FormattedValue_1(),
	Score_t3892511509::get_offset_of_m_UserID_2(),
	Score_t3892511509::get_offset_of_m_Rank_3(),
	Score_t3892511509::get_offset_of_U3CleaderboardIDU3Ek__BackingField_4(),
	Score_t3892511509::get_offset_of_U3CvalueU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1418 = { sizeof (Leaderboard_t1235456057), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1418[10] = 
{
	Leaderboard_t1235456057::get_offset_of_m_Loading_0(),
	Leaderboard_t1235456057::get_offset_of_m_LocalUserScore_1(),
	Leaderboard_t1235456057::get_offset_of_m_MaxRange_2(),
	Leaderboard_t1235456057::get_offset_of_m_Scores_3(),
	Leaderboard_t1235456057::get_offset_of_m_Title_4(),
	Leaderboard_t1235456057::get_offset_of_m_UserIDs_5(),
	Leaderboard_t1235456057::get_offset_of_U3CidU3Ek__BackingField_6(),
	Leaderboard_t1235456057::get_offset_of_U3CuserScopeU3Ek__BackingField_7(),
	Leaderboard_t1235456057::get_offset_of_U3CrangeU3Ek__BackingField_8(),
	Leaderboard_t1235456057::get_offset_of_U3CtimeScopeU3Ek__BackingField_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1419 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1420 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1421 = { sizeof (UserState_t1300169449)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1421[6] = 
{
	UserState_t1300169449::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1422 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1423 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1424 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1425 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1426 = { sizeof (UserScope_t1971278910)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1426[3] = 
{
	UserScope_t1971278910::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1427 = { sizeof (TimeScope_t2868242971)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1427[4] = 
{
	TimeScope_t2868242971::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1428 = { sizeof (Range_t566114770)+ sizeof (RuntimeObject), sizeof(Range_t566114770 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1428[2] = 
{
	Range_t566114770::get_offset_of_from_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Range_t566114770::get_offset_of_count_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1429 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1430 = { sizeof (GcLeaderboard_t1548357845), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1430[2] = 
{
	GcLeaderboard_t1548357845::get_offset_of_m_InternalLeaderboard_0(),
	GcLeaderboard_t1548357845::get_offset_of_m_GenericLeaderboard_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1431 = { sizeof (AttributeHelperEngine_t2949765133), -1, sizeof(AttributeHelperEngine_t2949765133_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1431[3] = 
{
	AttributeHelperEngine_t2949765133_StaticFields::get_offset_of__disallowMultipleComponentArray_0(),
	AttributeHelperEngine_t2949765133_StaticFields::get_offset_of__executeInEditModeArray_1(),
	AttributeHelperEngine_t2949765133_StaticFields::get_offset_of__requireComponentArray_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1432 = { sizeof (DisallowMultipleComponent_t3648812216), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1433 = { sizeof (RequireComponent_t3347582808), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1433[3] = 
{
	RequireComponent_t3347582808::get_offset_of_m_Type0_0(),
	RequireComponent_t3347582808::get_offset_of_m_Type1_1(),
	RequireComponent_t3347582808::get_offset_of_m_Type2_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1434 = { sizeof (AddComponentMenu_t471590916), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1434[2] = 
{
	AddComponentMenu_t471590916::get_offset_of_m_AddComponentMenu_0(),
	AddComponentMenu_t471590916::get_offset_of_m_Ordering_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1435 = { sizeof (ContextMenu_t3223975351), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1435[3] = 
{
	ContextMenu_t3223975351::get_offset_of_menuItem_0(),
	ContextMenu_t3223975351::get_offset_of_validate_1(),
	ContextMenu_t3223975351::get_offset_of_priority_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1436 = { sizeof (ExecuteInEditMode_t3411678079), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1437 = { sizeof (DefaultExecutionOrder_t2081788771), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1437[1] = 
{
	DefaultExecutionOrder_t2081788771::get_offset_of_U3CorderU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1438 = { sizeof (IL2CPPStructAlignmentAttribute_t3807764866), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1438[1] = 
{
	IL2CPPStructAlignmentAttribute_t3807764866::get_offset_of_Align_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1439 = { sizeof (NativeClassAttribute_t987837110), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1439[1] = 
{
	NativeClassAttribute_t987837110::get_offset_of_U3CQualifiedNativeNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1440 = { sizeof (AssemblyIsEditorAssembly_t4259632327), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1441 = { sizeof (WritableAttribute_t2084550311), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1442 = { sizeof (GeneratedByOldBindingsGeneratorAttribute_t950238300), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1443 = { sizeof (SendMessageOptions_t1092477406)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1443[3] = 
{
	SendMessageOptions_t1092477406::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1444 = { sizeof (RuntimePlatform_t2149335356)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1444[34] = 
{
	RuntimePlatform_t2149335356::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1445 = { sizeof (OperatingSystemFamily_t485496440)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1445[5] = 
{
	OperatingSystemFamily_t485496440::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1446 = { sizeof (LogType_t656384674)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1446[6] = 
{
	LogType_t656384674::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1447 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1447[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1448 = { sizeof (ClassLibraryInitializer_t2461508577), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1449 = { sizeof (Color_t3136506488)+ sizeof (RuntimeObject), sizeof(Color_t3136506488 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1449[4] = 
{
	Color_t3136506488::get_offset_of_r_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t3136506488::get_offset_of_g_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t3136506488::get_offset_of_b_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t3136506488::get_offset_of_a_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1450 = { sizeof (Color32_t2817865654)+ sizeof (RuntimeObject), sizeof(Color32_t2817865654 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1450[4] = 
{
	Color32_t2817865654::get_offset_of_r_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color32_t2817865654::get_offset_of_g_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color32_t2817865654::get_offset_of_b_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color32_t2817865654::get_offset_of_a_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1451 = { sizeof (SetupCoroutine_t3257868256), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1452 = { sizeof (CameraClearFlags_t536205005)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1452[6] = 
{
	CameraClearFlags_t536205005::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1453 = { sizeof (TextureWrapMode_t2186063332)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1453[5] = 
{
	TextureWrapMode_t2186063332::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1454 = { sizeof (TextureFormat_t2536991944)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1454[54] = 
{
	TextureFormat_t2536991944::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1455 = { sizeof (CompareFunction_t324435444)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1455[10] = 
{
	CompareFunction_t324435444::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1456 = { sizeof (ColorWriteMask_t4194103910)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1456[6] = 
{
	ColorWriteMask_t4194103910::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1457 = { sizeof (StencilOp_t3821324946)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1457[9] = 
{
	StencilOp_t3821324946::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1458 = { sizeof (KeyCode_t1751619527)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1458[322] = 
{
	KeyCode_t1751619527::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1459 = { sizeof (MathfInternal_t1979644577)+ sizeof (RuntimeObject), sizeof(MathfInternal_t1979644577 ), sizeof(MathfInternal_t1979644577_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1459[3] = 
{
	MathfInternal_t1979644577_StaticFields::get_offset_of_FloatMinNormal_0(),
	MathfInternal_t1979644577_StaticFields::get_offset_of_FloatMinDenormal_1(),
	MathfInternal_t1979644577_StaticFields::get_offset_of_IsFlushToZeroEnabled_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1460 = { sizeof (ScriptingUtils_t3304904544), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1461 = { sizeof (SendMouseEvents_t1768250992), -1, sizeof(SendMouseEvents_t1768250992_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1461[5] = 
{
	SendMouseEvents_t1768250992_StaticFields::get_offset_of_s_MouseUsed_0(),
	SendMouseEvents_t1768250992_StaticFields::get_offset_of_m_LastHit_1(),
	SendMouseEvents_t1768250992_StaticFields::get_offset_of_m_MouseDownHit_2(),
	SendMouseEvents_t1768250992_StaticFields::get_offset_of_m_CurrentHit_3(),
	SendMouseEvents_t1768250992_StaticFields::get_offset_of_m_Cameras_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1462 = { sizeof (HitInfo_t2599499320)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1462[2] = 
{
	HitInfo_t2599499320::get_offset_of_target_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HitInfo_t2599499320::get_offset_of_camera_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1463 = { sizeof (Plane_t3293887620)+ sizeof (RuntimeObject), sizeof(Plane_t3293887620 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1463[2] = 
{
	Plane_t3293887620::get_offset_of_m_Normal_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Plane_t3293887620::get_offset_of_m_Distance_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1464 = { sizeof (PropertyAttribute_t3175850472), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1465 = { sizeof (TooltipAttribute_t2393142556), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1465[1] = 
{
	TooltipAttribute_t2393142556::get_offset_of_tooltip_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1466 = { sizeof (SpaceAttribute_t658595587), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1466[1] = 
{
	SpaceAttribute_t658595587::get_offset_of_height_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1467 = { sizeof (RangeAttribute_t536801034), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1467[2] = 
{
	RangeAttribute_t536801034::get_offset_of_min_0(),
	RangeAttribute_t536801034::get_offset_of_max_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1468 = { sizeof (TextAreaAttribute_t3509639333), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1468[2] = 
{
	TextAreaAttribute_t3509639333::get_offset_of_minLines_0(),
	TextAreaAttribute_t3509639333::get_offset_of_maxLines_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1469 = { sizeof (RangeInt_t2053840565)+ sizeof (RuntimeObject), sizeof(RangeInt_t2053840565 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1469[2] = 
{
	RangeInt_t2053840565::get_offset_of_start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RangeInt_t2053840565::get_offset_of_length_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1470 = { sizeof (Ray_t1507008441)+ sizeof (RuntimeObject), sizeof(Ray_t1507008441 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1470[2] = 
{
	Ray_t1507008441::get_offset_of_m_Origin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Ray_t1507008441::get_offset_of_m_Direction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1471 = { sizeof (Rect_t2469536665)+ sizeof (RuntimeObject), sizeof(Rect_t2469536665 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1471[4] = 
{
	Rect_t2469536665::get_offset_of_m_XMin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2469536665::get_offset_of_m_YMin_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2469536665::get_offset_of_m_Width_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2469536665::get_offset_of_m_Height_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1472 = { sizeof (SelectionBaseAttribute_t1488500766), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1473 = { sizeof (SerializePrivateVariables_t4284723356), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1474 = { sizeof (SerializeField_t1863693842), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1475 = { sizeof (PreferBinarySerialization_t3020426165), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1476 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1477 = { sizeof (StackTraceUtility_t1106565147), -1, sizeof(StackTraceUtility_t1106565147_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1477[1] = 
{
	StackTraceUtility_t1106565147_StaticFields::get_offset_of_projectFolder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1478 = { sizeof (UnityException_t4243180417), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1478[2] = 
{
	0,
	UnityException_t4243180417::get_offset_of_unityStackTrace_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1479 = { sizeof (TouchScreenKeyboardType_t2126995860)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1479[12] = 
{
	TouchScreenKeyboardType_t2126995860::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1480 = { sizeof (TrackedReference_t2314189973), sizeof(TrackedReference_t2314189973_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1480[1] = 
{
	TrackedReference_t2314189973::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1481 = { sizeof (PersistentListenerMode_t2157335686)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1481[8] = 
{
	PersistentListenerMode_t2157335686::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1482 = { sizeof (ArgumentCache_t618466815), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1482[6] = 
{
	ArgumentCache_t618466815::get_offset_of_m_ObjectArgument_0(),
	ArgumentCache_t618466815::get_offset_of_m_ObjectArgumentAssemblyTypeName_1(),
	ArgumentCache_t618466815::get_offset_of_m_IntArgument_2(),
	ArgumentCache_t618466815::get_offset_of_m_FloatArgument_3(),
	ArgumentCache_t618466815::get_offset_of_m_StringArgument_4(),
	ArgumentCache_t618466815::get_offset_of_m_BoolArgument_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1483 = { sizeof (BaseInvokableCall_t345520958), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1484 = { sizeof (InvokableCall_t2595135181), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1484[1] = 
{
	InvokableCall_t2595135181::get_offset_of_Delegate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1485 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1485[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1486 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1486[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1487 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1487[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1488 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1488[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1489 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1489[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1490 = { sizeof (UnityEventCallState_t4219366100)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1490[4] = 
{
	UnityEventCallState_t4219366100::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1491 = { sizeof (PersistentCall_t2857996205), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1491[5] = 
{
	PersistentCall_t2857996205::get_offset_of_m_Target_0(),
	PersistentCall_t2857996205::get_offset_of_m_MethodName_1(),
	PersistentCall_t2857996205::get_offset_of_m_Mode_2(),
	PersistentCall_t2857996205::get_offset_of_m_Arguments_3(),
	PersistentCall_t2857996205::get_offset_of_m_CallState_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1492 = { sizeof (PersistentCallGroup_t1105598098), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1492[1] = 
{
	PersistentCallGroup_t1105598098::get_offset_of_m_Calls_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1493 = { sizeof (InvokableCallList_t54765857), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1493[4] = 
{
	InvokableCallList_t54765857::get_offset_of_m_PersistentCalls_0(),
	InvokableCallList_t54765857::get_offset_of_m_RuntimeCalls_1(),
	InvokableCallList_t54765857::get_offset_of_m_ExecutingCalls_2(),
	InvokableCallList_t54765857::get_offset_of_m_NeedsUpdate_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1494 = { sizeof (UnityEventBase_t1678828438), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1494[4] = 
{
	UnityEventBase_t1678828438::get_offset_of_m_Calls_0(),
	UnityEventBase_t1678828438::get_offset_of_m_PersistentCalls_1(),
	UnityEventBase_t1678828438::get_offset_of_m_TypeName_2(),
	UnityEventBase_t1678828438::get_offset_of_m_CallsDirty_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1495 = { sizeof (UnityAction_t1065709194), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1496 = { sizeof (UnityEvent_t836677968), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1496[1] = 
{
	UnityEvent_t836677968::get_offset_of_m_InvokeArray_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1497 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1498 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1498[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1499 = { 0, 0, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
