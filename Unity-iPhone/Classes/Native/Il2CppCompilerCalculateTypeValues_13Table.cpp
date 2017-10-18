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

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t898504563;
// UnityEngineInternal.GenericStack
struct GenericStack_t4098904508;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_t1782746670;
// System.IntPtr[]
struct IntPtrU5BU5D_t618347919;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t3032527710;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t4045887177;
// UnityEngine.Texture
struct Texture_t735859423;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
struct List_1_t646733359;
// System.Char[]
struct CharU5BU5D_t1671368807;
// System.Void
struct Void_t2676950004;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1870450026;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1211576255;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_t1719058374;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t1696652188;
// UnityEngine.GUIStyle
struct GUIStyle_t350904686;
// UnityEngine.Texture2D
struct Texture2D_t4076404164;
// System.Action
struct Action_t3348862539;
// System.Func`3<System.Int32,System.IntPtr,System.Boolean>
struct Func_3_t2654713318;
// System.Func`2<System.Exception,System.Boolean>
struct Func_2_t3496186004;
// UnityEngine.CharacterController
struct CharacterController_t2626182459;
// UnityEngine.Collider
struct Collider_t997197530;
// UnityEngine.Rigidbody
struct Rigidbody_t2944185830;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t542943583;
// UnityEngine.Collider2D
struct Collider2D_t1683084049;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t2043580182;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t904171160;
// UnityEngine.GUIStyleState
struct GUIStyleState_t1881122624;
// UnityEngine.RectOffset
struct RectOffset_t603374043;
// UnityEngine.Font
struct Font_t3940830037;
// System.Action`1<UnityEngine.Font>
struct Action_1_t2565154513;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t3959427492;
// UnityEngine.Object
struct Object_t1699899486;
// UnityEngine.AnimationState
struct AnimationState_t3813352619;
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t713476003;
// System.String[]
struct StringU5BU5D_t2238447960;
// System.Int32[]
struct Int32U5BU5D_t1771696264;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t2822604285;
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t1760015106;
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t4059619465;
// System.IAsyncResult
struct IAsyncResult_t2663544742;
// System.AsyncCallback
struct AsyncCallback_t3736623411;
// System.Single[]
struct SingleU5BU5D_t1194389124;
// UnityEngine.GUISkin
struct GUISkin_t25046937;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1670706459;
// UnityEngine.GUISettings
struct GUISettings_t3774310589;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t840062568;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t410520829;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t284919308;

struct GUIStyle_t350904686_marshaled_pinvoke;
struct GUIStyle_t350904686_marshaled_com;
struct ContactPoint_t1076508538 ;
struct GUIStyleState_t1881122624_marshaled_pinvoke;
struct GUIStyleState_t1881122624_marshaled_com;
struct RectOffset_t603374043_marshaled_com;
struct Object_t1699899486_marshaled_com;



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
#ifndef LAYOUTCACHE_T1696652188_H
#define LAYOUTCACHE_T1696652188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutUtility/LayoutCache
struct  LayoutCache_t1696652188  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::topLevel
	GUILayoutGroup_t898504563 * ___topLevel_0;
	// UnityEngineInternal.GenericStack UnityEngine.GUILayoutUtility/LayoutCache::layoutGroups
	GenericStack_t4098904508 * ___layoutGroups_1;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::windows
	GUILayoutGroup_t898504563 * ___windows_2;

public:
	inline static int32_t get_offset_of_topLevel_0() { return static_cast<int32_t>(offsetof(LayoutCache_t1696652188, ___topLevel_0)); }
	inline GUILayoutGroup_t898504563 * get_topLevel_0() const { return ___topLevel_0; }
	inline GUILayoutGroup_t898504563 ** get_address_of_topLevel_0() { return &___topLevel_0; }
	inline void set_topLevel_0(GUILayoutGroup_t898504563 * value)
	{
		___topLevel_0 = value;
		Il2CppCodeGenWriteBarrier((&___topLevel_0), value);
	}

	inline static int32_t get_offset_of_layoutGroups_1() { return static_cast<int32_t>(offsetof(LayoutCache_t1696652188, ___layoutGroups_1)); }
	inline GenericStack_t4098904508 * get_layoutGroups_1() const { return ___layoutGroups_1; }
	inline GenericStack_t4098904508 ** get_address_of_layoutGroups_1() { return &___layoutGroups_1; }
	inline void set_layoutGroups_1(GenericStack_t4098904508 * value)
	{
		___layoutGroups_1 = value;
		Il2CppCodeGenWriteBarrier((&___layoutGroups_1), value);
	}

	inline static int32_t get_offset_of_windows_2() { return static_cast<int32_t>(offsetof(LayoutCache_t1696652188, ___windows_2)); }
	inline GUILayoutGroup_t898504563 * get_windows_2() const { return ___windows_2; }
	inline GUILayoutGroup_t898504563 ** get_address_of_windows_2() { return &___windows_2; }
	inline void set_windows_2(GUILayoutGroup_t898504563 * value)
	{
		___windows_2 = value;
		Il2CppCodeGenWriteBarrier((&___windows_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYOUTCACHE_T1696652188_H
#ifndef AUDIOSETTINGS_T2270710432_H
#define AUDIOSETTINGS_T2270710432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings
struct  AudioSettings_t2270710432  : public RuntimeObject
{
public:

public:
};

struct AudioSettings_t2270710432_StaticFields
{
public:
	// UnityEngine.AudioSettings/AudioConfigurationChangeHandler UnityEngine.AudioSettings::OnAudioConfigurationChanged
	AudioConfigurationChangeHandler_t1782746670 * ___OnAudioConfigurationChanged_0;

public:
	inline static int32_t get_offset_of_OnAudioConfigurationChanged_0() { return static_cast<int32_t>(offsetof(AudioSettings_t2270710432_StaticFields, ___OnAudioConfigurationChanged_0)); }
	inline AudioConfigurationChangeHandler_t1782746670 * get_OnAudioConfigurationChanged_0() const { return ___OnAudioConfigurationChanged_0; }
	inline AudioConfigurationChangeHandler_t1782746670 ** get_address_of_OnAudioConfigurationChanged_0() { return &___OnAudioConfigurationChanged_0; }
	inline void set_OnAudioConfigurationChanged_0(AudioConfigurationChangeHandler_t1782746670 * value)
	{
		___OnAudioConfigurationChanged_0 = value;
		Il2CppCodeGenWriteBarrier((&___OnAudioConfigurationChanged_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSETTINGS_T2270710432_H
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
#ifndef PHYSICS_T342858616_H
#define PHYSICS_T342858616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Physics
struct  Physics_t342858616  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS_T342858616_H
#ifndef RECTTRANSFORMUTILITY_T3614849597_H
#define RECTTRANSFORMUTILITY_T3614849597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransformUtility
struct  RectTransformUtility_t3614849597  : public RuntimeObject
{
public:

public:
};

struct RectTransformUtility_t3614849597_StaticFields
{
public:
	// UnityEngine.Vector3[] UnityEngine.RectTransformUtility::s_Corners
	Vector3U5BU5D_t4045887177* ___s_Corners_0;

public:
	inline static int32_t get_offset_of_s_Corners_0() { return static_cast<int32_t>(offsetof(RectTransformUtility_t3614849597_StaticFields, ___s_Corners_0)); }
	inline Vector3U5BU5D_t4045887177* get_s_Corners_0() const { return ___s_Corners_0; }
	inline Vector3U5BU5D_t4045887177** get_address_of_s_Corners_0() { return &___s_Corners_0; }
	inline void set_s_Corners_0(Vector3U5BU5D_t4045887177* value)
	{
		___s_Corners_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Corners_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORMUTILITY_T3614849597_H
#ifndef UISYSTEMPROFILERAPI_T4083148840_H
#define UISYSTEMPROFILERAPI_T4083148840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UISystemProfilerApi
struct  UISystemProfilerApi_t4083148840  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UISYSTEMPROFILERAPI_T4083148840_H
#ifndef GUICONTENT_T2918791183_H
#define GUICONTENT_T2918791183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIContent
struct  GUIContent_t2918791183  : public RuntimeObject
{
public:
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t735859423 * ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(GUIContent_t2918791183, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_0), value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(GUIContent_t2918791183, ___m_Image_1)); }
	inline Texture_t735859423 * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture_t735859423 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture_t735859423 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_1), value);
	}

	inline static int32_t get_offset_of_m_Tooltip_2() { return static_cast<int32_t>(offsetof(GUIContent_t2918791183, ___m_Tooltip_2)); }
	inline String_t* get_m_Tooltip_2() const { return ___m_Tooltip_2; }
	inline String_t** get_address_of_m_Tooltip_2() { return &___m_Tooltip_2; }
	inline void set_m_Tooltip_2(String_t* value)
	{
		___m_Tooltip_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tooltip_2), value);
	}
};

struct GUIContent_t2918791183_StaticFields
{
public:
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t2918791183 * ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t2918791183 * ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t2918791183 * ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t2918791183 * ___none_6;

public:
	inline static int32_t get_offset_of_s_Text_3() { return static_cast<int32_t>(offsetof(GUIContent_t2918791183_StaticFields, ___s_Text_3)); }
	inline GUIContent_t2918791183 * get_s_Text_3() const { return ___s_Text_3; }
	inline GUIContent_t2918791183 ** get_address_of_s_Text_3() { return &___s_Text_3; }
	inline void set_s_Text_3(GUIContent_t2918791183 * value)
	{
		___s_Text_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_Text_3), value);
	}

	inline static int32_t get_offset_of_s_Image_4() { return static_cast<int32_t>(offsetof(GUIContent_t2918791183_StaticFields, ___s_Image_4)); }
	inline GUIContent_t2918791183 * get_s_Image_4() const { return ___s_Image_4; }
	inline GUIContent_t2918791183 ** get_address_of_s_Image_4() { return &___s_Image_4; }
	inline void set_s_Image_4(GUIContent_t2918791183 * value)
	{
		___s_Image_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_Image_4), value);
	}

	inline static int32_t get_offset_of_s_TextImage_5() { return static_cast<int32_t>(offsetof(GUIContent_t2918791183_StaticFields, ___s_TextImage_5)); }
	inline GUIContent_t2918791183 * get_s_TextImage_5() const { return ___s_TextImage_5; }
	inline GUIContent_t2918791183 ** get_address_of_s_TextImage_5() { return &___s_TextImage_5; }
	inline void set_s_TextImage_5(GUIContent_t2918791183 * value)
	{
		___s_TextImage_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_TextImage_5), value);
	}

	inline static int32_t get_offset_of_none_6() { return static_cast<int32_t>(offsetof(GUIContent_t2918791183_StaticFields, ___none_6)); }
	inline GUIContent_t2918791183 * get_none_6() const { return ___none_6; }
	inline GUIContent_t2918791183 ** get_address_of_none_6() { return &___none_6; }
	inline void set_none_6(GUIContent_t2918791183 * value)
	{
		___none_6 = value;
		Il2CppCodeGenWriteBarrier((&___none_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t2918791183_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t735859423 * ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t2918791183_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t735859423 * ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};
#endif // GUICONTENT_T2918791183_H
#ifndef GUILAYOUT_T3953415249_H
#define GUILAYOUT_T3953415249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayout
struct  GUILayout_t3953415249  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUT_T3953415249_H
#ifndef SLIDERSTATE_T1221064395_H
#define SLIDERSTATE_T1221064395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SliderState
struct  SliderState_t1221064395  : public RuntimeObject
{
public:
	// System.Single UnityEngine.SliderState::dragStartPos
	float ___dragStartPos_0;
	// System.Single UnityEngine.SliderState::dragStartValue
	float ___dragStartValue_1;
	// System.Boolean UnityEngine.SliderState::isDragging
	bool ___isDragging_2;

public:
	inline static int32_t get_offset_of_dragStartPos_0() { return static_cast<int32_t>(offsetof(SliderState_t1221064395, ___dragStartPos_0)); }
	inline float get_dragStartPos_0() const { return ___dragStartPos_0; }
	inline float* get_address_of_dragStartPos_0() { return &___dragStartPos_0; }
	inline void set_dragStartPos_0(float value)
	{
		___dragStartPos_0 = value;
	}

	inline static int32_t get_offset_of_dragStartValue_1() { return static_cast<int32_t>(offsetof(SliderState_t1221064395, ___dragStartValue_1)); }
	inline float get_dragStartValue_1() const { return ___dragStartValue_1; }
	inline float* get_address_of_dragStartValue_1() { return &___dragStartValue_1; }
	inline void set_dragStartValue_1(float value)
	{
		___dragStartValue_1 = value;
	}

	inline static int32_t get_offset_of_isDragging_2() { return static_cast<int32_t>(offsetof(SliderState_t1221064395, ___isDragging_2)); }
	inline bool get_isDragging_2() const { return ___isDragging_2; }
	inline bool* get_address_of_isDragging_2() { return &___isDragging_2; }
	inline void set_isDragging_2(bool value)
	{
		___isDragging_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLIDERSTATE_T1221064395_H
#ifndef AUDIOPLAYABLEGRAPHEXTENSIONS_T4290317759_H
#define AUDIOPLAYABLEGRAPHEXTENSIONS_T4290317759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.AudioPlayableGraphExtensions
struct  AudioPlayableGraphExtensions_t4290317759  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOPLAYABLEGRAPHEXTENSIONS_T4290317759_H
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
#ifndef ANIMATIONPLAYABLEGRAPHEXTENSIONS_T1398617441_H
#define ANIMATIONPLAYABLEGRAPHEXTENSIONS_T1398617441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationPlayableGraphExtensions
struct  AnimationPlayableGraphExtensions_t1398617441  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONPLAYABLEGRAPHEXTENSIONS_T1398617441_H
#ifndef SCROLLVIEWSTATE_T3487613754_H
#define SCROLLVIEWSTATE_T3487613754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScrollViewState
struct  ScrollViewState_t3487613754  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLVIEWSTATE_T3487613754_H
#ifndef PHYSICS2D_T3981192029_H
#define PHYSICS2D_T3981192029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Physics2D
struct  Physics2D_t3981192029  : public RuntimeObject
{
public:

public:
};

struct Physics2D_t3981192029_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D> UnityEngine.Physics2D::m_LastDisabledRigidbody2D
	List_1_t646733359 * ___m_LastDisabledRigidbody2D_0;

public:
	inline static int32_t get_offset_of_m_LastDisabledRigidbody2D_0() { return static_cast<int32_t>(offsetof(Physics2D_t3981192029_StaticFields, ___m_LastDisabledRigidbody2D_0)); }
	inline List_1_t646733359 * get_m_LastDisabledRigidbody2D_0() const { return ___m_LastDisabledRigidbody2D_0; }
	inline List_1_t646733359 ** get_address_of_m_LastDisabledRigidbody2D_0() { return &___m_LastDisabledRigidbody2D_0; }
	inline void set_m_LastDisabledRigidbody2D_0(List_1_t646733359 * value)
	{
		___m_LastDisabledRigidbody2D_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastDisabledRigidbody2D_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS2D_T3981192029_H
#ifndef UILINEINFO_T2821259017_H
#define UILINEINFO_T2821259017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UILineInfo
struct  UILineInfo_t2821259017 
{
public:
	// System.Int32 UnityEngine.UILineInfo::startCharIdx
	int32_t ___startCharIdx_0;
	// System.Int32 UnityEngine.UILineInfo::height
	int32_t ___height_1;
	// System.Single UnityEngine.UILineInfo::topY
	float ___topY_2;
	// System.Single UnityEngine.UILineInfo::leading
	float ___leading_3;

public:
	inline static int32_t get_offset_of_startCharIdx_0() { return static_cast<int32_t>(offsetof(UILineInfo_t2821259017, ___startCharIdx_0)); }
	inline int32_t get_startCharIdx_0() const { return ___startCharIdx_0; }
	inline int32_t* get_address_of_startCharIdx_0() { return &___startCharIdx_0; }
	inline void set_startCharIdx_0(int32_t value)
	{
		___startCharIdx_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(UILineInfo_t2821259017, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_topY_2() { return static_cast<int32_t>(offsetof(UILineInfo_t2821259017, ___topY_2)); }
	inline float get_topY_2() const { return ___topY_2; }
	inline float* get_address_of_topY_2() { return &___topY_2; }
	inline void set_topY_2(float value)
	{
		___topY_2 = value;
	}

	inline static int32_t get_offset_of_leading_3() { return static_cast<int32_t>(offsetof(UILineInfo_t2821259017, ___leading_3)); }
	inline float get_leading_3() const { return ___leading_3; }
	inline float* get_address_of_leading_3() { return &___leading_3; }
	inline void set_leading_3(float value)
	{
		___leading_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UILINEINFO_T2821259017_H
#ifndef GUITARGETATTRIBUTE_T2670492919_H
#define GUITARGETATTRIBUTE_T2670492919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUITargetAttribute
struct  GUITargetAttribute_t2670492919  : public Attribute_t3000105177
{
public:
	// System.Int32 UnityEngine.GUITargetAttribute::displayMask
	int32_t ___displayMask_0;

public:
	inline static int32_t get_offset_of_displayMask_0() { return static_cast<int32_t>(offsetof(GUITargetAttribute_t2670492919, ___displayMask_0)); }
	inline int32_t get_displayMask_0() const { return ___displayMask_0; }
	inline int32_t* get_address_of_displayMask_0() { return &___displayMask_0; }
	inline void set_displayMask_0(int32_t value)
	{
		___displayMask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUITARGETATTRIBUTE_T2670492919_H
#ifndef ANIMATORCLIPINFO_T3735346097_H
#define ANIMATORCLIPINFO_T3735346097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorClipInfo
struct  AnimatorClipInfo_t3735346097 
{
public:
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_ClipInstanceID_0() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t3735346097, ___m_ClipInstanceID_0)); }
	inline int32_t get_m_ClipInstanceID_0() const { return ___m_ClipInstanceID_0; }
	inline int32_t* get_address_of_m_ClipInstanceID_0() { return &___m_ClipInstanceID_0; }
	inline void set_m_ClipInstanceID_0(int32_t value)
	{
		___m_ClipInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t3735346097, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCLIPINFO_T3735346097_H
#ifndef ANIMATORSTATEINFO_T1664108925_H
#define ANIMATORSTATEINFO_T1664108925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorStateInfo
struct  AnimatorStateInfo_t1664108925 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1664108925, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1664108925, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1664108925, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1664108925, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1664108925, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1664108925, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1664108925, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1664108925, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1664108925, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORSTATEINFO_T1664108925_H
#ifndef ANIMATORTRANSITIONINFO_T3198719998_H
#define ANIMATORTRANSITIONINFO_T3198719998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorTransitionInfo
struct  AnimatorTransitionInfo_t3198719998 
{
public:
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_FullPath
	int32_t ___m_FullPath_0;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_UserName
	int32_t ___m_UserName_1;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_Name
	int32_t ___m_Name_2;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_AnyState
	bool ___m_AnyState_4;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_TransitionType
	int32_t ___m_TransitionType_5;

public:
	inline static int32_t get_offset_of_m_FullPath_0() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t3198719998, ___m_FullPath_0)); }
	inline int32_t get_m_FullPath_0() const { return ___m_FullPath_0; }
	inline int32_t* get_address_of_m_FullPath_0() { return &___m_FullPath_0; }
	inline void set_m_FullPath_0(int32_t value)
	{
		___m_FullPath_0 = value;
	}

	inline static int32_t get_offset_of_m_UserName_1() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t3198719998, ___m_UserName_1)); }
	inline int32_t get_m_UserName_1() const { return ___m_UserName_1; }
	inline int32_t* get_address_of_m_UserName_1() { return &___m_UserName_1; }
	inline void set_m_UserName_1(int32_t value)
	{
		___m_UserName_1 = value;
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t3198719998, ___m_Name_2)); }
	inline int32_t get_m_Name_2() const { return ___m_Name_2; }
	inline int32_t* get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(int32_t value)
	{
		___m_Name_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t3198719998, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_AnyState_4() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t3198719998, ___m_AnyState_4)); }
	inline bool get_m_AnyState_4() const { return ___m_AnyState_4; }
	inline bool* get_address_of_m_AnyState_4() { return &___m_AnyState_4; }
	inline void set_m_AnyState_4(bool value)
	{
		___m_AnyState_4 = value;
	}

	inline static int32_t get_offset_of_m_TransitionType_5() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t3198719998, ___m_TransitionType_5)); }
	inline int32_t get_m_TransitionType_5() const { return ___m_TransitionType_5; }
	inline int32_t* get_address_of_m_TransitionType_5() { return &___m_TransitionType_5; }
	inline void set_m_TransitionType_5(int32_t value)
	{
		___m_TransitionType_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t3198719998_marshaled_pinvoke
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	float ___m_NormalizedTime_3;
	int32_t ___m_AnyState_4;
	int32_t ___m_TransitionType_5;
};
// Native definition for COM marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t3198719998_marshaled_com
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	float ___m_NormalizedTime_3;
	int32_t ___m_AnyState_4;
	int32_t ___m_TransitionType_5;
};
#endif // ANIMATORTRANSITIONINFO_T3198719998_H
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
#ifndef EXITGUIEXCEPTION_T3824539775_H
#define EXITGUIEXCEPTION_T3824539775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ExitGUIException
struct  ExitGUIException_t3824539775  : public Exception_t4051195559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXITGUIEXCEPTION_T3824539775_H
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
#ifndef SHAREDBETWEENANIMATORSATTRIBUTE_T3116496384_H
#define SHAREDBETWEENANIMATORSATTRIBUTE_T3116496384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SharedBetweenAnimatorsAttribute
struct  SharedBetweenAnimatorsAttribute_t3116496384  : public Attribute_t3000105177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREDBETWEENANIMATORSATTRIBUTE_T3116496384_H
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
#ifndef VECTOR4_T3690795159_H
#define VECTOR4_T3690795159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3690795159 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3690795159, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3690795159, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3690795159, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3690795159, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3690795159_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3690795159  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3690795159  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3690795159  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3690795159  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3690795159_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3690795159  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3690795159 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3690795159  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3690795159_StaticFields, ___oneVector_6)); }
	inline Vector4_t3690795159  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3690795159 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3690795159  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3690795159_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3690795159  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3690795159 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3690795159  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3690795159_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3690795159  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3690795159 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3690795159  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3690795159_H
#ifndef INT32_T722418373_H
#define INT32_T722418373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t722418373 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t722418373, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T722418373_H
#ifndef QUATERNION_T1904711730_H
#define QUATERNION_T1904711730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t1904711730 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t1904711730, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t1904711730, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t1904711730, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t1904711730, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t1904711730_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t1904711730  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t1904711730_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t1904711730  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t1904711730 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t1904711730  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T1904711730_H
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
#ifndef BOOLEAN_T2424243573_H
#define BOOLEAN_T2424243573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t2424243573 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t2424243573, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t2424243573_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t2424243573_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t2424243573_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T2424243573_H
#ifndef SAMPLETYPE_T2909613622_H
#define SAMPLETYPE_T2909613622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UISystemProfilerApi/SampleType
struct  SampleType_t2909613622 
{
public:
	// System.Int32 UnityEngine.UISystemProfilerApi/SampleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SampleType_t2909613622, ___value___1)); }
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
#endif // SAMPLETYPE_T2909613622_H
#ifndef EVENTTYPE_T3330297035_H
#define EVENTTYPE_T3330297035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventType
struct  EventType_t3330297035 
{
public:
	// System.Int32 UnityEngine.EventType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventType_t3330297035, ___value___1)); }
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
#endif // EVENTTYPE_T3330297035_H
#ifndef EVENTMODIFIERS_T1921398598_H
#define EVENTMODIFIERS_T1921398598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventModifiers
struct  EventModifiers_t1921398598 
{
public:
	// System.Int32 UnityEngine.EventModifiers::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventModifiers_t1921398598, ___value___1)); }
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
#endif // EVENTMODIFIERS_T1921398598_H
#ifndef RENDERMODE_T371552777_H
#define RENDERMODE_T371552777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderMode
struct  RenderMode_t371552777 
{
public:
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderMode_t371552777, ___value___1)); }
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
#endif // RENDERMODE_T371552777_H
#ifndef RECTOFFSET_T603374043_H
#define RECTOFFSET_T603374043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t603374043  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t603374043, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t603374043, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t603374043_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t603374043_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T603374043_H
#ifndef UIVERTEX_T1584243837_H
#define UIVERTEX_T1584243837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UIVertex
struct  UIVertex_t1584243837 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t1874995928  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t1874995928  ___normal_1;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t2817865654  ___color_2;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv0
	Vector2_t1870731928  ___uv0_3;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv1
	Vector2_t1870731928  ___uv1_4;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv2
	Vector2_t1870731928  ___uv2_5;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv3
	Vector2_t1870731928  ___uv3_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t3690795159  ___tangent_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_t1584243837, ___position_0)); }
	inline Vector3_t1874995928  get_position_0() const { return ___position_0; }
	inline Vector3_t1874995928 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t1874995928  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_t1584243837, ___normal_1)); }
	inline Vector3_t1874995928  get_normal_1() const { return ___normal_1; }
	inline Vector3_t1874995928 * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t1874995928  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(UIVertex_t1584243837, ___color_2)); }
	inline Color32_t2817865654  get_color_2() const { return ___color_2; }
	inline Color32_t2817865654 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color32_t2817865654  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_uv0_3() { return static_cast<int32_t>(offsetof(UIVertex_t1584243837, ___uv0_3)); }
	inline Vector2_t1870731928  get_uv0_3() const { return ___uv0_3; }
	inline Vector2_t1870731928 * get_address_of_uv0_3() { return &___uv0_3; }
	inline void set_uv0_3(Vector2_t1870731928  value)
	{
		___uv0_3 = value;
	}

	inline static int32_t get_offset_of_uv1_4() { return static_cast<int32_t>(offsetof(UIVertex_t1584243837, ___uv1_4)); }
	inline Vector2_t1870731928  get_uv1_4() const { return ___uv1_4; }
	inline Vector2_t1870731928 * get_address_of_uv1_4() { return &___uv1_4; }
	inline void set_uv1_4(Vector2_t1870731928  value)
	{
		___uv1_4 = value;
	}

	inline static int32_t get_offset_of_uv2_5() { return static_cast<int32_t>(offsetof(UIVertex_t1584243837, ___uv2_5)); }
	inline Vector2_t1870731928  get_uv2_5() const { return ___uv2_5; }
	inline Vector2_t1870731928 * get_address_of_uv2_5() { return &___uv2_5; }
	inline void set_uv2_5(Vector2_t1870731928  value)
	{
		___uv2_5 = value;
	}

	inline static int32_t get_offset_of_uv3_6() { return static_cast<int32_t>(offsetof(UIVertex_t1584243837, ___uv3_6)); }
	inline Vector2_t1870731928  get_uv3_6() const { return ___uv3_6; }
	inline Vector2_t1870731928 * get_address_of_uv3_6() { return &___uv3_6; }
	inline void set_uv3_6(Vector2_t1870731928  value)
	{
		___uv3_6 = value;
	}

	inline static int32_t get_offset_of_tangent_7() { return static_cast<int32_t>(offsetof(UIVertex_t1584243837, ___tangent_7)); }
	inline Vector4_t3690795159  get_tangent_7() const { return ___tangent_7; }
	inline Vector4_t3690795159 * get_address_of_tangent_7() { return &___tangent_7; }
	inline void set_tangent_7(Vector4_t3690795159  value)
	{
		___tangent_7 = value;
	}
};

struct UIVertex_t1584243837_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t2817865654  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t3690795159  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_t1584243837  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_t1584243837_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_t2817865654  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_t2817865654 * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_t2817865654  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_t1584243837_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_t3690795159  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_t3690795159 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_t3690795159  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_t1584243837_StaticFields, ___simpleVert_10)); }
	inline UIVertex_t1584243837  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_t1584243837 * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_t1584243837  value)
	{
		___simpleVert_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIVERTEX_T1584243837_H
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
#ifndef EVENT_T991343199_H
#define EVENT_T991343199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Event
struct  Event_t991343199  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Event::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Event_t991343199, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Event_t991343199_StaticFields
{
public:
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_t991343199 * ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_t991343199 * ___s_MasterEvent_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.Event::<>f__switch$map0
	Dictionary_2_t1211576255 * ___U3CU3Ef__switchU24map0_3;

public:
	inline static int32_t get_offset_of_s_Current_1() { return static_cast<int32_t>(offsetof(Event_t991343199_StaticFields, ___s_Current_1)); }
	inline Event_t991343199 * get_s_Current_1() const { return ___s_Current_1; }
	inline Event_t991343199 ** get_address_of_s_Current_1() { return &___s_Current_1; }
	inline void set_s_Current_1(Event_t991343199 * value)
	{
		___s_Current_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_Current_1), value);
	}

	inline static int32_t get_offset_of_s_MasterEvent_2() { return static_cast<int32_t>(offsetof(Event_t991343199_StaticFields, ___s_MasterEvent_2)); }
	inline Event_t991343199 * get_s_MasterEvent_2() const { return ___s_MasterEvent_2; }
	inline Event_t991343199 ** get_address_of_s_MasterEvent_2() { return &___s_MasterEvent_2; }
	inline void set_s_MasterEvent_2(Event_t991343199 * value)
	{
		___s_MasterEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_MasterEvent_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_3() { return static_cast<int32_t>(offsetof(Event_t991343199_StaticFields, ___U3CU3Ef__switchU24map0_3)); }
	inline Dictionary_2_t1211576255 * get_U3CU3Ef__switchU24map0_3() const { return ___U3CU3Ef__switchU24map0_3; }
	inline Dictionary_2_t1211576255 ** get_address_of_U3CU3Ef__switchU24map0_3() { return &___U3CU3Ef__switchU24map0_3; }
	inline void set_U3CU3Ef__switchU24map0_3(Dictionary_2_t1211576255 * value)
	{
		___U3CU3Ef__switchU24map0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map0_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_t991343199_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_t991343199_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // EVENT_T991343199_H
#ifndef TYPE_T3266154016_H
#define TYPE_T3266154016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutOption/Type
struct  Type_t3266154016 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t3266154016, ___value___1)); }
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
#endif // TYPE_T3266154016_H
#ifndef GUILAYOUTUTILITY_T196586206_H
#define GUILAYOUTUTILITY_T196586206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutUtility
struct  GUILayoutUtility_t196586206  : public RuntimeObject
{
public:

public:
};

struct GUILayoutUtility_t196586206_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredLayouts
	Dictionary_2_t1719058374 * ___s_StoredLayouts_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredWindows
	Dictionary_2_t1719058374 * ___s_StoredWindows_1;
	// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::current
	LayoutCache_t1696652188 * ___current_2;
	// UnityEngine.Rect UnityEngine.GUILayoutUtility::kDummyRect
	Rect_t2469536665  ___kDummyRect_3;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::s_SpaceStyle
	GUIStyle_t350904686 * ___s_SpaceStyle_4;

public:
	inline static int32_t get_offset_of_s_StoredLayouts_0() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t196586206_StaticFields, ___s_StoredLayouts_0)); }
	inline Dictionary_2_t1719058374 * get_s_StoredLayouts_0() const { return ___s_StoredLayouts_0; }
	inline Dictionary_2_t1719058374 ** get_address_of_s_StoredLayouts_0() { return &___s_StoredLayouts_0; }
	inline void set_s_StoredLayouts_0(Dictionary_2_t1719058374 * value)
	{
		___s_StoredLayouts_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_StoredLayouts_0), value);
	}

	inline static int32_t get_offset_of_s_StoredWindows_1() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t196586206_StaticFields, ___s_StoredWindows_1)); }
	inline Dictionary_2_t1719058374 * get_s_StoredWindows_1() const { return ___s_StoredWindows_1; }
	inline Dictionary_2_t1719058374 ** get_address_of_s_StoredWindows_1() { return &___s_StoredWindows_1; }
	inline void set_s_StoredWindows_1(Dictionary_2_t1719058374 * value)
	{
		___s_StoredWindows_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_StoredWindows_1), value);
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t196586206_StaticFields, ___current_2)); }
	inline LayoutCache_t1696652188 * get_current_2() const { return ___current_2; }
	inline LayoutCache_t1696652188 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(LayoutCache_t1696652188 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((&___current_2), value);
	}

	inline static int32_t get_offset_of_kDummyRect_3() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t196586206_StaticFields, ___kDummyRect_3)); }
	inline Rect_t2469536665  get_kDummyRect_3() const { return ___kDummyRect_3; }
	inline Rect_t2469536665 * get_address_of_kDummyRect_3() { return &___kDummyRect_3; }
	inline void set_kDummyRect_3(Rect_t2469536665  value)
	{
		___kDummyRect_3 = value;
	}

	inline static int32_t get_offset_of_s_SpaceStyle_4() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t196586206_StaticFields, ___s_SpaceStyle_4)); }
	inline GUIStyle_t350904686 * get_s_SpaceStyle_4() const { return ___s_SpaceStyle_4; }
	inline GUIStyle_t350904686 ** get_address_of_s_SpaceStyle_4() { return &___s_SpaceStyle_4; }
	inline void set_s_SpaceStyle_4(GUIStyle_t350904686 * value)
	{
		___s_SpaceStyle_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_SpaceStyle_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTUTILITY_T196586206_H
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
#ifndef GUISETTINGS_T3774310589_H
#define GUISETTINGS_T3774310589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUISettings
struct  GUISettings_t3774310589  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.GUISettings::m_DoubleClickSelectsWord
	bool ___m_DoubleClickSelectsWord_0;
	// System.Boolean UnityEngine.GUISettings::m_TripleClickSelectsLine
	bool ___m_TripleClickSelectsLine_1;
	// UnityEngine.Color UnityEngine.GUISettings::m_CursorColor
	Color_t3136506488  ___m_CursorColor_2;
	// System.Single UnityEngine.GUISettings::m_CursorFlashSpeed
	float ___m_CursorFlashSpeed_3;
	// UnityEngine.Color UnityEngine.GUISettings::m_SelectionColor
	Color_t3136506488  ___m_SelectionColor_4;

public:
	inline static int32_t get_offset_of_m_DoubleClickSelectsWord_0() { return static_cast<int32_t>(offsetof(GUISettings_t3774310589, ___m_DoubleClickSelectsWord_0)); }
	inline bool get_m_DoubleClickSelectsWord_0() const { return ___m_DoubleClickSelectsWord_0; }
	inline bool* get_address_of_m_DoubleClickSelectsWord_0() { return &___m_DoubleClickSelectsWord_0; }
	inline void set_m_DoubleClickSelectsWord_0(bool value)
	{
		___m_DoubleClickSelectsWord_0 = value;
	}

	inline static int32_t get_offset_of_m_TripleClickSelectsLine_1() { return static_cast<int32_t>(offsetof(GUISettings_t3774310589, ___m_TripleClickSelectsLine_1)); }
	inline bool get_m_TripleClickSelectsLine_1() const { return ___m_TripleClickSelectsLine_1; }
	inline bool* get_address_of_m_TripleClickSelectsLine_1() { return &___m_TripleClickSelectsLine_1; }
	inline void set_m_TripleClickSelectsLine_1(bool value)
	{
		___m_TripleClickSelectsLine_1 = value;
	}

	inline static int32_t get_offset_of_m_CursorColor_2() { return static_cast<int32_t>(offsetof(GUISettings_t3774310589, ___m_CursorColor_2)); }
	inline Color_t3136506488  get_m_CursorColor_2() const { return ___m_CursorColor_2; }
	inline Color_t3136506488 * get_address_of_m_CursorColor_2() { return &___m_CursorColor_2; }
	inline void set_m_CursorColor_2(Color_t3136506488  value)
	{
		___m_CursorColor_2 = value;
	}

	inline static int32_t get_offset_of_m_CursorFlashSpeed_3() { return static_cast<int32_t>(offsetof(GUISettings_t3774310589, ___m_CursorFlashSpeed_3)); }
	inline float get_m_CursorFlashSpeed_3() const { return ___m_CursorFlashSpeed_3; }
	inline float* get_address_of_m_CursorFlashSpeed_3() { return &___m_CursorFlashSpeed_3; }
	inline void set_m_CursorFlashSpeed_3(float value)
	{
		___m_CursorFlashSpeed_3 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_4() { return static_cast<int32_t>(offsetof(GUISettings_t3774310589, ___m_SelectionColor_4)); }
	inline Color_t3136506488  get_m_SelectionColor_4() const { return ___m_SelectionColor_4; }
	inline Color_t3136506488 * get_address_of_m_SelectionColor_4() { return &___m_SelectionColor_4; }
	inline void set_m_SelectionColor_4(Color_t3136506488  value)
	{
		___m_SelectionColor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISETTINGS_T3774310589_H
#ifndef GUISTYLESTATE_T1881122624_H
#define GUISTYLESTATE_T1881122624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyleState
struct  GUIStyleState_t1881122624  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t350904686 * ___m_SourceStyle_1;
	// UnityEngine.Texture2D UnityEngine.GUIStyleState::m_Background
	Texture2D_t4076404164 * ___m_Background_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_t1881122624, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_t1881122624, ___m_SourceStyle_1)); }
	inline GUIStyle_t350904686 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t350904686 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t350904686 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}

	inline static int32_t get_offset_of_m_Background_2() { return static_cast<int32_t>(offsetof(GUIStyleState_t1881122624, ___m_Background_2)); }
	inline Texture2D_t4076404164 * get_m_Background_2() const { return ___m_Background_2; }
	inline Texture2D_t4076404164 ** get_address_of_m_Background_2() { return &___m_Background_2; }
	inline void set_m_Background_2(Texture2D_t4076404164 * value)
	{
		___m_Background_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Background_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1881122624_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t350904686_marshaled_pinvoke* ___m_SourceStyle_1;
	Texture2D_t4076404164 * ___m_Background_2;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1881122624_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t350904686_marshaled_com* ___m_SourceStyle_1;
	Texture2D_t4076404164 * ___m_Background_2;
};
#endif // GUISTYLESTATE_T1881122624_H
#ifndef IMAGEPOSITION_T2295787006_H
#define IMAGEPOSITION_T2295787006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ImagePosition
struct  ImagePosition_t2295787006 
{
public:
	// System.Int32 UnityEngine.ImagePosition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ImagePosition_t2295787006, ___value___1)); }
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
#endif // IMAGEPOSITION_T2295787006_H
#ifndef TEXTCLIPPING_T3084615976_H
#define TEXTCLIPPING_T3084615976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextClipping
struct  TextClipping_t3084615976 
{
public:
	// System.Int32 UnityEngine.TextClipping::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextClipping_t3084615976, ___value___1)); }
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
#endif // TEXTCLIPPING_T3084615976_H
#ifndef GUIUTILITY_T49155958_H
#define GUIUTILITY_T49155958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIUtility
struct  GUIUtility_t49155958  : public RuntimeObject
{
public:

public:
};

struct GUIUtility_t49155958_StaticFields
{
public:
	// System.Int32 UnityEngine.GUIUtility::s_SkinMode
	int32_t ___s_SkinMode_0;
	// System.Int32 UnityEngine.GUIUtility::s_OriginalID
	int32_t ___s_OriginalID_1;
	// System.Action UnityEngine.GUIUtility::takeCapture
	Action_t3348862539 * ___takeCapture_2;
	// System.Action UnityEngine.GUIUtility::releaseCapture
	Action_t3348862539 * ___releaseCapture_3;
	// System.Func`3<System.Int32,System.IntPtr,System.Boolean> UnityEngine.GUIUtility::processEvent
	Func_3_t2654713318 * ___processEvent_4;
	// System.Func`2<System.Exception,System.Boolean> UnityEngine.GUIUtility::endContainerGUIFromException
	Func_2_t3496186004 * ___endContainerGUIFromException_5;
	// System.Boolean UnityEngine.GUIUtility::<guiIsExiting>k__BackingField
	bool ___U3CguiIsExitingU3Ek__BackingField_6;
	// UnityEngine.Vector2 UnityEngine.GUIUtility::s_EditorScreenPointOffset
	Vector2_t1870731928  ___s_EditorScreenPointOffset_7;

public:
	inline static int32_t get_offset_of_s_SkinMode_0() { return static_cast<int32_t>(offsetof(GUIUtility_t49155958_StaticFields, ___s_SkinMode_0)); }
	inline int32_t get_s_SkinMode_0() const { return ___s_SkinMode_0; }
	inline int32_t* get_address_of_s_SkinMode_0() { return &___s_SkinMode_0; }
	inline void set_s_SkinMode_0(int32_t value)
	{
		___s_SkinMode_0 = value;
	}

	inline static int32_t get_offset_of_s_OriginalID_1() { return static_cast<int32_t>(offsetof(GUIUtility_t49155958_StaticFields, ___s_OriginalID_1)); }
	inline int32_t get_s_OriginalID_1() const { return ___s_OriginalID_1; }
	inline int32_t* get_address_of_s_OriginalID_1() { return &___s_OriginalID_1; }
	inline void set_s_OriginalID_1(int32_t value)
	{
		___s_OriginalID_1 = value;
	}

	inline static int32_t get_offset_of_takeCapture_2() { return static_cast<int32_t>(offsetof(GUIUtility_t49155958_StaticFields, ___takeCapture_2)); }
	inline Action_t3348862539 * get_takeCapture_2() const { return ___takeCapture_2; }
	inline Action_t3348862539 ** get_address_of_takeCapture_2() { return &___takeCapture_2; }
	inline void set_takeCapture_2(Action_t3348862539 * value)
	{
		___takeCapture_2 = value;
		Il2CppCodeGenWriteBarrier((&___takeCapture_2), value);
	}

	inline static int32_t get_offset_of_releaseCapture_3() { return static_cast<int32_t>(offsetof(GUIUtility_t49155958_StaticFields, ___releaseCapture_3)); }
	inline Action_t3348862539 * get_releaseCapture_3() const { return ___releaseCapture_3; }
	inline Action_t3348862539 ** get_address_of_releaseCapture_3() { return &___releaseCapture_3; }
	inline void set_releaseCapture_3(Action_t3348862539 * value)
	{
		___releaseCapture_3 = value;
		Il2CppCodeGenWriteBarrier((&___releaseCapture_3), value);
	}

	inline static int32_t get_offset_of_processEvent_4() { return static_cast<int32_t>(offsetof(GUIUtility_t49155958_StaticFields, ___processEvent_4)); }
	inline Func_3_t2654713318 * get_processEvent_4() const { return ___processEvent_4; }
	inline Func_3_t2654713318 ** get_address_of_processEvent_4() { return &___processEvent_4; }
	inline void set_processEvent_4(Func_3_t2654713318 * value)
	{
		___processEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___processEvent_4), value);
	}

	inline static int32_t get_offset_of_endContainerGUIFromException_5() { return static_cast<int32_t>(offsetof(GUIUtility_t49155958_StaticFields, ___endContainerGUIFromException_5)); }
	inline Func_2_t3496186004 * get_endContainerGUIFromException_5() const { return ___endContainerGUIFromException_5; }
	inline Func_2_t3496186004 ** get_address_of_endContainerGUIFromException_5() { return &___endContainerGUIFromException_5; }
	inline void set_endContainerGUIFromException_5(Func_2_t3496186004 * value)
	{
		___endContainerGUIFromException_5 = value;
		Il2CppCodeGenWriteBarrier((&___endContainerGUIFromException_5), value);
	}

	inline static int32_t get_offset_of_U3CguiIsExitingU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GUIUtility_t49155958_StaticFields, ___U3CguiIsExitingU3Ek__BackingField_6)); }
	inline bool get_U3CguiIsExitingU3Ek__BackingField_6() const { return ___U3CguiIsExitingU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CguiIsExitingU3Ek__BackingField_6() { return &___U3CguiIsExitingU3Ek__BackingField_6; }
	inline void set_U3CguiIsExitingU3Ek__BackingField_6(bool value)
	{
		___U3CguiIsExitingU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_s_EditorScreenPointOffset_7() { return static_cast<int32_t>(offsetof(GUIUtility_t49155958_StaticFields, ___s_EditorScreenPointOffset_7)); }
	inline Vector2_t1870731928  get_s_EditorScreenPointOffset_7() const { return ___s_EditorScreenPointOffset_7; }
	inline Vector2_t1870731928 * get_address_of_s_EditorScreenPointOffset_7() { return &___s_EditorScreenPointOffset_7; }
	inline void set_s_EditorScreenPointOffset_7(Vector2_t1870731928  value)
	{
		___s_EditorScreenPointOffset_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIUTILITY_T49155958_H
#ifndef PLAYABLEHANDLE_T1049564817_H
#define PLAYABLEHANDLE_T1049564817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t1049564817 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t1049564817, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t1049564817, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T1049564817_H
#ifndef UICHARINFO_T521654658_H
#define UICHARINFO_T521654658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UICharInfo
struct  UICharInfo_t521654658 
{
public:
	// UnityEngine.Vector2 UnityEngine.UICharInfo::cursorPos
	Vector2_t1870731928  ___cursorPos_0;
	// System.Single UnityEngine.UICharInfo::charWidth
	float ___charWidth_1;

public:
	inline static int32_t get_offset_of_cursorPos_0() { return static_cast<int32_t>(offsetof(UICharInfo_t521654658, ___cursorPos_0)); }
	inline Vector2_t1870731928  get_cursorPos_0() const { return ___cursorPos_0; }
	inline Vector2_t1870731928 * get_address_of_cursorPos_0() { return &___cursorPos_0; }
	inline void set_cursorPos_0(Vector2_t1870731928  value)
	{
		___cursorPos_0 = value;
	}

	inline static int32_t get_offset_of_charWidth_1() { return static_cast<int32_t>(offsetof(UICharInfo_t521654658, ___charWidth_1)); }
	inline float get_charWidth_1() const { return ___charWidth_1; }
	inline float* get_address_of_charWidth_1() { return &___charWidth_1; }
	inline void set_charWidth_1(float value)
	{
		___charWidth_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UICHARINFO_T521654658_H
#ifndef PLAYABLEOUTPUTHANDLE_T3202198898_H
#define PLAYABLEOUTPUTHANDLE_T3202198898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t3202198898 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t3202198898, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t3202198898, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T3202198898_H
#ifndef OBJECT_T1699899486_H
#define OBJECT_T1699899486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1699899486  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1699899486, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1699899486_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1699899486_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t1699899486_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1699899486_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1699899486_H
#ifndef GUILAYOUTENTRY_T3770082851_H
#define GUILAYOUTENTRY_T3770082851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutEntry
struct  GUILayoutEntry_t3770082851  : public RuntimeObject
{
public:
	// System.Single UnityEngine.GUILayoutEntry::minWidth
	float ___minWidth_0;
	// System.Single UnityEngine.GUILayoutEntry::maxWidth
	float ___maxWidth_1;
	// System.Single UnityEngine.GUILayoutEntry::minHeight
	float ___minHeight_2;
	// System.Single UnityEngine.GUILayoutEntry::maxHeight
	float ___maxHeight_3;
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::rect
	Rect_t2469536665  ___rect_4;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchWidth
	int32_t ___stretchWidth_5;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchHeight
	int32_t ___stretchHeight_6;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::m_Style
	GUIStyle_t350904686 * ___m_Style_7;

public:
	inline static int32_t get_offset_of_minWidth_0() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3770082851, ___minWidth_0)); }
	inline float get_minWidth_0() const { return ___minWidth_0; }
	inline float* get_address_of_minWidth_0() { return &___minWidth_0; }
	inline void set_minWidth_0(float value)
	{
		___minWidth_0 = value;
	}

	inline static int32_t get_offset_of_maxWidth_1() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3770082851, ___maxWidth_1)); }
	inline float get_maxWidth_1() const { return ___maxWidth_1; }
	inline float* get_address_of_maxWidth_1() { return &___maxWidth_1; }
	inline void set_maxWidth_1(float value)
	{
		___maxWidth_1 = value;
	}

	inline static int32_t get_offset_of_minHeight_2() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3770082851, ___minHeight_2)); }
	inline float get_minHeight_2() const { return ___minHeight_2; }
	inline float* get_address_of_minHeight_2() { return &___minHeight_2; }
	inline void set_minHeight_2(float value)
	{
		___minHeight_2 = value;
	}

	inline static int32_t get_offset_of_maxHeight_3() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3770082851, ___maxHeight_3)); }
	inline float get_maxHeight_3() const { return ___maxHeight_3; }
	inline float* get_address_of_maxHeight_3() { return &___maxHeight_3; }
	inline void set_maxHeight_3(float value)
	{
		___maxHeight_3 = value;
	}

	inline static int32_t get_offset_of_rect_4() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3770082851, ___rect_4)); }
	inline Rect_t2469536665  get_rect_4() const { return ___rect_4; }
	inline Rect_t2469536665 * get_address_of_rect_4() { return &___rect_4; }
	inline void set_rect_4(Rect_t2469536665  value)
	{
		___rect_4 = value;
	}

	inline static int32_t get_offset_of_stretchWidth_5() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3770082851, ___stretchWidth_5)); }
	inline int32_t get_stretchWidth_5() const { return ___stretchWidth_5; }
	inline int32_t* get_address_of_stretchWidth_5() { return &___stretchWidth_5; }
	inline void set_stretchWidth_5(int32_t value)
	{
		___stretchWidth_5 = value;
	}

	inline static int32_t get_offset_of_stretchHeight_6() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3770082851, ___stretchHeight_6)); }
	inline int32_t get_stretchHeight_6() const { return ___stretchHeight_6; }
	inline int32_t* get_address_of_stretchHeight_6() { return &___stretchHeight_6; }
	inline void set_stretchHeight_6(int32_t value)
	{
		___stretchHeight_6 = value;
	}

	inline static int32_t get_offset_of_m_Style_7() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3770082851, ___m_Style_7)); }
	inline GUIStyle_t350904686 * get_m_Style_7() const { return ___m_Style_7; }
	inline GUIStyle_t350904686 ** get_address_of_m_Style_7() { return &___m_Style_7; }
	inline void set_m_Style_7(GUIStyle_t350904686 * value)
	{
		___m_Style_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Style_7), value);
	}
};

struct GUILayoutEntry_t3770082851_StaticFields
{
public:
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::kDummyRect
	Rect_t2469536665  ___kDummyRect_8;
	// System.Int32 UnityEngine.GUILayoutEntry::indent
	int32_t ___indent_9;

public:
	inline static int32_t get_offset_of_kDummyRect_8() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3770082851_StaticFields, ___kDummyRect_8)); }
	inline Rect_t2469536665  get_kDummyRect_8() const { return ___kDummyRect_8; }
	inline Rect_t2469536665 * get_address_of_kDummyRect_8() { return &___kDummyRect_8; }
	inline void set_kDummyRect_8(Rect_t2469536665  value)
	{
		___kDummyRect_8 = value;
	}

	inline static int32_t get_offset_of_indent_9() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3770082851_StaticFields, ___indent_9)); }
	inline int32_t get_indent_9() const { return ___indent_9; }
	inline int32_t* get_address_of_indent_9() { return &___indent_9; }
	inline void set_indent_9(int32_t value)
	{
		___indent_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTENTRY_T3770082851_H
#ifndef VERTICALWRAPMODE_T3892631209_H
#define VERTICALWRAPMODE_T3892631209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.VerticalWrapMode
struct  VerticalWrapMode_t3892631209 
{
public:
	// System.Int32 UnityEngine.VerticalWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VerticalWrapMode_t3892631209, ___value___1)); }
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
#endif // VERTICALWRAPMODE_T3892631209_H
#ifndef CONTROLLERCOLLIDERHIT_T4123103849_H
#define CONTROLLERCOLLIDERHIT_T4123103849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ControllerColliderHit
struct  ControllerColliderHit_t4123103849  : public RuntimeObject
{
public:
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t2626182459 * ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t997197530 * ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t1874995928  ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t1874995928  ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t1874995928  ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;

public:
	inline static int32_t get_offset_of_m_Controller_0() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t4123103849, ___m_Controller_0)); }
	inline CharacterController_t2626182459 * get_m_Controller_0() const { return ___m_Controller_0; }
	inline CharacterController_t2626182459 ** get_address_of_m_Controller_0() { return &___m_Controller_0; }
	inline void set_m_Controller_0(CharacterController_t2626182459 * value)
	{
		___m_Controller_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Controller_0), value);
	}

	inline static int32_t get_offset_of_m_Collider_1() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t4123103849, ___m_Collider_1)); }
	inline Collider_t997197530 * get_m_Collider_1() const { return ___m_Collider_1; }
	inline Collider_t997197530 ** get_address_of_m_Collider_1() { return &___m_Collider_1; }
	inline void set_m_Collider_1(Collider_t997197530 * value)
	{
		___m_Collider_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_1), value);
	}

	inline static int32_t get_offset_of_m_Point_2() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t4123103849, ___m_Point_2)); }
	inline Vector3_t1874995928  get_m_Point_2() const { return ___m_Point_2; }
	inline Vector3_t1874995928 * get_address_of_m_Point_2() { return &___m_Point_2; }
	inline void set_m_Point_2(Vector3_t1874995928  value)
	{
		___m_Point_2 = value;
	}

	inline static int32_t get_offset_of_m_Normal_3() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t4123103849, ___m_Normal_3)); }
	inline Vector3_t1874995928  get_m_Normal_3() const { return ___m_Normal_3; }
	inline Vector3_t1874995928 * get_address_of_m_Normal_3() { return &___m_Normal_3; }
	inline void set_m_Normal_3(Vector3_t1874995928  value)
	{
		___m_Normal_3 = value;
	}

	inline static int32_t get_offset_of_m_MoveDirection_4() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t4123103849, ___m_MoveDirection_4)); }
	inline Vector3_t1874995928  get_m_MoveDirection_4() const { return ___m_MoveDirection_4; }
	inline Vector3_t1874995928 * get_address_of_m_MoveDirection_4() { return &___m_MoveDirection_4; }
	inline void set_m_MoveDirection_4(Vector3_t1874995928  value)
	{
		___m_MoveDirection_4 = value;
	}

	inline static int32_t get_offset_of_m_MoveLength_5() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t4123103849, ___m_MoveLength_5)); }
	inline float get_m_MoveLength_5() const { return ___m_MoveLength_5; }
	inline float* get_address_of_m_MoveLength_5() { return &___m_MoveLength_5; }
	inline void set_m_MoveLength_5(float value)
	{
		___m_MoveLength_5 = value;
	}

	inline static int32_t get_offset_of_m_Push_6() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t4123103849, ___m_Push_6)); }
	inline int32_t get_m_Push_6() const { return ___m_Push_6; }
	inline int32_t* get_address_of_m_Push_6() { return &___m_Push_6; }
	inline void set_m_Push_6(int32_t value)
	{
		___m_Push_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t4123103849_marshaled_pinvoke
{
	CharacterController_t2626182459 * ___m_Controller_0;
	Collider_t997197530 * ___m_Collider_1;
	Vector3_t1874995928  ___m_Point_2;
	Vector3_t1874995928  ___m_Normal_3;
	Vector3_t1874995928  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t4123103849_marshaled_com
{
	CharacterController_t2626182459 * ___m_Controller_0;
	Collider_t997197530 * ___m_Collider_1;
	Vector3_t1874995928  ___m_Point_2;
	Vector3_t1874995928  ___m_Normal_3;
	Vector3_t1874995928  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
#endif // CONTROLLERCOLLIDERHIT_T4123103849_H
#ifndef TEXTANCHOR_T1116031447_H
#define TEXTANCHOR_T1116031447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_t1116031447 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextAnchor_t1116031447, ___value___1)); }
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
#endif // TEXTANCHOR_T1116031447_H
#ifndef COLLISION_T3987428053_H
#define COLLISION_T3987428053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision
struct  Collision_t3987428053  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t1874995928  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t1874995928  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t2944185830 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t997197530 * ___m_Collider_3;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_Contacts
	ContactPointU5BU5D_t542943583* ___m_Contacts_4;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_t3987428053, ___m_Impulse_0)); }
	inline Vector3_t1874995928  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t1874995928 * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t1874995928  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_t3987428053, ___m_RelativeVelocity_1)); }
	inline Vector3_t1874995928  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t1874995928 * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t1874995928  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_t3987428053, ___m_Rigidbody_2)); }
	inline Rigidbody_t2944185830 * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t2944185830 ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t2944185830 * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody_2), value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_t3987428053, ___m_Collider_3)); }
	inline Collider_t997197530 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t997197530 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t997197530 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_3), value);
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision_t3987428053, ___m_Contacts_4)); }
	inline ContactPointU5BU5D_t542943583* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPointU5BU5D_t542943583** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPointU5BU5D_t542943583* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_t3987428053_marshaled_pinvoke
{
	Vector3_t1874995928  ___m_Impulse_0;
	Vector3_t1874995928  ___m_RelativeVelocity_1;
	Rigidbody_t2944185830 * ___m_Rigidbody_2;
	Collider_t997197530 * ___m_Collider_3;
	ContactPoint_t1076508538 * ___m_Contacts_4;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_t3987428053_marshaled_com
{
	Vector3_t1874995928  ___m_Impulse_0;
	Vector3_t1874995928  ___m_RelativeVelocity_1;
	Rigidbody_t2944185830 * ___m_Rigidbody_2;
	Collider_t997197530 * ___m_Collider_3;
	ContactPoint_t1076508538 * ___m_Contacts_4;
};
#endif // COLLISION_T3987428053_H
#ifndef QUERYTRIGGERINTERACTION_T189968416_H
#define QUERYTRIGGERINTERACTION_T189968416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.QueryTriggerInteraction
struct  QueryTriggerInteraction_t189968416 
{
public:
	// System.Int32 UnityEngine.QueryTriggerInteraction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(QueryTriggerInteraction_t189968416, ___value___1)); }
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
#endif // QUERYTRIGGERINTERACTION_T189968416_H
#ifndef CONTACTPOINT_T1076508538_H
#define CONTACTPOINT_T1076508538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint
struct  ContactPoint_t1076508538 
{
public:
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t1874995928  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t1874995928  ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint_t1076508538, ___m_Point_0)); }
	inline Vector3_t1874995928  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t1874995928 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t1874995928  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint_t1076508538, ___m_Normal_1)); }
	inline Vector3_t1874995928  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t1874995928 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t1874995928  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisColliderInstanceID_2() { return static_cast<int32_t>(offsetof(ContactPoint_t1076508538, ___m_ThisColliderInstanceID_2)); }
	inline int32_t get_m_ThisColliderInstanceID_2() const { return ___m_ThisColliderInstanceID_2; }
	inline int32_t* get_address_of_m_ThisColliderInstanceID_2() { return &___m_ThisColliderInstanceID_2; }
	inline void set_m_ThisColliderInstanceID_2(int32_t value)
	{
		___m_ThisColliderInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ContactPoint_t1076508538, ___m_OtherColliderInstanceID_3)); }
	inline int32_t get_m_OtherColliderInstanceID_3() const { return ___m_OtherColliderInstanceID_3; }
	inline int32_t* get_address_of_m_OtherColliderInstanceID_3() { return &___m_OtherColliderInstanceID_3; }
	inline void set_m_OtherColliderInstanceID_3(int32_t value)
	{
		___m_OtherColliderInstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_Separation_4() { return static_cast<int32_t>(offsetof(ContactPoint_t1076508538, ___m_Separation_4)); }
	inline float get_m_Separation_4() const { return ___m_Separation_4; }
	inline float* get_address_of_m_Separation_4() { return &___m_Separation_4; }
	inline void set_m_Separation_4(float value)
	{
		___m_Separation_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT_T1076508538_H
#ifndef RAYCASTHIT_T1849044375_H
#define RAYCASTHIT_T1849044375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t1849044375 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t1874995928  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t1874995928  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1870731928  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t997197530 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t1849044375, ___m_Point_0)); }
	inline Vector3_t1874995928  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t1874995928 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t1874995928  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t1849044375, ___m_Normal_1)); }
	inline Vector3_t1874995928  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t1874995928 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t1874995928  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t1849044375, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t1849044375, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t1849044375, ___m_UV_4)); }
	inline Vector2_t1870731928  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t1870731928 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t1870731928  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t1849044375, ___m_Collider_5)); }
	inline Collider_t997197530 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t997197530 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t997197530 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1849044375_marshaled_pinvoke
{
	Vector3_t1874995928  ___m_Point_0;
	Vector3_t1874995928  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t1870731928  ___m_UV_4;
	Collider_t997197530 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1849044375_marshaled_com
{
	Vector3_t1874995928  ___m_Point_0;
	Vector3_t1874995928  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t1870731928  ___m_UV_4;
	Collider_t997197530 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T1849044375_H
#ifndef RAYCASTHIT2D_T618660614_H
#define RAYCASTHIT2D_T618660614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t618660614 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1870731928  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1870731928  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1870731928  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// UnityEngine.Collider2D UnityEngine.RaycastHit2D::m_Collider
	Collider2D_t1683084049 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t618660614, ___m_Centroid_0)); }
	inline Vector2_t1870731928  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_t1870731928 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_t1870731928  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t618660614, ___m_Point_1)); }
	inline Vector2_t1870731928  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_t1870731928 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_t1870731928  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t618660614, ___m_Normal_2)); }
	inline Vector2_t1870731928  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_t1870731928 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_t1870731928  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t618660614, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t618660614, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t618660614, ___m_Collider_5)); }
	inline Collider2D_t1683084049 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider2D_t1683084049 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider2D_t1683084049 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t618660614_marshaled_pinvoke
{
	Vector2_t1870731928  ___m_Centroid_0;
	Vector2_t1870731928  ___m_Point_1;
	Vector2_t1870731928  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t1683084049 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t618660614_marshaled_com
{
	Vector2_t1870731928  ___m_Centroid_0;
	Vector2_t1870731928  ___m_Point_1;
	Vector2_t1870731928  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t1683084049 * ___m_Collider_5;
};
#endif // RAYCASTHIT2D_T618660614_H
#ifndef HORIZONTALWRAPMODE_T211990075_H
#define HORIZONTALWRAPMODE_T211990075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HorizontalWrapMode
struct  HorizontalWrapMode_t211990075 
{
public:
	// System.Int32 UnityEngine.HorizontalWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HorizontalWrapMode_t211990075, ___value___1)); }
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
#endif // HORIZONTALWRAPMODE_T211990075_H
#ifndef ANIMATIONEVENTSOURCE_T2312484378_H
#define ANIMATIONEVENTSOURCE_T2312484378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationEventSource
struct  AnimationEventSource_t2312484378 
{
public:
	// System.Int32 UnityEngine.AnimationEventSource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnimationEventSource_t2312484378, ___value___1)); }
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
#endif // ANIMATIONEVENTSOURCE_T2312484378_H
#ifndef ANIMATORCONTROLLERPARAMETERTYPE_T2855905517_H
#define ANIMATORCONTROLLERPARAMETERTYPE_T2855905517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorControllerParameterType
struct  AnimatorControllerParameterType_t2855905517 
{
public:
	// System.Int32 UnityEngine.AnimatorControllerParameterType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnimatorControllerParameterType_t2855905517, ___value___1)); }
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
#endif // ANIMATORCONTROLLERPARAMETERTYPE_T2855905517_H
#ifndef SKELETONBONE_T223881975_H
#define SKELETONBONE_T223881975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SkeletonBone
struct  SkeletonBone_t223881975 
{
public:
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// System.String UnityEngine.SkeletonBone::parentName
	String_t* ___parentName_1;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_t1874995928  ___position_2;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_t1904711730  ___rotation_3;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_t1874995928  ___scale_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SkeletonBone_t223881975, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_parentName_1() { return static_cast<int32_t>(offsetof(SkeletonBone_t223881975, ___parentName_1)); }
	inline String_t* get_parentName_1() const { return ___parentName_1; }
	inline String_t** get_address_of_parentName_1() { return &___parentName_1; }
	inline void set_parentName_1(String_t* value)
	{
		___parentName_1 = value;
		Il2CppCodeGenWriteBarrier((&___parentName_1), value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(SkeletonBone_t223881975, ___position_2)); }
	inline Vector3_t1874995928  get_position_2() const { return ___position_2; }
	inline Vector3_t1874995928 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_t1874995928  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(SkeletonBone_t223881975, ___rotation_3)); }
	inline Quaternion_t1904711730  get_rotation_3() const { return ___rotation_3; }
	inline Quaternion_t1904711730 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(Quaternion_t1904711730  value)
	{
		___rotation_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(SkeletonBone_t223881975, ___scale_4)); }
	inline Vector3_t1874995928  get_scale_4() const { return ___scale_4; }
	inline Vector3_t1874995928 * get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(Vector3_t1874995928  value)
	{
		___scale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_t223881975_marshaled_pinvoke
{
	char* ___name_0;
	char* ___parentName_1;
	Vector3_t1874995928  ___position_2;
	Quaternion_t1904711730  ___rotation_3;
	Vector3_t1874995928  ___scale_4;
};
// Native definition for COM marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_t223881975_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___parentName_1;
	Vector3_t1874995928  ___position_2;
	Quaternion_t1904711730  ___rotation_3;
	Vector3_t1874995928  ___scale_4;
};
#endif // SKELETONBONE_T223881975_H
#ifndef HUMANLIMIT_T1839991932_H
#define HUMANLIMIT_T1839991932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanLimit
struct  HumanLimit_t1839991932 
{
public:
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Min
	Vector3_t1874995928  ___m_Min_0;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Max
	Vector3_t1874995928  ___m_Max_1;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Center
	Vector3_t1874995928  ___m_Center_2;
	// System.Single UnityEngine.HumanLimit::m_AxisLength
	float ___m_AxisLength_3;
	// System.Int32 UnityEngine.HumanLimit::m_UseDefaultValues
	int32_t ___m_UseDefaultValues_4;

public:
	inline static int32_t get_offset_of_m_Min_0() { return static_cast<int32_t>(offsetof(HumanLimit_t1839991932, ___m_Min_0)); }
	inline Vector3_t1874995928  get_m_Min_0() const { return ___m_Min_0; }
	inline Vector3_t1874995928 * get_address_of_m_Min_0() { return &___m_Min_0; }
	inline void set_m_Min_0(Vector3_t1874995928  value)
	{
		___m_Min_0 = value;
	}

	inline static int32_t get_offset_of_m_Max_1() { return static_cast<int32_t>(offsetof(HumanLimit_t1839991932, ___m_Max_1)); }
	inline Vector3_t1874995928  get_m_Max_1() const { return ___m_Max_1; }
	inline Vector3_t1874995928 * get_address_of_m_Max_1() { return &___m_Max_1; }
	inline void set_m_Max_1(Vector3_t1874995928  value)
	{
		___m_Max_1 = value;
	}

	inline static int32_t get_offset_of_m_Center_2() { return static_cast<int32_t>(offsetof(HumanLimit_t1839991932, ___m_Center_2)); }
	inline Vector3_t1874995928  get_m_Center_2() const { return ___m_Center_2; }
	inline Vector3_t1874995928 * get_address_of_m_Center_2() { return &___m_Center_2; }
	inline void set_m_Center_2(Vector3_t1874995928  value)
	{
		___m_Center_2 = value;
	}

	inline static int32_t get_offset_of_m_AxisLength_3() { return static_cast<int32_t>(offsetof(HumanLimit_t1839991932, ___m_AxisLength_3)); }
	inline float get_m_AxisLength_3() const { return ___m_AxisLength_3; }
	inline float* get_address_of_m_AxisLength_3() { return &___m_AxisLength_3; }
	inline void set_m_AxisLength_3(float value)
	{
		___m_AxisLength_3 = value;
	}

	inline static int32_t get_offset_of_m_UseDefaultValues_4() { return static_cast<int32_t>(offsetof(HumanLimit_t1839991932, ___m_UseDefaultValues_4)); }
	inline int32_t get_m_UseDefaultValues_4() const { return ___m_UseDefaultValues_4; }
	inline int32_t* get_address_of_m_UseDefaultValues_4() { return &___m_UseDefaultValues_4; }
	inline void set_m_UseDefaultValues_4(int32_t value)
	{
		___m_UseDefaultValues_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HUMANLIMIT_T1839991932_H
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
#ifndef FONTSTYLE_T363196109_H
#define FONTSTYLE_T363196109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FontStyle
struct  FontStyle_t363196109 
{
public:
	// System.Int32 UnityEngine.FontStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FontStyle_t363196109, ___value___1)); }
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
#endif // FONTSTYLE_T363196109_H
#ifndef TEXTGENERATIONERROR_T2800342738_H
#define TEXTGENERATIONERROR_T2800342738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextGenerationError
struct  TextGenerationError_t2800342738 
{
public:
	// System.Int32 UnityEngine.TextGenerationError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextGenerationError_t2800342738, ___value___1)); }
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
#endif // TEXTGENERATIONERROR_T2800342738_H
#ifndef ANIMATIONOFFSETPLAYABLE_T799596381_H
#define ANIMATIONOFFSETPLAYABLE_T799596381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationOffsetPlayable
struct  AnimationOffsetPlayable_t799596381 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::m_Handle
	PlayableHandle_t1049564817  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t799596381, ___m_Handle_0)); }
	inline PlayableHandle_t1049564817  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1049564817 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1049564817  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationOffsetPlayable_t799596381_StaticFields
{
public:
	// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::m_NullPlayable
	AnimationOffsetPlayable_t799596381  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t799596381_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationOffsetPlayable_t799596381  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationOffsetPlayable_t799596381 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationOffsetPlayable_t799596381  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONOFFSETPLAYABLE_T799596381_H
#ifndef COMPONENT_T1099781993_H
#define COMPONENT_T1099781993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1099781993  : public Object_t1699899486
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1099781993_H
#ifndef AUDIOCLIP_T4119059730_H
#define AUDIOCLIP_T4119059730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t4119059730  : public Object_t1699899486
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t2043580182 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t904171160 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t4119059730, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t2043580182 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t2043580182 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t2043580182 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t4119059730, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t904171160 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t904171160 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t904171160 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T4119059730_H
#ifndef AUDIOPLAYABLEOUTPUT_T1787853400_H
#define AUDIOPLAYABLEOUTPUT_T1787853400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioPlayableOutput
struct  AudioPlayableOutput_t1787853400 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::m_Handle
	PlayableOutputHandle_t3202198898  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioPlayableOutput_t1787853400, ___m_Handle_0)); }
	inline PlayableOutputHandle_t3202198898  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t3202198898 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t3202198898  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOPLAYABLEOUTPUT_T1787853400_H
#ifndef AVATARMASK_T2342763962_H
#define AVATARMASK_T2342763962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AvatarMask
struct  AvatarMask_t2342763962  : public Object_t1699899486
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AVATARMASK_T2342763962_H
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
#ifndef ANIMATIONCLIPPLAYABLE_T3152389060_H
#define ANIMATIONCLIPPLAYABLE_T3152389060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationClipPlayable
struct  AnimationClipPlayable_t3152389060 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::m_Handle
	PlayableHandle_t1049564817  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationClipPlayable_t3152389060, ___m_Handle_0)); }
	inline PlayableHandle_t1049564817  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1049564817 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1049564817  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCLIPPLAYABLE_T3152389060_H
#ifndef ANIMATIONLAYERMIXERPLAYABLE_T3487463270_H
#define ANIMATIONLAYERMIXERPLAYABLE_T3487463270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationLayerMixerPlayable
struct  AnimationLayerMixerPlayable_t3487463270 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::m_Handle
	PlayableHandle_t1049564817  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t3487463270, ___m_Handle_0)); }
	inline PlayableHandle_t1049564817  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1049564817 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1049564817  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationLayerMixerPlayable_t3487463270_StaticFields
{
public:
	// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::m_NullPlayable
	AnimationLayerMixerPlayable_t3487463270  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t3487463270_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationLayerMixerPlayable_t3487463270  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationLayerMixerPlayable_t3487463270 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationLayerMixerPlayable_t3487463270  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONLAYERMIXERPLAYABLE_T3487463270_H
#ifndef ANIMATIONMIXERPLAYABLE_T896160780_H
#define ANIMATIONMIXERPLAYABLE_T896160780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationMixerPlayable
struct  AnimationMixerPlayable_t896160780 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::m_Handle
	PlayableHandle_t1049564817  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_t896160780, ___m_Handle_0)); }
	inline PlayableHandle_t1049564817  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1049564817 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1049564817  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONMIXERPLAYABLE_T896160780_H
#ifndef GUISTYLE_T350904686_H
#define GUISTYLE_T350904686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t350904686  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t1881122624 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t1881122624 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t1881122624 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t1881122624 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t1881122624 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t1881122624 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t1881122624 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t1881122624 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t603374043 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t603374043 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t603374043 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t603374043 * ___m_Overflow_12;
	// UnityEngine.Font UnityEngine.GUIStyle::m_FontInternal
	Font_t3940830037 * ___m_FontInternal_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t350904686, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t350904686, ___m_Normal_1)); }
	inline GUIStyleState_t1881122624 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t1881122624 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t1881122624 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normal_1), value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t350904686, ___m_Hover_2)); }
	inline GUIStyleState_t1881122624 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t1881122624 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t1881122624 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hover_2), value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t350904686, ___m_Active_3)); }
	inline GUIStyleState_t1881122624 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t1881122624 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t1881122624 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Active_3), value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t350904686, ___m_Focused_4)); }
	inline GUIStyleState_t1881122624 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t1881122624 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t1881122624 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Focused_4), value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t350904686, ___m_OnNormal_5)); }
	inline GUIStyleState_t1881122624 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t1881122624 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t1881122624 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnNormal_5), value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t350904686, ___m_OnHover_6)); }
	inline GUIStyleState_t1881122624 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t1881122624 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t1881122624 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnHover_6), value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t350904686, ___m_OnActive_7)); }
	inline GUIStyleState_t1881122624 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t1881122624 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t1881122624 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnActive_7), value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t350904686, ___m_OnFocused_8)); }
	inline GUIStyleState_t1881122624 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t1881122624 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t1881122624 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnFocused_8), value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t350904686, ___m_Border_9)); }
	inline RectOffset_t603374043 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_t603374043 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_t603374043 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Border_9), value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t350904686, ___m_Padding_10)); }
	inline RectOffset_t603374043 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_t603374043 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_t603374043 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_10), value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t350904686, ___m_Margin_11)); }
	inline RectOffset_t603374043 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_t603374043 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_t603374043 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_11), value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t350904686, ___m_Overflow_12)); }
	inline RectOffset_t603374043 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_t603374043 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_t603374043 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Overflow_12), value);
	}

	inline static int32_t get_offset_of_m_FontInternal_13() { return static_cast<int32_t>(offsetof(GUIStyle_t350904686, ___m_FontInternal_13)); }
	inline Font_t3940830037 * get_m_FontInternal_13() const { return ___m_FontInternal_13; }
	inline Font_t3940830037 ** get_address_of_m_FontInternal_13() { return &___m_FontInternal_13; }
	inline void set_m_FontInternal_13(Font_t3940830037 * value)
	{
		___m_FontInternal_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontInternal_13), value);
	}
};

struct GUIStyle_t350904686_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t350904686 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t350904686_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t350904686_StaticFields, ___s_None_15)); }
	inline GUIStyle_t350904686 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t350904686 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t350904686 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t350904686_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1881122624_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t1881122624_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t1881122624_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t1881122624_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t1881122624_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t1881122624_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t1881122624_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t1881122624_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t603374043_marshaled_pinvoke ___m_Border_9;
	RectOffset_t603374043_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t603374043_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t603374043_marshaled_pinvoke ___m_Overflow_12;
	Font_t3940830037 * ___m_FontInternal_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t350904686_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1881122624_marshaled_com* ___m_Normal_1;
	GUIStyleState_t1881122624_marshaled_com* ___m_Hover_2;
	GUIStyleState_t1881122624_marshaled_com* ___m_Active_3;
	GUIStyleState_t1881122624_marshaled_com* ___m_Focused_4;
	GUIStyleState_t1881122624_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t1881122624_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t1881122624_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t1881122624_marshaled_com* ___m_OnFocused_8;
	RectOffset_t603374043_marshaled_com* ___m_Border_9;
	RectOffset_t603374043_marshaled_com* ___m_Padding_10;
	RectOffset_t603374043_marshaled_com* ___m_Margin_11;
	RectOffset_t603374043_marshaled_com* ___m_Overflow_12;
	Font_t3940830037 * ___m_FontInternal_13;
};
#endif // GUISTYLE_T350904686_H
#ifndef ANIMATIONPLAYABLEOUTPUT_T1974699825_H
#define ANIMATIONPLAYABLEOUTPUT_T1974699825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationPlayableOutput
struct  AnimationPlayableOutput_t1974699825 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::m_Handle
	PlayableOutputHandle_t3202198898  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPlayableOutput_t1974699825, ___m_Handle_0)); }
	inline PlayableOutputHandle_t3202198898  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t3202198898 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t3202198898  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONPLAYABLEOUTPUT_T1974699825_H
#ifndef ANIMATORCONTROLLERPLAYABLE_T3805541804_H
#define ANIMATORCONTROLLERPLAYABLE_T3805541804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimatorControllerPlayable
struct  AnimatorControllerPlayable_t3805541804 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::m_Handle
	PlayableHandle_t1049564817  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t3805541804, ___m_Handle_0)); }
	inline PlayableHandle_t1049564817  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1049564817 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1049564817  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimatorControllerPlayable_t3805541804_StaticFields
{
public:
	// UnityEngine.Animations.AnimatorControllerPlayable UnityEngine.Animations.AnimatorControllerPlayable::m_NullPlayable
	AnimatorControllerPlayable_t3805541804  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t3805541804_StaticFields, ___m_NullPlayable_1)); }
	inline AnimatorControllerPlayable_t3805541804  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimatorControllerPlayable_t3805541804 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimatorControllerPlayable_t3805541804  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPLAYABLE_T3805541804_H
#ifndef AUDIOMIXERPLAYABLE_T1112290079_H
#define AUDIOMIXERPLAYABLE_T1112290079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioMixerPlayable
struct  AudioMixerPlayable_t1112290079 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::m_Handle
	PlayableHandle_t1049564817  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioMixerPlayable_t1112290079, ___m_Handle_0)); }
	inline PlayableHandle_t1049564817  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1049564817 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1049564817  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMIXERPLAYABLE_T1112290079_H
#ifndef RUNTIMEANIMATORCONTROLLER_T1768566805_H
#define RUNTIMEANIMATORCONTROLLER_T1768566805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimeAnimatorController
struct  RuntimeAnimatorController_t1768566805  : public Object_t1699899486
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEANIMATORCONTROLLER_T1768566805_H
#ifndef PHYSICMATERIAL_T1800909956_H
#define PHYSICMATERIAL_T1800909956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PhysicMaterial
struct  PhysicMaterial_t1800909956  : public Object_t1699899486
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICMATERIAL_T1800909956_H
#ifndef SCRIPTABLEOBJECT_T3476656374_H
#define SCRIPTABLEOBJECT_T3476656374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t3476656374  : public Object_t1699899486
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t3476656374_marshaled_pinvoke : public Object_t1699899486_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t3476656374_marshaled_com : public Object_t1699899486_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T3476656374_H
#ifndef FONT_T3940830037_H
#define FONT_T3940830037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t3940830037  : public Object_t1699899486
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t3959427492 * ___m_FontTextureRebuildCallback_3;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_3() { return static_cast<int32_t>(offsetof(Font_t3940830037, ___m_FontTextureRebuildCallback_3)); }
	inline FontTextureRebuildCallback_t3959427492 * get_m_FontTextureRebuildCallback_3() const { return ___m_FontTextureRebuildCallback_3; }
	inline FontTextureRebuildCallback_t3959427492 ** get_address_of_m_FontTextureRebuildCallback_3() { return &___m_FontTextureRebuildCallback_3; }
	inline void set_m_FontTextureRebuildCallback_3(FontTextureRebuildCallback_t3959427492 * value)
	{
		___m_FontTextureRebuildCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontTextureRebuildCallback_3), value);
	}
};

struct Font_t3940830037_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t2565154513 * ___textureRebuilt_2;

public:
	inline static int32_t get_offset_of_textureRebuilt_2() { return static_cast<int32_t>(offsetof(Font_t3940830037_StaticFields, ___textureRebuilt_2)); }
	inline Action_1_t2565154513 * get_textureRebuilt_2() const { return ___textureRebuilt_2; }
	inline Action_1_t2565154513 ** get_address_of_textureRebuilt_2() { return &___textureRebuilt_2; }
	inline void set_textureRebuilt_2(Action_1_t2565154513 * value)
	{
		___textureRebuilt_2 = value;
		Il2CppCodeGenWriteBarrier((&___textureRebuilt_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONT_T3940830037_H
#ifndef HUMANBONE_T984958534_H
#define HUMANBONE_T984958534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanBone
struct  HumanBone_t984958534 
{
public:
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName_0;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName_1;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_t1839991932  ___limit_2;

public:
	inline static int32_t get_offset_of_m_BoneName_0() { return static_cast<int32_t>(offsetof(HumanBone_t984958534, ___m_BoneName_0)); }
	inline String_t* get_m_BoneName_0() const { return ___m_BoneName_0; }
	inline String_t** get_address_of_m_BoneName_0() { return &___m_BoneName_0; }
	inline void set_m_BoneName_0(String_t* value)
	{
		___m_BoneName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_BoneName_0), value);
	}

	inline static int32_t get_offset_of_m_HumanName_1() { return static_cast<int32_t>(offsetof(HumanBone_t984958534, ___m_HumanName_1)); }
	inline String_t* get_m_HumanName_1() const { return ___m_HumanName_1; }
	inline String_t** get_address_of_m_HumanName_1() { return &___m_HumanName_1; }
	inline void set_m_HumanName_1(String_t* value)
	{
		___m_HumanName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_HumanName_1), value);
	}

	inline static int32_t get_offset_of_limit_2() { return static_cast<int32_t>(offsetof(HumanBone_t984958534, ___limit_2)); }
	inline HumanLimit_t1839991932  get_limit_2() const { return ___limit_2; }
	inline HumanLimit_t1839991932 * get_address_of_limit_2() { return &___limit_2; }
	inline void set_limit_2(HumanLimit_t1839991932  value)
	{
		___limit_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.HumanBone
struct HumanBone_t984958534_marshaled_pinvoke
{
	char* ___m_BoneName_0;
	char* ___m_HumanName_1;
	HumanLimit_t1839991932  ___limit_2;
};
// Native definition for COM marshalling of UnityEngine.HumanBone
struct HumanBone_t984958534_marshaled_com
{
	Il2CppChar* ___m_BoneName_0;
	Il2CppChar* ___m_HumanName_1;
	HumanLimit_t1839991932  ___limit_2;
};
#endif // HUMANBONE_T984958534_H
#ifndef MOTION_T593517654_H
#define MOTION_T593517654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Motion
struct  Motion_t593517654  : public Object_t1699899486
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOTION_T593517654_H
#ifndef ANIMATIONEVENT_T1118830676_H
#define ANIMATIONEVENT_T1118830676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationEvent
struct  AnimationEvent_t1118830676  : public RuntimeObject
{
public:
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_t1699899486 * ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_t3813352619 * ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_t1664108925  ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t3735346097  ___m_AnimatorClipInfo_10;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(AnimationEvent_t1118830676, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_FunctionName_1() { return static_cast<int32_t>(offsetof(AnimationEvent_t1118830676, ___m_FunctionName_1)); }
	inline String_t* get_m_FunctionName_1() const { return ___m_FunctionName_1; }
	inline String_t** get_address_of_m_FunctionName_1() { return &___m_FunctionName_1; }
	inline void set_m_FunctionName_1(String_t* value)
	{
		___m_FunctionName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_FunctionName_1), value);
	}

	inline static int32_t get_offset_of_m_StringParameter_2() { return static_cast<int32_t>(offsetof(AnimationEvent_t1118830676, ___m_StringParameter_2)); }
	inline String_t* get_m_StringParameter_2() const { return ___m_StringParameter_2; }
	inline String_t** get_address_of_m_StringParameter_2() { return &___m_StringParameter_2; }
	inline void set_m_StringParameter_2(String_t* value)
	{
		___m_StringParameter_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringParameter_2), value);
	}

	inline static int32_t get_offset_of_m_ObjectReferenceParameter_3() { return static_cast<int32_t>(offsetof(AnimationEvent_t1118830676, ___m_ObjectReferenceParameter_3)); }
	inline Object_t1699899486 * get_m_ObjectReferenceParameter_3() const { return ___m_ObjectReferenceParameter_3; }
	inline Object_t1699899486 ** get_address_of_m_ObjectReferenceParameter_3() { return &___m_ObjectReferenceParameter_3; }
	inline void set_m_ObjectReferenceParameter_3(Object_t1699899486 * value)
	{
		___m_ObjectReferenceParameter_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectReferenceParameter_3), value);
	}

	inline static int32_t get_offset_of_m_FloatParameter_4() { return static_cast<int32_t>(offsetof(AnimationEvent_t1118830676, ___m_FloatParameter_4)); }
	inline float get_m_FloatParameter_4() const { return ___m_FloatParameter_4; }
	inline float* get_address_of_m_FloatParameter_4() { return &___m_FloatParameter_4; }
	inline void set_m_FloatParameter_4(float value)
	{
		___m_FloatParameter_4 = value;
	}

	inline static int32_t get_offset_of_m_IntParameter_5() { return static_cast<int32_t>(offsetof(AnimationEvent_t1118830676, ___m_IntParameter_5)); }
	inline int32_t get_m_IntParameter_5() const { return ___m_IntParameter_5; }
	inline int32_t* get_address_of_m_IntParameter_5() { return &___m_IntParameter_5; }
	inline void set_m_IntParameter_5(int32_t value)
	{
		___m_IntParameter_5 = value;
	}

	inline static int32_t get_offset_of_m_MessageOptions_6() { return static_cast<int32_t>(offsetof(AnimationEvent_t1118830676, ___m_MessageOptions_6)); }
	inline int32_t get_m_MessageOptions_6() const { return ___m_MessageOptions_6; }
	inline int32_t* get_address_of_m_MessageOptions_6() { return &___m_MessageOptions_6; }
	inline void set_m_MessageOptions_6(int32_t value)
	{
		___m_MessageOptions_6 = value;
	}

	inline static int32_t get_offset_of_m_Source_7() { return static_cast<int32_t>(offsetof(AnimationEvent_t1118830676, ___m_Source_7)); }
	inline int32_t get_m_Source_7() const { return ___m_Source_7; }
	inline int32_t* get_address_of_m_Source_7() { return &___m_Source_7; }
	inline void set_m_Source_7(int32_t value)
	{
		___m_Source_7 = value;
	}

	inline static int32_t get_offset_of_m_StateSender_8() { return static_cast<int32_t>(offsetof(AnimationEvent_t1118830676, ___m_StateSender_8)); }
	inline AnimationState_t3813352619 * get_m_StateSender_8() const { return ___m_StateSender_8; }
	inline AnimationState_t3813352619 ** get_address_of_m_StateSender_8() { return &___m_StateSender_8; }
	inline void set_m_StateSender_8(AnimationState_t3813352619 * value)
	{
		___m_StateSender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_StateSender_8), value);
	}

	inline static int32_t get_offset_of_m_AnimatorStateInfo_9() { return static_cast<int32_t>(offsetof(AnimationEvent_t1118830676, ___m_AnimatorStateInfo_9)); }
	inline AnimatorStateInfo_t1664108925  get_m_AnimatorStateInfo_9() const { return ___m_AnimatorStateInfo_9; }
	inline AnimatorStateInfo_t1664108925 * get_address_of_m_AnimatorStateInfo_9() { return &___m_AnimatorStateInfo_9; }
	inline void set_m_AnimatorStateInfo_9(AnimatorStateInfo_t1664108925  value)
	{
		___m_AnimatorStateInfo_9 = value;
	}

	inline static int32_t get_offset_of_m_AnimatorClipInfo_10() { return static_cast<int32_t>(offsetof(AnimationEvent_t1118830676, ___m_AnimatorClipInfo_10)); }
	inline AnimatorClipInfo_t3735346097  get_m_AnimatorClipInfo_10() const { return ___m_AnimatorClipInfo_10; }
	inline AnimatorClipInfo_t3735346097 * get_address_of_m_AnimatorClipInfo_10() { return &___m_AnimatorClipInfo_10; }
	inline void set_m_AnimatorClipInfo_10(AnimatorClipInfo_t3735346097  value)
	{
		___m_AnimatorClipInfo_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t1118830676_marshaled_pinvoke
{
	float ___m_Time_0;
	char* ___m_FunctionName_1;
	char* ___m_StringParameter_2;
	Object_t1699899486_marshaled_pinvoke ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t3813352619 * ___m_StateSender_8;
	AnimatorStateInfo_t1664108925  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t3735346097  ___m_AnimatorClipInfo_10;
};
// Native definition for COM marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t1118830676_marshaled_com
{
	float ___m_Time_0;
	Il2CppChar* ___m_FunctionName_1;
	Il2CppChar* ___m_StringParameter_2;
	Object_t1699899486_marshaled_com* ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t3813352619 * ___m_StateSender_8;
	AnimatorStateInfo_t1664108925  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t3735346097  ___m_AnimatorClipInfo_10;
};
#endif // ANIMATIONEVENT_T1118830676_H
#ifndef ANIMATORCONTROLLERPARAMETER_T3617511430_H
#define ANIMATORCONTROLLERPARAMETER_T3617511430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorControllerParameter
struct  AnimatorControllerParameter_t3617511430  : public RuntimeObject
{
public:
	// System.String UnityEngine.AnimatorControllerParameter::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.AnimatorControllerParameterType UnityEngine.AnimatorControllerParameter::m_Type
	int32_t ___m_Type_1;
	// System.Single UnityEngine.AnimatorControllerParameter::m_DefaultFloat
	float ___m_DefaultFloat_2;
	// System.Int32 UnityEngine.AnimatorControllerParameter::m_DefaultInt
	int32_t ___m_DefaultInt_3;
	// System.Boolean UnityEngine.AnimatorControllerParameter::m_DefaultBool
	bool ___m_DefaultBool_4;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t3617511430, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t3617511430, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultFloat_2() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t3617511430, ___m_DefaultFloat_2)); }
	inline float get_m_DefaultFloat_2() const { return ___m_DefaultFloat_2; }
	inline float* get_address_of_m_DefaultFloat_2() { return &___m_DefaultFloat_2; }
	inline void set_m_DefaultFloat_2(float value)
	{
		___m_DefaultFloat_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultInt_3() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t3617511430, ___m_DefaultInt_3)); }
	inline int32_t get_m_DefaultInt_3() const { return ___m_DefaultInt_3; }
	inline int32_t* get_address_of_m_DefaultInt_3() { return &___m_DefaultInt_3; }
	inline void set_m_DefaultInt_3(int32_t value)
	{
		___m_DefaultInt_3 = value;
	}

	inline static int32_t get_offset_of_m_DefaultBool_4() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t3617511430, ___m_DefaultBool_4)); }
	inline bool get_m_DefaultBool_4() const { return ___m_DefaultBool_4; }
	inline bool* get_address_of_m_DefaultBool_4() { return &___m_DefaultBool_4; }
	inline void set_m_DefaultBool_4(bool value)
	{
		___m_DefaultBool_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPARAMETER_T3617511430_H
#ifndef AUDIOCLIPPLAYABLE_T3677483330_H
#define AUDIOCLIPPLAYABLE_T3677483330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioClipPlayable
struct  AudioClipPlayable_t3677483330 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::m_Handle
	PlayableHandle_t1049564817  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioClipPlayable_t3677483330, ___m_Handle_0)); }
	inline PlayableHandle_t1049564817  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1049564817 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1049564817  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIPPLAYABLE_T3677483330_H
#ifndef GUILAYOUTOPTION_T668350194_H
#define GUILAYOUTOPTION_T668350194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutOption
struct  GUILayoutOption_t668350194  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t668350194, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t668350194, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTOPTION_T668350194_H
#ifndef GUILAYOUTGROUP_T898504563_H
#define GUILAYOUTGROUP_T898504563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutGroup
struct  GUILayoutGroup_t898504563  : public GUILayoutEntry_t3770082851
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry> UnityEngine.GUILayoutGroup::entries
	List_1_t713476003 * ___entries_10;
	// System.Boolean UnityEngine.GUILayoutGroup::isVertical
	bool ___isVertical_11;
	// System.Boolean UnityEngine.GUILayoutGroup::resetCoords
	bool ___resetCoords_12;
	// System.Single UnityEngine.GUILayoutGroup::spacing
	float ___spacing_13;
	// System.Boolean UnityEngine.GUILayoutGroup::sameSize
	bool ___sameSize_14;
	// System.Boolean UnityEngine.GUILayoutGroup::isWindow
	bool ___isWindow_15;
	// System.Int32 UnityEngine.GUILayoutGroup::windowID
	int32_t ___windowID_16;
	// System.Int32 UnityEngine.GUILayoutGroup::m_Cursor
	int32_t ___m_Cursor_17;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountX
	int32_t ___m_StretchableCountX_18;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountY
	int32_t ___m_StretchableCountY_19;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedWidth
	bool ___m_UserSpecifiedWidth_20;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedHeight
	bool ___m_UserSpecifiedHeight_21;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinWidth
	float ___m_ChildMinWidth_22;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxWidth
	float ___m_ChildMaxWidth_23;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinHeight
	float ___m_ChildMinHeight_24;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxHeight
	float ___m_ChildMaxHeight_25;
	// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::m_Margin
	RectOffset_t603374043 * ___m_Margin_26;

public:
	inline static int32_t get_offset_of_entries_10() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t898504563, ___entries_10)); }
	inline List_1_t713476003 * get_entries_10() const { return ___entries_10; }
	inline List_1_t713476003 ** get_address_of_entries_10() { return &___entries_10; }
	inline void set_entries_10(List_1_t713476003 * value)
	{
		___entries_10 = value;
		Il2CppCodeGenWriteBarrier((&___entries_10), value);
	}

	inline static int32_t get_offset_of_isVertical_11() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t898504563, ___isVertical_11)); }
	inline bool get_isVertical_11() const { return ___isVertical_11; }
	inline bool* get_address_of_isVertical_11() { return &___isVertical_11; }
	inline void set_isVertical_11(bool value)
	{
		___isVertical_11 = value;
	}

	inline static int32_t get_offset_of_resetCoords_12() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t898504563, ___resetCoords_12)); }
	inline bool get_resetCoords_12() const { return ___resetCoords_12; }
	inline bool* get_address_of_resetCoords_12() { return &___resetCoords_12; }
	inline void set_resetCoords_12(bool value)
	{
		___resetCoords_12 = value;
	}

	inline static int32_t get_offset_of_spacing_13() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t898504563, ___spacing_13)); }
	inline float get_spacing_13() const { return ___spacing_13; }
	inline float* get_address_of_spacing_13() { return &___spacing_13; }
	inline void set_spacing_13(float value)
	{
		___spacing_13 = value;
	}

	inline static int32_t get_offset_of_sameSize_14() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t898504563, ___sameSize_14)); }
	inline bool get_sameSize_14() const { return ___sameSize_14; }
	inline bool* get_address_of_sameSize_14() { return &___sameSize_14; }
	inline void set_sameSize_14(bool value)
	{
		___sameSize_14 = value;
	}

	inline static int32_t get_offset_of_isWindow_15() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t898504563, ___isWindow_15)); }
	inline bool get_isWindow_15() const { return ___isWindow_15; }
	inline bool* get_address_of_isWindow_15() { return &___isWindow_15; }
	inline void set_isWindow_15(bool value)
	{
		___isWindow_15 = value;
	}

	inline static int32_t get_offset_of_windowID_16() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t898504563, ___windowID_16)); }
	inline int32_t get_windowID_16() const { return ___windowID_16; }
	inline int32_t* get_address_of_windowID_16() { return &___windowID_16; }
	inline void set_windowID_16(int32_t value)
	{
		___windowID_16 = value;
	}

	inline static int32_t get_offset_of_m_Cursor_17() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t898504563, ___m_Cursor_17)); }
	inline int32_t get_m_Cursor_17() const { return ___m_Cursor_17; }
	inline int32_t* get_address_of_m_Cursor_17() { return &___m_Cursor_17; }
	inline void set_m_Cursor_17(int32_t value)
	{
		___m_Cursor_17 = value;
	}

	inline static int32_t get_offset_of_m_StretchableCountX_18() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t898504563, ___m_StretchableCountX_18)); }
	inline int32_t get_m_StretchableCountX_18() const { return ___m_StretchableCountX_18; }
	inline int32_t* get_address_of_m_StretchableCountX_18() { return &___m_StretchableCountX_18; }
	inline void set_m_StretchableCountX_18(int32_t value)
	{
		___m_StretchableCountX_18 = value;
	}

	inline static int32_t get_offset_of_m_StretchableCountY_19() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t898504563, ___m_StretchableCountY_19)); }
	inline int32_t get_m_StretchableCountY_19() const { return ___m_StretchableCountY_19; }
	inline int32_t* get_address_of_m_StretchableCountY_19() { return &___m_StretchableCountY_19; }
	inline void set_m_StretchableCountY_19(int32_t value)
	{
		___m_StretchableCountY_19 = value;
	}

	inline static int32_t get_offset_of_m_UserSpecifiedWidth_20() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t898504563, ___m_UserSpecifiedWidth_20)); }
	inline bool get_m_UserSpecifiedWidth_20() const { return ___m_UserSpecifiedWidth_20; }
	inline bool* get_address_of_m_UserSpecifiedWidth_20() { return &___m_UserSpecifiedWidth_20; }
	inline void set_m_UserSpecifiedWidth_20(bool value)
	{
		___m_UserSpecifiedWidth_20 = value;
	}

	inline static int32_t get_offset_of_m_UserSpecifiedHeight_21() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t898504563, ___m_UserSpecifiedHeight_21)); }
	inline bool get_m_UserSpecifiedHeight_21() const { return ___m_UserSpecifiedHeight_21; }
	inline bool* get_address_of_m_UserSpecifiedHeight_21() { return &___m_UserSpecifiedHeight_21; }
	inline void set_m_UserSpecifiedHeight_21(bool value)
	{
		___m_UserSpecifiedHeight_21 = value;
	}

	inline static int32_t get_offset_of_m_ChildMinWidth_22() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t898504563, ___m_ChildMinWidth_22)); }
	inline float get_m_ChildMinWidth_22() const { return ___m_ChildMinWidth_22; }
	inline float* get_address_of_m_ChildMinWidth_22() { return &___m_ChildMinWidth_22; }
	inline void set_m_ChildMinWidth_22(float value)
	{
		___m_ChildMinWidth_22 = value;
	}

	inline static int32_t get_offset_of_m_ChildMaxWidth_23() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t898504563, ___m_ChildMaxWidth_23)); }
	inline float get_m_ChildMaxWidth_23() const { return ___m_ChildMaxWidth_23; }
	inline float* get_address_of_m_ChildMaxWidth_23() { return &___m_ChildMaxWidth_23; }
	inline void set_m_ChildMaxWidth_23(float value)
	{
		___m_ChildMaxWidth_23 = value;
	}

	inline static int32_t get_offset_of_m_ChildMinHeight_24() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t898504563, ___m_ChildMinHeight_24)); }
	inline float get_m_ChildMinHeight_24() const { return ___m_ChildMinHeight_24; }
	inline float* get_address_of_m_ChildMinHeight_24() { return &___m_ChildMinHeight_24; }
	inline void set_m_ChildMinHeight_24(float value)
	{
		___m_ChildMinHeight_24 = value;
	}

	inline static int32_t get_offset_of_m_ChildMaxHeight_25() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t898504563, ___m_ChildMaxHeight_25)); }
	inline float get_m_ChildMaxHeight_25() const { return ___m_ChildMaxHeight_25; }
	inline float* get_address_of_m_ChildMaxHeight_25() { return &___m_ChildMaxHeight_25; }
	inline void set_m_ChildMaxHeight_25(float value)
	{
		___m_ChildMaxHeight_25 = value;
	}

	inline static int32_t get_offset_of_m_Margin_26() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t898504563, ___m_Margin_26)); }
	inline RectOffset_t603374043 * get_m_Margin_26() const { return ___m_Margin_26; }
	inline RectOffset_t603374043 ** get_address_of_m_Margin_26() { return &___m_Margin_26; }
	inline void set_m_Margin_26(RectOffset_t603374043 * value)
	{
		___m_Margin_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTGROUP_T898504563_H
#ifndef TEXTGENERATIONSETTINGS_T987435647_H
#define TEXTGENERATIONSETTINGS_T987435647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextGenerationSettings
struct  TextGenerationSettings_t987435647 
{
public:
	// UnityEngine.Font UnityEngine.TextGenerationSettings::font
	Font_t3940830037 * ___font_0;
	// UnityEngine.Color UnityEngine.TextGenerationSettings::color
	Color_t3136506488  ___color_1;
	// System.Int32 UnityEngine.TextGenerationSettings::fontSize
	int32_t ___fontSize_2;
	// System.Single UnityEngine.TextGenerationSettings::lineSpacing
	float ___lineSpacing_3;
	// System.Boolean UnityEngine.TextGenerationSettings::richText
	bool ___richText_4;
	// System.Single UnityEngine.TextGenerationSettings::scaleFactor
	float ___scaleFactor_5;
	// UnityEngine.FontStyle UnityEngine.TextGenerationSettings::fontStyle
	int32_t ___fontStyle_6;
	// UnityEngine.TextAnchor UnityEngine.TextGenerationSettings::textAnchor
	int32_t ___textAnchor_7;
	// System.Boolean UnityEngine.TextGenerationSettings::alignByGeometry
	bool ___alignByGeometry_8;
	// System.Boolean UnityEngine.TextGenerationSettings::resizeTextForBestFit
	bool ___resizeTextForBestFit_9;
	// System.Int32 UnityEngine.TextGenerationSettings::resizeTextMinSize
	int32_t ___resizeTextMinSize_10;
	// System.Int32 UnityEngine.TextGenerationSettings::resizeTextMaxSize
	int32_t ___resizeTextMaxSize_11;
	// System.Boolean UnityEngine.TextGenerationSettings::updateBounds
	bool ___updateBounds_12;
	// UnityEngine.VerticalWrapMode UnityEngine.TextGenerationSettings::verticalOverflow
	int32_t ___verticalOverflow_13;
	// UnityEngine.HorizontalWrapMode UnityEngine.TextGenerationSettings::horizontalOverflow
	int32_t ___horizontalOverflow_14;
	// UnityEngine.Vector2 UnityEngine.TextGenerationSettings::generationExtents
	Vector2_t1870731928  ___generationExtents_15;
	// UnityEngine.Vector2 UnityEngine.TextGenerationSettings::pivot
	Vector2_t1870731928  ___pivot_16;
	// System.Boolean UnityEngine.TextGenerationSettings::generateOutOfBounds
	bool ___generateOutOfBounds_17;

public:
	inline static int32_t get_offset_of_font_0() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t987435647, ___font_0)); }
	inline Font_t3940830037 * get_font_0() const { return ___font_0; }
	inline Font_t3940830037 ** get_address_of_font_0() { return &___font_0; }
	inline void set_font_0(Font_t3940830037 * value)
	{
		___font_0 = value;
		Il2CppCodeGenWriteBarrier((&___font_0), value);
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t987435647, ___color_1)); }
	inline Color_t3136506488  get_color_1() const { return ___color_1; }
	inline Color_t3136506488 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_t3136506488  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_fontSize_2() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t987435647, ___fontSize_2)); }
	inline int32_t get_fontSize_2() const { return ___fontSize_2; }
	inline int32_t* get_address_of_fontSize_2() { return &___fontSize_2; }
	inline void set_fontSize_2(int32_t value)
	{
		___fontSize_2 = value;
	}

	inline static int32_t get_offset_of_lineSpacing_3() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t987435647, ___lineSpacing_3)); }
	inline float get_lineSpacing_3() const { return ___lineSpacing_3; }
	inline float* get_address_of_lineSpacing_3() { return &___lineSpacing_3; }
	inline void set_lineSpacing_3(float value)
	{
		___lineSpacing_3 = value;
	}

	inline static int32_t get_offset_of_richText_4() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t987435647, ___richText_4)); }
	inline bool get_richText_4() const { return ___richText_4; }
	inline bool* get_address_of_richText_4() { return &___richText_4; }
	inline void set_richText_4(bool value)
	{
		___richText_4 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_5() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t987435647, ___scaleFactor_5)); }
	inline float get_scaleFactor_5() const { return ___scaleFactor_5; }
	inline float* get_address_of_scaleFactor_5() { return &___scaleFactor_5; }
	inline void set_scaleFactor_5(float value)
	{
		___scaleFactor_5 = value;
	}

	inline static int32_t get_offset_of_fontStyle_6() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t987435647, ___fontStyle_6)); }
	inline int32_t get_fontStyle_6() const { return ___fontStyle_6; }
	inline int32_t* get_address_of_fontStyle_6() { return &___fontStyle_6; }
	inline void set_fontStyle_6(int32_t value)
	{
		___fontStyle_6 = value;
	}

	inline static int32_t get_offset_of_textAnchor_7() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t987435647, ___textAnchor_7)); }
	inline int32_t get_textAnchor_7() const { return ___textAnchor_7; }
	inline int32_t* get_address_of_textAnchor_7() { return &___textAnchor_7; }
	inline void set_textAnchor_7(int32_t value)
	{
		___textAnchor_7 = value;
	}

	inline static int32_t get_offset_of_alignByGeometry_8() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t987435647, ___alignByGeometry_8)); }
	inline bool get_alignByGeometry_8() const { return ___alignByGeometry_8; }
	inline bool* get_address_of_alignByGeometry_8() { return &___alignByGeometry_8; }
	inline void set_alignByGeometry_8(bool value)
	{
		___alignByGeometry_8 = value;
	}

	inline static int32_t get_offset_of_resizeTextForBestFit_9() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t987435647, ___resizeTextForBestFit_9)); }
	inline bool get_resizeTextForBestFit_9() const { return ___resizeTextForBestFit_9; }
	inline bool* get_address_of_resizeTextForBestFit_9() { return &___resizeTextForBestFit_9; }
	inline void set_resizeTextForBestFit_9(bool value)
	{
		___resizeTextForBestFit_9 = value;
	}

	inline static int32_t get_offset_of_resizeTextMinSize_10() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t987435647, ___resizeTextMinSize_10)); }
	inline int32_t get_resizeTextMinSize_10() const { return ___resizeTextMinSize_10; }
	inline int32_t* get_address_of_resizeTextMinSize_10() { return &___resizeTextMinSize_10; }
	inline void set_resizeTextMinSize_10(int32_t value)
	{
		___resizeTextMinSize_10 = value;
	}

	inline static int32_t get_offset_of_resizeTextMaxSize_11() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t987435647, ___resizeTextMaxSize_11)); }
	inline int32_t get_resizeTextMaxSize_11() const { return ___resizeTextMaxSize_11; }
	inline int32_t* get_address_of_resizeTextMaxSize_11() { return &___resizeTextMaxSize_11; }
	inline void set_resizeTextMaxSize_11(int32_t value)
	{
		___resizeTextMaxSize_11 = value;
	}

	inline static int32_t get_offset_of_updateBounds_12() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t987435647, ___updateBounds_12)); }
	inline bool get_updateBounds_12() const { return ___updateBounds_12; }
	inline bool* get_address_of_updateBounds_12() { return &___updateBounds_12; }
	inline void set_updateBounds_12(bool value)
	{
		___updateBounds_12 = value;
	}

	inline static int32_t get_offset_of_verticalOverflow_13() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t987435647, ___verticalOverflow_13)); }
	inline int32_t get_verticalOverflow_13() const { return ___verticalOverflow_13; }
	inline int32_t* get_address_of_verticalOverflow_13() { return &___verticalOverflow_13; }
	inline void set_verticalOverflow_13(int32_t value)
	{
		___verticalOverflow_13 = value;
	}

	inline static int32_t get_offset_of_horizontalOverflow_14() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t987435647, ___horizontalOverflow_14)); }
	inline int32_t get_horizontalOverflow_14() const { return ___horizontalOverflow_14; }
	inline int32_t* get_address_of_horizontalOverflow_14() { return &___horizontalOverflow_14; }
	inline void set_horizontalOverflow_14(int32_t value)
	{
		___horizontalOverflow_14 = value;
	}

	inline static int32_t get_offset_of_generationExtents_15() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t987435647, ___generationExtents_15)); }
	inline Vector2_t1870731928  get_generationExtents_15() const { return ___generationExtents_15; }
	inline Vector2_t1870731928 * get_address_of_generationExtents_15() { return &___generationExtents_15; }
	inline void set_generationExtents_15(Vector2_t1870731928  value)
	{
		___generationExtents_15 = value;
	}

	inline static int32_t get_offset_of_pivot_16() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t987435647, ___pivot_16)); }
	inline Vector2_t1870731928  get_pivot_16() const { return ___pivot_16; }
	inline Vector2_t1870731928 * get_address_of_pivot_16() { return &___pivot_16; }
	inline void set_pivot_16(Vector2_t1870731928  value)
	{
		___pivot_16 = value;
	}

	inline static int32_t get_offset_of_generateOutOfBounds_17() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t987435647, ___generateOutOfBounds_17)); }
	inline bool get_generateOutOfBounds_17() const { return ___generateOutOfBounds_17; }
	inline bool* get_address_of_generateOutOfBounds_17() { return &___generateOutOfBounds_17; }
	inline void set_generateOutOfBounds_17(bool value)
	{
		___generateOutOfBounds_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TextGenerationSettings
struct TextGenerationSettings_t987435647_marshaled_pinvoke
{
	Font_t3940830037 * ___font_0;
	Color_t3136506488  ___color_1;
	int32_t ___fontSize_2;
	float ___lineSpacing_3;
	int32_t ___richText_4;
	float ___scaleFactor_5;
	int32_t ___fontStyle_6;
	int32_t ___textAnchor_7;
	int32_t ___alignByGeometry_8;
	int32_t ___resizeTextForBestFit_9;
	int32_t ___resizeTextMinSize_10;
	int32_t ___resizeTextMaxSize_11;
	int32_t ___updateBounds_12;
	int32_t ___verticalOverflow_13;
	int32_t ___horizontalOverflow_14;
	Vector2_t1870731928  ___generationExtents_15;
	Vector2_t1870731928  ___pivot_16;
	int32_t ___generateOutOfBounds_17;
};
// Native definition for COM marshalling of UnityEngine.TextGenerationSettings
struct TextGenerationSettings_t987435647_marshaled_com
{
	Font_t3940830037 * ___font_0;
	Color_t3136506488  ___color_1;
	int32_t ___fontSize_2;
	float ___lineSpacing_3;
	int32_t ___richText_4;
	float ___scaleFactor_5;
	int32_t ___fontStyle_6;
	int32_t ___textAnchor_7;
	int32_t ___alignByGeometry_8;
	int32_t ___resizeTextForBestFit_9;
	int32_t ___resizeTextMinSize_10;
	int32_t ___resizeTextMaxSize_11;
	int32_t ___updateBounds_12;
	int32_t ___verticalOverflow_13;
	int32_t ___horizontalOverflow_14;
	Vector2_t1870731928  ___generationExtents_15;
	Vector2_t1870731928  ___pivot_16;
	int32_t ___generateOutOfBounds_17;
};
#endif // TEXTGENERATIONSETTINGS_T987435647_H
#ifndef ANIMATIONSTATE_T3813352619_H
#define ANIMATIONSTATE_T3813352619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationState
struct  AnimationState_t3813352619  : public TrackedReference_t2314189973
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONSTATE_T3813352619_H
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
#ifndef COLLIDER_T997197530_H
#define COLLIDER_T997197530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t997197530  : public Component_t1099781993
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T997197530_H
#ifndef RIGIDBODY2D_T3703340207_H
#define RIGIDBODY2D_T3703340207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t3703340207  : public Component_t1099781993
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T3703340207_H
#ifndef TEXTGENERATOR_T2161547030_H
#define TEXTGENERATOR_T2161547030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextGenerator
struct  TextGenerator_t2161547030  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TextGenerator::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// System.String UnityEngine.TextGenerator::m_LastString
	String_t* ___m_LastString_1;
	// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::m_LastSettings
	TextGenerationSettings_t987435647  ___m_LastSettings_2;
	// System.Boolean UnityEngine.TextGenerator::m_HasGenerated
	bool ___m_HasGenerated_3;
	// UnityEngine.TextGenerationError UnityEngine.TextGenerator::m_LastValid
	int32_t ___m_LastValid_4;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::m_Verts
	List_1_t2822604285 * ___m_Verts_5;
	// System.Collections.Generic.List`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::m_Characters
	List_1_t1760015106 * ___m_Characters_6;
	// System.Collections.Generic.List`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::m_Lines
	List_1_t4059619465 * ___m_Lines_7;
	// System.Boolean UnityEngine.TextGenerator::m_CachedVerts
	bool ___m_CachedVerts_8;
	// System.Boolean UnityEngine.TextGenerator::m_CachedCharacters
	bool ___m_CachedCharacters_9;
	// System.Boolean UnityEngine.TextGenerator::m_CachedLines
	bool ___m_CachedLines_10;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TextGenerator_t2161547030, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_LastString_1() { return static_cast<int32_t>(offsetof(TextGenerator_t2161547030, ___m_LastString_1)); }
	inline String_t* get_m_LastString_1() const { return ___m_LastString_1; }
	inline String_t** get_address_of_m_LastString_1() { return &___m_LastString_1; }
	inline void set_m_LastString_1(String_t* value)
	{
		___m_LastString_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastString_1), value);
	}

	inline static int32_t get_offset_of_m_LastSettings_2() { return static_cast<int32_t>(offsetof(TextGenerator_t2161547030, ___m_LastSettings_2)); }
	inline TextGenerationSettings_t987435647  get_m_LastSettings_2() const { return ___m_LastSettings_2; }
	inline TextGenerationSettings_t987435647 * get_address_of_m_LastSettings_2() { return &___m_LastSettings_2; }
	inline void set_m_LastSettings_2(TextGenerationSettings_t987435647  value)
	{
		___m_LastSettings_2 = value;
	}

	inline static int32_t get_offset_of_m_HasGenerated_3() { return static_cast<int32_t>(offsetof(TextGenerator_t2161547030, ___m_HasGenerated_3)); }
	inline bool get_m_HasGenerated_3() const { return ___m_HasGenerated_3; }
	inline bool* get_address_of_m_HasGenerated_3() { return &___m_HasGenerated_3; }
	inline void set_m_HasGenerated_3(bool value)
	{
		___m_HasGenerated_3 = value;
	}

	inline static int32_t get_offset_of_m_LastValid_4() { return static_cast<int32_t>(offsetof(TextGenerator_t2161547030, ___m_LastValid_4)); }
	inline int32_t get_m_LastValid_4() const { return ___m_LastValid_4; }
	inline int32_t* get_address_of_m_LastValid_4() { return &___m_LastValid_4; }
	inline void set_m_LastValid_4(int32_t value)
	{
		___m_LastValid_4 = value;
	}

	inline static int32_t get_offset_of_m_Verts_5() { return static_cast<int32_t>(offsetof(TextGenerator_t2161547030, ___m_Verts_5)); }
	inline List_1_t2822604285 * get_m_Verts_5() const { return ___m_Verts_5; }
	inline List_1_t2822604285 ** get_address_of_m_Verts_5() { return &___m_Verts_5; }
	inline void set_m_Verts_5(List_1_t2822604285 * value)
	{
		___m_Verts_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Verts_5), value);
	}

	inline static int32_t get_offset_of_m_Characters_6() { return static_cast<int32_t>(offsetof(TextGenerator_t2161547030, ___m_Characters_6)); }
	inline List_1_t1760015106 * get_m_Characters_6() const { return ___m_Characters_6; }
	inline List_1_t1760015106 ** get_address_of_m_Characters_6() { return &___m_Characters_6; }
	inline void set_m_Characters_6(List_1_t1760015106 * value)
	{
		___m_Characters_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Characters_6), value);
	}

	inline static int32_t get_offset_of_m_Lines_7() { return static_cast<int32_t>(offsetof(TextGenerator_t2161547030, ___m_Lines_7)); }
	inline List_1_t4059619465 * get_m_Lines_7() const { return ___m_Lines_7; }
	inline List_1_t4059619465 ** get_address_of_m_Lines_7() { return &___m_Lines_7; }
	inline void set_m_Lines_7(List_1_t4059619465 * value)
	{
		___m_Lines_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Lines_7), value);
	}

	inline static int32_t get_offset_of_m_CachedVerts_8() { return static_cast<int32_t>(offsetof(TextGenerator_t2161547030, ___m_CachedVerts_8)); }
	inline bool get_m_CachedVerts_8() const { return ___m_CachedVerts_8; }
	inline bool* get_address_of_m_CachedVerts_8() { return &___m_CachedVerts_8; }
	inline void set_m_CachedVerts_8(bool value)
	{
		___m_CachedVerts_8 = value;
	}

	inline static int32_t get_offset_of_m_CachedCharacters_9() { return static_cast<int32_t>(offsetof(TextGenerator_t2161547030, ___m_CachedCharacters_9)); }
	inline bool get_m_CachedCharacters_9() const { return ___m_CachedCharacters_9; }
	inline bool* get_address_of_m_CachedCharacters_9() { return &___m_CachedCharacters_9; }
	inline void set_m_CachedCharacters_9(bool value)
	{
		___m_CachedCharacters_9 = value;
	}

	inline static int32_t get_offset_of_m_CachedLines_10() { return static_cast<int32_t>(offsetof(TextGenerator_t2161547030, ___m_CachedLines_10)); }
	inline bool get_m_CachedLines_10() const { return ___m_CachedLines_10; }
	inline bool* get_address_of_m_CachedLines_10() { return &___m_CachedLines_10; }
	inline void set_m_CachedLines_10(bool value)
	{
		___m_CachedLines_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TextGenerator
struct TextGenerator_t2161547030_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	char* ___m_LastString_1;
	TextGenerationSettings_t987435647_marshaled_pinvoke ___m_LastSettings_2;
	int32_t ___m_HasGenerated_3;
	int32_t ___m_LastValid_4;
	List_1_t2822604285 * ___m_Verts_5;
	List_1_t1760015106 * ___m_Characters_6;
	List_1_t4059619465 * ___m_Lines_7;
	int32_t ___m_CachedVerts_8;
	int32_t ___m_CachedCharacters_9;
	int32_t ___m_CachedLines_10;
};
// Native definition for COM marshalling of UnityEngine.TextGenerator
struct TextGenerator_t2161547030_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppChar* ___m_LastString_1;
	TextGenerationSettings_t987435647_marshaled_com ___m_LastSettings_2;
	int32_t ___m_HasGenerated_3;
	int32_t ___m_LastValid_4;
	List_1_t2822604285 * ___m_Verts_5;
	List_1_t1760015106 * ___m_Characters_6;
	List_1_t4059619465 * ___m_Lines_7;
	int32_t ___m_CachedVerts_8;
	int32_t ___m_CachedCharacters_9;
	int32_t ___m_CachedLines_10;
};
#endif // TEXTGENERATOR_T2161547030_H
#ifndef FONTTEXTUREREBUILDCALLBACK_T3959427492_H
#define FONTTEXTUREREBUILDCALLBACK_T3959427492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font/FontTextureRebuildCallback
struct  FontTextureRebuildCallback_t3959427492  : public MulticastDelegate_t868286602
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONTTEXTUREREBUILDCALLBACK_T3959427492_H
#ifndef BEHAVIOUR_T2886796472_H
#define BEHAVIOUR_T2886796472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t2886796472  : public Component_t1099781993
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T2886796472_H
#ifndef RIGIDBODY_T2944185830_H
#define RIGIDBODY_T2944185830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t2944185830  : public Component_t1099781993
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T2944185830_H
#ifndef PCMSETPOSITIONCALLBACK_T904171160_H
#define PCMSETPOSITIONCALLBACK_T904171160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMSetPositionCallback
struct  PCMSetPositionCallback_t904171160  : public MulticastDelegate_t868286602
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMSETPOSITIONCALLBACK_T904171160_H
#ifndef PCMREADERCALLBACK_T2043580182_H
#define PCMREADERCALLBACK_T2043580182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMReaderCallback
struct  PCMReaderCallback_t2043580182  : public MulticastDelegate_t868286602
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMREADERCALLBACK_T2043580182_H
#ifndef CANVASRENDERER_T1154703113_H
#define CANVASRENDERER_T1154703113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CanvasRenderer
struct  CanvasRenderer_t1154703113  : public Component_t1099781993
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASRENDERER_T1154703113_H
#ifndef WILLRENDERCANVASES_T284919308_H
#define WILLRENDERCANVASES_T284919308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas/WillRenderCanvases
struct  WillRenderCanvases_t284919308  : public MulticastDelegate_t868286602
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WILLRENDERCANVASES_T284919308_H
#ifndef GUI_T2255980234_H
#define GUI_T2255980234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI
struct  GUI_t2255980234  : public RuntimeObject
{
public:

public:
};

struct GUI_t2255980234_StaticFields
{
public:
	// System.Single UnityEngine.GUI::s_ScrollStepSize
	float ___s_ScrollStepSize_0;
	// System.Int32 UnityEngine.GUI::s_HotTextField
	int32_t ___s_HotTextField_1;
	// System.Int32 UnityEngine.GUI::s_BoxHash
	int32_t ___s_BoxHash_2;
	// System.Int32 UnityEngine.GUI::s_RepeatButtonHash
	int32_t ___s_RepeatButtonHash_3;
	// System.Int32 UnityEngine.GUI::s_ToggleHash
	int32_t ___s_ToggleHash_4;
	// System.Int32 UnityEngine.GUI::s_ButtonGridHash
	int32_t ___s_ButtonGridHash_5;
	// System.Int32 UnityEngine.GUI::s_SliderHash
	int32_t ___s_SliderHash_6;
	// System.Int32 UnityEngine.GUI::s_BeginGroupHash
	int32_t ___s_BeginGroupHash_7;
	// System.Int32 UnityEngine.GUI::s_ScrollviewHash
	int32_t ___s_ScrollviewHash_8;
	// System.DateTime UnityEngine.GUI::<nextScrollStepTime>k__BackingField
	DateTime_t816944984  ___U3CnextScrollStepTimeU3Ek__BackingField_9;
	// UnityEngine.GUISkin UnityEngine.GUI::s_Skin
	GUISkin_t25046937 * ___s_Skin_10;
	// UnityEngineInternal.GenericStack UnityEngine.GUI::s_ScrollViewStates
	GenericStack_t4098904508 * ___s_ScrollViewStates_11;

public:
	inline static int32_t get_offset_of_s_ScrollStepSize_0() { return static_cast<int32_t>(offsetof(GUI_t2255980234_StaticFields, ___s_ScrollStepSize_0)); }
	inline float get_s_ScrollStepSize_0() const { return ___s_ScrollStepSize_0; }
	inline float* get_address_of_s_ScrollStepSize_0() { return &___s_ScrollStepSize_0; }
	inline void set_s_ScrollStepSize_0(float value)
	{
		___s_ScrollStepSize_0 = value;
	}

	inline static int32_t get_offset_of_s_HotTextField_1() { return static_cast<int32_t>(offsetof(GUI_t2255980234_StaticFields, ___s_HotTextField_1)); }
	inline int32_t get_s_HotTextField_1() const { return ___s_HotTextField_1; }
	inline int32_t* get_address_of_s_HotTextField_1() { return &___s_HotTextField_1; }
	inline void set_s_HotTextField_1(int32_t value)
	{
		___s_HotTextField_1 = value;
	}

	inline static int32_t get_offset_of_s_BoxHash_2() { return static_cast<int32_t>(offsetof(GUI_t2255980234_StaticFields, ___s_BoxHash_2)); }
	inline int32_t get_s_BoxHash_2() const { return ___s_BoxHash_2; }
	inline int32_t* get_address_of_s_BoxHash_2() { return &___s_BoxHash_2; }
	inline void set_s_BoxHash_2(int32_t value)
	{
		___s_BoxHash_2 = value;
	}

	inline static int32_t get_offset_of_s_RepeatButtonHash_3() { return static_cast<int32_t>(offsetof(GUI_t2255980234_StaticFields, ___s_RepeatButtonHash_3)); }
	inline int32_t get_s_RepeatButtonHash_3() const { return ___s_RepeatButtonHash_3; }
	inline int32_t* get_address_of_s_RepeatButtonHash_3() { return &___s_RepeatButtonHash_3; }
	inline void set_s_RepeatButtonHash_3(int32_t value)
	{
		___s_RepeatButtonHash_3 = value;
	}

	inline static int32_t get_offset_of_s_ToggleHash_4() { return static_cast<int32_t>(offsetof(GUI_t2255980234_StaticFields, ___s_ToggleHash_4)); }
	inline int32_t get_s_ToggleHash_4() const { return ___s_ToggleHash_4; }
	inline int32_t* get_address_of_s_ToggleHash_4() { return &___s_ToggleHash_4; }
	inline void set_s_ToggleHash_4(int32_t value)
	{
		___s_ToggleHash_4 = value;
	}

	inline static int32_t get_offset_of_s_ButtonGridHash_5() { return static_cast<int32_t>(offsetof(GUI_t2255980234_StaticFields, ___s_ButtonGridHash_5)); }
	inline int32_t get_s_ButtonGridHash_5() const { return ___s_ButtonGridHash_5; }
	inline int32_t* get_address_of_s_ButtonGridHash_5() { return &___s_ButtonGridHash_5; }
	inline void set_s_ButtonGridHash_5(int32_t value)
	{
		___s_ButtonGridHash_5 = value;
	}

	inline static int32_t get_offset_of_s_SliderHash_6() { return static_cast<int32_t>(offsetof(GUI_t2255980234_StaticFields, ___s_SliderHash_6)); }
	inline int32_t get_s_SliderHash_6() const { return ___s_SliderHash_6; }
	inline int32_t* get_address_of_s_SliderHash_6() { return &___s_SliderHash_6; }
	inline void set_s_SliderHash_6(int32_t value)
	{
		___s_SliderHash_6 = value;
	}

	inline static int32_t get_offset_of_s_BeginGroupHash_7() { return static_cast<int32_t>(offsetof(GUI_t2255980234_StaticFields, ___s_BeginGroupHash_7)); }
	inline int32_t get_s_BeginGroupHash_7() const { return ___s_BeginGroupHash_7; }
	inline int32_t* get_address_of_s_BeginGroupHash_7() { return &___s_BeginGroupHash_7; }
	inline void set_s_BeginGroupHash_7(int32_t value)
	{
		___s_BeginGroupHash_7 = value;
	}

	inline static int32_t get_offset_of_s_ScrollviewHash_8() { return static_cast<int32_t>(offsetof(GUI_t2255980234_StaticFields, ___s_ScrollviewHash_8)); }
	inline int32_t get_s_ScrollviewHash_8() const { return ___s_ScrollviewHash_8; }
	inline int32_t* get_address_of_s_ScrollviewHash_8() { return &___s_ScrollviewHash_8; }
	inline void set_s_ScrollviewHash_8(int32_t value)
	{
		___s_ScrollviewHash_8 = value;
	}

	inline static int32_t get_offset_of_U3CnextScrollStepTimeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GUI_t2255980234_StaticFields, ___U3CnextScrollStepTimeU3Ek__BackingField_9)); }
	inline DateTime_t816944984  get_U3CnextScrollStepTimeU3Ek__BackingField_9() const { return ___U3CnextScrollStepTimeU3Ek__BackingField_9; }
	inline DateTime_t816944984 * get_address_of_U3CnextScrollStepTimeU3Ek__BackingField_9() { return &___U3CnextScrollStepTimeU3Ek__BackingField_9; }
	inline void set_U3CnextScrollStepTimeU3Ek__BackingField_9(DateTime_t816944984  value)
	{
		___U3CnextScrollStepTimeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_s_Skin_10() { return static_cast<int32_t>(offsetof(GUI_t2255980234_StaticFields, ___s_Skin_10)); }
	inline GUISkin_t25046937 * get_s_Skin_10() const { return ___s_Skin_10; }
	inline GUISkin_t25046937 ** get_address_of_s_Skin_10() { return &___s_Skin_10; }
	inline void set_s_Skin_10(GUISkin_t25046937 * value)
	{
		___s_Skin_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_Skin_10), value);
	}

	inline static int32_t get_offset_of_s_ScrollViewStates_11() { return static_cast<int32_t>(offsetof(GUI_t2255980234_StaticFields, ___s_ScrollViewStates_11)); }
	inline GenericStack_t4098904508 * get_s_ScrollViewStates_11() const { return ___s_ScrollViewStates_11; }
	inline GenericStack_t4098904508 ** get_address_of_s_ScrollViewStates_11() { return &___s_ScrollViewStates_11; }
	inline void set_s_ScrollViewStates_11(GenericStack_t4098904508 * value)
	{
		___s_ScrollViewStates_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_ScrollViewStates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUI_T2255980234_H
#ifndef WINDOWFUNCTION_T239006988_H
#define WINDOWFUNCTION_T239006988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI/WindowFunction
struct  WindowFunction_t239006988  : public MulticastDelegate_t868286602
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWFUNCTION_T239006988_H
#ifndef AUDIOCONFIGURATIONCHANGEHANDLER_T1782746670_H
#define AUDIOCONFIGURATIONCHANGEHANDLER_T1782746670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct  AudioConfigurationChangeHandler_t1782746670  : public MulticastDelegate_t868286602
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCONFIGURATIONCHANGEHANDLER_T1782746670_H
#ifndef GUISCROLLGROUP_T3760764279_H
#define GUISCROLLGROUP_T3760764279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIScrollGroup
struct  GUIScrollGroup_t3760764279  : public GUILayoutGroup_t898504563
{
public:
	// System.Single UnityEngine.GUIScrollGroup::calcMinWidth
	float ___calcMinWidth_27;
	// System.Single UnityEngine.GUIScrollGroup::calcMaxWidth
	float ___calcMaxWidth_28;
	// System.Single UnityEngine.GUIScrollGroup::calcMinHeight
	float ___calcMinHeight_29;
	// System.Single UnityEngine.GUIScrollGroup::calcMaxHeight
	float ___calcMaxHeight_30;
	// System.Single UnityEngine.GUIScrollGroup::clientWidth
	float ___clientWidth_31;
	// System.Single UnityEngine.GUIScrollGroup::clientHeight
	float ___clientHeight_32;
	// System.Boolean UnityEngine.GUIScrollGroup::allowHorizontalScroll
	bool ___allowHorizontalScroll_33;
	// System.Boolean UnityEngine.GUIScrollGroup::allowVerticalScroll
	bool ___allowVerticalScroll_34;
	// System.Boolean UnityEngine.GUIScrollGroup::needsHorizontalScrollbar
	bool ___needsHorizontalScrollbar_35;
	// System.Boolean UnityEngine.GUIScrollGroup::needsVerticalScrollbar
	bool ___needsVerticalScrollbar_36;
	// UnityEngine.GUIStyle UnityEngine.GUIScrollGroup::horizontalScrollbar
	GUIStyle_t350904686 * ___horizontalScrollbar_37;
	// UnityEngine.GUIStyle UnityEngine.GUIScrollGroup::verticalScrollbar
	GUIStyle_t350904686 * ___verticalScrollbar_38;

public:
	inline static int32_t get_offset_of_calcMinWidth_27() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t3760764279, ___calcMinWidth_27)); }
	inline float get_calcMinWidth_27() const { return ___calcMinWidth_27; }
	inline float* get_address_of_calcMinWidth_27() { return &___calcMinWidth_27; }
	inline void set_calcMinWidth_27(float value)
	{
		___calcMinWidth_27 = value;
	}

	inline static int32_t get_offset_of_calcMaxWidth_28() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t3760764279, ___calcMaxWidth_28)); }
	inline float get_calcMaxWidth_28() const { return ___calcMaxWidth_28; }
	inline float* get_address_of_calcMaxWidth_28() { return &___calcMaxWidth_28; }
	inline void set_calcMaxWidth_28(float value)
	{
		___calcMaxWidth_28 = value;
	}

	inline static int32_t get_offset_of_calcMinHeight_29() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t3760764279, ___calcMinHeight_29)); }
	inline float get_calcMinHeight_29() const { return ___calcMinHeight_29; }
	inline float* get_address_of_calcMinHeight_29() { return &___calcMinHeight_29; }
	inline void set_calcMinHeight_29(float value)
	{
		___calcMinHeight_29 = value;
	}

	inline static int32_t get_offset_of_calcMaxHeight_30() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t3760764279, ___calcMaxHeight_30)); }
	inline float get_calcMaxHeight_30() const { return ___calcMaxHeight_30; }
	inline float* get_address_of_calcMaxHeight_30() { return &___calcMaxHeight_30; }
	inline void set_calcMaxHeight_30(float value)
	{
		___calcMaxHeight_30 = value;
	}

	inline static int32_t get_offset_of_clientWidth_31() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t3760764279, ___clientWidth_31)); }
	inline float get_clientWidth_31() const { return ___clientWidth_31; }
	inline float* get_address_of_clientWidth_31() { return &___clientWidth_31; }
	inline void set_clientWidth_31(float value)
	{
		___clientWidth_31 = value;
	}

	inline static int32_t get_offset_of_clientHeight_32() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t3760764279, ___clientHeight_32)); }
	inline float get_clientHeight_32() const { return ___clientHeight_32; }
	inline float* get_address_of_clientHeight_32() { return &___clientHeight_32; }
	inline void set_clientHeight_32(float value)
	{
		___clientHeight_32 = value;
	}

	inline static int32_t get_offset_of_allowHorizontalScroll_33() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t3760764279, ___allowHorizontalScroll_33)); }
	inline bool get_allowHorizontalScroll_33() const { return ___allowHorizontalScroll_33; }
	inline bool* get_address_of_allowHorizontalScroll_33() { return &___allowHorizontalScroll_33; }
	inline void set_allowHorizontalScroll_33(bool value)
	{
		___allowHorizontalScroll_33 = value;
	}

	inline static int32_t get_offset_of_allowVerticalScroll_34() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t3760764279, ___allowVerticalScroll_34)); }
	inline bool get_allowVerticalScroll_34() const { return ___allowVerticalScroll_34; }
	inline bool* get_address_of_allowVerticalScroll_34() { return &___allowVerticalScroll_34; }
	inline void set_allowVerticalScroll_34(bool value)
	{
		___allowVerticalScroll_34 = value;
	}

	inline static int32_t get_offset_of_needsHorizontalScrollbar_35() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t3760764279, ___needsHorizontalScrollbar_35)); }
	inline bool get_needsHorizontalScrollbar_35() const { return ___needsHorizontalScrollbar_35; }
	inline bool* get_address_of_needsHorizontalScrollbar_35() { return &___needsHorizontalScrollbar_35; }
	inline void set_needsHorizontalScrollbar_35(bool value)
	{
		___needsHorizontalScrollbar_35 = value;
	}

	inline static int32_t get_offset_of_needsVerticalScrollbar_36() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t3760764279, ___needsVerticalScrollbar_36)); }
	inline bool get_needsVerticalScrollbar_36() const { return ___needsVerticalScrollbar_36; }
	inline bool* get_address_of_needsVerticalScrollbar_36() { return &___needsVerticalScrollbar_36; }
	inline void set_needsVerticalScrollbar_36(bool value)
	{
		___needsVerticalScrollbar_36 = value;
	}

	inline static int32_t get_offset_of_horizontalScrollbar_37() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t3760764279, ___horizontalScrollbar_37)); }
	inline GUIStyle_t350904686 * get_horizontalScrollbar_37() const { return ___horizontalScrollbar_37; }
	inline GUIStyle_t350904686 ** get_address_of_horizontalScrollbar_37() { return &___horizontalScrollbar_37; }
	inline void set_horizontalScrollbar_37(GUIStyle_t350904686 * value)
	{
		___horizontalScrollbar_37 = value;
		Il2CppCodeGenWriteBarrier((&___horizontalScrollbar_37), value);
	}

	inline static int32_t get_offset_of_verticalScrollbar_38() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t3760764279, ___verticalScrollbar_38)); }
	inline GUIStyle_t350904686 * get_verticalScrollbar_38() const { return ___verticalScrollbar_38; }
	inline GUIStyle_t350904686 ** get_address_of_verticalScrollbar_38() { return &___verticalScrollbar_38; }
	inline void set_verticalScrollbar_38(GUIStyle_t350904686 * value)
	{
		___verticalScrollbar_38 = value;
		Il2CppCodeGenWriteBarrier((&___verticalScrollbar_38), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISCROLLGROUP_T3760764279_H
#ifndef CANVASGROUP_T1302232061_H
#define CANVASGROUP_T1302232061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CanvasGroup
struct  CanvasGroup_t1302232061  : public Component_t1099781993
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASGROUP_T1302232061_H
#ifndef GUISKIN_T25046937_H
#define GUISKIN_T25046937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUISkin
struct  GUISkin_t25046937  : public ScriptableObject_t3476656374
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_t3940830037 * ___m_Font_2;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t350904686 * ___m_box_3;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t350904686 * ___m_button_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t350904686 * ___m_toggle_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t350904686 * ___m_label_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t350904686 * ___m_textField_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t350904686 * ___m_textArea_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t350904686 * ___m_window_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t350904686 * ___m_horizontalSlider_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t350904686 * ___m_horizontalSliderThumb_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t350904686 * ___m_verticalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t350904686 * ___m_verticalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t350904686 * ___m_horizontalScrollbar_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t350904686 * ___m_horizontalScrollbarThumb_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t350904686 * ___m_horizontalScrollbarLeftButton_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t350904686 * ___m_horizontalScrollbarRightButton_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t350904686 * ___m_verticalScrollbar_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t350904686 * ___m_verticalScrollbarThumb_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t350904686 * ___m_verticalScrollbarUpButton_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t350904686 * ___m_verticalScrollbarDownButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t350904686 * ___m_ScrollView_22;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t1670706459* ___m_CustomStyles_23;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_t3774310589 * ___m_Settings_24;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_t840062568 * ___m_Styles_26;

public:
	inline static int32_t get_offset_of_m_Font_2() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_Font_2)); }
	inline Font_t3940830037 * get_m_Font_2() const { return ___m_Font_2; }
	inline Font_t3940830037 ** get_address_of_m_Font_2() { return &___m_Font_2; }
	inline void set_m_Font_2(Font_t3940830037 * value)
	{
		___m_Font_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Font_2), value);
	}

	inline static int32_t get_offset_of_m_box_3() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_box_3)); }
	inline GUIStyle_t350904686 * get_m_box_3() const { return ___m_box_3; }
	inline GUIStyle_t350904686 ** get_address_of_m_box_3() { return &___m_box_3; }
	inline void set_m_box_3(GUIStyle_t350904686 * value)
	{
		___m_box_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_box_3), value);
	}

	inline static int32_t get_offset_of_m_button_4() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_button_4)); }
	inline GUIStyle_t350904686 * get_m_button_4() const { return ___m_button_4; }
	inline GUIStyle_t350904686 ** get_address_of_m_button_4() { return &___m_button_4; }
	inline void set_m_button_4(GUIStyle_t350904686 * value)
	{
		___m_button_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_button_4), value);
	}

	inline static int32_t get_offset_of_m_toggle_5() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_toggle_5)); }
	inline GUIStyle_t350904686 * get_m_toggle_5() const { return ___m_toggle_5; }
	inline GUIStyle_t350904686 ** get_address_of_m_toggle_5() { return &___m_toggle_5; }
	inline void set_m_toggle_5(GUIStyle_t350904686 * value)
	{
		___m_toggle_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_toggle_5), value);
	}

	inline static int32_t get_offset_of_m_label_6() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_label_6)); }
	inline GUIStyle_t350904686 * get_m_label_6() const { return ___m_label_6; }
	inline GUIStyle_t350904686 ** get_address_of_m_label_6() { return &___m_label_6; }
	inline void set_m_label_6(GUIStyle_t350904686 * value)
	{
		___m_label_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_label_6), value);
	}

	inline static int32_t get_offset_of_m_textField_7() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_textField_7)); }
	inline GUIStyle_t350904686 * get_m_textField_7() const { return ___m_textField_7; }
	inline GUIStyle_t350904686 ** get_address_of_m_textField_7() { return &___m_textField_7; }
	inline void set_m_textField_7(GUIStyle_t350904686 * value)
	{
		___m_textField_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_textField_7), value);
	}

	inline static int32_t get_offset_of_m_textArea_8() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_textArea_8)); }
	inline GUIStyle_t350904686 * get_m_textArea_8() const { return ___m_textArea_8; }
	inline GUIStyle_t350904686 ** get_address_of_m_textArea_8() { return &___m_textArea_8; }
	inline void set_m_textArea_8(GUIStyle_t350904686 * value)
	{
		___m_textArea_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_textArea_8), value);
	}

	inline static int32_t get_offset_of_m_window_9() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_window_9)); }
	inline GUIStyle_t350904686 * get_m_window_9() const { return ___m_window_9; }
	inline GUIStyle_t350904686 ** get_address_of_m_window_9() { return &___m_window_9; }
	inline void set_m_window_9(GUIStyle_t350904686 * value)
	{
		___m_window_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_window_9), value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_10() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_horizontalSlider_10)); }
	inline GUIStyle_t350904686 * get_m_horizontalSlider_10() const { return ___m_horizontalSlider_10; }
	inline GUIStyle_t350904686 ** get_address_of_m_horizontalSlider_10() { return &___m_horizontalSlider_10; }
	inline void set_m_horizontalSlider_10(GUIStyle_t350904686 * value)
	{
		___m_horizontalSlider_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalSlider_10), value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_11() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_horizontalSliderThumb_11)); }
	inline GUIStyle_t350904686 * get_m_horizontalSliderThumb_11() const { return ___m_horizontalSliderThumb_11; }
	inline GUIStyle_t350904686 ** get_address_of_m_horizontalSliderThumb_11() { return &___m_horizontalSliderThumb_11; }
	inline void set_m_horizontalSliderThumb_11(GUIStyle_t350904686 * value)
	{
		___m_horizontalSliderThumb_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalSliderThumb_11), value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_verticalSlider_12)); }
	inline GUIStyle_t350904686 * get_m_verticalSlider_12() const { return ___m_verticalSlider_12; }
	inline GUIStyle_t350904686 ** get_address_of_m_verticalSlider_12() { return &___m_verticalSlider_12; }
	inline void set_m_verticalSlider_12(GUIStyle_t350904686 * value)
	{
		___m_verticalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalSlider_12), value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_verticalSliderThumb_13)); }
	inline GUIStyle_t350904686 * get_m_verticalSliderThumb_13() const { return ___m_verticalSliderThumb_13; }
	inline GUIStyle_t350904686 ** get_address_of_m_verticalSliderThumb_13() { return &___m_verticalSliderThumb_13; }
	inline void set_m_verticalSliderThumb_13(GUIStyle_t350904686 * value)
	{
		___m_verticalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalSliderThumb_13), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_14() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_horizontalScrollbar_14)); }
	inline GUIStyle_t350904686 * get_m_horizontalScrollbar_14() const { return ___m_horizontalScrollbar_14; }
	inline GUIStyle_t350904686 ** get_address_of_m_horizontalScrollbar_14() { return &___m_horizontalScrollbar_14; }
	inline void set_m_horizontalScrollbar_14(GUIStyle_t350904686 * value)
	{
		___m_horizontalScrollbar_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbar_14), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_15() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_horizontalScrollbarThumb_15)); }
	inline GUIStyle_t350904686 * get_m_horizontalScrollbarThumb_15() const { return ___m_horizontalScrollbarThumb_15; }
	inline GUIStyle_t350904686 ** get_address_of_m_horizontalScrollbarThumb_15() { return &___m_horizontalScrollbarThumb_15; }
	inline void set_m_horizontalScrollbarThumb_15(GUIStyle_t350904686 * value)
	{
		___m_horizontalScrollbarThumb_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarThumb_15), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_16() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_horizontalScrollbarLeftButton_16)); }
	inline GUIStyle_t350904686 * get_m_horizontalScrollbarLeftButton_16() const { return ___m_horizontalScrollbarLeftButton_16; }
	inline GUIStyle_t350904686 ** get_address_of_m_horizontalScrollbarLeftButton_16() { return &___m_horizontalScrollbarLeftButton_16; }
	inline void set_m_horizontalScrollbarLeftButton_16(GUIStyle_t350904686 * value)
	{
		___m_horizontalScrollbarLeftButton_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarLeftButton_16), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_17() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_horizontalScrollbarRightButton_17)); }
	inline GUIStyle_t350904686 * get_m_horizontalScrollbarRightButton_17() const { return ___m_horizontalScrollbarRightButton_17; }
	inline GUIStyle_t350904686 ** get_address_of_m_horizontalScrollbarRightButton_17() { return &___m_horizontalScrollbarRightButton_17; }
	inline void set_m_horizontalScrollbarRightButton_17(GUIStyle_t350904686 * value)
	{
		___m_horizontalScrollbarRightButton_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarRightButton_17), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_18() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_verticalScrollbar_18)); }
	inline GUIStyle_t350904686 * get_m_verticalScrollbar_18() const { return ___m_verticalScrollbar_18; }
	inline GUIStyle_t350904686 ** get_address_of_m_verticalScrollbar_18() { return &___m_verticalScrollbar_18; }
	inline void set_m_verticalScrollbar_18(GUIStyle_t350904686 * value)
	{
		___m_verticalScrollbar_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbar_18), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_19() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_verticalScrollbarThumb_19)); }
	inline GUIStyle_t350904686 * get_m_verticalScrollbarThumb_19() const { return ___m_verticalScrollbarThumb_19; }
	inline GUIStyle_t350904686 ** get_address_of_m_verticalScrollbarThumb_19() { return &___m_verticalScrollbarThumb_19; }
	inline void set_m_verticalScrollbarThumb_19(GUIStyle_t350904686 * value)
	{
		___m_verticalScrollbarThumb_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarThumb_19), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_20() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_verticalScrollbarUpButton_20)); }
	inline GUIStyle_t350904686 * get_m_verticalScrollbarUpButton_20() const { return ___m_verticalScrollbarUpButton_20; }
	inline GUIStyle_t350904686 ** get_address_of_m_verticalScrollbarUpButton_20() { return &___m_verticalScrollbarUpButton_20; }
	inline void set_m_verticalScrollbarUpButton_20(GUIStyle_t350904686 * value)
	{
		___m_verticalScrollbarUpButton_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarUpButton_20), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_21() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_verticalScrollbarDownButton_21)); }
	inline GUIStyle_t350904686 * get_m_verticalScrollbarDownButton_21() const { return ___m_verticalScrollbarDownButton_21; }
	inline GUIStyle_t350904686 ** get_address_of_m_verticalScrollbarDownButton_21() { return &___m_verticalScrollbarDownButton_21; }
	inline void set_m_verticalScrollbarDownButton_21(GUIStyle_t350904686 * value)
	{
		___m_verticalScrollbarDownButton_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarDownButton_21), value);
	}

	inline static int32_t get_offset_of_m_ScrollView_22() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_ScrollView_22)); }
	inline GUIStyle_t350904686 * get_m_ScrollView_22() const { return ___m_ScrollView_22; }
	inline GUIStyle_t350904686 ** get_address_of_m_ScrollView_22() { return &___m_ScrollView_22; }
	inline void set_m_ScrollView_22(GUIStyle_t350904686 * value)
	{
		___m_ScrollView_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_ScrollView_22), value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_23() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_CustomStyles_23)); }
	inline GUIStyleU5BU5D_t1670706459* get_m_CustomStyles_23() const { return ___m_CustomStyles_23; }
	inline GUIStyleU5BU5D_t1670706459** get_address_of_m_CustomStyles_23() { return &___m_CustomStyles_23; }
	inline void set_m_CustomStyles_23(GUIStyleU5BU5D_t1670706459* value)
	{
		___m_CustomStyles_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_CustomStyles_23), value);
	}

	inline static int32_t get_offset_of_m_Settings_24() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_Settings_24)); }
	inline GUISettings_t3774310589 * get_m_Settings_24() const { return ___m_Settings_24; }
	inline GUISettings_t3774310589 ** get_address_of_m_Settings_24() { return &___m_Settings_24; }
	inline void set_m_Settings_24(GUISettings_t3774310589 * value)
	{
		___m_Settings_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_Settings_24), value);
	}

	inline static int32_t get_offset_of_m_Styles_26() { return static_cast<int32_t>(offsetof(GUISkin_t25046937, ___m_Styles_26)); }
	inline Dictionary_2_t840062568 * get_m_Styles_26() const { return ___m_Styles_26; }
	inline Dictionary_2_t840062568 ** get_address_of_m_Styles_26() { return &___m_Styles_26; }
	inline void set_m_Styles_26(Dictionary_2_t840062568 * value)
	{
		___m_Styles_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Styles_26), value);
	}
};

struct GUISkin_t25046937_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t350904686 * ___ms_Error_25;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t410520829 * ___m_SkinChanged_27;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t25046937 * ___current_28;

public:
	inline static int32_t get_offset_of_ms_Error_25() { return static_cast<int32_t>(offsetof(GUISkin_t25046937_StaticFields, ___ms_Error_25)); }
	inline GUIStyle_t350904686 * get_ms_Error_25() const { return ___ms_Error_25; }
	inline GUIStyle_t350904686 ** get_address_of_ms_Error_25() { return &___ms_Error_25; }
	inline void set_ms_Error_25(GUIStyle_t350904686 * value)
	{
		___ms_Error_25 = value;
		Il2CppCodeGenWriteBarrier((&___ms_Error_25), value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_27() { return static_cast<int32_t>(offsetof(GUISkin_t25046937_StaticFields, ___m_SkinChanged_27)); }
	inline SkinChangedDelegate_t410520829 * get_m_SkinChanged_27() const { return ___m_SkinChanged_27; }
	inline SkinChangedDelegate_t410520829 ** get_address_of_m_SkinChanged_27() { return &___m_SkinChanged_27; }
	inline void set_m_SkinChanged_27(SkinChangedDelegate_t410520829 * value)
	{
		___m_SkinChanged_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_SkinChanged_27), value);
	}

	inline static int32_t get_offset_of_current_28() { return static_cast<int32_t>(offsetof(GUISkin_t25046937_StaticFields, ___current_28)); }
	inline GUISkin_t25046937 * get_current_28() const { return ___current_28; }
	inline GUISkin_t25046937 ** get_address_of_current_28() { return &___current_28; }
	inline void set_current_28(GUISkin_t25046937 * value)
	{
		___current_28 = value;
		Il2CppCodeGenWriteBarrier((&___current_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISKIN_T25046937_H
#ifndef SKINCHANGEDDELEGATE_T410520829_H
#define SKINCHANGEDDELEGATE_T410520829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUISkin/SkinChangedDelegate
struct  SkinChangedDelegate_t410520829  : public MulticastDelegate_t868286602
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKINCHANGEDDELEGATE_T410520829_H
#ifndef STATEMACHINEBEHAVIOUR_T2729640527_H
#define STATEMACHINEBEHAVIOUR_T2729640527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StateMachineBehaviour
struct  StateMachineBehaviour_t2729640527  : public ScriptableObject_t3476656374
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMACHINEBEHAVIOUR_T2729640527_H
#ifndef ANIMATIONCLIP_T847851872_H
#define ANIMATIONCLIP_T847851872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationClip
struct  AnimationClip_t847851872  : public Motion_t593517654
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCLIP_T847851872_H
#ifndef CAPSULECOLLIDER_T4006559820_H
#define CAPSULECOLLIDER_T4006559820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CapsuleCollider
struct  CapsuleCollider_t4006559820  : public Collider_t997197530
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPSULECOLLIDER_T4006559820_H
#ifndef CHARACTERCONTROLLER_T2626182459_H
#define CHARACTERCONTROLLER_T2626182459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CharacterController
struct  CharacterController_t2626182459  : public Collider_t997197530
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERCONTROLLER_T2626182459_H
#ifndef SPHERECOLLIDER_T2017910708_H
#define SPHERECOLLIDER_T2017910708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SphereCollider
struct  SphereCollider_t2017910708  : public Collider_t997197530
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPHERECOLLIDER_T2017910708_H
#ifndef BOXCOLLIDER_T3447054750_H
#define BOXCOLLIDER_T3447054750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider
struct  BoxCollider_t3447054750  : public Collider_t997197530
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER_T3447054750_H
#ifndef CANVAS_T3766332218_H
#define CANVAS_T3766332218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_t3766332218  : public Behaviour_t2886796472
{
public:

public:
};

struct Canvas_t3766332218_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t284919308 * ___willRenderCanvases_2;

public:
	inline static int32_t get_offset_of_willRenderCanvases_2() { return static_cast<int32_t>(offsetof(Canvas_t3766332218_StaticFields, ___willRenderCanvases_2)); }
	inline WillRenderCanvases_t284919308 * get_willRenderCanvases_2() const { return ___willRenderCanvases_2; }
	inline WillRenderCanvases_t284919308 ** get_address_of_willRenderCanvases_2() { return &___willRenderCanvases_2; }
	inline void set_willRenderCanvases_2(WillRenderCanvases_t284919308 * value)
	{
		___willRenderCanvases_2 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_T3766332218_H
#ifndef ANIMATOR_T2755805336_H
#define ANIMATOR_T2755805336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t2755805336  : public Behaviour_t2886796472
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T2755805336_H
#ifndef AUDIOSOURCE_T2339665650_H
#define AUDIOSOURCE_T2339665650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t2339665650  : public Behaviour_t2886796472
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T2339665650_H
#ifndef COLLIDER2D_T1683084049_H
#define COLLIDER2D_T1683084049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t1683084049  : public Behaviour_t2886796472
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T1683084049_H
#ifndef MESHCOLLIDER_T2002306400_H
#define MESHCOLLIDER_T2002306400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshCollider
struct  MeshCollider_t2002306400  : public Collider_t997197530
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHCOLLIDER_T2002306400_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1300 = { sizeof (ControllerColliderHit_t4123103849), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1300[7] = 
{
	ControllerColliderHit_t4123103849::get_offset_of_m_Controller_0(),
	ControllerColliderHit_t4123103849::get_offset_of_m_Collider_1(),
	ControllerColliderHit_t4123103849::get_offset_of_m_Point_2(),
	ControllerColliderHit_t4123103849::get_offset_of_m_Normal_3(),
	ControllerColliderHit_t4123103849::get_offset_of_m_MoveDirection_4(),
	ControllerColliderHit_t4123103849::get_offset_of_m_MoveLength_5(),
	ControllerColliderHit_t4123103849::get_offset_of_m_Push_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1301 = { sizeof (Collision_t3987428053), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1301[5] = 
{
	Collision_t3987428053::get_offset_of_m_Impulse_0(),
	Collision_t3987428053::get_offset_of_m_RelativeVelocity_1(),
	Collision_t3987428053::get_offset_of_m_Rigidbody_2(),
	Collision_t3987428053::get_offset_of_m_Collider_3(),
	Collision_t3987428053::get_offset_of_m_Contacts_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1302 = { sizeof (QueryTriggerInteraction_t189968416)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1302[4] = 
{
	QueryTriggerInteraction_t189968416::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1303 = { sizeof (Physics_t342858616), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1304 = { sizeof (ContactPoint_t1076508538)+ sizeof (RuntimeObject), sizeof(ContactPoint_t1076508538 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1304[5] = 
{
	ContactPoint_t1076508538::get_offset_of_m_Point_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t1076508538::get_offset_of_m_Normal_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t1076508538::get_offset_of_m_ThisColliderInstanceID_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t1076508538::get_offset_of_m_OtherColliderInstanceID_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t1076508538::get_offset_of_m_Separation_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1305 = { sizeof (Rigidbody_t2944185830), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1306 = { sizeof (Collider_t997197530), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1307 = { sizeof (BoxCollider_t3447054750), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1308 = { sizeof (SphereCollider_t2017910708), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1309 = { sizeof (MeshCollider_t2002306400), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1310 = { sizeof (CapsuleCollider_t4006559820), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1311 = { sizeof (RaycastHit_t1849044375)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1311[6] = 
{
	RaycastHit_t1849044375::get_offset_of_m_Point_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t1849044375::get_offset_of_m_Normal_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t1849044375::get_offset_of_m_FaceID_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t1849044375::get_offset_of_m_Distance_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t1849044375::get_offset_of_m_UV_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t1849044375::get_offset_of_m_Collider_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1312 = { sizeof (PhysicMaterial_t1800909956), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1313 = { sizeof (CharacterController_t2626182459), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1314 = { sizeof (RaycastHit2D_t618660614)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1314[6] = 
{
	RaycastHit2D_t618660614::get_offset_of_m_Centroid_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t618660614::get_offset_of_m_Point_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t618660614::get_offset_of_m_Normal_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t618660614::get_offset_of_m_Distance_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t618660614::get_offset_of_m_Fraction_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t618660614::get_offset_of_m_Collider_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1315 = { sizeof (Physics2D_t3981192029), -1, sizeof(Physics2D_t3981192029_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1315[1] = 
{
	Physics2D_t3981192029_StaticFields::get_offset_of_m_LastDisabledRigidbody2D_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1316 = { sizeof (Rigidbody2D_t3703340207), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1317 = { sizeof (Collider2D_t1683084049), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1318 = { sizeof (AudioPlayableOutput_t1787853400)+ sizeof (RuntimeObject), sizeof(AudioPlayableOutput_t1787853400 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1318[1] = 
{
	AudioPlayableOutput_t1787853400::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1319 = { sizeof (AudioClipPlayable_t3677483330)+ sizeof (RuntimeObject), sizeof(AudioClipPlayable_t3677483330 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1319[1] = 
{
	AudioClipPlayable_t3677483330::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1320 = { sizeof (AudioMixerPlayable_t1112290079)+ sizeof (RuntimeObject), sizeof(AudioMixerPlayable_t1112290079 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1320[1] = 
{
	AudioMixerPlayable_t1112290079::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1321 = { sizeof (AudioSettings_t2270710432), -1, sizeof(AudioSettings_t2270710432_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1321[1] = 
{
	AudioSettings_t2270710432_StaticFields::get_offset_of_OnAudioConfigurationChanged_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1322 = { sizeof (AudioConfigurationChangeHandler_t1782746670), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1323 = { sizeof (AudioClip_t4119059730), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1323[2] = 
{
	AudioClip_t4119059730::get_offset_of_m_PCMReaderCallback_2(),
	AudioClip_t4119059730::get_offset_of_m_PCMSetPositionCallback_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1324 = { sizeof (PCMReaderCallback_t2043580182), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1325 = { sizeof (PCMSetPositionCallback_t904171160), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1326 = { sizeof (AudioSource_t2339665650), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1327 = { sizeof (AudioPlayableGraphExtensions_t4290317759), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1328 = { sizeof (SharedBetweenAnimatorsAttribute_t3116496384), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1329 = { sizeof (StateMachineBehaviour_t2729640527), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1330 = { sizeof (AnimationClipPlayable_t3152389060)+ sizeof (RuntimeObject), sizeof(AnimationClipPlayable_t3152389060 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1330[1] = 
{
	AnimationClipPlayable_t3152389060::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1331 = { sizeof (AnimationLayerMixerPlayable_t3487463270)+ sizeof (RuntimeObject), sizeof(AnimationLayerMixerPlayable_t3487463270 ), sizeof(AnimationLayerMixerPlayable_t3487463270_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1331[2] = 
{
	AnimationLayerMixerPlayable_t3487463270::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationLayerMixerPlayable_t3487463270_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1332 = { sizeof (AnimationMixerPlayable_t896160780)+ sizeof (RuntimeObject), sizeof(AnimationMixerPlayable_t896160780 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1332[1] = 
{
	AnimationMixerPlayable_t896160780::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1333 = { sizeof (AnimationOffsetPlayable_t799596381)+ sizeof (RuntimeObject), sizeof(AnimationOffsetPlayable_t799596381 ), sizeof(AnimationOffsetPlayable_t799596381_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1333[2] = 
{
	AnimationOffsetPlayable_t799596381::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationOffsetPlayable_t799596381_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1334 = { sizeof (AnimationPlayableOutput_t1974699825)+ sizeof (RuntimeObject), sizeof(AnimationPlayableOutput_t1974699825 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1334[1] = 
{
	AnimationPlayableOutput_t1974699825::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1335 = { sizeof (AnimatorControllerPlayable_t3805541804)+ sizeof (RuntimeObject), sizeof(AnimatorControllerPlayable_t3805541804 ), sizeof(AnimatorControllerPlayable_t3805541804_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1335[2] = 
{
	AnimatorControllerPlayable_t3805541804::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorControllerPlayable_t3805541804_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1336 = { sizeof (AnimationPlayableGraphExtensions_t1398617441), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1337 = { sizeof (AnimationEventSource_t2312484378)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1337[4] = 
{
	AnimationEventSource_t2312484378::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1338 = { sizeof (AnimationEvent_t1118830676), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1338[11] = 
{
	AnimationEvent_t1118830676::get_offset_of_m_Time_0(),
	AnimationEvent_t1118830676::get_offset_of_m_FunctionName_1(),
	AnimationEvent_t1118830676::get_offset_of_m_StringParameter_2(),
	AnimationEvent_t1118830676::get_offset_of_m_ObjectReferenceParameter_3(),
	AnimationEvent_t1118830676::get_offset_of_m_FloatParameter_4(),
	AnimationEvent_t1118830676::get_offset_of_m_IntParameter_5(),
	AnimationEvent_t1118830676::get_offset_of_m_MessageOptions_6(),
	AnimationEvent_t1118830676::get_offset_of_m_Source_7(),
	AnimationEvent_t1118830676::get_offset_of_m_StateSender_8(),
	AnimationEvent_t1118830676::get_offset_of_m_AnimatorStateInfo_9(),
	AnimationEvent_t1118830676::get_offset_of_m_AnimatorClipInfo_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1339 = { sizeof (AnimationClip_t847851872), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1340 = { sizeof (AnimationState_t3813352619), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1341 = { sizeof (AnimatorControllerParameterType_t2855905517)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1341[5] = 
{
	AnimatorControllerParameterType_t2855905517::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1342 = { sizeof (AnimatorClipInfo_t3735346097)+ sizeof (RuntimeObject), sizeof(AnimatorClipInfo_t3735346097 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1342[2] = 
{
	AnimatorClipInfo_t3735346097::get_offset_of_m_ClipInstanceID_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorClipInfo_t3735346097::get_offset_of_m_Weight_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1343 = { sizeof (AnimatorStateInfo_t1664108925)+ sizeof (RuntimeObject), sizeof(AnimatorStateInfo_t1664108925 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1343[9] = 
{
	AnimatorStateInfo_t1664108925::get_offset_of_m_Name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1664108925::get_offset_of_m_Path_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1664108925::get_offset_of_m_FullPath_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1664108925::get_offset_of_m_NormalizedTime_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1664108925::get_offset_of_m_Length_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1664108925::get_offset_of_m_Speed_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1664108925::get_offset_of_m_SpeedMultiplier_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1664108925::get_offset_of_m_Tag_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1664108925::get_offset_of_m_Loop_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1344 = { sizeof (AnimatorTransitionInfo_t3198719998)+ sizeof (RuntimeObject), sizeof(AnimatorTransitionInfo_t3198719998_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1344[6] = 
{
	AnimatorTransitionInfo_t3198719998::get_offset_of_m_FullPath_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t3198719998::get_offset_of_m_UserName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t3198719998::get_offset_of_m_Name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t3198719998::get_offset_of_m_NormalizedTime_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t3198719998::get_offset_of_m_AnyState_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t3198719998::get_offset_of_m_TransitionType_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1345 = { sizeof (Animator_t2755805336), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1346 = { sizeof (AnimatorControllerParameter_t3617511430), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1346[5] = 
{
	AnimatorControllerParameter_t3617511430::get_offset_of_m_Name_0(),
	AnimatorControllerParameter_t3617511430::get_offset_of_m_Type_1(),
	AnimatorControllerParameter_t3617511430::get_offset_of_m_DefaultFloat_2(),
	AnimatorControllerParameter_t3617511430::get_offset_of_m_DefaultInt_3(),
	AnimatorControllerParameter_t3617511430::get_offset_of_m_DefaultBool_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1347 = { sizeof (SkeletonBone_t223881975)+ sizeof (RuntimeObject), sizeof(SkeletonBone_t223881975_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1347[5] = 
{
	SkeletonBone_t223881975::get_offset_of_name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t223881975::get_offset_of_parentName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t223881975::get_offset_of_position_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t223881975::get_offset_of_rotation_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t223881975::get_offset_of_scale_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1348 = { sizeof (HumanLimit_t1839991932)+ sizeof (RuntimeObject), sizeof(HumanLimit_t1839991932 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1348[5] = 
{
	HumanLimit_t1839991932::get_offset_of_m_Min_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t1839991932::get_offset_of_m_Max_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t1839991932::get_offset_of_m_Center_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t1839991932::get_offset_of_m_AxisLength_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t1839991932::get_offset_of_m_UseDefaultValues_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1349 = { sizeof (HumanBone_t984958534)+ sizeof (RuntimeObject), sizeof(HumanBone_t984958534_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1349[3] = 
{
	HumanBone_t984958534::get_offset_of_m_BoneName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanBone_t984958534::get_offset_of_m_HumanName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanBone_t984958534::get_offset_of_limit_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1350 = { sizeof (AvatarMask_t2342763962), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1351 = { sizeof (Motion_t593517654), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1352 = { sizeof (RuntimeAnimatorController_t1768566805), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1353 = { sizeof (FontStyle_t363196109)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1353[5] = 
{
	FontStyle_t363196109::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1354 = { sizeof (TextGenerationError_t2800342738)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1354[5] = 
{
	TextGenerationError_t2800342738::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1355 = { sizeof (TextGenerationSettings_t987435647)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1355[18] = 
{
	TextGenerationSettings_t987435647::get_offset_of_font_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t987435647::get_offset_of_color_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t987435647::get_offset_of_fontSize_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t987435647::get_offset_of_lineSpacing_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t987435647::get_offset_of_richText_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t987435647::get_offset_of_scaleFactor_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t987435647::get_offset_of_fontStyle_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t987435647::get_offset_of_textAnchor_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t987435647::get_offset_of_alignByGeometry_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t987435647::get_offset_of_resizeTextForBestFit_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t987435647::get_offset_of_resizeTextMinSize_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t987435647::get_offset_of_resizeTextMaxSize_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t987435647::get_offset_of_updateBounds_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t987435647::get_offset_of_verticalOverflow_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t987435647::get_offset_of_horizontalOverflow_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t987435647::get_offset_of_generationExtents_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t987435647::get_offset_of_pivot_16() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t987435647::get_offset_of_generateOutOfBounds_17() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1356 = { sizeof (TextGenerator_t2161547030), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1356[11] = 
{
	TextGenerator_t2161547030::get_offset_of_m_Ptr_0(),
	TextGenerator_t2161547030::get_offset_of_m_LastString_1(),
	TextGenerator_t2161547030::get_offset_of_m_LastSettings_2(),
	TextGenerator_t2161547030::get_offset_of_m_HasGenerated_3(),
	TextGenerator_t2161547030::get_offset_of_m_LastValid_4(),
	TextGenerator_t2161547030::get_offset_of_m_Verts_5(),
	TextGenerator_t2161547030::get_offset_of_m_Characters_6(),
	TextGenerator_t2161547030::get_offset_of_m_Lines_7(),
	TextGenerator_t2161547030::get_offset_of_m_CachedVerts_8(),
	TextGenerator_t2161547030::get_offset_of_m_CachedCharacters_9(),
	TextGenerator_t2161547030::get_offset_of_m_CachedLines_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1357 = { sizeof (TextAnchor_t1116031447)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1357[10] = 
{
	TextAnchor_t1116031447::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1358 = { sizeof (HorizontalWrapMode_t211990075)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1358[3] = 
{
	HorizontalWrapMode_t211990075::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1359 = { sizeof (VerticalWrapMode_t3892631209)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1359[3] = 
{
	VerticalWrapMode_t3892631209::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1360 = { sizeof (Font_t3940830037), -1, sizeof(Font_t3940830037_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1360[2] = 
{
	Font_t3940830037_StaticFields::get_offset_of_textureRebuilt_2(),
	Font_t3940830037::get_offset_of_m_FontTextureRebuildCallback_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1361 = { sizeof (FontTextureRebuildCallback_t3959427492), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1362 = { sizeof (UICharInfo_t521654658)+ sizeof (RuntimeObject), sizeof(UICharInfo_t521654658 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1362[2] = 
{
	UICharInfo_t521654658::get_offset_of_cursorPos_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UICharInfo_t521654658::get_offset_of_charWidth_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1363 = { sizeof (UILineInfo_t2821259017)+ sizeof (RuntimeObject), sizeof(UILineInfo_t2821259017 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1363[4] = 
{
	UILineInfo_t2821259017::get_offset_of_startCharIdx_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UILineInfo_t2821259017::get_offset_of_height_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UILineInfo_t2821259017::get_offset_of_topY_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UILineInfo_t2821259017::get_offset_of_leading_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1364 = { sizeof (UIVertex_t1584243837)+ sizeof (RuntimeObject), sizeof(UIVertex_t1584243837 ), sizeof(UIVertex_t1584243837_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1364[11] = 
{
	UIVertex_t1584243837::get_offset_of_position_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t1584243837::get_offset_of_normal_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t1584243837::get_offset_of_color_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t1584243837::get_offset_of_uv0_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t1584243837::get_offset_of_uv1_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t1584243837::get_offset_of_uv2_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t1584243837::get_offset_of_uv3_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t1584243837::get_offset_of_tangent_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t1584243837_StaticFields::get_offset_of_s_DefaultColor_8(),
	UIVertex_t1584243837_StaticFields::get_offset_of_s_DefaultTangent_9(),
	UIVertex_t1584243837_StaticFields::get_offset_of_simpleVert_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1365 = { sizeof (RectTransformUtility_t3614849597), -1, sizeof(RectTransformUtility_t3614849597_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1365[1] = 
{
	RectTransformUtility_t3614849597_StaticFields::get_offset_of_s_Corners_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1366 = { sizeof (RenderMode_t371552777)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1366[4] = 
{
	RenderMode_t371552777::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1367 = { sizeof (Canvas_t3766332218), -1, sizeof(Canvas_t3766332218_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1367[1] = 
{
	Canvas_t3766332218_StaticFields::get_offset_of_willRenderCanvases_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1368 = { sizeof (WillRenderCanvases_t284919308), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1369 = { sizeof (UISystemProfilerApi_t4083148840), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1370 = { sizeof (SampleType_t2909613622)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1370[3] = 
{
	SampleType_t2909613622::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1371 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1372 = { sizeof (CanvasGroup_t1302232061), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1373 = { sizeof (CanvasRenderer_t1154703113), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1374 = { sizeof (Event_t991343199), sizeof(Event_t991343199_marshaled_pinvoke), sizeof(Event_t991343199_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1374[4] = 
{
	Event_t991343199::get_offset_of_m_Ptr_0(),
	Event_t991343199_StaticFields::get_offset_of_s_Current_1(),
	Event_t991343199_StaticFields::get_offset_of_s_MasterEvent_2(),
	Event_t991343199_StaticFields::get_offset_of_U3CU3Ef__switchU24map0_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1375 = { sizeof (EventType_t3330297035)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1375[33] = 
{
	EventType_t3330297035::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1376 = { sizeof (EventModifiers_t1921398598)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1376[9] = 
{
	EventModifiers_t1921398598::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1377 = { sizeof (GUI_t2255980234), -1, sizeof(GUI_t2255980234_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1377[12] = 
{
	GUI_t2255980234_StaticFields::get_offset_of_s_ScrollStepSize_0(),
	GUI_t2255980234_StaticFields::get_offset_of_s_HotTextField_1(),
	GUI_t2255980234_StaticFields::get_offset_of_s_BoxHash_2(),
	GUI_t2255980234_StaticFields::get_offset_of_s_RepeatButtonHash_3(),
	GUI_t2255980234_StaticFields::get_offset_of_s_ToggleHash_4(),
	GUI_t2255980234_StaticFields::get_offset_of_s_ButtonGridHash_5(),
	GUI_t2255980234_StaticFields::get_offset_of_s_SliderHash_6(),
	GUI_t2255980234_StaticFields::get_offset_of_s_BeginGroupHash_7(),
	GUI_t2255980234_StaticFields::get_offset_of_s_ScrollviewHash_8(),
	GUI_t2255980234_StaticFields::get_offset_of_U3CnextScrollStepTimeU3Ek__BackingField_9(),
	GUI_t2255980234_StaticFields::get_offset_of_s_Skin_10(),
	GUI_t2255980234_StaticFields::get_offset_of_s_ScrollViewStates_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1378 = { sizeof (WindowFunction_t239006988), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1379 = { sizeof (GUIContent_t2918791183), -1, sizeof(GUIContent_t2918791183_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1379[7] = 
{
	GUIContent_t2918791183::get_offset_of_m_Text_0(),
	GUIContent_t2918791183::get_offset_of_m_Image_1(),
	GUIContent_t2918791183::get_offset_of_m_Tooltip_2(),
	GUIContent_t2918791183_StaticFields::get_offset_of_s_Text_3(),
	GUIContent_t2918791183_StaticFields::get_offset_of_s_Image_4(),
	GUIContent_t2918791183_StaticFields::get_offset_of_s_TextImage_5(),
	GUIContent_t2918791183_StaticFields::get_offset_of_none_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1380 = { sizeof (GUILayout_t3953415249), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1381 = { sizeof (GUILayoutOption_t668350194), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1381[2] = 
{
	GUILayoutOption_t668350194::get_offset_of_type_0(),
	GUILayoutOption_t668350194::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1382 = { sizeof (Type_t3266154016)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1382[15] = 
{
	Type_t3266154016::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1383 = { sizeof (GUILayoutGroup_t898504563), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1383[17] = 
{
	GUILayoutGroup_t898504563::get_offset_of_entries_10(),
	GUILayoutGroup_t898504563::get_offset_of_isVertical_11(),
	GUILayoutGroup_t898504563::get_offset_of_resetCoords_12(),
	GUILayoutGroup_t898504563::get_offset_of_spacing_13(),
	GUILayoutGroup_t898504563::get_offset_of_sameSize_14(),
	GUILayoutGroup_t898504563::get_offset_of_isWindow_15(),
	GUILayoutGroup_t898504563::get_offset_of_windowID_16(),
	GUILayoutGroup_t898504563::get_offset_of_m_Cursor_17(),
	GUILayoutGroup_t898504563::get_offset_of_m_StretchableCountX_18(),
	GUILayoutGroup_t898504563::get_offset_of_m_StretchableCountY_19(),
	GUILayoutGroup_t898504563::get_offset_of_m_UserSpecifiedWidth_20(),
	GUILayoutGroup_t898504563::get_offset_of_m_UserSpecifiedHeight_21(),
	GUILayoutGroup_t898504563::get_offset_of_m_ChildMinWidth_22(),
	GUILayoutGroup_t898504563::get_offset_of_m_ChildMaxWidth_23(),
	GUILayoutGroup_t898504563::get_offset_of_m_ChildMinHeight_24(),
	GUILayoutGroup_t898504563::get_offset_of_m_ChildMaxHeight_25(),
	GUILayoutGroup_t898504563::get_offset_of_m_Margin_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1384 = { sizeof (GUIScrollGroup_t3760764279), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1384[12] = 
{
	GUIScrollGroup_t3760764279::get_offset_of_calcMinWidth_27(),
	GUIScrollGroup_t3760764279::get_offset_of_calcMaxWidth_28(),
	GUIScrollGroup_t3760764279::get_offset_of_calcMinHeight_29(),
	GUIScrollGroup_t3760764279::get_offset_of_calcMaxHeight_30(),
	GUIScrollGroup_t3760764279::get_offset_of_clientWidth_31(),
	GUIScrollGroup_t3760764279::get_offset_of_clientHeight_32(),
	GUIScrollGroup_t3760764279::get_offset_of_allowHorizontalScroll_33(),
	GUIScrollGroup_t3760764279::get_offset_of_allowVerticalScroll_34(),
	GUIScrollGroup_t3760764279::get_offset_of_needsHorizontalScrollbar_35(),
	GUIScrollGroup_t3760764279::get_offset_of_needsVerticalScrollbar_36(),
	GUIScrollGroup_t3760764279::get_offset_of_horizontalScrollbar_37(),
	GUIScrollGroup_t3760764279::get_offset_of_verticalScrollbar_38(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1385 = { sizeof (GUILayoutEntry_t3770082851), -1, sizeof(GUILayoutEntry_t3770082851_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1385[10] = 
{
	GUILayoutEntry_t3770082851::get_offset_of_minWidth_0(),
	GUILayoutEntry_t3770082851::get_offset_of_maxWidth_1(),
	GUILayoutEntry_t3770082851::get_offset_of_minHeight_2(),
	GUILayoutEntry_t3770082851::get_offset_of_maxHeight_3(),
	GUILayoutEntry_t3770082851::get_offset_of_rect_4(),
	GUILayoutEntry_t3770082851::get_offset_of_stretchWidth_5(),
	GUILayoutEntry_t3770082851::get_offset_of_stretchHeight_6(),
	GUILayoutEntry_t3770082851::get_offset_of_m_Style_7(),
	GUILayoutEntry_t3770082851_StaticFields::get_offset_of_kDummyRect_8(),
	GUILayoutEntry_t3770082851_StaticFields::get_offset_of_indent_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1386 = { sizeof (GUILayoutUtility_t196586206), -1, sizeof(GUILayoutUtility_t196586206_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1386[5] = 
{
	GUILayoutUtility_t196586206_StaticFields::get_offset_of_s_StoredLayouts_0(),
	GUILayoutUtility_t196586206_StaticFields::get_offset_of_s_StoredWindows_1(),
	GUILayoutUtility_t196586206_StaticFields::get_offset_of_current_2(),
	GUILayoutUtility_t196586206_StaticFields::get_offset_of_kDummyRect_3(),
	GUILayoutUtility_t196586206_StaticFields::get_offset_of_s_SpaceStyle_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1387 = { sizeof (LayoutCache_t1696652188), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1387[3] = 
{
	LayoutCache_t1696652188::get_offset_of_topLevel_0(),
	LayoutCache_t1696652188::get_offset_of_layoutGroups_1(),
	LayoutCache_t1696652188::get_offset_of_windows_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1388 = { sizeof (GUISettings_t3774310589), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1388[5] = 
{
	GUISettings_t3774310589::get_offset_of_m_DoubleClickSelectsWord_0(),
	GUISettings_t3774310589::get_offset_of_m_TripleClickSelectsLine_1(),
	GUISettings_t3774310589::get_offset_of_m_CursorColor_2(),
	GUISettings_t3774310589::get_offset_of_m_CursorFlashSpeed_3(),
	GUISettings_t3774310589::get_offset_of_m_SelectionColor_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1389 = { sizeof (GUISkin_t25046937), -1, sizeof(GUISkin_t25046937_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1389[27] = 
{
	GUISkin_t25046937::get_offset_of_m_Font_2(),
	GUISkin_t25046937::get_offset_of_m_box_3(),
	GUISkin_t25046937::get_offset_of_m_button_4(),
	GUISkin_t25046937::get_offset_of_m_toggle_5(),
	GUISkin_t25046937::get_offset_of_m_label_6(),
	GUISkin_t25046937::get_offset_of_m_textField_7(),
	GUISkin_t25046937::get_offset_of_m_textArea_8(),
	GUISkin_t25046937::get_offset_of_m_window_9(),
	GUISkin_t25046937::get_offset_of_m_horizontalSlider_10(),
	GUISkin_t25046937::get_offset_of_m_horizontalSliderThumb_11(),
	GUISkin_t25046937::get_offset_of_m_verticalSlider_12(),
	GUISkin_t25046937::get_offset_of_m_verticalSliderThumb_13(),
	GUISkin_t25046937::get_offset_of_m_horizontalScrollbar_14(),
	GUISkin_t25046937::get_offset_of_m_horizontalScrollbarThumb_15(),
	GUISkin_t25046937::get_offset_of_m_horizontalScrollbarLeftButton_16(),
	GUISkin_t25046937::get_offset_of_m_horizontalScrollbarRightButton_17(),
	GUISkin_t25046937::get_offset_of_m_verticalScrollbar_18(),
	GUISkin_t25046937::get_offset_of_m_verticalScrollbarThumb_19(),
	GUISkin_t25046937::get_offset_of_m_verticalScrollbarUpButton_20(),
	GUISkin_t25046937::get_offset_of_m_verticalScrollbarDownButton_21(),
	GUISkin_t25046937::get_offset_of_m_ScrollView_22(),
	GUISkin_t25046937::get_offset_of_m_CustomStyles_23(),
	GUISkin_t25046937::get_offset_of_m_Settings_24(),
	GUISkin_t25046937_StaticFields::get_offset_of_ms_Error_25(),
	GUISkin_t25046937::get_offset_of_m_Styles_26(),
	GUISkin_t25046937_StaticFields::get_offset_of_m_SkinChanged_27(),
	GUISkin_t25046937_StaticFields::get_offset_of_current_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1390 = { sizeof (SkinChangedDelegate_t410520829), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1391 = { sizeof (GUIStyleState_t1881122624), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1391[3] = 
{
	GUIStyleState_t1881122624::get_offset_of_m_Ptr_0(),
	GUIStyleState_t1881122624::get_offset_of_m_SourceStyle_1(),
	GUIStyleState_t1881122624::get_offset_of_m_Background_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1392 = { sizeof (ImagePosition_t2295787006)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1392[5] = 
{
	ImagePosition_t2295787006::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1393 = { sizeof (GUIStyle_t350904686), -1, sizeof(GUIStyle_t350904686_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1393[16] = 
{
	GUIStyle_t350904686::get_offset_of_m_Ptr_0(),
	GUIStyle_t350904686::get_offset_of_m_Normal_1(),
	GUIStyle_t350904686::get_offset_of_m_Hover_2(),
	GUIStyle_t350904686::get_offset_of_m_Active_3(),
	GUIStyle_t350904686::get_offset_of_m_Focused_4(),
	GUIStyle_t350904686::get_offset_of_m_OnNormal_5(),
	GUIStyle_t350904686::get_offset_of_m_OnHover_6(),
	GUIStyle_t350904686::get_offset_of_m_OnActive_7(),
	GUIStyle_t350904686::get_offset_of_m_OnFocused_8(),
	GUIStyle_t350904686::get_offset_of_m_Border_9(),
	GUIStyle_t350904686::get_offset_of_m_Padding_10(),
	GUIStyle_t350904686::get_offset_of_m_Margin_11(),
	GUIStyle_t350904686::get_offset_of_m_Overflow_12(),
	GUIStyle_t350904686::get_offset_of_m_FontInternal_13(),
	GUIStyle_t350904686_StaticFields::get_offset_of_showKeyboardFocus_14(),
	GUIStyle_t350904686_StaticFields::get_offset_of_s_None_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1394 = { sizeof (TextClipping_t3084615976)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1394[3] = 
{
	TextClipping_t3084615976::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1395 = { sizeof (GUITargetAttribute_t2670492919), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1395[1] = 
{
	GUITargetAttribute_t2670492919::get_offset_of_displayMask_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1396 = { sizeof (ExitGUIException_t3824539775), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1397 = { sizeof (GUIUtility_t49155958), -1, sizeof(GUIUtility_t49155958_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1397[8] = 
{
	GUIUtility_t49155958_StaticFields::get_offset_of_s_SkinMode_0(),
	GUIUtility_t49155958_StaticFields::get_offset_of_s_OriginalID_1(),
	GUIUtility_t49155958_StaticFields::get_offset_of_takeCapture_2(),
	GUIUtility_t49155958_StaticFields::get_offset_of_releaseCapture_3(),
	GUIUtility_t49155958_StaticFields::get_offset_of_processEvent_4(),
	GUIUtility_t49155958_StaticFields::get_offset_of_endContainerGUIFromException_5(),
	GUIUtility_t49155958_StaticFields::get_offset_of_U3CguiIsExitingU3Ek__BackingField_6(),
	GUIUtility_t49155958_StaticFields::get_offset_of_s_EditorScreenPointOffset_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1398 = { sizeof (ScrollViewState_t3487613754), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1399 = { sizeof (SliderState_t1221064395), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1399[3] = 
{
	SliderState_t1221064395::get_offset_of_dragStartPos_0(),
	SliderState_t1221064395::get_offset_of_dragStartValue_1(),
	SliderState_t1221064395::get_offset_of_isDragging_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
