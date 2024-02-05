﻿#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t056FB23C2911679EFD99E438847C226611A2247F;
struct Action_1_tA928F1D66218FC51B54636CA1E0ECC813F24ABAC;
struct Action_1_tAFC3339124756AC45D404621C0EE01CEF9577D1E;
struct Action_1_t66C5360772D5503D6DBDB6F6B03252BA94E530B6;
struct Action_1_tD8CB07CA58902BF665659519C88AFF6438B41EB7;
struct Action_1_t04BD4DE10D746830D051B0C2DB8C1DBD86FF4C65;
struct Action_1_t2518DEA327D7ACE4C30B14D8AFF5D4CFF5221B6F;
struct Action_1_tD1E5B7A23E779937F768A9E52A2947851964EB85;
struct Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87;
struct Comparison_1_t561AF27D83A3BA7A3BE3A30EE3F33F9F87A5274F;
struct Comparison_1_tDF19E1FD642A6D03EC22D6BC3C7899090B8EB768;
struct Comparison_1_tE7E96FD34C52F0992924E65405618B941FEA3229;
struct Comparison_1_tC652E94860093FBD669CD9F7858E5C6792867D13;
struct Comparison_1_t4BFA17A40F8610971784DBFB950ACECBC6873FE8;
struct Comparison_1_t9B7FBDDC31C2B4C836D05D7AB3126CC41FEA3F95;
struct Comparison_1_tE0404D6CFE3CE898FDF33EDE1C0B612D8053AD5B;
struct ConditionalWeakTable_2_tE473109D1EF9EA4E1AA06539AE5262421E166EFD;
struct ConditionalWeakTable_2_tA0A6618FEA1BDC4E0A5C70A205A73167784823D9;
struct ConditionalWeakTable_2_t4FA84C9C03B7929ACDC537F2AB91C3AA9D39B9E6;
struct ConditionalWeakTable_2_tD204B678FB5C57190177AACB4C57D5BDE9ED70E4;
struct DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB;
struct Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct IComparer_1_t59BC948C5D5D8AD2B6FED65728E9132C6841C837;
struct IComparer_1_t2C93707A70D9566178065899438F8FBA689BD86D;
struct IComparer_1_tBF2AB2E449652ED7CFC6F8B3BC2704094E44466B;
struct IComparer_1_t314FEB6FB11D322BA083FCF58FB97514B3ADA2D8;
struct IComparer_1_tFAD3AE9FE3CE1FB3CBB781C55DC57C986D71521E;
struct IComparer_1_t0860915FFC3292D231DDFCAB8C0C97D98F2A1990;
struct IComparer_1_t5F5F74D8A6A81A5419C8BC0B5DE122391A31B11D;
struct IComparer_1_tF7C33195837732194D82B16D4DF9CAE47B537071;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerable_1_tBA9822E764C7F9AD80E155F6777048133C78505B;
struct IEnumerable_1_tD6718B1F90326CF7D09D69B8B1A100389DA9E33A;
struct IEnumerable_1_t39EAF452E3CF151EE08047EAB444290AFE05EC3D;
struct IEnumerable_1_tB1F7734CA3161D2129C41BEB5A236092DA45BFCE;
struct IEnumerable_1_t7D8F440DD5CC257EF1FE6775A0083BC83A5CF3A5;
struct IEnumerable_1_t08EB11C1DE03E23323CCDE04454D4C4A7FE8B876;
struct IEnumerable_1_t79775EFE60AA7D93DB0348D80A17E5CB5AAD4F69;
struct IEnumerable_1_t4BDEFF3D9F7462EFC9C0A0A11770E8DF5A1969C3;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_t79B912CBA712D5F76599837CD1604BEED0829411;
struct IEnumerator_1_tB22FCD08D591B657979BC015772EF132DF8E4A74;
struct IEnumerator_1_t000A232CAF2DD4044B9AFBD8982ECD3FB93809DC;
struct IEnumerator_1_tE972D340F536B04FCEE79D5799CA3F036A83451E;
struct IEnumerator_1_t90BCA6A7B2801D6A60BF1AFFCCA677FFF22E4CDA;
struct IEnumerator_1_t2377C9795E783537986D4DF143A60101983C004E;
struct IEnumerator_1_t263960A184041232517E683304777E3C59B8D290;
struct IEnumerator_1_tFE2F01A55BB1E962846F6AECC6B355B1E456D896;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4;
struct List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4;
struct List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F;
struct List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF;
struct List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A;
struct List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485;
struct List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1;
struct List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565;
struct List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F;
struct LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17;
struct LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B;
struct LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC;
struct LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A;
struct LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2;
struct LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114;
struct LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47;
struct LowLevelListWithIList_1_t424B84BB083921C00880052D4B49074AF66B72FC;
struct LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9;
struct LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58;
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0;
struct ManagedObjectStore_1_t3396C8673A0AA58902F2D4CF4AB1DE5FF82EAFA2;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD;
struct Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60;
struct Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C;
struct Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1;
struct Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A;
struct Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77;
struct Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7;
struct Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D;
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E;
struct EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6;
struct EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52;
struct PerCoreLockedStacksU5BU5D_t66F38702B1BDB999EE73628348DDFE580E352C9D;
struct PerCoreLockedStacksU5BU5D_t4BBE2725C0221B3E883AFC60A3A21970D7CB67B1;
struct PerCoreLockedStacksU5BU5D_tCAB737265F2B693EDA232C9438A4E4DF884A0166;
struct PerCoreLockedStacksU5BU5D_t9CDDE75124B27D018B8CD21AC5D6E007D0686752;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680;
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct ObjectU5BU5DU5BU5D_t6491927494F825352C40DCE9D447C97B17297969;
struct __Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577;
struct AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F;
struct SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299;
struct SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A;
struct UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811;
struct UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235;
struct ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290;
struct EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Entry_t475ED76E31923970E7F7A6522E570E7577C487B9;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6;
struct EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680;
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct __Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577;
struct AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F;
struct SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299;
struct SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A;
struct UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811;
struct UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235;
struct ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290;
struct EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07  : public RuntimeObject
{
};
struct ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B  : public RuntimeObject
{
};
struct ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01  : public RuntimeObject
{
};
struct ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774  : public RuntimeObject
{
};
struct DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644  : public RuntimeObject
{
};
struct DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5  : public RuntimeObject
{
};
struct Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB  : public RuntimeObject
{
	int32_t ____key;
	RuntimeObject* ____value;
	Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* ____next;
};
struct Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA : public RuntimeObject {};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};
struct List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0  : public RuntimeObject
{
	ObjectU5BU5DU5BU5D_t6491927494F825352C40DCE9D447C97B17297969* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4  : public RuntimeObject
{
	WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F  : public RuntimeObject
{
	AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF  : public RuntimeObject
{
	SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A  : public RuntimeObject
{
	SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485  : public RuntimeObject
{
	UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1  : public RuntimeObject
{
	UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565  : public RuntimeObject
{
	ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F  : public RuntimeObject
{
	EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17  : public RuntimeObject
{
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B  : public RuntimeObject
{
	CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC  : public RuntimeObject
{
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114  : public RuntimeObject
{
	EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* ____buckets;
	int32_t ____numEntries;
	int32_t ____version;
	RuntimeObject* ____comparer;
};
struct LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47  : public RuntimeObject
{
	EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* ____buckets;
	int32_t ____numEntries;
	int32_t ____version;
	RuntimeObject* ____comparer;
};
struct LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ManagedObjectStore_1_t3396C8673A0AA58902F2D4CF4AB1DE5FF82EAFA2  : public RuntimeObject
{
	int32_t ___m_Length;
	List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0* ___m_Chunks;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ___m_Free;
};
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25  : public RuntimeObject
{
	String_t* ___U3CNameU3Ek__BackingField;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Enumerator_tEDEAA5F8FFBCB1F2EE5A6E473ED9F5A86691DE05 
{
	LowLevelListWithIList_1_t424B84BB083921C00880052D4B49074AF66B72FC* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0;
struct LazyLoadReference_1_tD57A582D5A28F3AE34FBB810985EF171325FAF1B 
{
	int32_t ___m_InstanceID;
};
struct LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2  : public EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9
{
};
struct LowLevelListWithIList_1_t424B84BB083921C00880052D4B49074AF66B72FC  : public LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58
{
};
struct LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9  : public LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0
{
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t99785B1054684FDD1A65104B70B272C02AA00542  : public ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bucketArraySizes;
	PerCoreLockedStacksU5BU5D_t66F38702B1BDB999EE73628348DDFE580E352C9D* ____buckets;
	int32_t ____callbackCreated;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t8906D917899793F9523A1B1DFB3008CA600B7F00  : public ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bucketArraySizes;
	PerCoreLockedStacksU5BU5D_t4BBE2725C0221B3E883AFC60A3A21970D7CB67B1* ____buckets;
	int32_t ____callbackCreated;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t5B35E5C672C6B144AA2ACF24F6AB93FC7FDEAECC  : public ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bucketArraySizes;
	PerCoreLockedStacksU5BU5D_tCAB737265F2B693EDA232C9438A4E4DF884A0166* ____buckets;
	int32_t ____callbackCreated;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F  : public ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bucketArraySizes;
	PerCoreLockedStacksU5BU5D_t9CDDE75124B27D018B8CD21AC5D6E007D0686752* ____buckets;
	int32_t ____callbackCreated;
};
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888  : public EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 
{
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___m_DelagateCallback;
	RuntimeObject* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 
{
	String_t* ___name;
	int32_t ___insertionPointId;
};
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshaled_pinvoke
{
	char* ___name;
	int32_t ___insertionPointId;
};
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___insertionPointId;
};
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 
{
	String_t* ___slotName;
	int32_t ___assetId;
};
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshaled_pinvoke
{
	char* ___slotName;
	int32_t ___assetId;
};
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshaled_com
{
	Il2CppChar* ___slotName;
	int32_t ___assetId;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 
{
	String_t* ___alias;
	String_t* ___path;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshaled_pinvoke
{
	char* ___alias;
	char* ___path;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshaled_com
{
	Il2CppChar* ___alias;
	Il2CppChar* ___path;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset;
};
struct UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 
{
	int32_t ___parentId;
	List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* ___uxmlObjectAssets;
};
struct UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_marshaled_pinvoke
{
	int32_t ___parentId;
	List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* ___uxmlObjectAssets;
};
struct UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_marshaled_com
{
	int32_t ___parentId;
	List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* ___uxmlObjectAssets;
};
struct ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 
{
	int32_t ___index;
	String_t* ___name;
	float ___actualWidth;
	float ___width;
	bool ___visible;
};
struct ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_marshaled_pinvoke
{
	int32_t ___index;
	char* ___name;
	float ___actualWidth;
	float ___width;
	int32_t ___visible;
};
struct ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_marshaled_com
{
	int32_t ___index;
	Il2CppChar* ___name;
	float ___actualWidth;
	float ___width;
	int32_t ___visible;
};
struct EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___visualElement;
	int32_t ___type;
	Entry_t475ED76E31923970E7F7A6522E570E7577C487B9* ___rootEntry;
};
struct EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___visualElement;
	int32_t ___type;
	Entry_t475ED76E31923970E7F7A6522E570E7577C487B9* ___rootEntry;
};
struct EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___visualElement;
	int32_t ___type;
	Entry_t475ED76E31923970E7F7A6522E570E7577C487B9* ___rootEntry;
};
struct Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C 
{
	List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* ____list;
	int32_t ____index;
	int32_t ____version;
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ____current;
};
struct Enumerator_tDA4FB7C6BD6D95A2E703F84D53E433F5FDF339AB 
{
	List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* ____list;
	int32_t ____index;
	int32_t ____version;
	SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ____current;
};
struct Enumerator_t658CB92185890E7817C7C1B23A144223D1FF2FF1 
{
	List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* ____list;
	int32_t ____index;
	int32_t ____version;
	SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ____current;
};
struct Enumerator_tB0F816093F81D6672785A2ADF957047667737977 
{
	List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* ____list;
	int32_t ____index;
	int32_t ____version;
	UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ____current;
};
struct Enumerator_tEF4B3506D31FC96A1EB63A18FB3FD9A3B51104B2 
{
	List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* ____list;
	int32_t ____index;
	int32_t ____version;
	UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ____current;
};
struct Enumerator_tC4C15C26A301F0CB28B97DFCFE9198EF13B61D16 
{
	List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* ____list;
	int32_t ____index;
	int32_t ____version;
	ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ____current;
};
struct Enumerator_t195600F9A15F4A0274A325677D1110321C2987F1 
{
	List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* ____list;
	int32_t ____index;
	int32_t ____version;
	EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ____current;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D 
{
	String_t* ___m_Path;
	String_t* ___m_TypeFullName;
	LazyLoadReference_1_tD57A582D5A28F3AE34FBB810985EF171325FAF1B ___m_AssetReference;
	int32_t ___m_InstanceID;
	Type_t* ___m_CachedType;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_marshaled_pinvoke
{
	char* ___m_Path;
	char* ___m_TypeFullName;
	LazyLoadReference_1_tD57A582D5A28F3AE34FBB810985EF171325FAF1B ___m_AssetReference;
	int32_t ___m_InstanceID;
	Type_t* ___m_CachedType;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_marshaled_com
{
	Il2CppChar* ___m_Path;
	Il2CppChar* ___m_TypeFullName;
	LazyLoadReference_1_tD57A582D5A28F3AE34FBB810985EF171325FAF1B ___m_AssetReference;
	int32_t ___m_InstanceID;
	Type_t* ___m_CachedType;
};
struct Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD 
{
	List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* ____list;
	int32_t ____index;
	int32_t ____version;
	AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ____current;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Action_1_t056FB23C2911679EFD99E438847C226611A2247F  : public MulticastDelegate_t
{
};
struct Action_1_tA928F1D66218FC51B54636CA1E0ECC813F24ABAC  : public MulticastDelegate_t
{
};
struct Action_1_tAFC3339124756AC45D404621C0EE01CEF9577D1E  : public MulticastDelegate_t
{
};
struct Action_1_t66C5360772D5503D6DBDB6F6B03252BA94E530B6  : public MulticastDelegate_t
{
};
struct Action_1_tD8CB07CA58902BF665659519C88AFF6438B41EB7  : public MulticastDelegate_t
{
};
struct Action_1_t04BD4DE10D746830D051B0C2DB8C1DBD86FF4C65  : public MulticastDelegate_t
{
};
struct Action_1_t2518DEA327D7ACE4C30B14D8AFF5D4CFF5221B6F  : public MulticastDelegate_t
{
};
struct Action_1_tD1E5B7A23E779937F768A9E52A2947851964EB85  : public MulticastDelegate_t
{
};
struct Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87  : public MulticastDelegate_t
{
};
struct Comparison_1_t561AF27D83A3BA7A3BE3A30EE3F33F9F87A5274F  : public MulticastDelegate_t
{
};
struct Comparison_1_tDF19E1FD642A6D03EC22D6BC3C7899090B8EB768  : public MulticastDelegate_t
{
};
struct Comparison_1_tE7E96FD34C52F0992924E65405618B941FEA3229  : public MulticastDelegate_t
{
};
struct Comparison_1_tC652E94860093FBD669CD9F7858E5C6792867D13  : public MulticastDelegate_t
{
};
struct Comparison_1_t4BFA17A40F8610971784DBFB950ACECBC6873FE8  : public MulticastDelegate_t
{
};
struct Comparison_1_t9B7FBDDC31C2B4C836D05D7AB3126CC41FEA3F95  : public MulticastDelegate_t
{
};
struct Comparison_1_tE0404D6CFE3CE898FDF33EDE1C0B612D8053AD5B  : public MulticastDelegate_t
{
};
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12  : public MulticastDelegate_t
{
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD  : public MulticastDelegate_t
{
};
struct Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60  : public MulticastDelegate_t
{
};
struct Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C  : public MulticastDelegate_t
{
};
struct Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1  : public MulticastDelegate_t
{
};
struct Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A  : public MulticastDelegate_t
{
};
struct Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77  : public MulticastDelegate_t
{
};
struct Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7  : public MulticastDelegate_t
{
};
struct Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer;
};
struct List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0_StaticFields
{
	ObjectU5BU5DU5BU5D_t6491927494F825352C40DCE9D447C97B17297969* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields
{
	WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___s_emptyArray;
};
struct List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F_StaticFields
{
	AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* ___s_emptyArray;
};
struct List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF_StaticFields
{
	SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* ___s_emptyArray;
};
struct List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A_StaticFields
{
	SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* ___s_emptyArray;
};
struct List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485_StaticFields
{
	UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* ___s_emptyArray;
};
struct List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1_StaticFields
{
	UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* ___s_emptyArray;
};
struct List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565_StaticFields
{
	ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___s_emptyArray;
};
struct List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F_StaticFields
{
	EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* ___s_emptyArray;
};
struct LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t99785B1054684FDD1A65104B70B272C02AA00542_StaticFields
{
	bool ___s_trimBuffers;
	ConditionalWeakTable_2_tE473109D1EF9EA4E1AA06539AE5262421E166EFD* ___s_allTlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t99785B1054684FDD1A65104B70B272C02AA00542_ThreadStaticFields
{
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___t_tlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t8906D917899793F9523A1B1DFB3008CA600B7F00_StaticFields
{
	bool ___s_trimBuffers;
	ConditionalWeakTable_2_tA0A6618FEA1BDC4E0A5C70A205A73167784823D9* ___s_allTlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t8906D917899793F9523A1B1DFB3008CA600B7F00_ThreadStaticFields
{
	CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* ___t_tlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t5B35E5C672C6B144AA2ACF24F6AB93FC7FDEAECC_StaticFields
{
	bool ___s_trimBuffers;
	ConditionalWeakTable_2_t4FA84C9C03B7929ACDC537F2AB91C3AA9D39B9E6* ___s_allTlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t5B35E5C672C6B144AA2ACF24F6AB93FC7FDEAECC_ThreadStaticFields
{
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___t_tlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F_StaticFields
{
	bool ___s_trimBuffers;
	ConditionalWeakTable_2_tD204B678FB5C57190177AACB4C57D5BDE9ED70E4* ___s_allTlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F_ThreadStaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* ___t_tlsBuckets;
};
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields
{
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* ___Log;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_StaticFields
{
	RuntimeObject* ___comparer;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577  : public RuntimeArray
{
	ALIGN_FIELD (8) WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 m_Items[1];

	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateCallback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateState), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_WaitHandle), (void*)NULL);
		#endif
	}
	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateCallback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateState), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_WaitHandle), (void*)NULL);
		#endif
	}
};
struct AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F  : public RuntimeArray
{
	ALIGN_FIELD (8) AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D m_Items[1];

	inline AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Path), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_TypeFullName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_CachedType), (void*)NULL);
		#endif
	}
	inline AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Path), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_TypeFullName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_CachedType), (void*)NULL);
		#endif
	}
};
struct SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299  : public RuntimeArray
{
	ALIGN_FIELD (8) SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 m_Items[1];

	inline SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
	}
	inline SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
	}
};
struct SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A  : public RuntimeArray
{
	ALIGN_FIELD (8) SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 m_Items[1];

	inline SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___slotName), (void*)NULL);
	}
	inline SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___slotName), (void*)NULL);
	}
};
struct UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811  : public RuntimeArray
{
	ALIGN_FIELD (8) UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 m_Items[1];

	inline UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___alias), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___path), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___asset), (void*)NULL);
		#endif
	}
	inline UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___alias), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___path), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___asset), (void*)NULL);
		#endif
	}
};
struct UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235  : public RuntimeArray
{
	ALIGN_FIELD (8) UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 m_Items[1];

	inline UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uxmlObjectAssets), (void*)NULL);
	}
	inline UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uxmlObjectAssets), (void*)NULL);
	}
};
struct ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290  : public RuntimeArray
{
	ALIGN_FIELD (8) ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 m_Items[1];

	inline ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
	}
	inline ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
	}
};
struct EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40  : public RuntimeArray
{
	ALIGN_FIELD (8) EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 m_Items[1];

	inline EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___visualElement), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___rootEntry), (void*)NULL);
		#endif
	}
	inline EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___visualElement), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___rootEntry), (void*)NULL);
		#endif
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680  : public RuntimeArray
{
	ALIGN_FIELD (8) CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* m_Items[1];

	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E  : public RuntimeArray
{
	ALIGN_FIELD (8) Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* m_Items[1];

	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F  : public RuntimeArray
{
	ALIGN_FIELD (8) __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* m_Items[1];

	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* m_Items[1];

	inline Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* m_Items[1];

	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m0C19209F7F2E7D8F63F4AEDAB78FF7F76347ECFB_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 List_1_get_Item_mE33CCA6A6D338BD1F44C8E35CE75806952CBF0CC_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m47EF2DD78187A4AFDDBA8AFE5C2D83DE376C0A0A_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m45EC1E38A4A473EA779C21FBFEB2C0E39E4C7846_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m4AF1A89B7FCCDFD5755D0C21A65347642A37B152_gshared_inline (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m13CC4FA54580EFF2DDFDDB9E830D9A383A0E4DCC_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mAB2082B4D7C19F509755124B52775A83ADA45823_gshared (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_index, int32_t ___2_length, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m339654D7AB2DDBC1F1B1437D3CD84E7592EEDD28_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m48E7DF20C4C52830C219E189B9DAF4220941B7D1_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m0E03ED6DB864BF551838BF1B49786675D995A7E7_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m060BDC309579AD262C87F876AC2A1E81D316472A_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8D5A11CC70C8E6CD6EE4FD9D625B299AF1B8DCE7_gshared_inline (Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76818CA3690BB91AA7450B449616AE334EA0972C_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m16D4AB6453CA3F877793029F28B6762C5E384D33_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m0C6E5F5797F0292E98084D59E0ABAFFF268286FA_gshared_inline (Action_1_t056FB23C2911679EFD99E438847C226611A2247F* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m67AC7635AF0AF22787100E7C16277521B24BF922_gshared (Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C* __this, List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mD7FA52403DD62EA78B636E1A4E8119ABED32F37E_gshared (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m3AA6C81C13315A0F1CD886CA63438F3FC55EFD70_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m7476D799F5CC07697D447853DA4DAEB4D3741B84_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mA82B743941194D34E26FD74ABCA431B3E5B9C2FF_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m88E01FB6C608D58721AAECE3C58B2107CB926E3B_gshared (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m740F84AD8B0226D65AE841BEA5DA739C69A29FAE_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m4974E84199207C342ABD5C3DDB83FB22A7831AF8_gshared (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mF8B226978F672DF67F415832E3FCC44027498627_gshared (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m69F8E5EE6E587AE8775CAA9608C4F30F1AE69247_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D List_1_get_Item_mFC68AEE6E803D2FFE05CA9872BD902ADA33A4B21_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_m60EEE838EFE63396316019CC3A4E0D3508AE8C4D_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m46A705A92EE70D1B97A2F669EDE54618290B2B00_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mF788423029A2E3E89AC915FCF76B9321BF3C9297_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mB0403F69B220B80C094AC71A4DBB4E603934742D_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m80D396FB4A0833FF7C877922557D304908137639_gshared_inline (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mFB04D7957AB85C7AD2BF26C8E0BCBEE426CAEDCE_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_m059EAE183A2ECEB562F6CEDFC4B830AEA9782F4F_gshared (AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* ___0_array, int32_t ___1_index, int32_t ___2_length, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m33FFFDF53BC3014F1975FE34F2B9466B91C636EF_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, int32_t ___1_count, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m9DD103E1598EFCAF910A8BF9385B14A5C22CDA42_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m15A98C4CF200EAC0003DDD48D3A448D847C07FDA_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m8D17FFB5BE70626BBC74C472FD6C27E75C837F0A_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m29A171697C81FE6F7E5B1F9F461CD59EC0F89903_gshared_inline (Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m256E7D3B34191470F6FA198FD50F9EC632D9A246_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m5A6780D713EC0E51E47516D985CADB2906094866_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m8DCD9374C39DADB827BDF5FDD50D1296B6AB7337_gshared_inline (Action_1_tA928F1D66218FC51B54636CA1E0ECC813F24ABAC* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m021DD3B0DA557DF45CDA1AA2F890D36963725A0D_gshared (Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD* __this, List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_mADFFCE8EFDBF9D41F90A20990A0D2355B949C5D5_gshared (AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* ___0_array, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m52674EEECB29A19EFEE1D251173DC867DB5B529A_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mAC405A27152EE6104E01A331893EF868ADBB5873_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m32CD5BABD6841BA56DEDB7B1919DA2E3CBB80D4B_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_m46E0E0B88D0832B68ED3636765546C5111F1DE84_gshared (AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m6494BF9E97E1997CE06DD06AD84327E2857AC49A_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_m1FB3113B02EF22AD631D9C6E066BEA1CB5427036_gshared (AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mA7D52B6038D9E10E1B4980817DF125ADF1C5FC32_gshared (AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t561AF27D83A3BA7A3BE3A30EE3F33F9F87A5274F* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m68178D7CFDF27A7F8CBDBBCE9A0EF7A6BC96E777_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 List_1_get_Item_m1CFDF25B3D988CD99BE370EB790427124C55BE69_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m3BAEED16E3D3867BA9A2AFE9A25168A694F82156_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m2B6F3B6C65C06D33EF53A9B7F075457F72458E02_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m05D034E59C75BA1813B3FACE83128DD39278FD29_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m1C21B4464F562A8636AE72486D64D821D3C2B535_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCC948FF58491A91722B262CDC9726FB6F3F47A9F_gshared_inline (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m39E337D331347B1A515D4290843B1008F9640478_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m11AFF46578923C90EB0CB515EEF500326E17894F_gshared (SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* ___0_array, int32_t ___1_index, int32_t ___2_length, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_mDDB9D23704EEC2B1EDE7423783461B3D92AA535D_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, int32_t ___1_count, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m2606713F010F4302A5502800B9E72178488D3854_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mDD635A09B0D7A80844122F225F800861DD2FD6D1_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mCF0647E633A41A797C402803709C3F5A5B6C4F20_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m126CC0295668214BCB16D34FA65C7B9EC60B2D05_gshared_inline (Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m31FC402E4C27CE07EDA88CB8C015A23E2F216009_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m1113EA5656AC2CF607E110B52F217758EDBC289F_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m6BB7BA364E8A6E097C906E26D2475E7186ECAA1C_gshared_inline (Action_1_tAFC3339124756AC45D404621C0EE01CEF9577D1E* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m420FC20C439EA97FA9343819FD7F94BCEB4F996D_gshared (Enumerator_tDA4FB7C6BD6D95A2E703F84D53E433F5FDF339AB* __this, List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m70115C24F0565DA53BBE402FD83CC84DF85A5F98_gshared (SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* ___0_array, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m63BEB9A637416F188061C47BCE1515075255A7CF_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m477DD6678295F5211FF71D871F8F7180D2B4402F_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mB3971166E05AC209923A534E25760186E98BB09C_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m4344CC38D9B5CE097FCED50506E8188A011D81AB_gshared (SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m476F39FCD729DFD7C9E277D2A0211D40F826096F_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m2A40DA65E582BE97AFEA3DBDCBEE2B2673DDBC0A_gshared (SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m22C9F1A7E8D3B0B4483E4516DA4DA3C2C209EAC4_gshared (SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tDF19E1FD642A6D03EC22D6BC3C7899090B8EB768* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m527D65A12254C782002DE60FA17ECF96CDA7F194_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 List_1_get_Item_m1AD906407E42AFD1CBB009282EFE154706417A71_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_mD2DB48079FEE9C6094C803DE712C0082B1BF8450_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m51D6AC75D33A93588CCCBF4B1D6760835065F6D0_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m34C5010DD2C825899DC04BB0834DE555D2A426BC_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m134E0BC0FFC6CB673E13C7A5F489B1F31F5427E2_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m3AE842811428E83C33D0CC042E1255A5CA176474_gshared_inline (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m665E7DA4FE91D0B03E0752387F6DE198CCB8AEB4_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_mAEF332ABEE70AA5495D035A9C0E5EDF67D37B239_gshared (SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* ___0_array, int32_t ___1_index, int32_t ___2_length, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m6DEDFBCEBA93715E4CE2EC15A552D575C6E0978F_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, int32_t ___1_count, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mD02059A480E6797AA9904B135059261714E83736_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m5653F09E6CBCBF15B781C371F6D72981B89D73CC_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m302F85313BDFB4457F959E625749582EC6E27F9F_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m930CC0E436A5FFEE5CCAC8A666FCF61C92103AE1_gshared_inline (Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6F46F772ADCBF9B89A92E693CD7BAF06D59B211C_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m53BCCD148E00B0909529BCCA9AF13F28895B0DD8_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m8BE2DB442464C0D5DDA5ACA7E24A15BB85BBD9E9_gshared_inline (Action_1_t66C5360772D5503D6DBDB6F6B03252BA94E530B6* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m1D35CFF2D2180AE34DC9CC77A09F8B860208FAD0_gshared (Enumerator_t658CB92185890E7817C7C1B23A144223D1FF2FF1* __this, List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_mA207ED91BE3EF74973FE3196FDE80CCAE65B5474_gshared (SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* ___0_array, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mDFAE1F89C4DE3E2EAD6EDC0FF938220F0A86536B_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m06166141A483A7C3BA5C700114F02C6A96423651_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mE6DBD3C8190085A61D99B7C0F69B263AAAE65866_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_m143E3CD724FE113D138FE135DEF8638E70F2A198_gshared (SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mAB1E55F9318E4DBC0A0A413EFBE2DD79C78F52B1_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_mCBDD32C099E08AA5CDEBBFB157ABFD7B0644BA72_gshared (SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m110C40E0EE62056BE0C5B538C463703CB0BCFE92_gshared (SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tE7E96FD34C52F0992924E65405618B941FEA3229* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m7364E6924991C4C2D058E17497F3629E5EA485EE_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 List_1_get_Item_mC49E1B066BBB6258311FE9B926DCE894C0BF186E_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_m19B0739A5C042D575F76B39BDF85F39F3A115561_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m4A3FFE4BA49FD9B07B1CA64EF56FA82C4AE9F5BB_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mBE6CDEB20A3F167929EAE434CACE11FFDD2A780A_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mC7F3FAE932ED216AEC9C291B4A9D0863F528D4D0_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m72526F8101C7F826102E2B1B4CC10524470614E3_gshared_inline (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m45E836C76510868E9BBA24BC6B48C92C504663FB_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_mC4DD0B5C2B02DB5234B96E3B8C38B950ED13B4F1_gshared (UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* ___0_array, int32_t ___1_index, int32_t ___2_length, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m667B021A9DD3DDCF680DF079F38070A9619B62F3_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, int32_t ___1_count, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mE8C51210D5BAC8CF94461B57C1A93DD88883F215_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m230BE741FC798D78A10E2154B9CC64A91053331E_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m4818500D894184E9F21866AEA0131CD1CF3F5382_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6B9247DE12D2F0AE888AE93CCD8E7E8D7B57FC0E_gshared_inline (Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB71EBA9D58F0038DFD77704F6B82A0F065D8E0CB_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m738D70586FEB60B234356E2B47E49542D8DCA170_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m820968B3E64305B489B7AE4A8860C06CB6EF05AA_gshared_inline (Action_1_tD8CB07CA58902BF665659519C88AFF6438B41EB7* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m57DCB43A11D27902D335662FC3CBF16DB4C0F252_gshared (Enumerator_tB0F816093F81D6672785A2ADF957047667737977* __this, List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_m9774A57B3641960399519BF09FB823C60F369D40_gshared (UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* ___0_array, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m6EA9C42F313392649F04BA34D8997A112E043439_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m3ED3462E14C57262D6C6045B3E3B77C93DEE9766_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m119265EAEAA756A96CCCB6CC7AC1C738EDC346CC_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_mC47A8D3AD6998289287704D185EBE3B1A322E6B2_gshared (UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mDDFA7C8921D9D6473931F3E9346E6FD625BFD628_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_m674D68ED11D736275EDB3153E434AC365055CA83_gshared (UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m74F15A4F90E5C599D798196A16E4125DC5999C46_gshared (UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tC652E94860093FBD669CD9F7858E5C6792867D13* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m64F76535FA84514F76BE58F626F31E08F1DCB898_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 List_1_get_Item_mFA761411E90467F7E1CB5697914D3391CE93B0FE_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_m90F67367FA31311002A350CC99E44F6D59314361_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m87DFEF7D04BB9A3AB440AE269BB5E25B167887E5_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m78927281A184FD62DBDEA4AAAD602EF4D78F0DE5_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m5366CA1234ACEC11653A7D4236B03743AE1E1DC9_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m3F1204F623176FEDFDFCFCFB7A6FDABFB6400A51_gshared_inline (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m7C077D52F3B2FCEAEF2F09CC7F92FE020C7F8476_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_m0C997E644D150CFEFF254E073BE9E8B1E94AB4EF_gshared (UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* ___0_array, int32_t ___1_index, int32_t ___2_length, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_mC3D24E31D81E721792E7601A55CE6CD6D2AF1B75_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, int32_t ___1_count, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m076C6FF463E8866129F00F5C29BF1356ABAF8C6D_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m539BCA791C4E144FE971101F22B4C3EC7CE70FDB_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mF640AD392BEF928AC559D1024B05DAEA9AB5C9D0_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m945DB5E98852AC2FF13692CA56461DD7960AA8DD_gshared_inline (Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1B1BC2AB1CD4C48D927FFDCE03A2B965041F80ED_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mEF1EACDFED834B3ECBFC102D26EA0820DA2A8936_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m17C9B8E71EF529CC587460C4ACC40A76175CB3A8_gshared_inline (Action_1_t04BD4DE10D746830D051B0C2DB8C1DBD86FF4C65* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5EFD5DB3AD2FE8F13BB2EE7A4904DCD66E153FDA_gshared (Enumerator_tEF4B3506D31FC96A1EB63A18FB3FD9A3B51104B2* __this, List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_m672F3AB798B624D0D5566BE6E9569EC6321CB0B2_gshared (UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* ___0_array, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m11383082A5108FB233701726BE89F3EBFA5FF688_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m1615FCC5676CD0DAD66650F1F7CC91685A9D4327_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mDBF3E954B1BAA772ED9E43D7C617646D5F76F128_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_m3065AE44F44D4BA15C10260DA651BE03D9C283CD_gshared (UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mD319D99BA7AB3EE02FE5D08BCF1D848FAA20755E_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_mC77109191B007D94D010D39FBE343230EB6DAF18_gshared (UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m5AD7A1D801F958F599A4A4B0680AC7E86E0E8B62_gshared (UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t4BFA17A40F8610971784DBFB950ACECBC6873FE8* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mBE568D92B20DA843EC8D4F715D3B49D250D017DA_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 List_1_get_Item_m69BCBAB9625067308DDEAEED5945E4E3B46FA3E1_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m990D56DF011480F858DF755193A1BFF5E57882A0_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m4BA2391807C1D002F74A8CB67558698C6F351991_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mC767DD2E08464C2A9BFD3F2AE86A83F85BFCC9A2_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mE400A6352C1B01A9F706C2A4A3FCBA5AC451A12B_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mA97FD9B61331596E4585203CFD321A5A614A089D_gshared_inline (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mAFC44D9748F4101BF8F657632E33A3311C99D6BE_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_mD30773E33859C47A5A24FACC643C8D4012C6EB75_gshared (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, int32_t ___1_index, int32_t ___2_length, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m045047154A230EC8448430997A781AC54644A742_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, int32_t ___1_count, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m80D06B5A657DB69045A11F9FF589998F0D0473B5_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mC7006951BE0B3D3688A2D405315CB1B10BE98140_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m95133E04136EBCFB47DF8C6AC9E9BCC8AC90FEBE_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m10C29B9B5B4D26958247572D94A85AD8008FBD3A_gshared_inline (Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB26899986F1FB5766A6D13F9ED0BD83D6E7EF66C_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mB4E1E158DAD24B61C4613806D6F074201B0FA54C_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m0E4885731BC5FB5682B2F9AAFE2051895D1E43DE_gshared_inline (Action_1_t2518DEA327D7ACE4C30B14D8AFF5D4CFF5221B6F* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m34968A644217338251F2ACA768630EC8F3B5D9A5_gshared (Enumerator_tC4C15C26A301F0CB28B97DFCFE9198EF13B61D16* __this, List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_mF8787F8470EDB50EC2B2F6D5BAEE866038D93580_gshared (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC6E0C73D771DB3EBF9929C85A6104EAB450FF7C9_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m9F304F76856877707E79890515CE09FE5EA6CDDC_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mFA4F902852C0D8A3F42FD4F0ADE71D3A1E64E624_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m86A0BC1B8395AE11EB9C77295CF870F5B575DBED_gshared (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mFDC39A435F990EBE553E7396F571BCBA185A7C2D_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m36664F16D38B9991D799640827A2ED108697EBD4_gshared (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m796F7D769836CE1E115461E94C531F07909CFA59_gshared (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t9B7FBDDC31C2B4C836D05D7AB3126CC41FEA3F95* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mF5E8707F4A0DAF6A23C90B43F5ACDD8B949B72AA_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 List_1_get_Item_m698872A6418FB0F1C4E80BD9291E530AFF492508_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_mC809E0BAB548190BE0423B8867F1BB6152252F2E_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3EF9E2C31529E41EC0A4085B3FD661F82080947C_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m89B2769EC9FB326DF132AD0B0CAB8727605A1F16_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mAC252F08F7B3C678709F93C921A239CE37DC42AD_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m8C7E29B8E226EFCAF030759710276AA65A95DB3F_gshared_inline (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m550C0A0A9B23B6475D03E68EB3E14D72462915B6_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_mE6217FB46EA5E5C6E5BDA5CB0DFD52A58AC77BD8_gshared (EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* ___0_array, int32_t ___1_index, int32_t ___2_length, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_mCD22DC815E42BC04D07E4D9C10087DAE76A53339_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, int32_t ___1_count, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mE309B0C6A0E715EAF484A5A5168F1A849C8854AB_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m74CF090430293E2652C908A0557F371F950673CC_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m2DF1F4231AB69438BC43DB7040227AB2BEDC9157_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2409CBEB547D61AA8849DE34335DD624EB9EB893_gshared_inline (Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D* __this, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m75A131D8B96AE028D5BFFB6D7A63A8398B816AB9_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m684C68729B41154B840D77D3498DCBD79E074CBE_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5D172456C3A11C47A18CD230AECC78C42FD365A8_gshared_inline (Action_1_tD1E5B7A23E779937F768A9E52A2947851964EB85* __this, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5849519F50EF0EBF455C9250EA3BCD1C9734EF55_gshared (Enumerator_t195600F9A15F4A0274A325677D1110321C2987F1* __this, List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_m12F680B17EAFF45509992833C8AB3BC4B463B49E_gshared (EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* ___0_array, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mE3DC7FC48BA746C062B91F8879911C1FFDC34436_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mCF70414FB4CC578952103EEC5B4EECF8AC4C2970_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m322208834E59E74DAB440F9524CDB84E381B37FC_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_mF0E09D36777D1EFBF387CDFED4CFA49B3549D058_gshared (EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m62F044C7E303D8043580A6BE5685EB840343472A_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_m921237E4F8B9C9E9EFFE08F9C882881DA098E0DB_gshared (EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mF4C915FE947543B1AFDF7122716451A4187E78A4_gshared (EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tE0404D6CFE3CE898FDF33EDE1C0B612D8053AD5B* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultComparer_1__ctor_m1FB334BED8F2ED543F453D87C912BDA6611F368E_gshared (DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_mB6B362C12FBFC3BDA4766411FDC767993214AFA2_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_Clear_m7229E17DB8B64A5E367126DD076AA0577B2ED5A7_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* LowLevelDictionary_2_Find_m9E8AF9DE397CFCC424FF17C0125FACDB261E3AEB_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* LowLevelDictionary_2_UncheckedAdd_m4B36B6453ADD7712B323A995014660300EDFD5BB_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_m1523ABCDEBE31BA50D6801DB569FB6C6DA0EAB65_gshared (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_ExpandBuckets_m033D9FFFD113915A8BD824AC730C492F01631A9A_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mC9E5B6B4FA524A581AE17EB5DE22ADBDDD12F0E7_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mEA732C8D15FD4B514B237270C203F99613A78085_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE48807999815FCA9A84BDDE46C5E1EC8F29B91DF_gshared (Enumerator_tEDEAA5F8FFBCB1F2EE5A6E473ED9F5A86691DE05* __this, LowLevelListWithIList_1_t424B84BB083921C00880052D4B49074AF66B72FC* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775_gshared (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_EnsureCapacity_m15C5DAD66F3D12BFD786DBE4994ED0A2A9849A0B_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Capacity_mBC06E150C30A932FE95EF6D4A80217BC6E5257DC_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_InsertRange_m41D4839802C22AA8A00BB419B348DE91BCFF52A0_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_IndexOf_m1E3798AD4DBE5EFEFA2AA30F9AEB1DA864237839_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Insert_mBD4CC70F7D0997C1FDDA0699DB1417BEC62D49D4_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_RemoveAt_m14CF4D511C0CCCECF58915F0156E9C13A3046F13_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_gshared_inline (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F (int32_t ___0_argument, int32_t ___1_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
inline void List_1_AddEnumerable_m0C19209F7F2E7D8F63F4AEDAB78FF7F76347ECFB (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m0C19209F7F2E7D8F63F4AEDAB78FF7F76347ECFB_gshared)(__this, ___0_enumerable, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D (const RuntimeMethod* method) ;
inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 List_1_get_Item_mE33CCA6A6D338BD1F44C8E35CE75806952CBF0CC (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, const RuntimeMethod*))List_1_get_Item_mE33CCA6A6D338BD1F44C8E35CE75806952CBF0CC_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m47EF2DD78187A4AFDDBA8AFE5C2D83DE376C0A0A (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))List_1_set_Item_m47EF2DD78187A4AFDDBA8AFE5C2D83DE376C0A0A_gshared)(__this, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m45EC1E38A4A473EA779C21FBFEB2C0E39E4C7846 (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))List_1_AddWithResize_m45EC1E38A4A473EA779C21FBFEB2C0E39E4C7846_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016 (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m4AF1A89B7FCCDFD5755D0C21A65347642A37B152_inline (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))List_1_Add_m4AF1A89B7FCCDFD5755D0C21A65347642A37B152_gshared_inline)(__this, ___0_item, method);
}
inline void List_1_InsertRange_m13CC4FA54580EFF2DDFDDB9E830D9A383A0E4DCC (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m13CC4FA54580EFF2DDFDDB9E830D9A383A0E4DCC_gshared)(__this, ___0_index, ___1_collection, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline int32_t Array_BinarySearch_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mAB2082B4D7C19F509755124B52775A83ADA45823 (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_index, int32_t ___2_length, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, int32_t, int32_t, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mAB2082B4D7C19F509755124B52775A83ADA45823_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline int32_t List_1_BinarySearch_m339654D7AB2DDBC1F1B1437D3CD84E7592EEDD28 (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, int32_t, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, RuntimeObject*, const RuntimeMethod*))List_1_BinarySearch_m339654D7AB2DDBC1F1B1437D3CD84E7592EEDD28_gshared)(__this, ___0_index, ___1_count, ___2_item, ___3_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline int32_t List_1_IndexOf_m48E7DF20C4C52830C219E189B9DAF4220941B7D1 (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))List_1_IndexOf_m48E7DF20C4C52830C219E189B9DAF4220941B7D1_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m0E03ED6DB864BF551838BF1B49786675D995A7E7 (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, int32_t, const RuntimeMethod*))List_1_CopyTo_m0E03ED6DB864BF551838BF1B49786675D995A7E7_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m060BDC309579AD262C87F876AC2A1E81D316472A (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m060BDC309579AD262C87F876AC2A1E81D316472A_gshared)(__this, ___0_value, method);
}
inline bool Predicate_1_Invoke_m8D5A11CC70C8E6CD6EE4FD9D625B299AF1B8DCE7_inline (Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))Predicate_1_Invoke_m8D5A11CC70C8E6CD6EE4FD9D625B299AF1B8DCE7_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1__ctor_m76818CA3690BB91AA7450B449616AE334EA0972C (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, const RuntimeMethod*))List_1__ctor_m76818CA3690BB91AA7450B449616AE334EA0972C_gshared)(__this, method);
}
inline int32_t List_1_FindIndex_m16D4AB6453CA3F877793029F28B6762C5E384D33 (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, int32_t, Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD*, const RuntimeMethod*))List_1_FindIndex_m16D4AB6453CA3F877793029F28B6762C5E384D33_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7 (const RuntimeMethod* method) ;
inline void Action_1_Invoke_m0C6E5F5797F0292E98084D59E0ABAFFF268286FA_inline (Action_1_t056FB23C2911679EFD99E438847C226611A2247F* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t056FB23C2911679EFD99E438847C226611A2247F*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))Action_1_Invoke_m0C6E5F5797F0292E98084D59E0ABAFFF268286FA_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F (const RuntimeMethod* method) ;
inline void Enumerator__ctor_m67AC7635AF0AF22787100E7C16277521B24BF922 (Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C* __this, List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C*, List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, const RuntimeMethod*))Enumerator__ctor_m67AC7635AF0AF22787100E7C16277521B24BF922_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mD7FA52403DD62EA78B636E1A4E8119ABED32F37E (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mD7FA52403DD62EA78B636E1A4E8119ABED32F37E_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m3AA6C81C13315A0F1CD886CA63438F3FC55EFD70 (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*))List_1_Insert_m3AA6C81C13315A0F1CD886CA63438F3FC55EFD70_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m7476D799F5CC07697D447853DA4DAEB4D3741B84 (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m7476D799F5CC07697D447853DA4DAEB4D3741B84_gshared)(__this, ___0_index, method);
}
inline void List_1_Reverse_mA82B743941194D34E26FD74ABCA431B3E5B9C2FF (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mA82B743941194D34E26FD74ABCA431B3E5B9C2FF_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m88E01FB6C608D58721AAECE3C58B2107CB926E3B (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m88E01FB6C608D58721AAECE3C58B2107CB926E3B_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m740F84AD8B0226D65AE841BEA5DA739C69A29FAE (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m740F84AD8B0226D65AE841BEA5DA739C69A29FAE_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m4974E84199207C342ABD5C3DDB83FB22A7831AF8 (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m4974E84199207C342ABD5C3DDB83FB22A7831AF8_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_mF8B226978F672DF67F415832E3FCC44027498627 (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, int32_t, int32_t, Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87*, const RuntimeMethod*))ArraySortHelper_1_Sort_mF8B226978F672DF67F415832E3FCC44027498627_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m69F8E5EE6E587AE8775CAA9608C4F30F1AE69247 (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m69F8E5EE6E587AE8775CAA9608C4F30F1AE69247_gshared)(__this, ___0_enumerable, method);
}
inline AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D List_1_get_Item_mFC68AEE6E803D2FFE05CA9872BD902ADA33A4B21 (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D (*) (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F*, int32_t, const RuntimeMethod*))List_1_get_Item_mFC68AEE6E803D2FFE05CA9872BD902ADA33A4B21_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_m60EEE838EFE63396316019CC3A4E0D3508AE8C4D (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_m60EEE838EFE63396316019CC3A4E0D3508AE8C4D_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m46A705A92EE70D1B97A2F669EDE54618290B2B00 (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F*, int32_t, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D, const RuntimeMethod*))List_1_set_Item_m46A705A92EE70D1B97A2F669EDE54618290B2B00_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_mF788423029A2E3E89AC915FCF76B9321BF3C9297 (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F*, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D, const RuntimeMethod*))List_1_AddWithResize_mF788423029A2E3E89AC915FCF76B9321BF3C9297_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_mB0403F69B220B80C094AC71A4DBB4E603934742D (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_mB0403F69B220B80C094AC71A4DBB4E603934742D_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m80D396FB4A0833FF7C877922557D304908137639_inline (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F*, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D, const RuntimeMethod*))List_1_Add_m80D396FB4A0833FF7C877922557D304908137639_gshared_inline)(__this, ___0_item, method);
}
inline void List_1_InsertRange_mFB04D7957AB85C7AD2BF26C8E0BCBEE426CAEDCE (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_mFB04D7957AB85C7AD2BF26C8E0BCBEE426CAEDCE_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t Array_BinarySearch_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_m059EAE183A2ECEB562F6CEDFC4B830AEA9782F4F (AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* ___0_array, int32_t ___1_index, int32_t ___2_length, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*, int32_t, int32_t, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_m059EAE183A2ECEB562F6CEDFC4B830AEA9782F4F_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline int32_t List_1_BinarySearch_m33FFFDF53BC3014F1975FE34F2B9466B91C636EF (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, int32_t ___1_count, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F*, int32_t, int32_t, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D, RuntimeObject*, const RuntimeMethod*))List_1_BinarySearch_m33FFFDF53BC3014F1975FE34F2B9466B91C636EF_gshared)(__this, ___0_index, ___1_count, ___2_item, ___3_comparer, method);
}
inline int32_t List_1_IndexOf_m9DD103E1598EFCAF910A8BF9385B14A5C22CDA42 (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F*, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D, const RuntimeMethod*))List_1_IndexOf_m9DD103E1598EFCAF910A8BF9385B14A5C22CDA42_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m15A98C4CF200EAC0003DDD48D3A448D847C07FDA (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F*, AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*, int32_t, const RuntimeMethod*))List_1_CopyTo_m15A98C4CF200EAC0003DDD48D3A448D847C07FDA_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m8D17FFB5BE70626BBC74C472FD6C27E75C837F0A (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m8D17FFB5BE70626BBC74C472FD6C27E75C837F0A_gshared)(__this, ___0_value, method);
}
inline bool Predicate_1_Invoke_m29A171697C81FE6F7E5B1F9F461CD59EC0F89903_inline (Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60*, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D, const RuntimeMethod*))Predicate_1_Invoke_m29A171697C81FE6F7E5B1F9F461CD59EC0F89903_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1__ctor_m256E7D3B34191470F6FA198FD50F9EC632D9A246 (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F*, const RuntimeMethod*))List_1__ctor_m256E7D3B34191470F6FA198FD50F9EC632D9A246_gshared)(__this, method);
}
inline int32_t List_1_FindIndex_m5A6780D713EC0E51E47516D985CADB2906094866 (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F*, int32_t, int32_t, Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60*, const RuntimeMethod*))List_1_FindIndex_m5A6780D713EC0E51E47516D985CADB2906094866_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
inline void Action_1_Invoke_m8DCD9374C39DADB827BDF5FDD50D1296B6AB7337_inline (Action_1_tA928F1D66218FC51B54636CA1E0ECC813F24ABAC* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA928F1D66218FC51B54636CA1E0ECC813F24ABAC*, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D, const RuntimeMethod*))Action_1_Invoke_m8DCD9374C39DADB827BDF5FDD50D1296B6AB7337_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_m021DD3B0DA557DF45CDA1AA2F890D36963725A0D (Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD* __this, List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD*, List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F*, const RuntimeMethod*))Enumerator__ctor_m021DD3B0DA557DF45CDA1AA2F890D36963725A0D_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_mADFFCE8EFDBF9D41F90A20990A0D2355B949C5D5 (AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* ___0_array, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_mADFFCE8EFDBF9D41F90A20990A0D2355B949C5D5_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m52674EEECB29A19EFEE1D251173DC867DB5B529A (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F*, int32_t, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D, const RuntimeMethod*))List_1_Insert_m52674EEECB29A19EFEE1D251173DC867DB5B529A_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_mAC405A27152EE6104E01A331893EF868ADBB5873 (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mAC405A27152EE6104E01A331893EF868ADBB5873_gshared)(__this, ___0_index, method);
}
inline void List_1_Reverse_m32CD5BABD6841BA56DEDB7B1919DA2E3CBB80D4B (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m32CD5BABD6841BA56DEDB7B1919DA2E3CBB80D4B_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_m46E0E0B88D0832B68ED3636765546C5111F1DE84 (AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_m46E0E0B88D0832B68ED3636765546C5111F1DE84_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m6494BF9E97E1997CE06DD06AD84327E2857AC49A (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m6494BF9E97E1997CE06DD06AD84327E2857AC49A_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_m1FB3113B02EF22AD631D9C6E066BEA1CB5427036 (AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_m1FB3113B02EF22AD631D9C6E066BEA1CB5427036_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_mA7D52B6038D9E10E1B4980817DF125ADF1C5FC32 (AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t561AF27D83A3BA7A3BE3A30EE3F33F9F87A5274F* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*, int32_t, int32_t, Comparison_1_t561AF27D83A3BA7A3BE3A30EE3F33F9F87A5274F*, const RuntimeMethod*))ArraySortHelper_1_Sort_mA7D52B6038D9E10E1B4980817DF125ADF1C5FC32_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m68178D7CFDF27A7F8CBDBBCE9A0EF7A6BC96E777 (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m68178D7CFDF27A7F8CBDBBCE9A0EF7A6BC96E777_gshared)(__this, ___0_enumerable, method);
}
inline SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 List_1_get_Item_m1CFDF25B3D988CD99BE370EB790427124C55BE69 (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 (*) (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF*, int32_t, const RuntimeMethod*))List_1_get_Item_m1CFDF25B3D988CD99BE370EB790427124C55BE69_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m3BAEED16E3D3867BA9A2AFE9A25168A694F82156 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m3BAEED16E3D3867BA9A2AFE9A25168A694F82156_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m2B6F3B6C65C06D33EF53A9B7F075457F72458E02 (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF*, int32_t, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8, const RuntimeMethod*))List_1_set_Item_m2B6F3B6C65C06D33EF53A9B7F075457F72458E02_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m05D034E59C75BA1813B3FACE83128DD39278FD29 (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF*, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8, const RuntimeMethod*))List_1_AddWithResize_m05D034E59C75BA1813B3FACE83128DD39278FD29_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_m1C21B4464F562A8636AE72486D64D821D3C2B535 (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_m1C21B4464F562A8636AE72486D64D821D3C2B535_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_mCC948FF58491A91722B262CDC9726FB6F3F47A9F_inline (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF*, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8, const RuntimeMethod*))List_1_Add_mCC948FF58491A91722B262CDC9726FB6F3F47A9F_gshared_inline)(__this, ___0_item, method);
}
inline void List_1_InsertRange_m39E337D331347B1A515D4290843B1008F9640478 (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m39E337D331347B1A515D4290843B1008F9640478_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t Array_BinarySearch_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m11AFF46578923C90EB0CB515EEF500326E17894F (SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* ___0_array, int32_t ___1_index, int32_t ___2_length, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*, int32_t, int32_t, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m11AFF46578923C90EB0CB515EEF500326E17894F_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline int32_t List_1_BinarySearch_mDDB9D23704EEC2B1EDE7423783461B3D92AA535D (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, int32_t ___1_count, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF*, int32_t, int32_t, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8, RuntimeObject*, const RuntimeMethod*))List_1_BinarySearch_mDDB9D23704EEC2B1EDE7423783461B3D92AA535D_gshared)(__this, ___0_index, ___1_count, ___2_item, ___3_comparer, method);
}
inline int32_t List_1_IndexOf_m2606713F010F4302A5502800B9E72178488D3854 (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF*, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8, const RuntimeMethod*))List_1_IndexOf_m2606713F010F4302A5502800B9E72178488D3854_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_mDD635A09B0D7A80844122F225F800861DD2FD6D1 (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF*, SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*, int32_t, const RuntimeMethod*))List_1_CopyTo_mDD635A09B0D7A80844122F225F800861DD2FD6D1_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_mCF0647E633A41A797C402803709C3F5A5B6C4F20 (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mCF0647E633A41A797C402803709C3F5A5B6C4F20_gshared)(__this, ___0_value, method);
}
inline bool Predicate_1_Invoke_m126CC0295668214BCB16D34FA65C7B9EC60B2D05_inline (Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C*, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8, const RuntimeMethod*))Predicate_1_Invoke_m126CC0295668214BCB16D34FA65C7B9EC60B2D05_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1__ctor_m31FC402E4C27CE07EDA88CB8C015A23E2F216009 (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF*, const RuntimeMethod*))List_1__ctor_m31FC402E4C27CE07EDA88CB8C015A23E2F216009_gshared)(__this, method);
}
inline int32_t List_1_FindIndex_m1113EA5656AC2CF607E110B52F217758EDBC289F (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF*, int32_t, int32_t, Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C*, const RuntimeMethod*))List_1_FindIndex_m1113EA5656AC2CF607E110B52F217758EDBC289F_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
inline void Action_1_Invoke_m6BB7BA364E8A6E097C906E26D2475E7186ECAA1C_inline (Action_1_tAFC3339124756AC45D404621C0EE01CEF9577D1E* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAFC3339124756AC45D404621C0EE01CEF9577D1E*, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8, const RuntimeMethod*))Action_1_Invoke_m6BB7BA364E8A6E097C906E26D2475E7186ECAA1C_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_m420FC20C439EA97FA9343819FD7F94BCEB4F996D (Enumerator_tDA4FB7C6BD6D95A2E703F84D53E433F5FDF339AB* __this, List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDA4FB7C6BD6D95A2E703F84D53E433F5FDF339AB*, List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF*, const RuntimeMethod*))Enumerator__ctor_m420FC20C439EA97FA9343819FD7F94BCEB4F996D_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m70115C24F0565DA53BBE402FD83CC84DF85A5F98 (SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* ___0_array, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m70115C24F0565DA53BBE402FD83CC84DF85A5F98_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m63BEB9A637416F188061C47BCE1515075255A7CF (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF*, int32_t, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8, const RuntimeMethod*))List_1_Insert_m63BEB9A637416F188061C47BCE1515075255A7CF_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m477DD6678295F5211FF71D871F8F7180D2B4402F (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m477DD6678295F5211FF71D871F8F7180D2B4402F_gshared)(__this, ___0_index, method);
}
inline void List_1_Reverse_mB3971166E05AC209923A534E25760186E98BB09C (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mB3971166E05AC209923A534E25760186E98BB09C_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m4344CC38D9B5CE097FCED50506E8188A011D81AB (SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m4344CC38D9B5CE097FCED50506E8188A011D81AB_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m476F39FCD729DFD7C9E277D2A0211D40F826096F (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m476F39FCD729DFD7C9E277D2A0211D40F826096F_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m2A40DA65E582BE97AFEA3DBDCBEE2B2673DDBC0A (SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m2A40DA65E582BE97AFEA3DBDCBEE2B2673DDBC0A_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m22C9F1A7E8D3B0B4483E4516DA4DA3C2C209EAC4 (SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tDF19E1FD642A6D03EC22D6BC3C7899090B8EB768* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*, int32_t, int32_t, Comparison_1_tDF19E1FD642A6D03EC22D6BC3C7899090B8EB768*, const RuntimeMethod*))ArraySortHelper_1_Sort_m22C9F1A7E8D3B0B4483E4516DA4DA3C2C209EAC4_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m527D65A12254C782002DE60FA17ECF96CDA7F194 (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m527D65A12254C782002DE60FA17ECF96CDA7F194_gshared)(__this, ___0_enumerable, method);
}
inline SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 List_1_get_Item_m1AD906407E42AFD1CBB009282EFE154706417A71 (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 (*) (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A*, int32_t, const RuntimeMethod*))List_1_get_Item_m1AD906407E42AFD1CBB009282EFE154706417A71_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_mD2DB48079FEE9C6094C803DE712C0082B1BF8450 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_mD2DB48079FEE9C6094C803DE712C0082B1BF8450_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m51D6AC75D33A93588CCCBF4B1D6760835065F6D0 (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A*, int32_t, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76, const RuntimeMethod*))List_1_set_Item_m51D6AC75D33A93588CCCBF4B1D6760835065F6D0_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m34C5010DD2C825899DC04BB0834DE555D2A426BC (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A*, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76, const RuntimeMethod*))List_1_AddWithResize_m34C5010DD2C825899DC04BB0834DE555D2A426BC_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_m134E0BC0FFC6CB673E13C7A5F489B1F31F5427E2 (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_m134E0BC0FFC6CB673E13C7A5F489B1F31F5427E2_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m3AE842811428E83C33D0CC042E1255A5CA176474_inline (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A*, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76, const RuntimeMethod*))List_1_Add_m3AE842811428E83C33D0CC042E1255A5CA176474_gshared_inline)(__this, ___0_item, method);
}
inline void List_1_InsertRange_m665E7DA4FE91D0B03E0752387F6DE198CCB8AEB4 (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m665E7DA4FE91D0B03E0752387F6DE198CCB8AEB4_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t Array_BinarySearch_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_mAEF332ABEE70AA5495D035A9C0E5EDF67D37B239 (SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* ___0_array, int32_t ___1_index, int32_t ___2_length, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*, int32_t, int32_t, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_mAEF332ABEE70AA5495D035A9C0E5EDF67D37B239_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline int32_t List_1_BinarySearch_m6DEDFBCEBA93715E4CE2EC15A552D575C6E0978F (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, int32_t ___1_count, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A*, int32_t, int32_t, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76, RuntimeObject*, const RuntimeMethod*))List_1_BinarySearch_m6DEDFBCEBA93715E4CE2EC15A552D575C6E0978F_gshared)(__this, ___0_index, ___1_count, ___2_item, ___3_comparer, method);
}
inline int32_t List_1_IndexOf_mD02059A480E6797AA9904B135059261714E83736 (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A*, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76, const RuntimeMethod*))List_1_IndexOf_mD02059A480E6797AA9904B135059261714E83736_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m5653F09E6CBCBF15B781C371F6D72981B89D73CC (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A*, SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5653F09E6CBCBF15B781C371F6D72981B89D73CC_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m302F85313BDFB4457F959E625749582EC6E27F9F (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m302F85313BDFB4457F959E625749582EC6E27F9F_gshared)(__this, ___0_value, method);
}
inline bool Predicate_1_Invoke_m930CC0E436A5FFEE5CCAC8A666FCF61C92103AE1_inline (Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1*, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76, const RuntimeMethod*))Predicate_1_Invoke_m930CC0E436A5FFEE5CCAC8A666FCF61C92103AE1_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1__ctor_m6F46F772ADCBF9B89A92E693CD7BAF06D59B211C (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A*, const RuntimeMethod*))List_1__ctor_m6F46F772ADCBF9B89A92E693CD7BAF06D59B211C_gshared)(__this, method);
}
inline int32_t List_1_FindIndex_m53BCCD148E00B0909529BCCA9AF13F28895B0DD8 (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A*, int32_t, int32_t, Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1*, const RuntimeMethod*))List_1_FindIndex_m53BCCD148E00B0909529BCCA9AF13F28895B0DD8_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
inline void Action_1_Invoke_m8BE2DB442464C0D5DDA5ACA7E24A15BB85BBD9E9_inline (Action_1_t66C5360772D5503D6DBDB6F6B03252BA94E530B6* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t66C5360772D5503D6DBDB6F6B03252BA94E530B6*, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76, const RuntimeMethod*))Action_1_Invoke_m8BE2DB442464C0D5DDA5ACA7E24A15BB85BBD9E9_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_m1D35CFF2D2180AE34DC9CC77A09F8B860208FAD0 (Enumerator_t658CB92185890E7817C7C1B23A144223D1FF2FF1* __this, List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t658CB92185890E7817C7C1B23A144223D1FF2FF1*, List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A*, const RuntimeMethod*))Enumerator__ctor_m1D35CFF2D2180AE34DC9CC77A09F8B860208FAD0_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_mA207ED91BE3EF74973FE3196FDE80CCAE65B5474 (SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* ___0_array, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_mA207ED91BE3EF74973FE3196FDE80CCAE65B5474_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_mDFAE1F89C4DE3E2EAD6EDC0FF938220F0A86536B (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A*, int32_t, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76, const RuntimeMethod*))List_1_Insert_mDFAE1F89C4DE3E2EAD6EDC0FF938220F0A86536B_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m06166141A483A7C3BA5C700114F02C6A96423651 (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m06166141A483A7C3BA5C700114F02C6A96423651_gshared)(__this, ___0_index, method);
}
inline void List_1_Reverse_mE6DBD3C8190085A61D99B7C0F69B263AAAE65866 (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mE6DBD3C8190085A61D99B7C0F69B263AAAE65866_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_m143E3CD724FE113D138FE135DEF8638E70F2A198 (SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_m143E3CD724FE113D138FE135DEF8638E70F2A198_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_mAB1E55F9318E4DBC0A0A413EFBE2DD79C78F52B1 (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_mAB1E55F9318E4DBC0A0A413EFBE2DD79C78F52B1_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_mCBDD32C099E08AA5CDEBBFB157ABFD7B0644BA72 (SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_mCBDD32C099E08AA5CDEBBFB157ABFD7B0644BA72_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m110C40E0EE62056BE0C5B538C463703CB0BCFE92 (SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tE7E96FD34C52F0992924E65405618B941FEA3229* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*, int32_t, int32_t, Comparison_1_tE7E96FD34C52F0992924E65405618B941FEA3229*, const RuntimeMethod*))ArraySortHelper_1_Sort_m110C40E0EE62056BE0C5B538C463703CB0BCFE92_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m7364E6924991C4C2D058E17497F3629E5EA485EE (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m7364E6924991C4C2D058E17497F3629E5EA485EE_gshared)(__this, ___0_enumerable, method);
}
inline UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 List_1_get_Item_mC49E1B066BBB6258311FE9B926DCE894C0BF186E (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 (*) (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485*, int32_t, const RuntimeMethod*))List_1_get_Item_mC49E1B066BBB6258311FE9B926DCE894C0BF186E_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_m19B0739A5C042D575F76B39BDF85F39F3A115561 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_m19B0739A5C042D575F76B39BDF85F39F3A115561_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m4A3FFE4BA49FD9B07B1CA64EF56FA82C4AE9F5BB (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485*, int32_t, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484, const RuntimeMethod*))List_1_set_Item_m4A3FFE4BA49FD9B07B1CA64EF56FA82C4AE9F5BB_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_mBE6CDEB20A3F167929EAE434CACE11FFDD2A780A (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485*, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484, const RuntimeMethod*))List_1_AddWithResize_mBE6CDEB20A3F167929EAE434CACE11FFDD2A780A_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_mC7F3FAE932ED216AEC9C291B4A9D0863F528D4D0 (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_mC7F3FAE932ED216AEC9C291B4A9D0863F528D4D0_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m72526F8101C7F826102E2B1B4CC10524470614E3_inline (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485*, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484, const RuntimeMethod*))List_1_Add_m72526F8101C7F826102E2B1B4CC10524470614E3_gshared_inline)(__this, ___0_item, method);
}
inline void List_1_InsertRange_m45E836C76510868E9BBA24BC6B48C92C504663FB (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m45E836C76510868E9BBA24BC6B48C92C504663FB_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t Array_BinarySearch_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_mC4DD0B5C2B02DB5234B96E3B8C38B950ED13B4F1 (UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* ___0_array, int32_t ___1_index, int32_t ___2_length, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*, int32_t, int32_t, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_mC4DD0B5C2B02DB5234B96E3B8C38B950ED13B4F1_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline int32_t List_1_BinarySearch_m667B021A9DD3DDCF680DF079F38070A9619B62F3 (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, int32_t ___1_count, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485*, int32_t, int32_t, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484, RuntimeObject*, const RuntimeMethod*))List_1_BinarySearch_m667B021A9DD3DDCF680DF079F38070A9619B62F3_gshared)(__this, ___0_index, ___1_count, ___2_item, ___3_comparer, method);
}
inline int32_t List_1_IndexOf_mE8C51210D5BAC8CF94461B57C1A93DD88883F215 (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485*, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484, const RuntimeMethod*))List_1_IndexOf_mE8C51210D5BAC8CF94461B57C1A93DD88883F215_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m230BE741FC798D78A10E2154B9CC64A91053331E (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485*, UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*, int32_t, const RuntimeMethod*))List_1_CopyTo_m230BE741FC798D78A10E2154B9CC64A91053331E_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m4818500D894184E9F21866AEA0131CD1CF3F5382 (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m4818500D894184E9F21866AEA0131CD1CF3F5382_gshared)(__this, ___0_value, method);
}
inline bool Predicate_1_Invoke_m6B9247DE12D2F0AE888AE93CCD8E7E8D7B57FC0E_inline (Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A*, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484, const RuntimeMethod*))Predicate_1_Invoke_m6B9247DE12D2F0AE888AE93CCD8E7E8D7B57FC0E_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1__ctor_mB71EBA9D58F0038DFD77704F6B82A0F065D8E0CB (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485*, const RuntimeMethod*))List_1__ctor_mB71EBA9D58F0038DFD77704F6B82A0F065D8E0CB_gshared)(__this, method);
}
inline int32_t List_1_FindIndex_m738D70586FEB60B234356E2B47E49542D8DCA170 (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485*, int32_t, int32_t, Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A*, const RuntimeMethod*))List_1_FindIndex_m738D70586FEB60B234356E2B47E49542D8DCA170_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
inline void Action_1_Invoke_m820968B3E64305B489B7AE4A8860C06CB6EF05AA_inline (Action_1_tD8CB07CA58902BF665659519C88AFF6438B41EB7* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD8CB07CA58902BF665659519C88AFF6438B41EB7*, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484, const RuntimeMethod*))Action_1_Invoke_m820968B3E64305B489B7AE4A8860C06CB6EF05AA_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_m57DCB43A11D27902D335662FC3CBF16DB4C0F252 (Enumerator_tB0F816093F81D6672785A2ADF957047667737977* __this, List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB0F816093F81D6672785A2ADF957047667737977*, List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485*, const RuntimeMethod*))Enumerator__ctor_m57DCB43A11D27902D335662FC3CBF16DB4C0F252_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_m9774A57B3641960399519BF09FB823C60F369D40 (UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* ___0_array, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_m9774A57B3641960399519BF09FB823C60F369D40_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m6EA9C42F313392649F04BA34D8997A112E043439 (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485*, int32_t, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484, const RuntimeMethod*))List_1_Insert_m6EA9C42F313392649F04BA34D8997A112E043439_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m3ED3462E14C57262D6C6045B3E3B77C93DEE9766 (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m3ED3462E14C57262D6C6045B3E3B77C93DEE9766_gshared)(__this, ___0_index, method);
}
inline void List_1_Reverse_m119265EAEAA756A96CCCB6CC7AC1C738EDC346CC (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m119265EAEAA756A96CCCB6CC7AC1C738EDC346CC_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_mC47A8D3AD6998289287704D185EBE3B1A322E6B2 (UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_mC47A8D3AD6998289287704D185EBE3B1A322E6B2_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_mDDFA7C8921D9D6473931F3E9346E6FD625BFD628 (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_mDDFA7C8921D9D6473931F3E9346E6FD625BFD628_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_m674D68ED11D736275EDB3153E434AC365055CA83 (UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_m674D68ED11D736275EDB3153E434AC365055CA83_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m74F15A4F90E5C599D798196A16E4125DC5999C46 (UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tC652E94860093FBD669CD9F7858E5C6792867D13* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*, int32_t, int32_t, Comparison_1_tC652E94860093FBD669CD9F7858E5C6792867D13*, const RuntimeMethod*))ArraySortHelper_1_Sort_m74F15A4F90E5C599D798196A16E4125DC5999C46_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m64F76535FA84514F76BE58F626F31E08F1DCB898 (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m64F76535FA84514F76BE58F626F31E08F1DCB898_gshared)(__this, ___0_enumerable, method);
}
inline UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 List_1_get_Item_mFA761411E90467F7E1CB5697914D3391CE93B0FE (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 (*) (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*, int32_t, const RuntimeMethod*))List_1_get_Item_mFA761411E90467F7E1CB5697914D3391CE93B0FE_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_m90F67367FA31311002A350CC99E44F6D59314361 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_m90F67367FA31311002A350CC99E44F6D59314361_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m87DFEF7D04BB9A3AB440AE269BB5E25B167887E5 (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*, int32_t, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02, const RuntimeMethod*))List_1_set_Item_m87DFEF7D04BB9A3AB440AE269BB5E25B167887E5_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m78927281A184FD62DBDEA4AAAD602EF4D78F0DE5 (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02, const RuntimeMethod*))List_1_AddWithResize_m78927281A184FD62DBDEA4AAAD602EF4D78F0DE5_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_m5366CA1234ACEC11653A7D4236B03743AE1E1DC9 (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_m5366CA1234ACEC11653A7D4236B03743AE1E1DC9_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m3F1204F623176FEDFDFCFCFB7A6FDABFB6400A51_inline (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02, const RuntimeMethod*))List_1_Add_m3F1204F623176FEDFDFCFCFB7A6FDABFB6400A51_gshared_inline)(__this, ___0_item, method);
}
inline void List_1_InsertRange_m7C077D52F3B2FCEAEF2F09CC7F92FE020C7F8476 (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m7C077D52F3B2FCEAEF2F09CC7F92FE020C7F8476_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t Array_BinarySearch_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_m0C997E644D150CFEFF254E073BE9E8B1E94AB4EF (UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* ___0_array, int32_t ___1_index, int32_t ___2_length, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235*, int32_t, int32_t, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_m0C997E644D150CFEFF254E073BE9E8B1E94AB4EF_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline int32_t List_1_BinarySearch_mC3D24E31D81E721792E7601A55CE6CD6D2AF1B75 (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, int32_t ___1_count, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*, int32_t, int32_t, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02, RuntimeObject*, const RuntimeMethod*))List_1_BinarySearch_mC3D24E31D81E721792E7601A55CE6CD6D2AF1B75_gshared)(__this, ___0_index, ___1_count, ___2_item, ___3_comparer, method);
}
inline int32_t List_1_IndexOf_m076C6FF463E8866129F00F5C29BF1356ABAF8C6D (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02, const RuntimeMethod*))List_1_IndexOf_m076C6FF463E8866129F00F5C29BF1356ABAF8C6D_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m539BCA791C4E144FE971101F22B4C3EC7CE70FDB (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*, UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235*, int32_t, const RuntimeMethod*))List_1_CopyTo_m539BCA791C4E144FE971101F22B4C3EC7CE70FDB_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_mF640AD392BEF928AC559D1024B05DAEA9AB5C9D0 (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mF640AD392BEF928AC559D1024B05DAEA9AB5C9D0_gshared)(__this, ___0_value, method);
}
inline bool Predicate_1_Invoke_m945DB5E98852AC2FF13692CA56461DD7960AA8DD_inline (Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77*, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02, const RuntimeMethod*))Predicate_1_Invoke_m945DB5E98852AC2FF13692CA56461DD7960AA8DD_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1__ctor_m1B1BC2AB1CD4C48D927FFDCE03A2B965041F80ED (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*, const RuntimeMethod*))List_1__ctor_m1B1BC2AB1CD4C48D927FFDCE03A2B965041F80ED_gshared)(__this, method);
}
inline int32_t List_1_FindIndex_mEF1EACDFED834B3ECBFC102D26EA0820DA2A8936 (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*, int32_t, int32_t, Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77*, const RuntimeMethod*))List_1_FindIndex_mEF1EACDFED834B3ECBFC102D26EA0820DA2A8936_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
inline void Action_1_Invoke_m17C9B8E71EF529CC587460C4ACC40A76175CB3A8_inline (Action_1_t04BD4DE10D746830D051B0C2DB8C1DBD86FF4C65* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t04BD4DE10D746830D051B0C2DB8C1DBD86FF4C65*, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02, const RuntimeMethod*))Action_1_Invoke_m17C9B8E71EF529CC587460C4ACC40A76175CB3A8_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_m5EFD5DB3AD2FE8F13BB2EE7A4904DCD66E153FDA (Enumerator_tEF4B3506D31FC96A1EB63A18FB3FD9A3B51104B2* __this, List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEF4B3506D31FC96A1EB63A18FB3FD9A3B51104B2*, List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*, const RuntimeMethod*))Enumerator__ctor_m5EFD5DB3AD2FE8F13BB2EE7A4904DCD66E153FDA_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_m672F3AB798B624D0D5566BE6E9569EC6321CB0B2 (UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* ___0_array, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235*, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_m672F3AB798B624D0D5566BE6E9569EC6321CB0B2_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m11383082A5108FB233701726BE89F3EBFA5FF688 (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*, int32_t, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02, const RuntimeMethod*))List_1_Insert_m11383082A5108FB233701726BE89F3EBFA5FF688_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m1615FCC5676CD0DAD66650F1F7CC91685A9D4327 (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m1615FCC5676CD0DAD66650F1F7CC91685A9D4327_gshared)(__this, ___0_index, method);
}
inline void List_1_Reverse_mDBF3E954B1BAA772ED9E43D7C617646D5F76F128 (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mDBF3E954B1BAA772ED9E43D7C617646D5F76F128_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_m3065AE44F44D4BA15C10260DA651BE03D9C283CD (UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_m3065AE44F44D4BA15C10260DA651BE03D9C283CD_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_mD319D99BA7AB3EE02FE5D08BCF1D848FAA20755E (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_mD319D99BA7AB3EE02FE5D08BCF1D848FAA20755E_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_mC77109191B007D94D010D39FBE343230EB6DAF18 (UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_mC77109191B007D94D010D39FBE343230EB6DAF18_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m5AD7A1D801F958F599A4A4B0680AC7E86E0E8B62 (UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t4BFA17A40F8610971784DBFB950ACECBC6873FE8* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235*, int32_t, int32_t, Comparison_1_t4BFA17A40F8610971784DBFB950ACECBC6873FE8*, const RuntimeMethod*))ArraySortHelper_1_Sort_m5AD7A1D801F958F599A4A4B0680AC7E86E0E8B62_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_mBE568D92B20DA843EC8D4F715D3B49D250D017DA (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_mBE568D92B20DA843EC8D4F715D3B49D250D017DA_gshared)(__this, ___0_enumerable, method);
}
inline ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 List_1_get_Item_m69BCBAB9625067308DDEAEED5945E4E3B46FA3E1 (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, int32_t, const RuntimeMethod*))List_1_get_Item_m69BCBAB9625067308DDEAEED5945E4E3B46FA3E1_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m990D56DF011480F858DF755193A1BFF5E57882A0 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m990D56DF011480F858DF755193A1BFF5E57882A0_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m4BA2391807C1D002F74A8CB67558698C6F351991 (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, int32_t, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, const RuntimeMethod*))List_1_set_Item_m4BA2391807C1D002F74A8CB67558698C6F351991_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_mC767DD2E08464C2A9BFD3F2AE86A83F85BFCC9A2 (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, const RuntimeMethod*))List_1_AddWithResize_mC767DD2E08464C2A9BFD3F2AE86A83F85BFCC9A2_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_mE400A6352C1B01A9F706C2A4A3FCBA5AC451A12B (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_mE400A6352C1B01A9F706C2A4A3FCBA5AC451A12B_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_mA97FD9B61331596E4585203CFD321A5A614A089D_inline (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, const RuntimeMethod*))List_1_Add_mA97FD9B61331596E4585203CFD321A5A614A089D_gshared_inline)(__this, ___0_item, method);
}
inline void List_1_InsertRange_mAFC44D9748F4101BF8F657632E33A3311C99D6BE (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_mAFC44D9748F4101BF8F657632E33A3311C99D6BE_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t Array_BinarySearch_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_mD30773E33859C47A5A24FACC643C8D4012C6EB75 (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, int32_t ___1_index, int32_t ___2_length, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*, int32_t, int32_t, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_mD30773E33859C47A5A24FACC643C8D4012C6EB75_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline int32_t List_1_BinarySearch_m045047154A230EC8448430997A781AC54644A742 (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, int32_t ___1_count, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, int32_t, int32_t, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, RuntimeObject*, const RuntimeMethod*))List_1_BinarySearch_m045047154A230EC8448430997A781AC54644A742_gshared)(__this, ___0_index, ___1_count, ___2_item, ___3_comparer, method);
}
inline int32_t List_1_IndexOf_m80D06B5A657DB69045A11F9FF589998F0D0473B5 (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, const RuntimeMethod*))List_1_IndexOf_m80D06B5A657DB69045A11F9FF589998F0D0473B5_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_mC7006951BE0B3D3688A2D405315CB1B10BE98140 (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*, int32_t, const RuntimeMethod*))List_1_CopyTo_mC7006951BE0B3D3688A2D405315CB1B10BE98140_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m95133E04136EBCFB47DF8C6AC9E9BCC8AC90FEBE (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m95133E04136EBCFB47DF8C6AC9E9BCC8AC90FEBE_gshared)(__this, ___0_value, method);
}
inline bool Predicate_1_Invoke_m10C29B9B5B4D26958247572D94A85AD8008FBD3A_inline (Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7*, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, const RuntimeMethod*))Predicate_1_Invoke_m10C29B9B5B4D26958247572D94A85AD8008FBD3A_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1__ctor_mB26899986F1FB5766A6D13F9ED0BD83D6E7EF66C (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, const RuntimeMethod*))List_1__ctor_mB26899986F1FB5766A6D13F9ED0BD83D6E7EF66C_gshared)(__this, method);
}
inline int32_t List_1_FindIndex_mB4E1E158DAD24B61C4613806D6F074201B0FA54C (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, int32_t, int32_t, Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7*, const RuntimeMethod*))List_1_FindIndex_mB4E1E158DAD24B61C4613806D6F074201B0FA54C_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
inline void Action_1_Invoke_m0E4885731BC5FB5682B2F9AAFE2051895D1E43DE_inline (Action_1_t2518DEA327D7ACE4C30B14D8AFF5D4CFF5221B6F* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2518DEA327D7ACE4C30B14D8AFF5D4CFF5221B6F*, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, const RuntimeMethod*))Action_1_Invoke_m0E4885731BC5FB5682B2F9AAFE2051895D1E43DE_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_m34968A644217338251F2ACA768630EC8F3B5D9A5 (Enumerator_tC4C15C26A301F0CB28B97DFCFE9198EF13B61D16* __this, List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC4C15C26A301F0CB28B97DFCFE9198EF13B61D16*, List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, const RuntimeMethod*))Enumerator__ctor_m34968A644217338251F2ACA768630EC8F3B5D9A5_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_mF8787F8470EDB50EC2B2F6D5BAEE866038D93580 (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_mF8787F8470EDB50EC2B2F6D5BAEE866038D93580_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_mC6E0C73D771DB3EBF9929C85A6104EAB450FF7C9 (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, int32_t, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, const RuntimeMethod*))List_1_Insert_mC6E0C73D771DB3EBF9929C85A6104EAB450FF7C9_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m9F304F76856877707E79890515CE09FE5EA6CDDC (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m9F304F76856877707E79890515CE09FE5EA6CDDC_gshared)(__this, ___0_index, method);
}
inline void List_1_Reverse_mFA4F902852C0D8A3F42FD4F0ADE71D3A1E64E624 (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mFA4F902852C0D8A3F42FD4F0ADE71D3A1E64E624_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m86A0BC1B8395AE11EB9C77295CF870F5B575DBED (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m86A0BC1B8395AE11EB9C77295CF870F5B575DBED_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_mFDC39A435F990EBE553E7396F571BCBA185A7C2D (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_mFDC39A435F990EBE553E7396F571BCBA185A7C2D_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m36664F16D38B9991D799640827A2ED108697EBD4 (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m36664F16D38B9991D799640827A2ED108697EBD4_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m796F7D769836CE1E115461E94C531F07909CFA59 (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t9B7FBDDC31C2B4C836D05D7AB3126CC41FEA3F95* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*, int32_t, int32_t, Comparison_1_t9B7FBDDC31C2B4C836D05D7AB3126CC41FEA3F95*, const RuntimeMethod*))ArraySortHelper_1_Sort_m796F7D769836CE1E115461E94C531F07909CFA59_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_mF5E8707F4A0DAF6A23C90B43F5ACDD8B949B72AA (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_mF5E8707F4A0DAF6A23C90B43F5ACDD8B949B72AA_gshared)(__this, ___0_enumerable, method);
}
inline EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 List_1_get_Item_m698872A6418FB0F1C4E80BD9291E530AFF492508 (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 (*) (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F*, int32_t, const RuntimeMethod*))List_1_get_Item_m698872A6418FB0F1C4E80BD9291E530AFF492508_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_mC809E0BAB548190BE0423B8867F1BB6152252F2E (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_mC809E0BAB548190BE0423B8867F1BB6152252F2E_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m3EF9E2C31529E41EC0A4085B3FD661F82080947C (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F*, int32_t, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76, const RuntimeMethod*))List_1_set_Item_m3EF9E2C31529E41EC0A4085B3FD661F82080947C_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m89B2769EC9FB326DF132AD0B0CAB8727605A1F16 (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F*, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76, const RuntimeMethod*))List_1_AddWithResize_m89B2769EC9FB326DF132AD0B0CAB8727605A1F16_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_mAC252F08F7B3C678709F93C921A239CE37DC42AD (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_mAC252F08F7B3C678709F93C921A239CE37DC42AD_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m8C7E29B8E226EFCAF030759710276AA65A95DB3F_inline (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F*, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76, const RuntimeMethod*))List_1_Add_m8C7E29B8E226EFCAF030759710276AA65A95DB3F_gshared_inline)(__this, ___0_item, method);
}
inline void List_1_InsertRange_m550C0A0A9B23B6475D03E68EB3E14D72462915B6 (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m550C0A0A9B23B6475D03E68EB3E14D72462915B6_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t Array_BinarySearch_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_mE6217FB46EA5E5C6E5BDA5CB0DFD52A58AC77BD8 (EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* ___0_array, int32_t ___1_index, int32_t ___2_length, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40*, int32_t, int32_t, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_mE6217FB46EA5E5C6E5BDA5CB0DFD52A58AC77BD8_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline int32_t List_1_BinarySearch_mCD22DC815E42BC04D07E4D9C10087DAE76A53339 (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, int32_t ___1_count, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F*, int32_t, int32_t, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76, RuntimeObject*, const RuntimeMethod*))List_1_BinarySearch_mCD22DC815E42BC04D07E4D9C10087DAE76A53339_gshared)(__this, ___0_index, ___1_count, ___2_item, ___3_comparer, method);
}
inline int32_t List_1_IndexOf_mE309B0C6A0E715EAF484A5A5168F1A849C8854AB (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F*, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76, const RuntimeMethod*))List_1_IndexOf_mE309B0C6A0E715EAF484A5A5168F1A849C8854AB_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m74CF090430293E2652C908A0557F371F950673CC (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F*, EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40*, int32_t, const RuntimeMethod*))List_1_CopyTo_m74CF090430293E2652C908A0557F371F950673CC_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m2DF1F4231AB69438BC43DB7040227AB2BEDC9157 (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m2DF1F4231AB69438BC43DB7040227AB2BEDC9157_gshared)(__this, ___0_value, method);
}
inline bool Predicate_1_Invoke_m2409CBEB547D61AA8849DE34335DD624EB9EB893_inline (Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D* __this, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D*, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76, const RuntimeMethod*))Predicate_1_Invoke_m2409CBEB547D61AA8849DE34335DD624EB9EB893_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1__ctor_m75A131D8B96AE028D5BFFB6D7A63A8398B816AB9 (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F*, const RuntimeMethod*))List_1__ctor_m75A131D8B96AE028D5BFFB6D7A63A8398B816AB9_gshared)(__this, method);
}
inline int32_t List_1_FindIndex_m684C68729B41154B840D77D3498DCBD79E074CBE (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F*, int32_t, int32_t, Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D*, const RuntimeMethod*))List_1_FindIndex_m684C68729B41154B840D77D3498DCBD79E074CBE_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
inline void Action_1_Invoke_m5D172456C3A11C47A18CD230AECC78C42FD365A8_inline (Action_1_tD1E5B7A23E779937F768A9E52A2947851964EB85* __this, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD1E5B7A23E779937F768A9E52A2947851964EB85*, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76, const RuntimeMethod*))Action_1_Invoke_m5D172456C3A11C47A18CD230AECC78C42FD365A8_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_m5849519F50EF0EBF455C9250EA3BCD1C9734EF55 (Enumerator_t195600F9A15F4A0274A325677D1110321C2987F1* __this, List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t195600F9A15F4A0274A325677D1110321C2987F1*, List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F*, const RuntimeMethod*))Enumerator__ctor_m5849519F50EF0EBF455C9250EA3BCD1C9734EF55_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_m12F680B17EAFF45509992833C8AB3BC4B463B49E (EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* ___0_array, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40*, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_m12F680B17EAFF45509992833C8AB3BC4B463B49E_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_mE3DC7FC48BA746C062B91F8879911C1FFDC34436 (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F*, int32_t, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76, const RuntimeMethod*))List_1_Insert_mE3DC7FC48BA746C062B91F8879911C1FFDC34436_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_mCF70414FB4CC578952103EEC5B4EECF8AC4C2970 (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mCF70414FB4CC578952103EEC5B4EECF8AC4C2970_gshared)(__this, ___0_index, method);
}
inline void List_1_Reverse_m322208834E59E74DAB440F9524CDB84E381B37FC (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m322208834E59E74DAB440F9524CDB84E381B37FC_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_mF0E09D36777D1EFBF387CDFED4CFA49B3549D058 (EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_mF0E09D36777D1EFBF387CDFED4CFA49B3549D058_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m62F044C7E303D8043580A6BE5685EB840343472A (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m62F044C7E303D8043580A6BE5685EB840343472A_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_m921237E4F8B9C9E9EFFE08F9C882881DA098E0DB (EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_m921237E4F8B9C9E9EFFE08F9C882881DA098E0DB_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_mF4C915FE947543B1AFDF7122716451A4187E78A4 (EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tE0404D6CFE3CE898FDF33EDE1C0B612D8053AD5B* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40*, int32_t, int32_t, Comparison_1_tE0404D6CFE3CE898FDF33EDE1C0B612D8053AD5B*, const RuntimeMethod*))ArraySortHelper_1_Sort_mF4C915FE947543B1AFDF7122716451A4187E78A4_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496 (int64_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void DefaultComparer_1__ctor_m1FB334BED8F2ED543F453D87C912BDA6611F368E (DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644*, const RuntimeMethod*))DefaultComparer_1__ctor_m1FB334BED8F2ED543F453D87C912BDA6611F368E_gshared)(__this, method);
}
inline void LowLevelDictionary_2__ctor_mB6B362C12FBFC3BDA4766411FDC767993214AFA2 (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114*, int32_t, RuntimeObject*, const RuntimeMethod*))LowLevelDictionary_2__ctor_mB6B362C12FBFC3BDA4766411FDC767993214AFA2_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void LowLevelDictionary_2_Clear_m7229E17DB8B64A5E367126DD076AA0577B2ED5A7 (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114*, int32_t, const RuntimeMethod*))LowLevelDictionary_2_Clear_m7229E17DB8B64A5E367126DD076AA0577B2ED5A7_gshared)(__this, ___0_capacity, method);
}
inline Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* LowLevelDictionary_2_Find_m9E8AF9DE397CFCC424FF17C0125FACDB261E3AEB (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* (*) (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114*, int32_t, const RuntimeMethod*))LowLevelDictionary_2_Find_m9E8AF9DE397CFCC424FF17C0125FACDB261E3AEB_gshared)(__this, ___0_key, method);
}
inline Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* LowLevelDictionary_2_UncheckedAdd_m4B36B6453ADD7712B323A995014660300EDFD5BB (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	return ((  Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* (*) (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114*, int32_t, RuntimeObject*, const RuntimeMethod*))LowLevelDictionary_2_UncheckedAdd_m4B36B6453ADD7712B323A995014660300EDFD5BB_gshared)(__this, ___0_key, ___1_value, method);
}
inline int32_t LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114*, int32_t, int32_t, const RuntimeMethod*))LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B_gshared)(__this, ___0_key, ___1_numBuckets, method);
}
inline void Entry__ctor_m1523ABCDEBE31BA50D6801DB569FB6C6DA0EAB65 (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* __this, const RuntimeMethod* method)
{
	((  void (*) (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB*, const RuntimeMethod*))Entry__ctor_m1523ABCDEBE31BA50D6801DB569FB6C6DA0EAB65_gshared)(__this, method);
}
inline void LowLevelDictionary_2_ExpandBuckets_m033D9FFFD113915A8BD824AC730C492F01631A9A (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, const RuntimeMethod* method)
{
	((  void (*) (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114*, const RuntimeMethod*))LowLevelDictionary_2_ExpandBuckets_m033D9FFFD113915A8BD824AC730C492F01631A9A_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void LowLevelList_1__ctor_mC9E5B6B4FA524A581AE17EB5DE22ADBDDD12F0E7 (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58*, const RuntimeMethod*))LowLevelList_1__ctor_mC9E5B6B4FA524A581AE17EB5DE22ADBDDD12F0E7_gshared)(__this, method);
}
inline void LowLevelList_1__ctor_mEA732C8D15FD4B514B237270C203F99613A78085 (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58*, int32_t, const RuntimeMethod*))LowLevelList_1__ctor_mEA732C8D15FD4B514B237270C203F99613A78085_gshared)(__this, ___0_capacity, method);
}
inline void Enumerator__ctor_mE48807999815FCA9A84BDDE46C5E1EC8F29B91DF (Enumerator_tEDEAA5F8FFBCB1F2EE5A6E473ED9F5A86691DE05* __this, LowLevelListWithIList_1_t424B84BB083921C00880052D4B49074AF66B72FC* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEDEAA5F8FFBCB1F2EE5A6E473ED9F5A86691DE05*, LowLevelListWithIList_1_t424B84BB083921C00880052D4B49074AF66B72FC*, const RuntimeMethod*))Enumerator__ctor_mE48807999815FCA9A84BDDE46C5E1EC8F29B91DF_gshared)(__this, ___0_list, method);
}
inline void Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775 (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*, LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9*, const RuntimeMethod*))Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775_gshared)(__this, ___0_list, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
inline void LowLevelList_1_EnsureCapacity_m15C5DAD66F3D12BFD786DBE4994ED0A2A9849A0B (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58*, int32_t, const RuntimeMethod*))LowLevelList_1_EnsureCapacity_m15C5DAD66F3D12BFD786DBE4994ED0A2A9849A0B_gshared)(__this, ___0_min, method);
}
inline void LowLevelList_1_set_Capacity_mBC06E150C30A932FE95EF6D4A80217BC6E5257DC (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58*, int32_t, const RuntimeMethod*))LowLevelList_1_set_Capacity_mBC06E150C30A932FE95EF6D4A80217BC6E5257DC_gshared)(__this, ___0_value, method);
}
inline void LowLevelList_1_InsertRange_m41D4839802C22AA8A00BB419B348DE91BCFF52A0 (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58*, int32_t, RuntimeObject*, const RuntimeMethod*))LowLevelList_1_InsertRange_m41D4839802C22AA8A00BB419B348DE91BCFF52A0_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t LowLevelList_1_IndexOf_m1E3798AD4DBE5EFEFA2AA30F9AEB1DA864237839 (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58*, RuntimeObject*, const RuntimeMethod*))LowLevelList_1_IndexOf_m1E3798AD4DBE5EFEFA2AA30F9AEB1DA864237839_gshared)(__this, ___0_item, method);
}
inline int32_t Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void LowLevelList_1_Insert_mBD4CC70F7D0997C1FDDA0699DB1417BEC62D49D4 (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58*, int32_t, RuntimeObject*, const RuntimeMethod*))LowLevelList_1_Insert_mBD4CC70F7D0997C1FDDA0699DB1417BEC62D49D4_gshared)(__this, ___0_index, ___1_item, method);
}
inline void LowLevelList_1_RemoveAt_m14CF4D511C0CCCECF58915F0156E9C13A3046F13 (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58*, int32_t, const RuntimeMethod*))LowLevelList_1_RemoveAt_m14CF4D511C0CCCECF58915F0156E9C13A3046F13_gshared)(__this, ___0_index, method);
}
inline bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12*, RuntimeObject*, const RuntimeMethod*))Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1__ctor_mF300AC9F05AA0B133BF2F23F20A394CBFB501BE8 (List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
inline void List_1_Add_m7B202D3F7B38BBD95830C9CD053E59D577B179D5_inline (List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline void Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_gshared)(__this, method);
}
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_get_Item_m270031BC48D9525088C468580EC91A2888D98020 (List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
inline void Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, int32_t, const RuntimeMethod*))Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_gshared)(__this, ___0_item, method);
}
inline int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_gshared_inline)(__this, method);
}
inline int32_t Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_gshared)(__this, method);
}
inline int32_t List_1_get_Count_m05ECA54D59699D34BCBAE36C7B5694EBC84FEA86_inline (List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76818CA3690BB91AA7450B449616AE334EA0972C_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_0 = ((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m8708E31E39AC124FF9BFE9D74B61944006EBA29A_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_2 = ((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_4 = (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)(WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17517E2A0D5972758C0BE550758EC2FC7AD88D3F_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_6 = ((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_8 = (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)(WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_10 = __this->____items;
		InterfaceActionInvoker2< WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_12 = ((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m0C19209F7F2E7D8F63F4AEDAB78FF7F76347ECFB(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m63CE46FFC11A635D97810CC993BB987383816D91_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_0 = __this->____items;
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m060BDC309579AD262C87F876AC2A1E81D316472A_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_3 = __this->____items;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_6 = (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)(WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_8 = __this->____items;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_12 = ((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2F90A932E325FFA55047769F5E45E453D80C27D1_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_mB1720DF99F83C7A7472F1A25946744D42B48DFCB_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9B7FE4A7EBCCC2B672D99C7E6425070115CBD2E8_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_mD2CB873FD4B92A901140ED6AD5BCCD54DAEAE6F4_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 List_1_get_Item_mE33CCA6A6D338BD1F44C8E35CE75806952CBF0CC_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m47EF2DD78187A4AFDDBA8AFE5C2D83DE376C0A0A_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mBFBEA7C6C4D0AB8A0D8EF79E28EBF53FCB7FFEF1_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_1;
		L_1 = List_1_get_Item_mE33CCA6A6D338BD1F44C8E35CE75806952CBF0CC(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m4AAC3D191376883593AF8E9B6B334B92FB0D9C4D_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m47EF2DD78187A4AFDDBA8AFE5C2D83DE376C0A0A(__this, L_1, ((*(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m4AF1A89B7FCCDFD5755D0C21A65347642A37B152_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
{
	WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_6 = V_0;
		int32_t L_7 = V_1;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_8);
		return;
	}

IL_0034:
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_9 = ___0_item;
		List_1_AddWithResize_m45EC1E38A4A473EA779C21FBFEB2C0E39E4C7846(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m45EC1E38A4A473EA779C21FBFEB2C0E39E4C7846_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_3 = __this->____items;
		int32_t L_4 = V_0;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m1B366DE3275E543F3FA70031C94C7F336BD5CFFF_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m4AF1A89B7FCCDFD5755D0C21A65347642A37B152_inline(__this, ((*(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6 = __this->____size;
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m916A38AAB2F35C697A0CC9EE87A56C6B6D047302_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m13CC4FA54580EFF2DDFDDB9E830D9A383A0E4DCC(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m339654D7AB2DDBC1F1B1437D3CD84E7592EEDD28_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		int32_t L_7 = ___1_count;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_8 = ___2_item;
		RuntimeObject* L_9 = ___3_comparer;
		int32_t L_10;
		L_10 = Array_BinarySearch_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mAB2082B4D7C19F509755124B52775A83ADA45823(L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m43F8F5CAFC0480855D9B4EDDE72D3D8EF115CBC1_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_BinarySearch_m339654D7AB2DDBC1F1B1437D3CD84E7592EEDD28(__this, 0, L_0, L_1, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m4B9C6579651BAAB677CC2641CC344D7C9A15786E_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_1 = ___0_item;
		RuntimeObject* L_2 = ___1_comparer;
		int32_t L_3;
		L_3 = List_1_BinarySearch_m339654D7AB2DDBC1F1B1437D3CD84E7592EEDD28(__this, 0, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m1F57FE95E77F7897B0685BE4B2CAD395A384B6DB_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m1303A79CAE668AD1204F2D7DF8D2DFCF9DDC6D0D_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m48E7DF20C4C52830C219E189B9DAF4220941B7D1(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m451E2DF9CA2E0541B3E2970333284D8A5A327356_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, const RuntimeMethod* method) 
{
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_0 = ___0_array;
		List_1_CopyTo_m0E03ED6DB864BF551838BF1B49786675D995A7E7(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m0E03ED6DB864BF551838BF1B49786675D995A7E7_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_0 = __this->____items;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_0 = __this->____items;
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_2 = __this->____items;
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_3 = __this->____items;
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m060BDC309579AD262C87F876AC2A1E81D316472A(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 List_1_Find_m82024C7B5B0AEA92904625684AE6F7E8457F6496_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* L_1 = ___0_match;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_2 = __this->____items;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = Predicate_1_Invoke_m8D5A11CC70C8E6CD6EE4FD9D625B299AF1B8DCE7_inline(L_1, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_7 = __this->____items;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44));
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* List_1_FindAll_m96B6D976CB351557BDAD0A1060400F11D8F54A8C_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* ___0_match, const RuntimeMethod* method) 
{
	List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* L_1 = (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		List_1__ctor_m76818CA3690BB91AA7450B449616AE334EA0972C(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		V_0 = L_1;
		V_1 = 0;
		goto IL_003d;
	}

IL_0013:
	{
		Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* L_2 = ___0_match;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_3 = __this->____items;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		bool L_7;
		L_7 = Predicate_1_Invoke_m8D5A11CC70C8E6CD6EE4FD9D625B299AF1B8DCE7_inline(L_2, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* L_8 = V_0;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_9 = __this->____items;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		List_1_Add_m4AF1A89B7FCCDFD5755D0C21A65347642A37B152_inline(L_8, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0039:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003d:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m58AD2DD1017DCC51DC11303F6644437DFC9EAC55_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_m16D4AB6453CA3F877793029F28B6762C5E384D33(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m16D4AB6453CA3F877793029F28B6762C5E384D33_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* L_10 = ___2_match;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_11 = __this->____items;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = Predicate_1_Invoke_m8D5A11CC70C8E6CD6EE4FD9D625B299AF1B8DCE7_inline(L_10, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_mD9B07FA3910B7DB7D5ECCC874F52C84EFF42A8A2_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, Action_1_t056FB23C2911679EFD99E438847C226611A2247F* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t056FB23C2911679EFD99E438847C226611A2247F* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t056FB23C2911679EFD99E438847C226611A2247F* L_4 = ___0_action;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m0C6E5F5797F0292E98084D59E0ABAFFF268286FA_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C List_1_GetEnumerator_mDAC48FEB52A5FC903525BC2573F962982C808938_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m67AC7635AF0AF22787100E7C16277521B24BF922((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8B0D48A21061F79C1042EC9FF62A0662C3DA57E9_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m67AC7635AF0AF22787100E7C16277521B24BF922((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m7FF9BA8186A2B5BB00640308FB254A09C44A455D_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m67AC7635AF0AF22787100E7C16277521B24BF922((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_t7ECA23D5C1F4F41D95EEA8488F11D3D913089B4C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m48E7DF20C4C52830C219E189B9DAF4220941B7D1_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
{
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_0 = __this->____items;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mD7FA52403DD62EA78B636E1A4E8119ABED32F37E(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m3AA6C81C13315A0F1CD886CA63438F3FC55EFD70_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_3 = __this->____items;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_15 = ___1_item;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m13CC4FA54580EFF2DDFDDB9E830D9A383A0E4DCC_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_20 = __this->____items;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_45;
				L_45 = InterfaceFuncInvoker0< WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_44);
				List_1_Insert_m3AA6C81C13315A0F1CD886CA63438F3FC55EFD70(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m0C19209F7F2E7D8F63F4AEDAB78FF7F76347ECFB(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mC74ED88927A060D6631231DB26A042412C32D85B_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m48E7DF20C4C52830C219E189B9DAF4220941B7D1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m7476D799F5CC07697D447853DA4DAEB4D3741B84(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m005637F944C32E3C8F63E3D10D1267C2746F11D4_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* L_4 = ___0_match;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m8D5A11CC70C8E6CD6EE4FD9D625B299AF1B8DCE7_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* L_16 = ___0_match;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m8D5A11CC70C8E6CD6EE4FD9D625B299AF1B8DCE7_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m7476D799F5CC07697D447853DA4DAEB4D3741B84_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44));
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_13 = V_0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m2901392D7A738F8CF88B0BA8F672545272728AAE_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mC5E17A02816494CB629ABC67C63BF7C11660EEE2_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		List_1_Reverse_mA82B743941194D34E26FD74ABCA431B3E5B9C2FF(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mA82B743941194D34E26FD74ABCA431B3E5B9C2FF_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m88E01FB6C608D58721AAECE3C58B2107CB926E3B(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mC4B638183147421A5D6E89A54181320892D2BEBA_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		List_1_Sort_m740F84AD8B0226D65AE841BEA5DA739C69A29FAE(__this, 0, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mDED6F07C6D7F8E15DD7BE41B1F142B361F45E41F_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m740F84AD8B0226D65AE841BEA5DA739C69A29FAE(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m740F84AD8B0226D65AE841BEA5DA739C69A29FAE_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m4974E84199207C342ABD5C3DDB83FB22A7831AF8(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m9C2F84308D7884A5E74414FA29C52E3922BE50D8_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t4349A0C0F6E57844038D08909A07D093BF8BBF87* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
		ArraySortHelper_1_Sort_mF8B226978F672DF67F415832E3FCC44027498627(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* List_1_ToArray_m984AB52176DCF42799585854230BD2EF36BF8312_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, const RuntimeMethod* method) 
{
	WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_1 = ((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_3 = (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)(WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_4 = __this->____items;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m0C19209F7F2E7D8F63F4AEDAB78FF7F76347ECFB_gshared (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_6;
				L_6 = InterfaceFuncInvoker0< WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_8 = __this->____items;
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_mF38503ED9938B2CECF0B618845E9E32167654016(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_14 = V_1;
				(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m6D6789A3D7BD60EC295E929536719E1D5FB94E91_gshared (const RuntimeMethod* method) 
{
	{
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_0 = (WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)(WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m256E7D3B34191470F6FA198FD50F9EC632D9A246_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_0 = ((List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m94707E5BA02F650B395F6F6C3CBF09812D28BFF3_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_2 = ((List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_4 = (AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*)(AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m207871B4CA1746F67DF8BE654EBAAD9D7FF64072_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_6 = ((List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_8 = (AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*)(AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_10 = __this->____items;
		InterfaceActionInvoker2< AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_12 = ((List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m69F8E5EE6E587AE8775CAA9608C4F30F1AE69247(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m3549FEAC857BC3EF475C227C68FAB970F7BC1E31_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, const RuntimeMethod* method) 
{
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_0 = __this->____items;
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m8D17FFB5BE70626BBC74C472FD6C27E75C837F0A_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_3 = __this->____items;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_6 = (AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*)(AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_8 = __this->____items;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_12 = ((List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m65E2116A4D35074B41A677788CFA127B52E22219_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_m9CAFFED5DC4CA34E88340F5D4E77F4C9B993C867_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mAE4228A500982F7C0CAFD89326258FDECA1618E5_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m79C943577F3F68271551A862620919A27D0CB841_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D List_1_get_Item_mFC68AEE6E803D2FFE05CA9872BD902ADA33A4B21_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m46A705A92EE70D1B97A2F669EDE54618290B2B00_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mAEE5DEFE57FAEE6BE5AFCE6B06DD40C980F5665F_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_1;
		L_1 = List_1_get_Item_mFC68AEE6E803D2FFE05CA9872BD902ADA33A4B21(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m58D8D96AB6070BB0280DE5E75CBAB659CC27096F_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_m60EEE838EFE63396316019CC3A4E0D3508AE8C4D(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m46A705A92EE70D1B97A2F669EDE54618290B2B00(__this, L_1, ((*(AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D*)((AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D*)(AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m80D396FB4A0833FF7C877922557D304908137639_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_item, const RuntimeMethod* method) 
{
	AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_6 = V_0;
		int32_t L_7 = V_1;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D)L_8);
		return;
	}

IL_0034:
	{
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_9 = ___0_item;
		List_1_AddWithResize_mF788423029A2E3E89AC915FCF76B9321BF3C9297(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mF788423029A2E3E89AC915FCF76B9321BF3C9297_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mB0403F69B220B80C094AC71A4DBB4E603934742D(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_3 = __this->____items;
		int32_t L_4 = V_0;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mD3EA18DF778249A4E13B7F6731A9A2BFD66E2432_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_m60EEE838EFE63396316019CC3A4E0D3508AE8C4D(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m80D396FB4A0833FF7C877922557D304908137639_inline(__this, ((*(AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D*)((AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D*)(AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6 = __this->____size;
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mD5000515988F9072AE6D3CA605D69289E847EAF9_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_mFB04D7957AB85C7AD2BF26C8E0BCBEE426CAEDCE(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m33FFFDF53BC3014F1975FE34F2B9466B91C636EF_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, int32_t ___1_count, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		int32_t L_7 = ___1_count;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_8 = ___2_item;
		RuntimeObject* L_9 = ___3_comparer;
		int32_t L_10;
		L_10 = Array_BinarySearch_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_m059EAE183A2ECEB562F6CEDFC4B830AEA9782F4F(L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_mB3531641CBA02F3FD2521A73DF84FBC700DF61AB_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_BinarySearch_m33FFFDF53BC3014F1975FE34F2B9466B91C636EF(__this, 0, L_0, L_1, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_mB39C8FE344AC8F410EAD679F0BE680B852510ACF_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_item, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_1 = ___0_item;
		RuntimeObject* L_2 = ___1_comparer;
		int32_t L_3;
		L_3 = List_1_BinarySearch_m33FFFDF53BC3014F1975FE34F2B9466B91C636EF(__this, 0, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m11FEB2586C6E2D7F344A49265F2AFAF788B21CB5_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mCFE3510CDFCAEDB803BEA4B2EB63EA959837B535_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m9DD103E1598EFCAF910A8BF9385B14A5C22CDA42(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m8C8EF1AF56BA8314033DC12078BAFDCAC872C692_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* ___0_array, const RuntimeMethod* method) 
{
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_0 = ___0_array;
		List_1_CopyTo_m15A98C4CF200EAC0003DDD48D3A448D847C07FDA(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m15A98C4CF200EAC0003DDD48D3A448D847C07FDA_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_0 = __this->____items;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mB0403F69B220B80C094AC71A4DBB4E603934742D_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_0 = __this->____items;
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_2 = __this->____items;
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_3 = __this->____items;
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m8D17FFB5BE70626BBC74C472FD6C27E75C837F0A(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D List_1_Find_m8E3F51C765757F9EC818201E01CAD3B963040875_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60* L_1 = ___0_match;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_2 = __this->____items;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = Predicate_1_Invoke_m29A171697C81FE6F7E5B1F9F461CD59EC0F89903_inline(L_1, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_7 = __this->____items;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D));
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* List_1_FindAll_mCC69904F498473456DA54C8FA744824D5454B8A7_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60* ___0_match, const RuntimeMethod* method) 
{
	List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* L_1 = (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		List_1__ctor_m256E7D3B34191470F6FA198FD50F9EC632D9A246(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		V_0 = L_1;
		V_1 = 0;
		goto IL_003d;
	}

IL_0013:
	{
		Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60* L_2 = ___0_match;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_3 = __this->____items;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		bool L_7;
		L_7 = Predicate_1_Invoke_m29A171697C81FE6F7E5B1F9F461CD59EC0F89903_inline(L_2, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* L_8 = V_0;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_9 = __this->____items;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		List_1_Add_m80D396FB4A0833FF7C877922557D304908137639_inline(L_8, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0039:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003d:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mF265D1165AD13697E9D91406C44DE14113555CE1_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_m5A6780D713EC0E51E47516D985CADB2906094866(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m5A6780D713EC0E51E47516D985CADB2906094866_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60* L_10 = ___2_match;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_11 = __this->____items;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = Predicate_1_Invoke_m29A171697C81FE6F7E5B1F9F461CD59EC0F89903_inline(L_10, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_mE0A9DF5A105A190C0C550CE27D35AE1F4CA43365_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, Action_1_tA928F1D66218FC51B54636CA1E0ECC813F24ABAC* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_tA928F1D66218FC51B54636CA1E0ECC813F24ABAC* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_tA928F1D66218FC51B54636CA1E0ECC813F24ABAC* L_4 = ___0_action;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m8DCD9374C39DADB827BDF5FDD50D1296B6AB7337_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD List_1_GetEnumerator_m351D0BECB6C7C55F3E445904DC6F6F366EE6B253_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m021DD3B0DA557DF45CDA1AA2F890D36963725A0D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m0D61AE659B2DDC1E3506626A05FD9F6AE2E3B679_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m021DD3B0DA557DF45CDA1AA2F890D36963725A0D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m7CADB75BE010098614D19EE9467D0B8C999A0880_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m021DD3B0DA557DF45CDA1AA2F890D36963725A0D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m9DD103E1598EFCAF910A8BF9385B14A5C22CDA42_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_item, const RuntimeMethod* method) 
{
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_0 = __this->____items;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_mADFFCE8EFDBF9D41F90A20990A0D2355B949C5D5(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m52674EEECB29A19EFEE1D251173DC867DB5B529A_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_3 = __this->____items;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_mB0403F69B220B80C094AC71A4DBB4E603934742D(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_15 = ___1_item;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mFB04D7957AB85C7AD2BF26C8E0BCBEE426CAEDCE_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mB0403F69B220B80C094AC71A4DBB4E603934742D(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_20 = __this->____items;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_45;
				L_45 = InterfaceFuncInvoker0< AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_44);
				List_1_Insert_m52674EEECB29A19EFEE1D251173DC867DB5B529A(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m69F8E5EE6E587AE8775CAA9608C4F30F1AE69247(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m637F76A46C9D75BD3AACE238BE8CF30F0E852C7B_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m9DD103E1598EFCAF910A8BF9385B14A5C22CDA42(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_mAC405A27152EE6104E01A331893EF868ADBB5873(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m793974A360401B40FEB5BDEE1504AF0648052420_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60* L_4 = ___0_match;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m29A171697C81FE6F7E5B1F9F461CD59EC0F89903_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60* L_16 = ___0_match;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m29A171697C81FE6F7E5B1F9F461CD59EC0F89903_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mAC405A27152EE6104E01A331893EF868ADBB5873_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D));
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_13 = V_0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m0EFC8AABE54899827352EE4C2242BA912CB725F0_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mBABA46108650881964BD7A6EEC4320DEECEFBF83_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		List_1_Reverse_m32CD5BABD6841BA56DEDB7B1919DA2E3CBB80D4B(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m32CD5BABD6841BA56DEDB7B1919DA2E3CBB80D4B_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_m46E0E0B88D0832B68ED3636765546C5111F1DE84(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m76932FB67103B9ED51AC35FA2BEE37A48928D432_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		List_1_Sort_m6494BF9E97E1997CE06DD06AD84327E2857AC49A(__this, 0, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mA6849DAC2A754CA74247A61A929D4ECE7A20EBB9_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m6494BF9E97E1997CE06DD06AD84327E2857AC49A(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m6494BF9E97E1997CE06DD06AD84327E2857AC49A_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_m1FB3113B02EF22AD631D9C6E066BEA1CB5427036(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m36A13E4D8BECAFD8A858DD2B6095223FBF8594BE_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, Comparison_1_t561AF27D83A3BA7A3BE3A30EE3F33F9F87A5274F* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t561AF27D83A3BA7A3BE3A30EE3F33F9F87A5274F* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t561AF27D83A3BA7A3BE3A30EE3F33F9F87A5274F* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
		ArraySortHelper_1_Sort_mA7D52B6038D9E10E1B4980817DF125ADF1C5FC32(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* List_1_ToArray_m4701DF79EF124EE201C77326F581A8D59D58FFB0_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, const RuntimeMethod* method) 
{
	AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_1 = ((List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_3 = (AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*)(AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_4 = __this->____items;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m69F8E5EE6E587AE8775CAA9608C4F30F1AE69247_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_6;
				L_6 = InterfaceFuncInvoker0< AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_8 = __this->____items;
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_mB0403F69B220B80C094AC71A4DBB4E603934742D(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_14 = V_1;
				(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mCF6C6C9593EA91F80A8B56A34E33605659D0967F_gshared (const RuntimeMethod* method) 
{
	{
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_0 = (AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*)(AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m31FC402E4C27CE07EDA88CB8C015A23E2F216009_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_0 = ((List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mDAF511FE0D8DA92CA2104FD5F55FDE8D09A81E2A_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_2 = ((List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_4 = (SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*)(SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m36BE79A4949F7FA9DE610957879EF5599D75C50C_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_6 = ((List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_8 = (SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*)(SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_10 = __this->____items;
		InterfaceActionInvoker2< SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_12 = ((List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m68178D7CFDF27A7F8CBDBBCE9A0EF7A6BC96E777(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m4FB06DDAE56E85AC4BBE81EFFC2EAF33996D7D8E_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, const RuntimeMethod* method) 
{
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_0 = __this->____items;
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mCF0647E633A41A797C402803709C3F5A5B6C4F20_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_3 = __this->____items;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_6 = (SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*)(SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_8 = __this->____items;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_12 = ((List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mAD00903F848E3355712FC71C00D7D3C5F3D84CC3_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_m42803D841E20C7DFDEEE28FBFBBD22642CBB1889_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1BD69CA68E76231A4F7A113EEF688D5DE855A63A_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m4DA9ECF6DCD69A3D44318BC181FF3807B5D466D1_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 List_1_get_Item_m1CFDF25B3D988CD99BE370EB790427124C55BE69_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m2B6F3B6C65C06D33EF53A9B7F075457F72458E02_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mF31E87DB89E893D705E93D64EE6139286D713EEC_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_1;
		L_1 = List_1_get_Item_m1CFDF25B3D988CD99BE370EB790427124C55BE69(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_mB5F5C8461F82B8BD2C92F8BB3D48EF4E8B66855F_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m3BAEED16E3D3867BA9A2AFE9A25168A694F82156(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m2B6F3B6C65C06D33EF53A9B7F075457F72458E02(__this, L_1, ((*(SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8*)((SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8*)(SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mCC948FF58491A91722B262CDC9726FB6F3F47A9F_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_item, const RuntimeMethod* method) 
{
	SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_6 = V_0;
		int32_t L_7 = V_1;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8)L_8);
		return;
	}

IL_0034:
	{
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_9 = ___0_item;
		List_1_AddWithResize_m05D034E59C75BA1813B3FACE83128DD39278FD29(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m05D034E59C75BA1813B3FACE83128DD39278FD29_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m1C21B4464F562A8636AE72486D64D821D3C2B535(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_3 = __this->____items;
		int32_t L_4 = V_0;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m4351D1BE036ADB0B57910275C1C3954427968BDC_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m3BAEED16E3D3867BA9A2AFE9A25168A694F82156(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_mCC948FF58491A91722B262CDC9726FB6F3F47A9F_inline(__this, ((*(SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8*)((SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8*)(SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6 = __this->____size;
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m49D5D7DBBD299063694036CA174956DB28D0F733_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m39E337D331347B1A515D4290843B1008F9640478(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_mDDB9D23704EEC2B1EDE7423783461B3D92AA535D_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, int32_t ___1_count, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		int32_t L_7 = ___1_count;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_8 = ___2_item;
		RuntimeObject* L_9 = ___3_comparer;
		int32_t L_10;
		L_10 = Array_BinarySearch_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m11AFF46578923C90EB0CB515EEF500326E17894F(L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_mE86242B81D1D88678229BD382634612FB4BE3944_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_BinarySearch_mDDB9D23704EEC2B1EDE7423783461B3D92AA535D(__this, 0, L_0, L_1, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m51912A8A804011FD4C773CAB475572FA08EC3277_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_item, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_1 = ___0_item;
		RuntimeObject* L_2 = ___1_comparer;
		int32_t L_3;
		L_3 = List_1_BinarySearch_mDDB9D23704EEC2B1EDE7423783461B3D92AA535D(__this, 0, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mD7B7B5FD14B61E7ABD3E2FFB2069E3767A1A058C_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m2B204FE800F2FD59D3C6D12C3263132D5488890E_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m2606713F010F4302A5502800B9E72178488D3854(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mEDC1C4823142ED6E76B6A69E51C99D59BFB55C79_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* ___0_array, const RuntimeMethod* method) 
{
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_0 = ___0_array;
		List_1_CopyTo_mDD635A09B0D7A80844122F225F800861DD2FD6D1(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mDD635A09B0D7A80844122F225F800861DD2FD6D1_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_0 = __this->____items;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m1C21B4464F562A8636AE72486D64D821D3C2B535_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_0 = __this->____items;
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_2 = __this->____items;
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_3 = __this->____items;
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_mCF0647E633A41A797C402803709C3F5A5B6C4F20(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 List_1_Find_mA933C0F8E2D5F098244B587491951E4F3DC3C6F4_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C* L_1 = ___0_match;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_2 = __this->____items;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = Predicate_1_Invoke_m126CC0295668214BCB16D34FA65C7B9EC60B2D05_inline(L_1, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_7 = __this->____items;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8));
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* List_1_FindAll_mD51E50E5CD33D838BC0E8677733C498498CD43B2_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C* ___0_match, const RuntimeMethod* method) 
{
	List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* L_1 = (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		List_1__ctor_m31FC402E4C27CE07EDA88CB8C015A23E2F216009(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		V_0 = L_1;
		V_1 = 0;
		goto IL_003d;
	}

IL_0013:
	{
		Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C* L_2 = ___0_match;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_3 = __this->____items;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		bool L_7;
		L_7 = Predicate_1_Invoke_m126CC0295668214BCB16D34FA65C7B9EC60B2D05_inline(L_2, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* L_8 = V_0;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_9 = __this->____items;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		List_1_Add_mCC948FF58491A91722B262CDC9726FB6F3F47A9F_inline(L_8, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0039:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003d:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m7BBC5E24F1B082B16FAA4A1A16527742111AC680_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_m1113EA5656AC2CF607E110B52F217758EDBC289F(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m1113EA5656AC2CF607E110B52F217758EDBC289F_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C* L_10 = ___2_match;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_11 = __this->____items;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = Predicate_1_Invoke_m126CC0295668214BCB16D34FA65C7B9EC60B2D05_inline(L_10, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m0451D90549AB819B6B42A37CE10A2F2FC26BFF69_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, Action_1_tAFC3339124756AC45D404621C0EE01CEF9577D1E* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_tAFC3339124756AC45D404621C0EE01CEF9577D1E* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_tAFC3339124756AC45D404621C0EE01CEF9577D1E* L_4 = ___0_action;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m6BB7BA364E8A6E097C906E26D2475E7186ECAA1C_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tDA4FB7C6BD6D95A2E703F84D53E433F5FDF339AB List_1_GetEnumerator_m45AD728994515126E9688C5CFD40B60467251C70_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tDA4FB7C6BD6D95A2E703F84D53E433F5FDF339AB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m420FC20C439EA97FA9343819FD7F94BCEB4F996D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mA3FB3737D700DFC35F57532BBF45D39242193C7A_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tDA4FB7C6BD6D95A2E703F84D53E433F5FDF339AB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m420FC20C439EA97FA9343819FD7F94BCEB4F996D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tDA4FB7C6BD6D95A2E703F84D53E433F5FDF339AB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m8905C1081EF814CDDA14239767E0D84BF29E3C9A_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tDA4FB7C6BD6D95A2E703F84D53E433F5FDF339AB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m420FC20C439EA97FA9343819FD7F94BCEB4F996D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tDA4FB7C6BD6D95A2E703F84D53E433F5FDF339AB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m2606713F010F4302A5502800B9E72178488D3854_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_item, const RuntimeMethod* method) 
{
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_0 = __this->____items;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m70115C24F0565DA53BBE402FD83CC84DF85A5F98(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m63BEB9A637416F188061C47BCE1515075255A7CF_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_3 = __this->____items;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_m1C21B4464F562A8636AE72486D64D821D3C2B535(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_15 = ___1_item;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m39E337D331347B1A515D4290843B1008F9640478_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m1C21B4464F562A8636AE72486D64D821D3C2B535(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_20 = __this->____items;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_45;
				L_45 = InterfaceFuncInvoker0< SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_44);
				List_1_Insert_m63BEB9A637416F188061C47BCE1515075255A7CF(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m68178D7CFDF27A7F8CBDBBCE9A0EF7A6BC96E777(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m7FEFD9A0CC4D1C4002365301D53FDDFD0B60D0F4_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m2606713F010F4302A5502800B9E72178488D3854(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m477DD6678295F5211FF71D871F8F7180D2B4402F(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_mEC768722C652653F67CA972E351DEEA18538E900_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C* L_4 = ___0_match;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m126CC0295668214BCB16D34FA65C7B9EC60B2D05_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C* L_16 = ___0_match;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m126CC0295668214BCB16D34FA65C7B9EC60B2D05_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m477DD6678295F5211FF71D871F8F7180D2B4402F_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8));
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_13 = V_0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m5216DFA30FAD7CEDE1438B5B2FF02A7F156760C4_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m6495FAFF694EADD42A423DB3E14554A9F2764E29_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		List_1_Reverse_mB3971166E05AC209923A534E25760186E98BB09C(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mB3971166E05AC209923A534E25760186E98BB09C_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m4344CC38D9B5CE097FCED50506E8188A011D81AB(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mB64972D3DCE5B0395B2B61AE8E92B9688677A967_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		List_1_Sort_m476F39FCD729DFD7C9E277D2A0211D40F826096F(__this, 0, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m5E12CD3B93598CCCFC05C82C117426544E473E1E_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m476F39FCD729DFD7C9E277D2A0211D40F826096F(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m476F39FCD729DFD7C9E277D2A0211D40F826096F_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m2A40DA65E582BE97AFEA3DBDCBEE2B2673DDBC0A(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mAFA6E3D2078F9C3278672EC46557EA714F1DF2CB_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, Comparison_1_tDF19E1FD642A6D03EC22D6BC3C7899090B8EB768* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_tDF19E1FD642A6D03EC22D6BC3C7899090B8EB768* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tDF19E1FD642A6D03EC22D6BC3C7899090B8EB768* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
		ArraySortHelper_1_Sort_m22C9F1A7E8D3B0B4483E4516DA4DA3C2C209EAC4(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* List_1_ToArray_m0FFDF045FE13FF1AB9767409FDFAB353F3CF0F97_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, const RuntimeMethod* method) 
{
	SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_1 = ((List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_3 = (SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*)(SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_4 = __this->____items;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m68178D7CFDF27A7F8CBDBBCE9A0EF7A6BC96E777_gshared (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_6;
				L_6 = InterfaceFuncInvoker0< SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_8 = __this->____items;
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_m1C21B4464F562A8636AE72486D64D821D3C2B535(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_14 = V_1;
				(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mFDF4BA7A8D70C04E03F0DC9B67E8E6AEBE9F5248_gshared (const RuntimeMethod* method) 
{
	{
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_0 = (SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*)(SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6F46F772ADCBF9B89A92E693CD7BAF06D59B211C_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_0 = ((List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1B23777C4AD22CF335B974B37B70A90505A7C001_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_2 = ((List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_4 = (SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*)(SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB7508D8989F1C8CC927B5EDF136AD4EB989C233B_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_6 = ((List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_8 = (SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*)(SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_10 = __this->____items;
		InterfaceActionInvoker2< SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_12 = ((List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m527D65A12254C782002DE60FA17ECF96CDA7F194(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m1B3A86577B5FD01E29158EFDE9708C79A361471C_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, const RuntimeMethod* method) 
{
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_0 = __this->____items;
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m302F85313BDFB4457F959E625749582EC6E27F9F_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_3 = __this->____items;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_6 = (SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*)(SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_8 = __this->____items;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_12 = ((List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m1A83357BA54BC9B09573539E4EE90F2135A20666_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_mF875C3A95A1283C34014363DFDE6B70879817488_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mA9265DE86A8FDD1E5E69537A29BD0F51FE515BFF_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m6A483E458892F7725E770B2F0B358662D22CF8C2_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 List_1_get_Item_m1AD906407E42AFD1CBB009282EFE154706417A71_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m51D6AC75D33A93588CCCBF4B1D6760835065F6D0_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mD6C7A9692DEDA0D29F66124F63ED170DD41D74B8_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_1;
		L_1 = List_1_get_Item_m1AD906407E42AFD1CBB009282EFE154706417A71(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_mF1DBFC8C884C30F4073F8CA6B928CA9E13C4A9B3_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_mD2DB48079FEE9C6094C803DE712C0082B1BF8450(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m51D6AC75D33A93588CCCBF4B1D6760835065F6D0(__this, L_1, ((*(SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76*)((SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76*)(SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m3AE842811428E83C33D0CC042E1255A5CA176474_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_item, const RuntimeMethod* method) 
{
	SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_6 = V_0;
		int32_t L_7 = V_1;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76)L_8);
		return;
	}

IL_0034:
	{
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_9 = ___0_item;
		List_1_AddWithResize_m34C5010DD2C825899DC04BB0834DE555D2A426BC(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m34C5010DD2C825899DC04BB0834DE555D2A426BC_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m134E0BC0FFC6CB673E13C7A5F489B1F31F5427E2(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_3 = __this->____items;
		int32_t L_4 = V_0;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m98926932CBA11785AA2397E51CBB04918F3B0F9F_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_mD2DB48079FEE9C6094C803DE712C0082B1BF8450(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m3AE842811428E83C33D0CC042E1255A5CA176474_inline(__this, ((*(SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76*)((SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76*)(SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6 = __this->____size;
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m19254BA4808DB772876ECB93A702FDF801A402C7_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m665E7DA4FE91D0B03E0752387F6DE198CCB8AEB4(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m6DEDFBCEBA93715E4CE2EC15A552D575C6E0978F_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, int32_t ___1_count, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		int32_t L_7 = ___1_count;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_8 = ___2_item;
		RuntimeObject* L_9 = ___3_comparer;
		int32_t L_10;
		L_10 = Array_BinarySearch_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_mAEF332ABEE70AA5495D035A9C0E5EDF67D37B239(L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m7DCBFE9315D615E637238E45D820550FF9135B3D_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_BinarySearch_m6DEDFBCEBA93715E4CE2EC15A552D575C6E0978F(__this, 0, L_0, L_1, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m7ADEB8C9CEDEC81D2DEFA58229D2EBCDCFFF8A9A_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_item, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_1 = ___0_item;
		RuntimeObject* L_2 = ___1_comparer;
		int32_t L_3;
		L_3 = List_1_BinarySearch_m6DEDFBCEBA93715E4CE2EC15A552D575C6E0978F(__this, 0, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5EC5C7966CF0C924710B054E63E2EEC3F80EC224_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m87149273103F7BEB57F100DE7AD009D9C262763B_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mD02059A480E6797AA9904B135059261714E83736(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m05B7152F3C1060D63D9D90AFFD10E18DDAB0EE6A_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* ___0_array, const RuntimeMethod* method) 
{
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_0 = ___0_array;
		List_1_CopyTo_m5653F09E6CBCBF15B781C371F6D72981B89D73CC(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m5653F09E6CBCBF15B781C371F6D72981B89D73CC_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_0 = __this->____items;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m134E0BC0FFC6CB673E13C7A5F489B1F31F5427E2_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_0 = __this->____items;
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_2 = __this->____items;
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_3 = __this->____items;
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m302F85313BDFB4457F959E625749582EC6E27F9F(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 List_1_Find_m7469226AD67C90A2C8225BEC858B9F3D81F7B346_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1* L_1 = ___0_match;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_2 = __this->____items;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = Predicate_1_Invoke_m930CC0E436A5FFEE5CCAC8A666FCF61C92103AE1_inline(L_1, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_7 = __this->____items;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76));
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* List_1_FindAll_m2C93EAC0FEDAF872E6F16D65D2383CBEB10D88BA_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1* ___0_match, const RuntimeMethod* method) 
{
	List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* L_1 = (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		List_1__ctor_m6F46F772ADCBF9B89A92E693CD7BAF06D59B211C(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		V_0 = L_1;
		V_1 = 0;
		goto IL_003d;
	}

IL_0013:
	{
		Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1* L_2 = ___0_match;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_3 = __this->____items;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		bool L_7;
		L_7 = Predicate_1_Invoke_m930CC0E436A5FFEE5CCAC8A666FCF61C92103AE1_inline(L_2, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* L_8 = V_0;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_9 = __this->____items;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		List_1_Add_m3AE842811428E83C33D0CC042E1255A5CA176474_inline(L_8, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0039:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003d:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mB8EE24A9AC7141192349CF16E191E8179173B6F5_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_m53BCCD148E00B0909529BCCA9AF13F28895B0DD8(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m53BCCD148E00B0909529BCCA9AF13F28895B0DD8_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1* L_10 = ___2_match;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_11 = __this->____items;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = Predicate_1_Invoke_m930CC0E436A5FFEE5CCAC8A666FCF61C92103AE1_inline(L_10, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_mB3593256AF2843074C4737B4A62B8FA4973783F5_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, Action_1_t66C5360772D5503D6DBDB6F6B03252BA94E530B6* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t66C5360772D5503D6DBDB6F6B03252BA94E530B6* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t66C5360772D5503D6DBDB6F6B03252BA94E530B6* L_4 = ___0_action;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m8BE2DB442464C0D5DDA5ACA7E24A15BB85BBD9E9_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t658CB92185890E7817C7C1B23A144223D1FF2FF1 List_1_GetEnumerator_mC0F77CD5A7E91E2A05115C7F6F0F4093D9595563_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t658CB92185890E7817C7C1B23A144223D1FF2FF1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1D35CFF2D2180AE34DC9CC77A09F8B860208FAD0((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m71DE271A983C9C2CAC02B1372AEEACFDDD6218B6_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t658CB92185890E7817C7C1B23A144223D1FF2FF1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1D35CFF2D2180AE34DC9CC77A09F8B860208FAD0((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_t658CB92185890E7817C7C1B23A144223D1FF2FF1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m609BAB885D24DAE756D17ED43D785A05104FD4B6_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t658CB92185890E7817C7C1B23A144223D1FF2FF1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1D35CFF2D2180AE34DC9CC77A09F8B860208FAD0((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_t658CB92185890E7817C7C1B23A144223D1FF2FF1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mD02059A480E6797AA9904B135059261714E83736_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_item, const RuntimeMethod* method) 
{
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_0 = __this->____items;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_mA207ED91BE3EF74973FE3196FDE80CCAE65B5474(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mDFAE1F89C4DE3E2EAD6EDC0FF938220F0A86536B_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_3 = __this->____items;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_m134E0BC0FFC6CB673E13C7A5F489B1F31F5427E2(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_15 = ___1_item;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m665E7DA4FE91D0B03E0752387F6DE198CCB8AEB4_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m134E0BC0FFC6CB673E13C7A5F489B1F31F5427E2(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_20 = __this->____items;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_45;
				L_45 = InterfaceFuncInvoker0< SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_44);
				List_1_Insert_mDFAE1F89C4DE3E2EAD6EDC0FF938220F0A86536B(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m527D65A12254C782002DE60FA17ECF96CDA7F194(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mB6A35B7EAE366C0B4AC4458E18228E2F076040F2_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mD02059A480E6797AA9904B135059261714E83736(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m06166141A483A7C3BA5C700114F02C6A96423651(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m5DE176EC1CF9443936CC88256BFD3460C0020467_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1* L_4 = ___0_match;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m930CC0E436A5FFEE5CCAC8A666FCF61C92103AE1_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1* L_16 = ___0_match;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m930CC0E436A5FFEE5CCAC8A666FCF61C92103AE1_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m06166141A483A7C3BA5C700114F02C6A96423651_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76));
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_13 = V_0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m89E31A67DE2513D4615333D86A674189CD15D809_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m92CCC0BE65E2443116A9ED2D5ED53A5D72FB1C48_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		List_1_Reverse_mE6DBD3C8190085A61D99B7C0F69B263AAAE65866(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mE6DBD3C8190085A61D99B7C0F69B263AAAE65866_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_m143E3CD724FE113D138FE135DEF8638E70F2A198(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEF2D3FC217880560E07D5FAA0F6E8CEF2E465D2E_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		List_1_Sort_mAB1E55F9318E4DBC0A0A413EFBE2DD79C78F52B1(__this, 0, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3386112B15D0C39AF0B6A6824C545AAB7CCAF058_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_mAB1E55F9318E4DBC0A0A413EFBE2DD79C78F52B1(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mAB1E55F9318E4DBC0A0A413EFBE2DD79C78F52B1_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_mCBDD32C099E08AA5CDEBBFB157ABFD7B0644BA72(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m74A843702F2195DE5555106BA0D719DA8F8A3A78_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, Comparison_1_tE7E96FD34C52F0992924E65405618B941FEA3229* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_tE7E96FD34C52F0992924E65405618B941FEA3229* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tE7E96FD34C52F0992924E65405618B941FEA3229* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
		ArraySortHelper_1_Sort_m110C40E0EE62056BE0C5B538C463703CB0BCFE92(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* List_1_ToArray_m68A0C8D4DBF6B14387018332EF514F26F6039C8D_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, const RuntimeMethod* method) 
{
	SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_1 = ((List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_3 = (SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*)(SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_4 = __this->____items;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m527D65A12254C782002DE60FA17ECF96CDA7F194_gshared (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_6;
				L_6 = InterfaceFuncInvoker0< SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_8 = __this->____items;
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_m134E0BC0FFC6CB673E13C7A5F489B1F31F5427E2(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_14 = V_1;
				(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mE884ABD5AF86C0ACEF4ED04E579ECF9FE41F7BD0_gshared (const RuntimeMethod* method) 
{
	{
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_0 = (SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*)(SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB71EBA9D58F0038DFD77704F6B82A0F065D8E0CB_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_0 = ((List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m150221D4BB8D2A62F23170C6DCEF567CB7C2A18A_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_2 = ((List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_4 = (UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*)(UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC2C29A242E39764C7DA2606B1974BCEC6CF774CE_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_6 = ((List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_8 = (UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*)(UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_10 = __this->____items;
		InterfaceActionInvoker2< UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_12 = ((List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m7364E6924991C4C2D058E17497F3629E5EA485EE(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m4DC8C3FDC24B07E03E6D162F15FD50DF1AA5ECBB_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, const RuntimeMethod* method) 
{
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_0 = __this->____items;
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m4818500D894184E9F21866AEA0131CD1CF3F5382_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_3 = __this->____items;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_6 = (UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*)(UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_8 = __this->____items;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_12 = ((List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC3019E575C83FB67F89DA81E6CE0C9CFAD796719_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_mB6880B553792E4B3064041DD12E68B1BED0B2E03_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m90383DCE2F27D574C774A4A28A22F5F515098198_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_mE373B72111D5F1742896E24AF8A605418A1EA8B8_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 List_1_get_Item_mC49E1B066BBB6258311FE9B926DCE894C0BF186E_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m4A3FFE4BA49FD9B07B1CA64EF56FA82C4AE9F5BB_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mC1C8900FC1F40B88858C33D96A598A56A3234458_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_1;
		L_1 = List_1_get_Item_mC49E1B066BBB6258311FE9B926DCE894C0BF186E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_mC10150818490BD474DA4E02D60CF28AC37F7CFA0_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_m19B0739A5C042D575F76B39BDF85F39F3A115561(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m4A3FFE4BA49FD9B07B1CA64EF56FA82C4AE9F5BB(__this, L_1, ((*(UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484*)((UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484*)(UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m72526F8101C7F826102E2B1B4CC10524470614E3_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_item, const RuntimeMethod* method) 
{
	UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_6 = V_0;
		int32_t L_7 = V_1;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484)L_8);
		return;
	}

IL_0034:
	{
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_9 = ___0_item;
		List_1_AddWithResize_mBE6CDEB20A3F167929EAE434CACE11FFDD2A780A(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mBE6CDEB20A3F167929EAE434CACE11FFDD2A780A_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mC7F3FAE932ED216AEC9C291B4A9D0863F528D4D0(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_3 = __this->____items;
		int32_t L_4 = V_0;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m8C1926B01EAB0750001AFB7CBD69A98C103419F9_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_m19B0739A5C042D575F76B39BDF85F39F3A115561(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m72526F8101C7F826102E2B1B4CC10524470614E3_inline(__this, ((*(UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484*)((UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484*)(UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6 = __this->____size;
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m54E1662B72AFF310CB969E4393DF2229EBFEF308_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m45E836C76510868E9BBA24BC6B48C92C504663FB(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m667B021A9DD3DDCF680DF079F38070A9619B62F3_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, int32_t ___1_count, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		int32_t L_7 = ___1_count;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_8 = ___2_item;
		RuntimeObject* L_9 = ___3_comparer;
		int32_t L_10;
		L_10 = Array_BinarySearch_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_mC4DD0B5C2B02DB5234B96E3B8C38B950ED13B4F1(L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m569B6F44228C833F4FA2B6653965803DD62181DE_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_BinarySearch_m667B021A9DD3DDCF680DF079F38070A9619B62F3(__this, 0, L_0, L_1, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m358EE8106D0C28B6F807D483A0A12AA1E36886DC_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_item, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_1 = ___0_item;
		RuntimeObject* L_2 = ___1_comparer;
		int32_t L_3;
		L_3 = List_1_BinarySearch_m667B021A9DD3DDCF680DF079F38070A9619B62F3(__this, 0, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m6EBAE1C78908259E27EB776836A22A070990E07A_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m6EF20D78157B32A7D33649AAA7AB99F0D6AC8C9F_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mE8C51210D5BAC8CF94461B57C1A93DD88883F215(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m1FA87CF5A0117858B9FBCD7AF2F1602455574396_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* ___0_array, const RuntimeMethod* method) 
{
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_0 = ___0_array;
		List_1_CopyTo_m230BE741FC798D78A10E2154B9CC64A91053331E(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m230BE741FC798D78A10E2154B9CC64A91053331E_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_0 = __this->____items;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mC7F3FAE932ED216AEC9C291B4A9D0863F528D4D0_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_0 = __this->____items;
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_2 = __this->____items;
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_3 = __this->____items;
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m4818500D894184E9F21866AEA0131CD1CF3F5382(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 List_1_Find_m30EB8C402AD16D5BBAD7B4FFA78A4F95CB1EAB7B_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A* L_1 = ___0_match;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_2 = __this->____items;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = Predicate_1_Invoke_m6B9247DE12D2F0AE888AE93CCD8E7E8D7B57FC0E_inline(L_1, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_7 = __this->____items;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484));
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* List_1_FindAll_m6F5FB5251DA6AD4DEB0E7F7B0625BE0DD8B25027_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A* ___0_match, const RuntimeMethod* method) 
{
	List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* L_1 = (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		List_1__ctor_mB71EBA9D58F0038DFD77704F6B82A0F065D8E0CB(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		V_0 = L_1;
		V_1 = 0;
		goto IL_003d;
	}

IL_0013:
	{
		Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A* L_2 = ___0_match;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_3 = __this->____items;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		bool L_7;
		L_7 = Predicate_1_Invoke_m6B9247DE12D2F0AE888AE93CCD8E7E8D7B57FC0E_inline(L_2, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* L_8 = V_0;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_9 = __this->____items;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		List_1_Add_m72526F8101C7F826102E2B1B4CC10524470614E3_inline(L_8, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0039:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003d:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m5B7E2AC39226D5ACC7FFA3B06CDE0C01263FB0BD_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_m738D70586FEB60B234356E2B47E49542D8DCA170(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m738D70586FEB60B234356E2B47E49542D8DCA170_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A* L_10 = ___2_match;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_11 = __this->____items;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = Predicate_1_Invoke_m6B9247DE12D2F0AE888AE93CCD8E7E8D7B57FC0E_inline(L_10, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m92AE2C7B529E2E5FE3AC156A9F72DA41079520B3_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, Action_1_tD8CB07CA58902BF665659519C88AFF6438B41EB7* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_tD8CB07CA58902BF665659519C88AFF6438B41EB7* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_tD8CB07CA58902BF665659519C88AFF6438B41EB7* L_4 = ___0_action;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m820968B3E64305B489B7AE4A8860C06CB6EF05AA_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB0F816093F81D6672785A2ADF957047667737977 List_1_GetEnumerator_m57F4DD44BF3A79721B7554551E97837C2E334999_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB0F816093F81D6672785A2ADF957047667737977 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m57DCB43A11D27902D335662FC3CBF16DB4C0F252((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mA109AFC665DC4478838934B16287A78FE11048FC_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB0F816093F81D6672785A2ADF957047667737977 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m57DCB43A11D27902D335662FC3CBF16DB4C0F252((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tB0F816093F81D6672785A2ADF957047667737977 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mFCBC68284A25880BFA317D7AF2091BA609A36B71_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB0F816093F81D6672785A2ADF957047667737977 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m57DCB43A11D27902D335662FC3CBF16DB4C0F252((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tB0F816093F81D6672785A2ADF957047667737977 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mE8C51210D5BAC8CF94461B57C1A93DD88883F215_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_item, const RuntimeMethod* method) 
{
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_0 = __this->____items;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_m9774A57B3641960399519BF09FB823C60F369D40(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m6EA9C42F313392649F04BA34D8997A112E043439_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_3 = __this->____items;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_mC7F3FAE932ED216AEC9C291B4A9D0863F528D4D0(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_15 = ___1_item;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m45E836C76510868E9BBA24BC6B48C92C504663FB_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mC7F3FAE932ED216AEC9C291B4A9D0863F528D4D0(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_20 = __this->____items;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_45;
				L_45 = InterfaceFuncInvoker0< UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_44);
				List_1_Insert_m6EA9C42F313392649F04BA34D8997A112E043439(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m7364E6924991C4C2D058E17497F3629E5EA485EE(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4802B6421EE6E7B1274197822548FC26F4FB0524_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mE8C51210D5BAC8CF94461B57C1A93DD88883F215(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m3ED3462E14C57262D6C6045B3E3B77C93DEE9766(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m8AE38C7EC9701D5462DE857FFC84590CF72EE191_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A* L_4 = ___0_match;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m6B9247DE12D2F0AE888AE93CCD8E7E8D7B57FC0E_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A* L_16 = ___0_match;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m6B9247DE12D2F0AE888AE93CCD8E7E8D7B57FC0E_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m3ED3462E14C57262D6C6045B3E3B77C93DEE9766_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484));
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_13 = V_0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m7E7EE442A3AA91967BBBCBBE2F064DDF0448A75F_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m4C03506F5EE27E9769DE5F70A3DAECD2FEF23484_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		List_1_Reverse_m119265EAEAA756A96CCCB6CC7AC1C738EDC346CC(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m119265EAEAA756A96CCCB6CC7AC1C738EDC346CC_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_mC47A8D3AD6998289287704D185EBE3B1A322E6B2(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m2ABA300CE735C092B7A5B562967FB3ABA25EDD37_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		List_1_Sort_mDDFA7C8921D9D6473931F3E9346E6FD625BFD628(__this, 0, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m7AD29690F14719DAE100E5F47FD4CC98F960C5BD_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_mDDFA7C8921D9D6473931F3E9346E6FD625BFD628(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mDDFA7C8921D9D6473931F3E9346E6FD625BFD628_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_m674D68ED11D736275EDB3153E434AC365055CA83(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m4B9CEB668E3F232886F6DB471150B351AE0426F6_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, Comparison_1_tC652E94860093FBD669CD9F7858E5C6792867D13* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_tC652E94860093FBD669CD9F7858E5C6792867D13* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tC652E94860093FBD669CD9F7858E5C6792867D13* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
		ArraySortHelper_1_Sort_m74F15A4F90E5C599D798196A16E4125DC5999C46(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* List_1_ToArray_m55639301DE3CBD1D2AF7609A3A158E76803FA96A_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, const RuntimeMethod* method) 
{
	UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_1 = ((List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_3 = (UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*)(UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_4 = __this->____items;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m7364E6924991C4C2D058E17497F3629E5EA485EE_gshared (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_6;
				L_6 = InterfaceFuncInvoker0< UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_8 = __this->____items;
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_mC7F3FAE932ED216AEC9C291B4A9D0863F528D4D0(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_14 = V_1;
				(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mD127A51885C7F0AD91919F38C8E9CD3394FE75A8_gshared (const RuntimeMethod* method) 
{
	{
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_0 = (UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*)(UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1B1BC2AB1CD4C48D927FFDCE03A2B965041F80ED_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_0 = ((List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m13F5B6B8BE065B68CB23C1775FD4A31E112FE24F_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_2 = ((List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_4 = (UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235*)(UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m180185933779FFB38BA7B541379A19FFC8B190EA_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_6 = ((List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_8 = (UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235*)(UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_10 = __this->____items;
		InterfaceActionInvoker2< UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_12 = ((List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m64F76535FA84514F76BE58F626F31E08F1DCB898(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m602FF46EB1E093120154BF186897F66CD572C00B_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, const RuntimeMethod* method) 
{
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_0 = __this->____items;
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mF640AD392BEF928AC559D1024B05DAEA9AB5C9D0_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_3 = __this->____items;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_6 = (UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235*)(UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_8 = __this->____items;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_12 = ((List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3DEBA148839C6EDDBA94748FA905F5B9013EE698_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_mF5386C5C22302905BD8D8146F0953BDC0E12A3F4_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6EAF77BA81F621C67E773CEA44C20BA6020EB8C0_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m6A673D241DB5D05E77BBA7BD040F618BA85D2598_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 List_1_get_Item_mFA761411E90467F7E1CB5697914D3391CE93B0FE_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m87DFEF7D04BB9A3AB440AE269BB5E25B167887E5_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mA9FA4EB520D3FF2BF8884A2F81F542D1A2D619BE_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_1;
		L_1 = List_1_get_Item_mFA761411E90467F7E1CB5697914D3391CE93B0FE(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_mFFE1464734A17EC592D95463DA5D2F09A7EFC589_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_m90F67367FA31311002A350CC99E44F6D59314361(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m87DFEF7D04BB9A3AB440AE269BB5E25B167887E5(__this, L_1, ((*(UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02*)((UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02*)(UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m3F1204F623176FEDFDFCFCFB7A6FDABFB6400A51_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_item, const RuntimeMethod* method) 
{
	UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_6 = V_0;
		int32_t L_7 = V_1;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02)L_8);
		return;
	}

IL_0034:
	{
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_9 = ___0_item;
		List_1_AddWithResize_m78927281A184FD62DBDEA4AAAD602EF4D78F0DE5(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m78927281A184FD62DBDEA4AAAD602EF4D78F0DE5_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m5366CA1234ACEC11653A7D4236B03743AE1E1DC9(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_3 = __this->____items;
		int32_t L_4 = V_0;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m2395D8B36FF6E3BABC0467610DA6BE00C714F5B1_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_m90F67367FA31311002A350CC99E44F6D59314361(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m3F1204F623176FEDFDFCFCFB7A6FDABFB6400A51_inline(__this, ((*(UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02*)((UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02*)(UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6 = __this->____size;
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m8797A30AE9B3605D04DF9A60346BD23D29AB50EB_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m7C077D52F3B2FCEAEF2F09CC7F92FE020C7F8476(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_mC3D24E31D81E721792E7601A55CE6CD6D2AF1B75_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, int32_t ___1_count, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		int32_t L_7 = ___1_count;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_8 = ___2_item;
		RuntimeObject* L_9 = ___3_comparer;
		int32_t L_10;
		L_10 = Array_BinarySearch_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_m0C997E644D150CFEFF254E073BE9E8B1E94AB4EF(L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m99C96815BC94810D9B0D0CD5B170FE3F993D5B3A_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_BinarySearch_mC3D24E31D81E721792E7601A55CE6CD6D2AF1B75(__this, 0, L_0, L_1, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m7F6C1B9335D565AC79B8DA72D1545532000B5189_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_item, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_1 = ___0_item;
		RuntimeObject* L_2 = ___1_comparer;
		int32_t L_3;
		L_3 = List_1_BinarySearch_mC3D24E31D81E721792E7601A55CE6CD6D2AF1B75(__this, 0, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mF37C08016D88D79B5DFFADA9B9FA2135DC7FBFAB_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m484FEBCA80A197FDEA9322ED47438E200CF8CE49_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m076C6FF463E8866129F00F5C29BF1356ABAF8C6D(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mBD057C17ACB077152EEEFFFBC0DA977BECEB6EC7_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* ___0_array, const RuntimeMethod* method) 
{
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_0 = ___0_array;
		List_1_CopyTo_m539BCA791C4E144FE971101F22B4C3EC7CE70FDB(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m539BCA791C4E144FE971101F22B4C3EC7CE70FDB_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_0 = __this->____items;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m5366CA1234ACEC11653A7D4236B03743AE1E1DC9_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_0 = __this->____items;
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_2 = __this->____items;
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_3 = __this->____items;
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_mF640AD392BEF928AC559D1024B05DAEA9AB5C9D0(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 List_1_Find_mF1875FD938D9BAA65470C4430B9CE860BCDE9E10_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77* L_1 = ___0_match;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_2 = __this->____items;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = Predicate_1_Invoke_m945DB5E98852AC2FF13692CA56461DD7960AA8DD_inline(L_1, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_7 = __this->____items;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02));
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* List_1_FindAll_m96681DC5325F8791D9C75B3D5B7FE611CD691444_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77* ___0_match, const RuntimeMethod* method) 
{
	List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* L_1 = (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		List_1__ctor_m1B1BC2AB1CD4C48D927FFDCE03A2B965041F80ED(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		V_0 = L_1;
		V_1 = 0;
		goto IL_003d;
	}

IL_0013:
	{
		Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77* L_2 = ___0_match;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_3 = __this->____items;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		bool L_7;
		L_7 = Predicate_1_Invoke_m945DB5E98852AC2FF13692CA56461DD7960AA8DD_inline(L_2, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* L_8 = V_0;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_9 = __this->____items;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		List_1_Add_m3F1204F623176FEDFDFCFCFB7A6FDABFB6400A51_inline(L_8, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0039:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003d:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mEC25EECBE0044BA6F00EE54EF838787BC4DCF0B5_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_mEF1EACDFED834B3ECBFC102D26EA0820DA2A8936(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mEF1EACDFED834B3ECBFC102D26EA0820DA2A8936_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77* L_10 = ___2_match;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_11 = __this->____items;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = Predicate_1_Invoke_m945DB5E98852AC2FF13692CA56461DD7960AA8DD_inline(L_10, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m9575839C5E8619F144A804811207F00A04276AEC_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, Action_1_t04BD4DE10D746830D051B0C2DB8C1DBD86FF4C65* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t04BD4DE10D746830D051B0C2DB8C1DBD86FF4C65* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t04BD4DE10D746830D051B0C2DB8C1DBD86FF4C65* L_4 = ___0_action;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m17C9B8E71EF529CC587460C4ACC40A76175CB3A8_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEF4B3506D31FC96A1EB63A18FB3FD9A3B51104B2 List_1_GetEnumerator_mBB976E45094B329C0954E0312C13D6141A30F727_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEF4B3506D31FC96A1EB63A18FB3FD9A3B51104B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5EFD5DB3AD2FE8F13BB2EE7A4904DCD66E153FDA((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6216A2E6FC290E4E14FC140C7E734647E4ED90F6_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEF4B3506D31FC96A1EB63A18FB3FD9A3B51104B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5EFD5DB3AD2FE8F13BB2EE7A4904DCD66E153FDA((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tEF4B3506D31FC96A1EB63A18FB3FD9A3B51104B2 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m4EC769D85CA326A31E42179881F6C6CD4E05264C_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEF4B3506D31FC96A1EB63A18FB3FD9A3B51104B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5EFD5DB3AD2FE8F13BB2EE7A4904DCD66E153FDA((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tEF4B3506D31FC96A1EB63A18FB3FD9A3B51104B2 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m076C6FF463E8866129F00F5C29BF1356ABAF8C6D_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_item, const RuntimeMethod* method) 
{
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_0 = __this->____items;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_m672F3AB798B624D0D5566BE6E9569EC6321CB0B2(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m11383082A5108FB233701726BE89F3EBFA5FF688_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_3 = __this->____items;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_m5366CA1234ACEC11653A7D4236B03743AE1E1DC9(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_15 = ___1_item;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m7C077D52F3B2FCEAEF2F09CC7F92FE020C7F8476_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m5366CA1234ACEC11653A7D4236B03743AE1E1DC9(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_20 = __this->____items;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_45;
				L_45 = InterfaceFuncInvoker0< UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_44);
				List_1_Insert_m11383082A5108FB233701726BE89F3EBFA5FF688(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m64F76535FA84514F76BE58F626F31E08F1DCB898(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m51B0C298ADA7291FE033BD52F9413761E0ED3879_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m076C6FF463E8866129F00F5C29BF1356ABAF8C6D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m1615FCC5676CD0DAD66650F1F7CC91685A9D4327(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m251F3AAEFA1EF803D667599FA6BCA061DF9A37F9_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77* L_4 = ___0_match;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m945DB5E98852AC2FF13692CA56461DD7960AA8DD_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77* L_16 = ___0_match;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m945DB5E98852AC2FF13692CA56461DD7960AA8DD_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m1615FCC5676CD0DAD66650F1F7CC91685A9D4327_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02));
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_13 = V_0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mAD2EA40BB17603D4DCFA8698DB0BC8555FE52714_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mA93CE19B5739800B9CE8B7ECCC643A7A2FE5369F_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		List_1_Reverse_mDBF3E954B1BAA772ED9E43D7C617646D5F76F128(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mDBF3E954B1BAA772ED9E43D7C617646D5F76F128_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_m3065AE44F44D4BA15C10260DA651BE03D9C283CD(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m1FEC3AFF1858108C6DE0D7B3F13C5EA7EE0CC5A7_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		List_1_Sort_mD319D99BA7AB3EE02FE5D08BCF1D848FAA20755E(__this, 0, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3520E19FF213F044611EA8EF4D2903E501F74B28_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_mD319D99BA7AB3EE02FE5D08BCF1D848FAA20755E(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mD319D99BA7AB3EE02FE5D08BCF1D848FAA20755E_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_mC77109191B007D94D010D39FBE343230EB6DAF18(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mC2FED2564C5C0D7B86D049C39C1810EE3A540BF2_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, Comparison_1_t4BFA17A40F8610971784DBFB950ACECBC6873FE8* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t4BFA17A40F8610971784DBFB950ACECBC6873FE8* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t4BFA17A40F8610971784DBFB950ACECBC6873FE8* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
		ArraySortHelper_1_Sort_m5AD7A1D801F958F599A4A4B0680AC7E86E0E8B62(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* List_1_ToArray_mA0667EE769DEA7440484A8145E050DF79736A070_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, const RuntimeMethod* method) 
{
	UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_1 = ((List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_3 = (UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235*)(UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_4 = __this->____items;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m64F76535FA84514F76BE58F626F31E08F1DCB898_gshared (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_6;
				L_6 = InterfaceFuncInvoker0< UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_8 = __this->____items;
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_m5366CA1234ACEC11653A7D4236B03743AE1E1DC9(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_14 = V_1;
				(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m2650AFE65EEBFAF1D660C8DBA2E0CC74320FB1DA_gshared (const RuntimeMethod* method) 
{
	{
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_0 = (UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235*)(UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB26899986F1FB5766A6D13F9ED0BD83D6E7EF66C_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_0 = ((List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m041FA212DEC6BE195BC723646849CD649D18A64F_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_2 = ((List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_4 = (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*)(ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m79BC4625704BB78551B3133EEF6EC26D75D893C1_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_6 = ((List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_8 = (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*)(ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_10 = __this->____items;
		InterfaceActionInvoker2< ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_12 = ((List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_mBE568D92B20DA843EC8D4F715D3B49D250D017DA(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m72B6FD6DBD5356DABAA5CB4C5BDFB373FC024528_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_0 = __this->____items;
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m95133E04136EBCFB47DF8C6AC9E9BCC8AC90FEBE_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_3 = __this->____items;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_6 = (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*)(ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_8 = __this->____items;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_12 = ((List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mECD525A7CE3BC7B0E3FE954F13BC663410201A64_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_m37218AEA870BB4FAC8DF3A21D64E1D77B0F90624_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6AAC74A95D5C88AE19C268DDE1E1C7FEE4F24DED_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m60EE4FB469FB6C8F8BA65CD25C715D5B7045A7B4_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 List_1_get_Item_m69BCBAB9625067308DDEAEED5945E4E3B46FA3E1_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m4BA2391807C1D002F74A8CB67558698C6F351991_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mD68A6D6DD6822A0BE245088198A2204D3F93CD71_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_1;
		L_1 = List_1_get_Item_m69BCBAB9625067308DDEAEED5945E4E3B46FA3E1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m68BA62ED8156D18DF6932DDF3C4209C4DAB759A0_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m990D56DF011480F858DF755193A1BFF5E57882A0(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m4BA2391807C1D002F74A8CB67558698C6F351991(__this, L_1, ((*(ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)((ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)(ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mA97FD9B61331596E4585203CFD321A5A614A089D_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) 
{
	ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_6 = V_0;
		int32_t L_7 = V_1;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957)L_8);
		return;
	}

IL_0034:
	{
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_9 = ___0_item;
		List_1_AddWithResize_mC767DD2E08464C2A9BFD3F2AE86A83F85BFCC9A2(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mC767DD2E08464C2A9BFD3F2AE86A83F85BFCC9A2_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mE400A6352C1B01A9F706C2A4A3FCBA5AC451A12B(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_3 = __this->____items;
		int32_t L_4 = V_0;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mB672DBD6433EF042B4CDBF73645F305C2A276654_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m990D56DF011480F858DF755193A1BFF5E57882A0(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_mA97FD9B61331596E4585203CFD321A5A614A089D_inline(__this, ((*(ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)((ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)(ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6 = __this->____size;
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m238CF91C60367B016BDD8A09964082040515A0AE_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_mAFC44D9748F4101BF8F657632E33A3311C99D6BE(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m045047154A230EC8448430997A781AC54644A742_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, int32_t ___1_count, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		int32_t L_7 = ___1_count;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_8 = ___2_item;
		RuntimeObject* L_9 = ___3_comparer;
		int32_t L_10;
		L_10 = Array_BinarySearch_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_mD30773E33859C47A5A24FACC643C8D4012C6EB75(L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_mDF03D1F701EB67E20194B24FED68DFEBC8AA0CF0_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_BinarySearch_m045047154A230EC8448430997A781AC54644A742(__this, 0, L_0, L_1, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m9D4A03B6FFE007D276243FD3E940A9CDED722C72_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_1 = ___0_item;
		RuntimeObject* L_2 = ___1_comparer;
		int32_t L_3;
		L_3 = List_1_BinarySearch_m045047154A230EC8448430997A781AC54644A742(__this, 0, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC17AB7F3BAC157D7364083286A1B496625068AD9_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m387E949B4B12752A48C76D51759A66CBDE5207B6_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m80D06B5A657DB69045A11F9FF589998F0D0473B5(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m8FFAA8633E6418196D2690EEA8254E906B9A5FAC_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, const RuntimeMethod* method) 
{
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_0 = ___0_array;
		List_1_CopyTo_mC7006951BE0B3D3688A2D405315CB1B10BE98140(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mC7006951BE0B3D3688A2D405315CB1B10BE98140_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_0 = __this->____items;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mE400A6352C1B01A9F706C2A4A3FCBA5AC451A12B_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_0 = __this->____items;
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_2 = __this->____items;
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_3 = __this->____items;
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m95133E04136EBCFB47DF8C6AC9E9BCC8AC90FEBE(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 List_1_Find_m02A997CAAAB27E74A5F5BB6FD6ECB45628FD4A9F_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* L_1 = ___0_match;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_2 = __this->____items;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = Predicate_1_Invoke_m10C29B9B5B4D26958247572D94A85AD8008FBD3A_inline(L_1, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_7 = __this->____items;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957));
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* List_1_FindAll_mC159716DB7C0B76957A46FEC26060FD2AC90D51A_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* ___0_match, const RuntimeMethod* method) 
{
	List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* L_1 = (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		List_1__ctor_mB26899986F1FB5766A6D13F9ED0BD83D6E7EF66C(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		V_0 = L_1;
		V_1 = 0;
		goto IL_003d;
	}

IL_0013:
	{
		Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* L_2 = ___0_match;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_3 = __this->____items;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		bool L_7;
		L_7 = Predicate_1_Invoke_m10C29B9B5B4D26958247572D94A85AD8008FBD3A_inline(L_2, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* L_8 = V_0;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_9 = __this->____items;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		List_1_Add_mA97FD9B61331596E4585203CFD321A5A614A089D_inline(L_8, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0039:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003d:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m6A7E41E747D6F2E87573599E9F6F348D5A354688_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_mB4E1E158DAD24B61C4613806D6F074201B0FA54C(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mB4E1E158DAD24B61C4613806D6F074201B0FA54C_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* L_10 = ___2_match;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_11 = __this->____items;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = Predicate_1_Invoke_m10C29B9B5B4D26958247572D94A85AD8008FBD3A_inline(L_10, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m764D43BF393E0EC672258DE38B7406B012698519_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, Action_1_t2518DEA327D7ACE4C30B14D8AFF5D4CFF5221B6F* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t2518DEA327D7ACE4C30B14D8AFF5D4CFF5221B6F* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t2518DEA327D7ACE4C30B14D8AFF5D4CFF5221B6F* L_4 = ___0_action;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m0E4885731BC5FB5682B2F9AAFE2051895D1E43DE_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC4C15C26A301F0CB28B97DFCFE9198EF13B61D16 List_1_GetEnumerator_mF882FF0A9A784FB7B07EA589780A27BD76DC64C8_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC4C15C26A301F0CB28B97DFCFE9198EF13B61D16 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m34968A644217338251F2ACA768630EC8F3B5D9A5((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mE798D9193E2408875252C78EF46AA69A8AC9E7EB_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC4C15C26A301F0CB28B97DFCFE9198EF13B61D16 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m34968A644217338251F2ACA768630EC8F3B5D9A5((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tC4C15C26A301F0CB28B97DFCFE9198EF13B61D16 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m83DF30F0B4DC45B3FCF7FA689CD525367E08F304_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC4C15C26A301F0CB28B97DFCFE9198EF13B61D16 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m34968A644217338251F2ACA768630EC8F3B5D9A5((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_tC4C15C26A301F0CB28B97DFCFE9198EF13B61D16 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m80D06B5A657DB69045A11F9FF589998F0D0473B5_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) 
{
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_0 = __this->____items;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_mF8787F8470EDB50EC2B2F6D5BAEE866038D93580(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC6E0C73D771DB3EBF9929C85A6104EAB450FF7C9_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_3 = __this->____items;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_mE400A6352C1B01A9F706C2A4A3FCBA5AC451A12B(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_15 = ___1_item;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mAFC44D9748F4101BF8F657632E33A3311C99D6BE_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mE400A6352C1B01A9F706C2A4A3FCBA5AC451A12B(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_20 = __this->____items;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_45;
				L_45 = InterfaceFuncInvoker0< ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_44);
				List_1_Insert_mC6E0C73D771DB3EBF9929C85A6104EAB450FF7C9(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_mBE568D92B20DA843EC8D4F715D3B49D250D017DA(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4007A574A4578018527BF9C6C71D599EE37C44D7_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m80D06B5A657DB69045A11F9FF589998F0D0473B5(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m9F304F76856877707E79890515CE09FE5EA6CDDC(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m498279CEACF319BD37A913B980015F0252430FEB_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* L_4 = ___0_match;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m10C29B9B5B4D26958247572D94A85AD8008FBD3A_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* L_16 = ___0_match;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m10C29B9B5B4D26958247572D94A85AD8008FBD3A_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m9F304F76856877707E79890515CE09FE5EA6CDDC_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957));
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_13 = V_0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m0A2949F52C3B69D075597CAFB78362B44220D31C_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m6B3D116BE87905664F33E225BFDAD6F85E73D030_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		List_1_Reverse_mFA4F902852C0D8A3F42FD4F0ADE71D3A1E64E624(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mFA4F902852C0D8A3F42FD4F0ADE71D3A1E64E624_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m86A0BC1B8395AE11EB9C77295CF870F5B575DBED(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m098EF4E5E109CDA60133BBDC9DADF91A95AFEC93_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		List_1_Sort_mFDC39A435F990EBE553E7396F571BCBA185A7C2D(__this, 0, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m4191692288764A64035486B523A8D39A2EC21C57_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_mFDC39A435F990EBE553E7396F571BCBA185A7C2D(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mFDC39A435F990EBE553E7396F571BCBA185A7C2D_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m36664F16D38B9991D799640827A2ED108697EBD4(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m0121BDA7B12CD06DB1E4DD4DFDDEC2CA10309DB8_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, Comparison_1_t9B7FBDDC31C2B4C836D05D7AB3126CC41FEA3F95* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t9B7FBDDC31C2B4C836D05D7AB3126CC41FEA3F95* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t9B7FBDDC31C2B4C836D05D7AB3126CC41FEA3F95* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
		ArraySortHelper_1_Sort_m796F7D769836CE1E115461E94C531F07909CFA59(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* List_1_ToArray_m5380D6E3C4771FF7D84421CE15B65F0FA64A036E_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_1 = ((List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_3 = (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*)(ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_4 = __this->____items;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mBE568D92B20DA843EC8D4F715D3B49D250D017DA_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_6;
				L_6 = InterfaceFuncInvoker0< ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_8 = __this->____items;
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_mE400A6352C1B01A9F706C2A4A3FCBA5AC451A12B(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_14 = V_1;
				(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mE600C905A86B16B075E959BFF6E38F5F40E6DFFB_gshared (const RuntimeMethod* method) 
{
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_0 = (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*)(ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m75A131D8B96AE028D5BFFB6D7A63A8398B816AB9_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_0 = ((List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9260F888361D5D59127D090B7B0F5AF4CC1D05E1_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_2 = ((List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_4 = (EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40*)(EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE5206D9A39616EB6D20F3B730708E63C0E510CF4_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_6 = ((List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_8 = (EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40*)(EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_10 = __this->____items;
		InterfaceActionInvoker2< EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_12 = ((List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_mF5E8707F4A0DAF6A23C90B43F5ACDD8B949B72AA(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m5A52C75149022ED7F5FD2689DC6920DF4B3CB4DB_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, const RuntimeMethod* method) 
{
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_0 = __this->____items;
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m2DF1F4231AB69438BC43DB7040227AB2BEDC9157_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_3 = __this->____items;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_6 = (EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40*)(EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_8 = __this->____items;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_12 = ((List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mABF7449BA576D1E0810C7D49372FB8A112B92D2F_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_m365DA30F9EA9B6E07EDD599BB9DE3D8B22D1C68E_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m80779555B7117AA179CB6C44EEB9E5866B60D51D_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m9CC4815B7DE4112EB408741898B87942A3CB2E37_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 List_1_get_Item_m698872A6418FB0F1C4E80BD9291E530AFF492508_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3EF9E2C31529E41EC0A4085B3FD661F82080947C_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_4 = ___1_value;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m32EFD8C3A8C0856B9EA0369ECBFDE2CCD8E2A587_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_1;
		L_1 = List_1_get_Item_m698872A6418FB0F1C4E80BD9291E530AFF492508(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_mE387016A558EF779663B121EF153671581391EFE_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_mC809E0BAB548190BE0423B8867F1BB6152252F2E(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m3EF9E2C31529E41EC0A4085B3FD661F82080947C(__this, L_1, ((*(EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76*)((EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76*)(EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m8C7E29B8E226EFCAF030759710276AA65A95DB3F_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___0_item, const RuntimeMethod* method) 
{
	EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_6 = V_0;
		int32_t L_7 = V_1;
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76)L_8);
		return;
	}

IL_0034:
	{
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_9 = ___0_item;
		List_1_AddWithResize_m89B2769EC9FB326DF132AD0B0CAB8727605A1F16(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m89B2769EC9FB326DF132AD0B0CAB8727605A1F16_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mAC252F08F7B3C678709F93C921A239CE37DC42AD(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_3 = __this->____items;
		int32_t L_4 = V_0;
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_5 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m40D8A7A8F87A90A988E3ECEFE1FBCDBA8F8D97DA_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_mC809E0BAB548190BE0423B8867F1BB6152252F2E(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m8C7E29B8E226EFCAF030759710276AA65A95DB3F_inline(__this, ((*(EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76*)((EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76*)(EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6 = __this->____size;
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mA4C3F4E233DAC2D3FA6F29543D6FD0B4BCA0F6AC_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m550C0A0A9B23B6475D03E68EB3E14D72462915B6(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_mCD22DC815E42BC04D07E4D9C10087DAE76A53339_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, int32_t ___1_count, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		int32_t L_7 = ___1_count;
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_8 = ___2_item;
		RuntimeObject* L_9 = ___3_comparer;
		int32_t L_10;
		L_10 = Array_BinarySearch_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_mE6217FB46EA5E5C6E5BDA5CB0DFD52A58AC77BD8(L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_mAB0CE59CBD73D8388B365B3207079E4ADB0A6572_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_BinarySearch_mCD22DC815E42BC04D07E4D9C10087DAE76A53339(__this, 0, L_0, L_1, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_mA8370D5BC4D6B56CD7810A6D3CE7A4E2DBBADB8E_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___0_item, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_1 = ___0_item;
		RuntimeObject* L_2 = ___1_comparer;
		int32_t L_3;
		L_3 = List_1_BinarySearch_mCD22DC815E42BC04D07E4D9C10087DAE76A53339(__this, 0, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CE4653B1EA9A2B89BECFE998B35AACFCAD3ACD_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mEB85B300038EC2FC1E486F6BBC87396185963E57_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mE309B0C6A0E715EAF484A5A5168F1A849C8854AB(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mCF855DB106FD37BB2C752B21B5A87FFB0DBC1822_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* ___0_array, const RuntimeMethod* method) 
{
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_0 = ___0_array;
		List_1_CopyTo_m74CF090430293E2652C908A0557F371F950673CC(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m74CF090430293E2652C908A0557F371F950673CC_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_0 = __this->____items;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mAC252F08F7B3C678709F93C921A239CE37DC42AD_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_0 = __this->____items;
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_2 = __this->____items;
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_3 = __this->____items;
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m2DF1F4231AB69438BC43DB7040227AB2BEDC9157(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 List_1_Find_mBFF4EE032B4477D192A6307794FF0EABC25BB92D_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D* L_1 = ___0_match;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_2 = __this->____items;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = Predicate_1_Invoke_m2409CBEB547D61AA8849DE34335DD624EB9EB893_inline(L_1, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_7 = __this->____items;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76));
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* List_1_FindAll_m6D7FB4E37C02BB9B12A61C3F085D817D80592149_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D* ___0_match, const RuntimeMethod* method) 
{
	List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* L_1 = (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		List_1__ctor_m75A131D8B96AE028D5BFFB6D7A63A8398B816AB9(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		V_0 = L_1;
		V_1 = 0;
		goto IL_003d;
	}

IL_0013:
	{
		Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D* L_2 = ___0_match;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_3 = __this->____items;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		bool L_7;
		L_7 = Predicate_1_Invoke_m2409CBEB547D61AA8849DE34335DD624EB9EB893_inline(L_2, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* L_8 = V_0;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_9 = __this->____items;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		List_1_Add_m8C7E29B8E226EFCAF030759710276AA65A95DB3F_inline(L_8, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0039:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003d:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m507CA8215098608BE795CED871439BA819F3C321_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_m684C68729B41154B840D77D3498DCBD79E074CBE(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m684C68729B41154B840D77D3498DCBD79E074CBE_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D* L_10 = ___2_match;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_11 = __this->____items;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = Predicate_1_Invoke_m2409CBEB547D61AA8849DE34335DD624EB9EB893_inline(L_10, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m149E815E2F24D8CF61C639CCAF2F5E5A1B3D038A_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, Action_1_tD1E5B7A23E779937F768A9E52A2947851964EB85* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_tD1E5B7A23E779937F768A9E52A2947851964EB85* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_tD1E5B7A23E779937F768A9E52A2947851964EB85* L_4 = ___0_action;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_5 = __this->____items;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Action_1_Invoke_m5D172456C3A11C47A18CD230AECC78C42FD365A8_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t195600F9A15F4A0274A325677D1110321C2987F1 List_1_GetEnumerator_mD1C2EA1FF5FDAF8A6C10204FC043928619F3667D_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t195600F9A15F4A0274A325677D1110321C2987F1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5849519F50EF0EBF455C9250EA3BCD1C9734EF55((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m45EB8C1C9E923349AE7F56332E590ED142FCC887_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t195600F9A15F4A0274A325677D1110321C2987F1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5849519F50EF0EBF455C9250EA3BCD1C9734EF55((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_t195600F9A15F4A0274A325677D1110321C2987F1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mA54BE2E7885613CAFA304891DCAF94055206BE07_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t195600F9A15F4A0274A325677D1110321C2987F1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5849519F50EF0EBF455C9250EA3BCD1C9734EF55((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		Enumerator_t195600F9A15F4A0274A325677D1110321C2987F1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 31), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mE309B0C6A0E715EAF484A5A5168F1A849C8854AB_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___0_item, const RuntimeMethod* method) 
{
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_0 = __this->____items;
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_m12F680B17EAFF45509992833C8AB3BC4B463B49E(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mE3DC7FC48BA746C062B91F8879911C1FFDC34436_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_3 = __this->____items;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_mAC252F08F7B3C678709F93C921A239CE37DC42AD(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_15 = ___1_item;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m550C0A0A9B23B6475D03E68EB3E14D72462915B6_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mAC252F08F7B3C678709F93C921A239CE37DC42AD(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_20 = __this->____items;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		InterfaceActionInvoker2< EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_45;
				L_45 = InterfaceFuncInvoker0< EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_44);
				List_1_Insert_mE3DC7FC48BA746C062B91F8879911C1FFDC34436(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_mF5E8707F4A0DAF6A23C90B43F5ACDD8B949B72AA(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m6350C55DA816BD8043AB5D4B4D8A0F37412C911B_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mE309B0C6A0E715EAF484A5A5168F1A849C8854AB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_mCF70414FB4CC578952103EEC5B4EECF8AC4C2970(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m33AB0C6ECE963C53582129C7D0ECA627B60807EE_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D* L_4 = ___0_match;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_5 = __this->____items;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		bool L_9;
		L_9 = Predicate_1_Invoke_m2409CBEB547D61AA8849DE34335DD624EB9EB893_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D* L_16 = ___0_match;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_17 = __this->____items;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = Predicate_1_Invoke_m2409CBEB547D61AA8849DE34335DD624EB9EB893_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = L_29;
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mCF70414FB4CC578952103EEC5B4EECF8AC4C2970_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76));
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_13 = V_0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m5EBF25AFAD30E82E584BE0EB79836C64C6B7E4C1_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m3F94795CF18645AECD7603608DE579334808736E_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		List_1_Reverse_m322208834E59E74DAB440F9524CDB84E381B37FC(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m322208834E59E74DAB440F9524CDB84E381B37FC_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_mF0E09D36777D1EFBF387CDFED4CFA49B3549D058(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m0EFB142B13DFB7974D4B5B3D278D28B6F6C41B2D_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		List_1_Sort_m62F044C7E303D8043580A6BE5685EB840343472A(__this, 0, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m771F613CD3CF246755C6EDDE556ED631646EDD68_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m62F044C7E303D8043580A6BE5685EB840343472A(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m62F044C7E303D8043580A6BE5685EB840343472A_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_m921237E4F8B9C9E9EFFE08F9C882881DA098E0DB(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mF39FB6B17257EF638476F1DC8313F8B28D6CCFAE_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, Comparison_1_tE0404D6CFE3CE898FDF33EDE1C0B612D8053AD5B* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_tE0404D6CFE3CE898FDF33EDE1C0B612D8053AD5B* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tE0404D6CFE3CE898FDF33EDE1C0B612D8053AD5B* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
		ArraySortHelper_1_Sort_mF4C915FE947543B1AFDF7122716451A4187E78A4(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* List_1_ToArray_m5EB56DC970B0C7232737FE0F0BD802609610BAE2_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, const RuntimeMethod* method) 
{
	EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_1 = ((List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_3 = (EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40*)(EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_4 = __this->____items;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mF5E8707F4A0DAF6A23C90B43F5ACDD8B949B72AA_gshared (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_6;
				L_6 = InterfaceFuncInvoker0< EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_8 = __this->____items;
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_mAC252F08F7B3C678709F93C921A239CE37DC42AD(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_14 = V_1;
				(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m4E054F5B6E868930A8C95D088C5007BBF12EB3C0_gshared (const RuntimeMethod* method) 
{
	{
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_0 = (EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40*)(EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LockedStack_TryPush_m5BDC2C116499049CE5BA9BE19DA9FB24922D6C35_gshared (LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1 = ((TlsOverPerCoreLockedStacksArrayPool_1_t99785B1054684FDD1A65104B70B272C02AA00542_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_trimBuffers;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____firstStackItemMS = (uint32_t)L_3;
	}

IL_002b:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_4 = __this->____arrays;
		int32_t L_5 = __this->____count;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_array;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_8);
		V_0 = (bool)1;
	}

IL_0046:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LockedStack_TryPop_mDB91FB748A9B7CE098ADDA59FEF9C3E8B893E330_gshared (LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1 = __this->____arrays;
		int32_t L_2 = __this->____count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = V_1;
		__this->____count = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_7 = __this->____arrays;
		int32_t L_8 = __this->____count;
		ArrayElementTypeCheck (L_7, NULL);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
	}

IL_0038:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack_Trim_mE6765D2537AE69D5BE9A7F77BE76190B24237FD2_gshared (LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* __this, uint32_t ___0_tickCount, int32_t ___1_id, int32_t ___2_pressure, int32_t ___3_bucketSize, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* V_1 = NULL;
	bool V_2 = false;
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_1 = ___2_pressure;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		G_B5_0 = ((int32_t)60000);
		goto IL_0019;
	}

IL_0014:
	{
		G_B5_0 = ((int32_t)10000);
	}

IL_0019:
	{
		V_0 = (uint32_t)G_B5_0;
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f0:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_00f9;
					}
				}
				{
					LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_3, NULL);
				}

IL_00f9:
				{
					return;
				}
			}
		});
		try
		{
			{
				LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_4, (&V_2), NULL);
				int32_t L_5 = __this->____count;
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0038_1;
				}
			}
			{
				uint32_t L_6 = __this->____firstStackItemMS;
				uint32_t L_7 = ___0_tickCount;
				if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
				{
					goto IL_0046_1;
				}
			}

IL_0038_1:
			{
				uint32_t L_8 = ___0_tickCount;
				uint32_t L_9 = __this->____firstStackItemMS;
				uint32_t L_10 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
				{
					goto IL_00ee_1;
				}
			}

IL_0046_1:
			{
				V_4 = 1;
				int32_t L_11 = ___2_pressure;
				if ((((int32_t)L_11) == ((int32_t)1)))
				{
					goto IL_0083_1;
				}
			}
			{
				int32_t L_12 = ___2_pressure;
				if ((!(((uint32_t)L_12) == ((uint32_t)2))))
				{
					goto IL_00b3_1;
				}
			}
			{
				V_4 = 8;
				int32_t L_13 = ___3_bucketSize;
				if ((((int32_t)L_13) <= ((int32_t)((int32_t)16384))))
				{
					goto IL_0063_1;
				}
			}
			{
				int32_t L_14 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
			}

IL_0063_1:
			{
				int32_t L_15;
				L_15 = il2cpp_unsafe_sizeof<uint8_t>();
				if ((((int32_t)L_15) <= ((int32_t)((int32_t)16))))
				{
					goto IL_0072_1;
				}
			}
			{
				int32_t L_16 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_0072_1:
			{
				int32_t L_17;
				L_17 = il2cpp_unsafe_sizeof<uint8_t>();
				if ((((int32_t)L_17) <= ((int32_t)((int32_t)32))))
				{
					goto IL_00b3_1;
				}
			}
			{
				int32_t L_18 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_18, 1));
				goto IL_00b3_1;
			}

IL_0083_1:
			{
				V_4 = 2;
				goto IL_00b3_1;
			}

IL_0088_1:
			{
				ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_19 = __this->____arrays;
				int32_t L_20 = __this->____count;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
				int32_t L_21 = V_6;
				__this->____count = L_21;
				int32_t L_22 = V_6;
				int32_t L_23 = L_22;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
				V_5 = L_24;
				ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_25 = __this->____arrays;
				int32_t L_26 = __this->____count;
				ArrayElementTypeCheck (L_25, NULL);
				(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
			}

IL_00b3_1:
			{
				int32_t L_27 = __this->____count;
				if ((((int32_t)L_27) <= ((int32_t)0)))
				{
					goto IL_00c6_1;
				}
			}
			{
				int32_t L_28 = V_4;
				int32_t L_29 = L_28;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
				if ((((int32_t)L_29) > ((int32_t)0)))
				{
					goto IL_0088_1;
				}
			}

IL_00c6_1:
			{
				int32_t L_30 = __this->____count;
				if ((((int32_t)L_30) <= ((int32_t)0)))
				{
					goto IL_00ee_1;
				}
			}
			{
				uint32_t L_31 = __this->____firstStackItemMS;
				if ((!(((uint32_t)L_31) < ((uint32_t)((int32_t)-15001)))))
				{
					goto IL_00ee_1;
				}
			}
			{
				uint32_t L_32 = __this->____firstStackItemMS;
				__this->____firstStackItemMS = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, ((int32_t)15000)));
			}

IL_00ee_1:
			{
				goto IL_00fa;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack__ctor_m48BF912C083D1F7936C86ADE5D2E67C635D446A7_gshared (LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 8), (uint32_t)8);
		__this->____arrays = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrays), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LockedStack_TryPush_m82B3979AB5E28781A560CEA668FE26A16F5DA7F3_gshared (LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1 = ((TlsOverPerCoreLockedStacksArrayPool_1_t8906D917899793F9523A1B1DFB3008CA600B7F00_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_trimBuffers;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____firstStackItemMS = (uint32_t)L_3;
	}

IL_002b:
	{
		CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_4 = __this->____arrays;
		int32_t L_5 = __this->____count;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = ___0_array;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)L_8);
		V_0 = (bool)1;
	}

IL_0046:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* LockedStack_TryPop_mCD2CF7FF64C294717440AC2805C364BFE96249DD_gshared (LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* __this, const RuntimeMethod* method) 
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_1 = __this->____arrays;
		int32_t L_2 = __this->____count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = V_1;
		__this->____count = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_7 = __this->____arrays;
		int32_t L_8 = __this->____count;
		ArrayElementTypeCheck (L_7, NULL);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL);
	}

IL_0038:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack_Trim_m6223F32D4A246447A96A76D92C720547ED1A4F81_gshared (LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* __this, uint32_t ___0_tickCount, int32_t ___1_id, int32_t ___2_pressure, int32_t ___3_bucketSize, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* V_1 = NULL;
	bool V_2 = false;
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* V_3 = NULL;
	int32_t V_4 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_1 = ___2_pressure;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		G_B5_0 = ((int32_t)60000);
		goto IL_0019;
	}

IL_0014:
	{
		G_B5_0 = ((int32_t)10000);
	}

IL_0019:
	{
		V_0 = (uint32_t)G_B5_0;
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f0:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_00f9;
					}
				}
				{
					LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_3, NULL);
				}

IL_00f9:
				{
					return;
				}
			}
		});
		try
		{
			{
				LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_4, (&V_2), NULL);
				int32_t L_5 = __this->____count;
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0038_1;
				}
			}
			{
				uint32_t L_6 = __this->____firstStackItemMS;
				uint32_t L_7 = ___0_tickCount;
				if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
				{
					goto IL_0046_1;
				}
			}

IL_0038_1:
			{
				uint32_t L_8 = ___0_tickCount;
				uint32_t L_9 = __this->____firstStackItemMS;
				uint32_t L_10 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
				{
					goto IL_00ee_1;
				}
			}

IL_0046_1:
			{
				V_4 = 1;
				int32_t L_11 = ___2_pressure;
				if ((((int32_t)L_11) == ((int32_t)1)))
				{
					goto IL_0083_1;
				}
			}
			{
				int32_t L_12 = ___2_pressure;
				if ((!(((uint32_t)L_12) == ((uint32_t)2))))
				{
					goto IL_00b3_1;
				}
			}
			{
				V_4 = 8;
				int32_t L_13 = ___3_bucketSize;
				if ((((int32_t)L_13) <= ((int32_t)((int32_t)16384))))
				{
					goto IL_0063_1;
				}
			}
			{
				int32_t L_14 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
			}

IL_0063_1:
			{
				int32_t L_15;
				L_15 = il2cpp_unsafe_sizeof<Il2CppChar>();
				if ((((int32_t)L_15) <= ((int32_t)((int32_t)16))))
				{
					goto IL_0072_1;
				}
			}
			{
				int32_t L_16 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_0072_1:
			{
				int32_t L_17;
				L_17 = il2cpp_unsafe_sizeof<Il2CppChar>();
				if ((((int32_t)L_17) <= ((int32_t)((int32_t)32))))
				{
					goto IL_00b3_1;
				}
			}
			{
				int32_t L_18 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_18, 1));
				goto IL_00b3_1;
			}

IL_0083_1:
			{
				V_4 = 2;
				goto IL_00b3_1;
			}

IL_0088_1:
			{
				CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_19 = __this->____arrays;
				int32_t L_20 = __this->____count;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
				int32_t L_21 = V_6;
				__this->____count = L_21;
				int32_t L_22 = V_6;
				int32_t L_23 = L_22;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_24 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
				V_5 = L_24;
				CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_25 = __this->____arrays;
				int32_t L_26 = __this->____count;
				ArrayElementTypeCheck (L_25, NULL);
				(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL);
			}

IL_00b3_1:
			{
				int32_t L_27 = __this->____count;
				if ((((int32_t)L_27) <= ((int32_t)0)))
				{
					goto IL_00c6_1;
				}
			}
			{
				int32_t L_28 = V_4;
				int32_t L_29 = L_28;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
				if ((((int32_t)L_29) > ((int32_t)0)))
				{
					goto IL_0088_1;
				}
			}

IL_00c6_1:
			{
				int32_t L_30 = __this->____count;
				if ((((int32_t)L_30) <= ((int32_t)0)))
				{
					goto IL_00ee_1;
				}
			}
			{
				uint32_t L_31 = __this->____firstStackItemMS;
				if ((!(((uint32_t)L_31) < ((uint32_t)((int32_t)-15001)))))
				{
					goto IL_00ee_1;
				}
			}
			{
				uint32_t L_32 = __this->____firstStackItemMS;
				__this->____firstStackItemMS = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, ((int32_t)15000)));
			}

IL_00ee_1:
			{
				goto IL_00fa;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack__ctor_mDB2CB0C8C084B569C05BEFC87650BA56778A4A42_gshared (LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* __this, const RuntimeMethod* method) 
{
	{
		CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_0 = (CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680*)(CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 8), (uint32_t)8);
		__this->____arrays = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrays), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LockedStack_TryPush_m42B8D8A267B151AFF0AB674C698C6E45DFB7BAE7_gshared (LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1 = ((TlsOverPerCoreLockedStacksArrayPool_1_t5B35E5C672C6B144AA2ACF24F6AB93FC7FDEAECC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_trimBuffers;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____firstStackItemMS = (uint32_t)L_3;
	}

IL_002b:
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_4 = __this->____arrays;
		int32_t L_5 = __this->____count;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___0_array;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_8);
		V_0 = (bool)1;
	}

IL_0046:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* LockedStack_TryPop_m57DE5B7210D358D526648221485B4AF85F088405_gshared (LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* __this, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_1 = __this->____arrays;
		int32_t L_2 = __this->____count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = V_1;
		__this->____count = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_7 = __this->____arrays;
		int32_t L_8 = __this->____count;
		ArrayElementTypeCheck (L_7, NULL);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_0038:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack_Trim_m4D537414CE1A41665FDDD1E21D002889BE70B5F8_gshared (LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* __this, uint32_t ___0_tickCount, int32_t ___1_id, int32_t ___2_pressure, int32_t ___3_bucketSize, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* V_1 = NULL;
	bool V_2 = false;
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* V_3 = NULL;
	int32_t V_4 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_1 = ___2_pressure;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		G_B5_0 = ((int32_t)60000);
		goto IL_0019;
	}

IL_0014:
	{
		G_B5_0 = ((int32_t)10000);
	}

IL_0019:
	{
		V_0 = (uint32_t)G_B5_0;
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f0:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_00f9;
					}
				}
				{
					LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_3, NULL);
				}

IL_00f9:
				{
					return;
				}
			}
		});
		try
		{
			{
				LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_4, (&V_2), NULL);
				int32_t L_5 = __this->____count;
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0038_1;
				}
			}
			{
				uint32_t L_6 = __this->____firstStackItemMS;
				uint32_t L_7 = ___0_tickCount;
				if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
				{
					goto IL_0046_1;
				}
			}

IL_0038_1:
			{
				uint32_t L_8 = ___0_tickCount;
				uint32_t L_9 = __this->____firstStackItemMS;
				uint32_t L_10 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
				{
					goto IL_00ee_1;
				}
			}

IL_0046_1:
			{
				V_4 = 1;
				int32_t L_11 = ___2_pressure;
				if ((((int32_t)L_11) == ((int32_t)1)))
				{
					goto IL_0083_1;
				}
			}
			{
				int32_t L_12 = ___2_pressure;
				if ((!(((uint32_t)L_12) == ((uint32_t)2))))
				{
					goto IL_00b3_1;
				}
			}
			{
				V_4 = 8;
				int32_t L_13 = ___3_bucketSize;
				if ((((int32_t)L_13) <= ((int32_t)((int32_t)16384))))
				{
					goto IL_0063_1;
				}
			}
			{
				int32_t L_14 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
			}

IL_0063_1:
			{
				int32_t L_15;
				L_15 = il2cpp_unsafe_sizeof<int32_t>();
				if ((((int32_t)L_15) <= ((int32_t)((int32_t)16))))
				{
					goto IL_0072_1;
				}
			}
			{
				int32_t L_16 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_0072_1:
			{
				int32_t L_17;
				L_17 = il2cpp_unsafe_sizeof<int32_t>();
				if ((((int32_t)L_17) <= ((int32_t)((int32_t)32))))
				{
					goto IL_00b3_1;
				}
			}
			{
				int32_t L_18 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_18, 1));
				goto IL_00b3_1;
			}

IL_0083_1:
			{
				V_4 = 2;
				goto IL_00b3_1;
			}

IL_0088_1:
			{
				Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_19 = __this->____arrays;
				int32_t L_20 = __this->____count;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
				int32_t L_21 = V_6;
				__this->____count = L_21;
				int32_t L_22 = V_6;
				int32_t L_23 = L_22;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
				V_5 = L_24;
				Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_25 = __this->____arrays;
				int32_t L_26 = __this->____count;
				ArrayElementTypeCheck (L_25, NULL);
				(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
			}

IL_00b3_1:
			{
				int32_t L_27 = __this->____count;
				if ((((int32_t)L_27) <= ((int32_t)0)))
				{
					goto IL_00c6_1;
				}
			}
			{
				int32_t L_28 = V_4;
				int32_t L_29 = L_28;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
				if ((((int32_t)L_29) > ((int32_t)0)))
				{
					goto IL_0088_1;
				}
			}

IL_00c6_1:
			{
				int32_t L_30 = __this->____count;
				if ((((int32_t)L_30) <= ((int32_t)0)))
				{
					goto IL_00ee_1;
				}
			}
			{
				uint32_t L_31 = __this->____firstStackItemMS;
				if ((!(((uint32_t)L_31) < ((uint32_t)((int32_t)-15001)))))
				{
					goto IL_00ee_1;
				}
			}
			{
				uint32_t L_32 = __this->____firstStackItemMS;
				__this->____firstStackItemMS = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, ((int32_t)15000)));
			}

IL_00ee_1:
			{
				goto IL_00fa;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack__ctor_m4E8B919AC1335C2FE1D57995CEF343FBE0386EE1_gshared (LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* __this, const RuntimeMethod* method) 
{
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_0 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 8), (uint32_t)8);
		__this->____arrays = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrays), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LockedStack_TryPush_m43E5E7A2F0386A3BEF9CFD2705141DB4E81D52B0_gshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1 = ((TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_trimBuffers;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____firstStackItemMS = (uint32_t)L_3;
	}

IL_002b:
	{
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_4 = __this->____arrays;
		int32_t L_5 = __this->____count;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_8);
		V_0 = (bool)1;
	}

IL_0046:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* LockedStack_TryPop_m25DDC8C5A35FAD9A7D146972888DE02342BD5DAB_gshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_1 = __this->____arrays;
		int32_t L_2 = __this->____count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = V_1;
		__this->____count = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_7 = __this->____arrays;
		int32_t L_8 = __this->____count;
		ArrayElementTypeCheck (L_7, NULL);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
	}

IL_0038:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack_Trim_m2611CBE6E011E00269FB6B0610403EA10DEFCA1C_gshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, uint32_t ___0_tickCount, int32_t ___1_id, int32_t ___2_pressure, int32_t ___3_bucketSize, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* V_1 = NULL;
	bool V_2 = false;
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* V_3 = NULL;
	int32_t V_4 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_1 = ___2_pressure;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		G_B5_0 = ((int32_t)60000);
		goto IL_0019;
	}

IL_0014:
	{
		G_B5_0 = ((int32_t)10000);
	}

IL_0019:
	{
		V_0 = (uint32_t)G_B5_0;
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f0:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_00f9;
					}
				}
				{
					LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_3, NULL);
				}

IL_00f9:
				{
					return;
				}
			}
		});
		try
		{
			{
				LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_4, (&V_2), NULL);
				int32_t L_5 = __this->____count;
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0038_1;
				}
			}
			{
				uint32_t L_6 = __this->____firstStackItemMS;
				uint32_t L_7 = ___0_tickCount;
				if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
				{
					goto IL_0046_1;
				}
			}

IL_0038_1:
			{
				uint32_t L_8 = ___0_tickCount;
				uint32_t L_9 = __this->____firstStackItemMS;
				uint32_t L_10 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
				{
					goto IL_00ee_1;
				}
			}

IL_0046_1:
			{
				V_4 = 1;
				int32_t L_11 = ___2_pressure;
				if ((((int32_t)L_11) == ((int32_t)1)))
				{
					goto IL_0083_1;
				}
			}
			{
				int32_t L_12 = ___2_pressure;
				if ((!(((uint32_t)L_12) == ((uint32_t)2))))
				{
					goto IL_00b3_1;
				}
			}
			{
				V_4 = 8;
				int32_t L_13 = ___3_bucketSize;
				if ((((int32_t)L_13) <= ((int32_t)((int32_t)16384))))
				{
					goto IL_0063_1;
				}
			}
			{
				int32_t L_14 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
			}

IL_0063_1:
			{
				int32_t L_15;
				L_15 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				if ((((int32_t)L_15) <= ((int32_t)((int32_t)16))))
				{
					goto IL_0072_1;
				}
			}
			{
				int32_t L_16 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_0072_1:
			{
				int32_t L_17;
				L_17 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				if ((((int32_t)L_17) <= ((int32_t)((int32_t)32))))
				{
					goto IL_00b3_1;
				}
			}
			{
				int32_t L_18 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_18, 1));
				goto IL_00b3_1;
			}

IL_0083_1:
			{
				V_4 = 2;
				goto IL_00b3_1;
			}

IL_0088_1:
			{
				__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_19 = __this->____arrays;
				int32_t L_20 = __this->____count;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
				int32_t L_21 = V_6;
				__this->____count = L_21;
				int32_t L_22 = V_6;
				int32_t L_23 = L_22;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
				V_5 = L_24;
				__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_25 = __this->____arrays;
				int32_t L_26 = __this->____count;
				ArrayElementTypeCheck (L_25, NULL);
				(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
			}

IL_00b3_1:
			{
				int32_t L_27 = __this->____count;
				if ((((int32_t)L_27) <= ((int32_t)0)))
				{
					goto IL_00c6_1;
				}
			}
			{
				int32_t L_28 = V_4;
				int32_t L_29 = L_28;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
				if ((((int32_t)L_29) > ((int32_t)0)))
				{
					goto IL_0088_1;
				}
			}

IL_00c6_1:
			{
				int32_t L_30 = __this->____count;
				if ((((int32_t)L_30) <= ((int32_t)0)))
				{
					goto IL_00ee_1;
				}
			}
			{
				uint32_t L_31 = __this->____firstStackItemMS;
				if ((!(((uint32_t)L_31) < ((uint32_t)((int32_t)-15001)))))
				{
					goto IL_00ee_1;
				}
			}
			{
				uint32_t L_32 = __this->____firstStackItemMS;
				__this->____firstStackItemMS = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, ((int32_t)15000)));
			}

IL_00ee_1:
			{
				goto IL_00fa;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack__ctor_mDC1C46693A1D2D00E172498967CA24C98E5205D4_gshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_0 = (__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F*)(__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 8), (uint32_t)8);
		__this->____arrays = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrays), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongEnumEqualityComparer_1_Equals_m87226A6E5044C64940B1E62F62D70FCE887EA333_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, Il2CppFullySharedGenericStruct ___0_x, Il2CppFullySharedGenericStruct ___1_y, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, ___0_x, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
		int64_t L_1;
		L_1 = InvokerFuncInvoker1< int64_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_0);
		il2cpp_codegen_memcpy(L_2, ___1_y, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
		int64_t L_3;
		L_3 = InvokerFuncInvoker1< int64_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_2);
		V_0 = L_3;
		int64_t L_4 = V_0;
		return (bool)((((int64_t)L_1) == ((int64_t)L_4))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongEnumEqualityComparer_1_GetHashCode_m61BF4CA9A33282177F9DD76BB500FCF4D37CBBBE_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, Il2CppFullySharedGenericStruct ___0_obj, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, ___0_obj, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
		int64_t L_1;
		L_1 = InvokerFuncInvoker1< int64_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_0);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_0), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongEnumEqualityComparer_1_Equals_m280B770B270E901648E8FDD542D25AF52CA6277D_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2*)((LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongEnumEqualityComparer_1_GetHashCode_m1B5FABC53D2E5598D4A5A1270A520F1B4641E11C_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongEnumEqualityComparer_1__ctor_mE638EE50B5DDF2DB094F6BF8703B23872496CBA6_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongEnumEqualityComparer_1__ctor_mA0738549DB4AF45B2147E7AEE297513FD4CC4F0D_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_information, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		((  void (*) (EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_m0B413ACD3C26D0F35D16683B6A2CEBCC3170E65A_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, const RuntimeMethod* method) 
{
	{
		DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644* L_0 = (DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		DefaultComparer_1__ctor_m1FB334BED8F2ED543F453D87C912BDA6611F368E(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		LowLevelDictionary_2__ctor_mB6B362C12FBFC3BDA4766411FDC767993214AFA2(__this, ((int32_t)17), (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_mB6B362C12FBFC3BDA4766411FDC767993214AFA2_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___1_comparer;
		__this->____comparer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_0);
		int32_t L_1 = ___0_capacity;
		LowLevelDictionary_2_Clear_m7229E17DB8B64A5E367126DD076AA0577B2ED5A7(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_set_Item_mD4043EA322BBAEBB1B94917145129443C56C982B_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* V_0 = NULL;
	{
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = ___0_key;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_3;
		L_3 = LowLevelDictionary_2_Find_m9E8AF9DE397CFCC424FF17C0125FACDB261E3AEB(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = L_3;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_5 = V_0;
		RuntimeObject* L_6 = ___1_value;
		L_5->____value = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____value), (void*)L_6);
		return;
	}

IL_0034:
	{
		int32_t L_7 = ___0_key;
		RuntimeObject* L_8 = ___1_value;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_9;
		L_9 = LowLevelDictionary_2_UncheckedAdd_m4B36B6453ADD7712B323A995014660300EDFD5BB(__this, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_Clear_m7229E17DB8B64A5E367126DD076AA0577B2ED5A7_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = ___0_capacity;
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_2 = (EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6*)(EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)L_1);
		__this->____buckets = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_2);
		__this->____numEntries = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelDictionary_2_Remove_mDC5F88E2C3B2CA9902A5F7F156FDB86D651DFF5F_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* V_1 = NULL;
	Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* V_2 = NULL;
	{
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_1 = ___0_key;
		int32_t L_2;
		L_2 = LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B(__this, L_1, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_2;
		V_1 = (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB*)NULL;
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_3 = __this->____buckets;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		goto IL_0083;
	}

IL_0029:
	{
		RuntimeObject* L_7 = __this->____comparer;
		int32_t L_8 = ___0_key;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_9 = V_2;
		int32_t L_10 = L_9->____key;
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_7, L_8, L_10);
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_12 = V_1;
		if (L_12)
		{
			goto IL_0050;
		}
	}
	{
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_13 = __this->____buckets;
		int32_t L_14 = V_0;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_15 = V_2;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_16 = L_15->____next;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB*)L_16);
		goto IL_005c;
	}

IL_0050:
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_17 = V_1;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_18 = V_2;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_19 = L_18->____next;
		L_17->____next = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->____next), (void*)L_19);
	}

IL_005c:
	{
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = __this->____numEntries;
		__this->____numEntries = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
		return (bool)1;
	}

IL_007a:
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_22 = V_2;
		V_1 = L_22;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_23 = V_2;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_24 = L_23->____next;
		V_2 = L_24;
	}

IL_0083:
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_25 = V_2;
		if (L_25)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* LowLevelDictionary_2_Find_m9E8AF9DE397CFCC424FF17C0125FACDB261E3AEB_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* V_1 = NULL;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_2 = __this->____buckets;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		goto IL_0031;
	}

IL_0014:
	{
		RuntimeObject* L_6 = __this->____comparer;
		int32_t L_7 = ___0_key;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_8 = V_1;
		int32_t L_9 = L_8->____key;
		bool L_10;
		L_10 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_6, L_7, L_9);
		if (!L_10)
		{
			goto IL_002a;
		}
	}
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_11 = V_1;
		return L_11;
	}

IL_002a:
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_12 = V_1;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_13 = L_12->____next;
		V_1 = L_13;
	}

IL_0031:
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_14 = V_1;
		if (L_14)
		{
			goto IL_0014;
		}
	}
	{
		return (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* LowLevelDictionary_2_UncheckedAdd_m4B36B6453ADD7712B323A995014660300EDFD5BB_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_0 = (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		Entry__ctor_m1523ABCDEBE31BA50D6801DB569FB6C6DA0EAB65(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_0;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_1 = V_0;
		int32_t L_2 = ___0_key;
		L_1->____key = L_2;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_3 = V_0;
		RuntimeObject* L_4 = ___1_value;
		L_3->____value = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____value), (void*)L_4);
		int32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B(__this, L_5, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_1 = L_6;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_7 = V_0;
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		L_7->____next = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->____next), (void*)L_11);
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_12 = __this->____buckets;
		int32_t L_13 = V_1;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_14 = V_0;
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB*)L_14);
		int32_t L_15 = __this->____numEntries;
		__this->____numEntries = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = __this->____numEntries;
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_17 = __this->____buckets;
		if ((((int32_t)L_16) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_17)->max_length)), 2)))))
		{
			goto IL_005a;
		}
	}
	{
		LowLevelDictionary_2_ExpandBuckets_m033D9FFFD113915A8BD824AC730C492F01631A9A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_005a:
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_ExpandBuckets_m033D9FFFD113915A8BD824AC730C492F01631A9A_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* V_1 = NULL;
	int32_t V_2 = 0;
	Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_0 = __this->____buckets;
			V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 2)), 1));
			int32_t L_1 = V_0;
			EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_2 = (EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6*)(EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)L_1);
			V_1 = L_2;
			V_2 = 0;
			goto IL_004f_1;
		}

IL_0018_1:
		{
			EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_3 = __this->____buckets;
			int32_t L_4 = V_2;
			int32_t L_5 = L_4;
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
			V_3 = L_6;
			goto IL_0048_1;
		}

IL_0023_1:
		{
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_7 = V_3;
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_8 = L_7->____next;
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_9 = V_3;
			int32_t L_10 = L_9->____key;
			int32_t L_11 = V_0;
			int32_t L_12;
			L_12 = LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B(__this, L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
			V_4 = L_12;
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_13 = V_3;
			EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_14 = V_1;
			int32_t L_15 = V_4;
			int32_t L_16 = L_15;
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
			L_13->____next = L_17;
			Il2CppCodeGenWriteBarrier((void**)(&L_13->____next), (void*)L_17);
			EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_18 = V_1;
			int32_t L_19 = V_4;
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_20 = V_3;
			(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19), (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB*)L_20);
			V_3 = L_8;
		}

IL_0048_1:
		{
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_21 = V_3;
			if (L_21)
			{
				goto IL_0023_1;
			}
		}
		{
			int32_t L_22 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		}

IL_004f_1:
		{
			int32_t L_23 = V_2;
			EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_24 = __this->____buckets;
			if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
			{
				goto IL_0018_1;
			}
		}
		{
			EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_25 = V_1;
			__this->____buckets = L_25;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
			goto IL_0066;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0063;
		}
		throw e;
	}

CATCH_0063:
	{
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_26 = ((OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)IL2CPP_GET_ACTIVE_EXCEPTION(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0066;
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		RuntimeObject* L_0 = __this->____comparer;
		int32_t L_1 = ___0_key;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0, L_1);
		int32_t L_3 = ___1_numBuckets;
		if (!L_3)
		{
			G_B2_0 = ((int32_t)(L_2&((int32_t)2147483647LL)));
			goto IL_0018;
		}
		G_B1_0 = ((int32_t)(L_2&((int32_t)2147483647LL)));
	}
	{
		int32_t L_4 = ___1_numBuckets;
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_0018:
	{
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_5 = __this->____buckets;
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		return ((int32_t)(G_B3_1%G_B3_0));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_m6893497702070CC68AC3BAB751834E9FF68C4528_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, const RuntimeMethod* method) 
{
	{
		DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* L_0 = (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		((  void (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, ((int32_t)17), (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_m2976D36B6439669E09FF4616F9EB6AAB8DDDB62A_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___1_comparer;
		__this->____comparer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_0);
		int32_t L_1 = ___0_capacity;
		((  void (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_set_Item_mCA9C09B6AFCF6CC5CE6A0C40EA78FC75689EF04D_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const uint32_t SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
	const Il2CppFullySharedGenericAny L_10 = L_8;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		int32_t L_3 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_5;
		L_5 = InvokerFuncInvoker1< Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_4: *(void**)L_4));
		V_0 = L_5;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_7 = V_0;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___1_value : &___1_value), SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		il2cpp_codegen_write_instance_field_data(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),1), L_8, SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___1_value : &___1_value), SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_11;
		L_11 = InvokerFuncInvoker2< Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_10: *(void**)L_10));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_Clear_m8EC37682AC495C0E5B8EB7CA373B7D9FE89616D3_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = ___0_capacity;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_2 = (EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)(EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)L_1);
		__this->____buckets = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_2);
		__this->____numEntries = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelDictionary_2_Remove_m70E88A5B684A3A944B6569781B7B3918196A98E6_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	int32_t V_0 = 0;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_1 = NULL;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_2 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_4;
		L_4 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_3: *(void**)L_3), 0);
		V_0 = L_4;
		V_1 = (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)NULL;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_5 = __this->____buckets;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		goto IL_0083;
	}

IL_0029:
	{
		RuntimeObject* L_9 = __this->____comparer;
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_11 = V_2;
		il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_instance_field_data_pointer(L_11, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),0)), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		bool L_13;
		L_13 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_12: *(void**)L_12));
		if (!L_13)
		{
			goto IL_007a;
		}
	}
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_14 = V_1;
		if (L_14)
		{
			goto IL_0050;
		}
	}
	{
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_15 = __this->____buckets;
		int32_t L_16 = V_0;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_17 = V_2;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_18 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2));
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)L_18);
		goto IL_005c;
	}

IL_0050:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_19 = V_1;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_20 = V_2;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_21 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2));
		il2cpp_codegen_write_instance_field_data<Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*>(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2), L_21);
	}

IL_005c:
	{
		int32_t L_22 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_23 = __this->____numEntries;
		__this->____numEntries = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		return (bool)1;
	}

IL_007a:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_24 = V_2;
		V_1 = L_24;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_25 = V_2;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_26 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_instance_field_data_pointer(L_25, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2));
		V_2 = L_26;
	}

IL_0083:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_27 = V_2;
		if (L_27)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_Find_m179CAB1400AF502A22F57DE2B32B403D4BE04671_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_7 = L_0;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	int32_t V_0 = 0;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_1 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_0: *(void**)L_0), 0);
		V_0 = L_1;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_2 = __this->____buckets;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		goto IL_0031;
	}

IL_0014:
	{
		RuntimeObject* L_6 = __this->____comparer;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_8 = V_1;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),0)), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		bool L_10;
		L_10 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_002a;
		}
	}
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_11 = V_1;
		return L_11;
	}

IL_002a:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_12 = V_1;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_13 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2));
		V_1 = L_13;
	}

IL_0031:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_14 = V_1;
		if (L_14)
		{
			goto IL_0014;
		}
	}
	{
		return (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_UncheckedAdd_mFD09849DDF8DDA1917BFE11E1C65CE60CDDA2D6F_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const uint32_t SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_0 = (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		((  void (*) (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_0;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_1 = V_0;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		il2cpp_codegen_write_instance_field_data(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),0), L_2, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_3 = V_0;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___1_value : &___1_value), SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		il2cpp_codegen_write_instance_field_data(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),1), L_4, SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_6;
		L_6 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_5: *(void**)L_5), 0);
		V_1 = L_6;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_7 = V_0;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		il2cpp_codegen_write_instance_field_data<Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*>(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2), L_11);
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_12 = __this->____buckets;
		int32_t L_13 = V_1;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_14 = V_0;
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)L_14);
		int32_t L_15 = __this->____numEntries;
		__this->____numEntries = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = __this->____numEntries;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_17 = __this->____buckets;
		if ((((int32_t)L_16) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_17)->max_length)), 2)))))
		{
			goto IL_005a;
		}
	}
	{
		((  void (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_005a:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_ExpandBuckets_m187E4F5B88425903219951B37753A533F3AED6FB_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	int32_t V_0 = 0;
	EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* V_1 = NULL;
	int32_t V_2 = 0;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_0 = __this->____buckets;
			V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 2)), 1));
			int32_t L_1 = V_0;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_2 = (EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)(EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)L_1);
			V_1 = L_2;
			V_2 = 0;
			goto IL_004f_1;
		}

IL_0018_1:
		{
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_3 = __this->____buckets;
			int32_t L_4 = V_2;
			int32_t L_5 = L_4;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
			V_3 = L_6;
			goto IL_0048_1;
		}

IL_0023_1:
		{
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_7 = V_3;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_8 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2));
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_9 = V_3;
			il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),0)), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
			int32_t L_11 = V_0;
			int32_t L_12;
			L_12 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_11);
			V_4 = L_12;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_13 = V_3;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_14 = V_1;
			int32_t L_15 = V_4;
			int32_t L_16 = L_15;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
			il2cpp_codegen_write_instance_field_data<Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*>(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2), L_17);
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_18 = V_1;
			int32_t L_19 = V_4;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_20 = V_3;
			(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19), (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)L_20);
			V_3 = L_8;
		}

IL_0048_1:
		{
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_21 = V_3;
			if (L_21)
			{
				goto IL_0023_1;
			}
		}
		{
			int32_t L_22 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		}

IL_004f_1:
		{
			int32_t L_23 = V_2;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_24 = __this->____buckets;
			if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
			{
				goto IL_0018_1;
			}
		}
		{
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_25 = V_1;
			__this->____buckets = L_25;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
			goto IL_0066;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0063;
		}
		throw e;
	}

CATCH_0063:
	{
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_26 = ((OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)IL2CPP_GET_ACTIVE_EXCEPTION(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0066;
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		RuntimeObject* L_0 = __this->____comparer;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_1: *(void**)L_1));
		int32_t L_3 = ___1_numBuckets;
		if (!L_3)
		{
			G_B2_0 = ((int32_t)(L_2&((int32_t)2147483647LL)));
			goto IL_0018;
		}
		G_B1_0 = ((int32_t)(L_2&((int32_t)2147483647LL)));
	}
	{
		int32_t L_4 = ___1_numBuckets;
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_0018:
	{
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_5 = __this->____buckets;
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		return ((int32_t)(G_B3_1%G_B3_0));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelListWithIList_1__ctor_mD6F74009D6D4AFB9BB96C40001514D52B63DED1F_gshared (LowLevelListWithIList_1_t424B84BB083921C00880052D4B49074AF66B72FC* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		LowLevelList_1__ctor_mC9E5B6B4FA524A581AE17EB5DE22ADBDDD12F0E7((LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelListWithIList_1__ctor_mF47DAB021B141F7D4CFA37FE294553086C1A50D3_gshared (LowLevelListWithIList_1_t424B84BB083921C00880052D4B49074AF66B72FC* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		LowLevelList_1__ctor_mEA732C8D15FD4B514B237270C203F99613A78085((LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelListWithIList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mCEA65B95971EEAC784E4F80AF3BF71EB1955DB83_gshared (LowLevelListWithIList_1_t424B84BB083921C00880052D4B49074AF66B72FC* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelListWithIList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mABE726834636DA190108D117F993FE91B40E3A5A_gshared (LowLevelListWithIList_1_t424B84BB083921C00880052D4B49074AF66B72FC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEDEAA5F8FFBCB1F2EE5A6E473ED9F5A86691DE05 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE48807999815FCA9A84BDDE46C5E1EC8F29B91DF((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		Enumerator_tEDEAA5F8FFBCB1F2EE5A6E473ED9F5A86691DE05 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelListWithIList_1_System_Collections_IEnumerable_GetEnumerator_mD777BE2CA9FF0E9BD3140C933B907C333130882C_gshared (LowLevelListWithIList_1_t424B84BB083921C00880052D4B49074AF66B72FC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEDEAA5F8FFBCB1F2EE5A6E473ED9F5A86691DE05 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE48807999815FCA9A84BDDE46C5E1EC8F29B91DF((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		Enumerator_tEDEAA5F8FFBCB1F2EE5A6E473ED9F5A86691DE05 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelListWithIList_1__ctor_m7AB0E8E5B20FFDC048A5EF35FE2D5BFC411168BE_gshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelListWithIList_1__ctor_m4B122A24C900A82393070E3BC47A5195E41D0166_gshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelListWithIList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4370070FFE2C281C957687075D458D7367685370_gshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelListWithIList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2192B77A7D1721166B77434FAE475580AEABF35A_gshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0 L_0 = alloca(SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
		Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775((Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelListWithIList_1_System_Collections_IEnumerable_GetEnumerator_mC47144515E8A260A0737260ED6A11C0D5C3B74DE_gshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0 L_0 = alloca(SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
		Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775((Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_0);
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mC9E5B6B4FA524A581AE17EB5DE22ADBDDD12F0E7_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mEA732C8D15FD4B514B237270C203F99613A78085_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0015:
	{
		int32_t L_2 = ___0_capacity;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ((LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_3);
		return;
	}

IL_0024:
	{
		int32_t L_4 = ___0_capacity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_4);
		__this->____items = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_get_Capacity_mC30C6977565ECFBB19B98426BA80DF6B3B46CC21_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items;
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Capacity_mBC06E150C30A932FE95EF6D4A80217BC6E5257DC_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_value;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____items;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_6 = ___0_value;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_6);
		V_0 = L_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_0046:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = ((LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0051:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_get_Count_m1ECF3B013648B0789D39052FD2C562ECEB2B13A4_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelList_1_get_Item_m4A0F25A4B5A0BBD4AD5C423C0B474765E3F65596_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Item_m9F37196A2E5D41B987A97C7BA6F3FCE0A7DF96FD_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		RuntimeObject* L_5 = ___1_value;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (RuntimeObject*)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Add_m46FF684E8A458907434DA7ED0BBD0D9BA39707A4_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = __this->____size;
		LowLevelList_1_EnsureCapacity_m15C5DAD66F3D12BFD786DBE4994ED0A2A9849A0B(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_001e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = __this->____size;
		V_0 = L_4;
		int32_t L_5 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		RuntimeObject* L_7 = ___0_item;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (RuntimeObject*)L_7);
		int32_t L_8 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_EnsureCapacity_m15C5DAD66F3D12BFD786DBE4994ED0A2A9849A0B_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items;
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____items;
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_min;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = ___0_min;
		V_0 = L_6;
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		LowLevelList_1_set_Capacity_mBC06E150C30A932FE95EF6D4A80217BC6E5257DC(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_002f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_AddRange_m9D986B88377A55637A9383B0DD0DF626A7ED2042_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		LowLevelList_1_InsertRange_m41D4839802C22AA8A00BB419B348DE91BCFF52A0(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Clear_m9AA9891F3800276BDB1DE93FF8FABC31BD96E34F_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		int32_t L_2 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		__this->____size = 0;
	}

IL_0022:
	{
		int32_t L_3 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelList_1_Contains_m2B40E433790BBB4FBB0F904BE5DF58C2AA377031_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_item;
		if (L_0)
		{
			goto IL_0030;
		}
	}
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_000c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0025:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_item;
		int32_t L_9;
		L_9 = LowLevelList_1_IndexOf_m1E3798AD4DBE5EFEFA2AA30F9AEB1DA864237839(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)1;
	}

IL_003c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_CopyTo_m9823350B2006D8BFB2BAF2E44C3D3800BFDF5F31_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_IndexOf_m1E3798AD4DBE5EFEFA2AA30F9AEB1DA864237839_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items;
		RuntimeObject* L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Insert_mBD4CC70F7D0997C1FDDA0699DB1417BEC62D49D4_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____items;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_5 = __this->____size;
		LowLevelList_1_EnsureCapacity_m15C5DAD66F3D12BFD786DBE4994ED0A2A9849A0B(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0032:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0058;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0058:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		RuntimeObject* L_16 = ___1_item;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (RuntimeObject*)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_InsertRange_m41D4839802C22AA8A00BB419B348DE91BCFF52A0_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->____size;
		if ((!(((uint32_t)L_2) > ((uint32_t)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 11)));
		RuntimeObject* L_6 = V_0;
		if (!L_6)
		{
			goto IL_00d8;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_7);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_10 = __this->____size;
		int32_t L_11 = V_1;
		LowLevelList_1_EnsureCapacity_m15C5DAD66F3D12BFD786DBE4994ED0A2A9849A0B(__this, ((int32_t)il2cpp_codegen_add(L_10, L_11)), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		int32_t L_12 = ___0_index;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0071;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = __this->____items;
		int32_t L_17 = ___0_index;
		int32_t L_18 = V_1;
		int32_t L_19 = __this->____size;
		int32_t L_20 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, L_15, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_add(L_17, L_18)), ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0071:
	{
		RuntimeObject* L_21 = V_0;
		if ((!(((RuntimeObject*)(LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58*)__this) == ((RuntimeObject*)(RuntimeObject*)L_21))))
		{
			goto IL_00aa;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = __this->____items;
		int32_t L_24 = ___0_index;
		int32_t L_25 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_22, 0, (RuntimeArray*)L_23, L_24, L_25, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = __this->____items;
		int32_t L_27 = ___0_index;
		int32_t L_28 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = __this->____items;
		int32_t L_30 = ___0_index;
		int32_t L_31 = __this->____size;
		int32_t L_32 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_26, ((int32_t)il2cpp_codegen_add(L_27, L_28)), (RuntimeArray*)L_29, ((int32_t)il2cpp_codegen_multiply(L_30, 2)), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), NULL);
		goto IL_00c8;
	}

IL_00aa:
	{
		int32_t L_33 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_33);
		V_2 = L_34;
		RuntimeObject* L_35 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = V_2;
		InterfaceActionInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_35, L_36, 0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = __this->____items;
		int32_t L_39 = ___0_index;
		int32_t L_40 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, (RuntimeArray*)L_38, L_39, L_40, NULL);
	}

IL_00c8:
	{
		int32_t L_41 = __this->____size;
		int32_t L_42 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_41, L_42));
		goto IL_0107;
	}

IL_00d8:
	{
		RuntimeObject* L_43 = ___1_collection;
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_43);
		V_3 = L_44;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fd:
			{
				{
					RuntimeObject* L_45 = V_3;
					if (!L_45)
					{
						goto IL_0106;
					}
				}
				{
					RuntimeObject* L_46 = V_3;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				}

IL_0106:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00f3_1;
			}

IL_00e1_1:
			{
				int32_t L_47 = ___0_index;
				int32_t L_48 = L_47;
				___0_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
				RuntimeObject* L_49 = V_3;
				RuntimeObject* L_50;
				L_50 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_49);
				LowLevelList_1_Insert_mBD4CC70F7D0997C1FDDA0699DB1417BEC62D49D4(__this, L_48, L_50, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
			}

IL_00f3_1:
			{
				RuntimeObject* L_51 = V_3;
				bool L_52;
				L_52 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_51);
				if (L_52)
				{
					goto IL_00e1_1;
				}
			}
			{
				goto IL_0107;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0107:
	{
		int32_t L_53 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_53, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelList_1_Remove_m411B3616E7F6526FE2F2DB2571219DCBCF20312E_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_item;
		int32_t L_1;
		L_1 = LowLevelList_1_IndexOf_m1E3798AD4DBE5EFEFA2AA30F9AEB1DA864237839(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		LowLevelList_1_RemoveAt_m14CF4D511C0CCCECF58915F0156E9C13A3046F13(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_RemoveAll_m2F00F5AB6ECF653E93460FDB1A264B2A604D0C22_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_5 = ___0_match;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____items;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		bool L_10;
		L_10 = Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_inline(L_5, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		if (!L_10)
		{
			goto IL_0012;
		}
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->____size;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_003e;
		}
	}
	{
		return 0;
	}

IL_003e:
	{
		int32_t L_13 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		goto IL_008e;
	}

IL_0044:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____size;
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_0065;
		}
	}
	{
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_17 = ___0_match;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = __this->____items;
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_inline(L_17, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		if (L_22)
		{
			goto IL_0044;
		}
	}

IL_0065:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = __this->____size;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_008e;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = __this->____items;
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = __this->____items;
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		int32_t L_31 = L_30;
		RuntimeObject* L_32 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27), (RuntimeObject*)L_32);
	}

IL_008e:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = __this->____size;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0048;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = __this->____items;
		int32_t L_36 = V_0;
		int32_t L_37 = __this->____size;
		int32_t L_38 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_35, L_36, ((int32_t)il2cpp_codegen_subtract(L_37, L_38)), NULL);
		int32_t L_39 = __this->____size;
		int32_t L_40 = V_0;
		int32_t L_41 = V_0;
		__this->____size = L_41;
		int32_t L_42 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_42, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_39, L_40));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_RemoveAt_m14CF4D511C0CCCECF58915F0156E9C13A3046F13_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->____size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0048;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(L_10, L_11)), NULL);
	}

IL_0048:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = __this->____items;
		int32_t L_13 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_14 = V_0;
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (RuntimeObject*)L_14);
		int32_t L_15 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_15, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__cctor_m5FD95D7F7EC1FD11AADAC0CC7C484A32F7FD0E4A_gshared (const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mD3CD763C70C97727954E6E8A5A8E140EF55EDE9F_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mCDEF1A5F77BCA815F0CDF2C6EB9E91D3909BC5BB_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0015:
	{
		int32_t L_2 = ___0_capacity;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_3);
		return;
	}

IL_0024:
	{
		int32_t L_4 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_4);
		__this->____items = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_get_Capacity_mE34B1F6427145BD1BC7EC9E5F2290027CB634FAC_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Capacity_m72ED35E6CF83B329A983773E2DBE542A235CA53E_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_6 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_6);
		V_0 = L_7;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_0046:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0051:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_get_Count_m606E086DB7EE87F6497FC018F90AE7988456C6A4_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_get_Item_mE1B6F0331605C882D5552283F3E039DAB1CFE249_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Item_m43802D3D871A9B9E33879921E12CC84BADF9D917_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___1_value : &___1_value), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)), L_5, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 4), (void**)(L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)), (void*)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Add_mA79D24F8FC36DBAE441CD350B69E58E559F3A77A_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = __this->____size;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_001e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = __this->____size;
		V_0 = L_4;
		int32_t L_5 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)), L_7, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 4), (void**)(L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)), (void*)L_7);
		int32_t L_8 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_min;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = ___0_min;
		V_0 = L_6;
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_002f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_AddRange_mBE88210260B339F084E453A719D44DBD91025233_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Clear_mE1C2D67C7C00C6323E9825A0ED4946C0C0EAD499_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		int32_t L_2 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		__this->____size = 0;
	}

IL_0022:
	{
		int32_t L_3 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelList_1_Contains_mF7E0C9FBFE03FCE5AB7A8A5F2372A6398AC0F027_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_10 = L_0;
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), L_0);
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_000c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		il2cpp_codegen_memcpy(L_5, (L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		bool L_6 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), L_5);
		if (L_6)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0025:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = __this->____size;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_0030:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		int32_t L_11;
		L_11 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)1;
	}

IL_003c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_CopyTo_mF495B6C8191B5C8929B60BC9F7502FE518DC81DE_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_IndexOf_mF86770392070839AB16F994F40A7B380FAD741CB_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_1: *(void**)L_1), 0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Insert_mECC1247C269DC9FD2DE1250FE6418D768BA1CD16_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_5 = __this->____size;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0032:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0058;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0058:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___1_item : &___1_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)), L_16, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 4), (void**)(L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)), (void*)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_InsertRange_m10381E430332334B43213A556876E789C677A9B0_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_50 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->____size;
		if ((!(((uint32_t)L_2) > ((uint32_t)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 11)));
		RuntimeObject* L_6 = V_0;
		if (!L_6)
		{
			goto IL_00d8;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_7);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_10 = __this->____size;
		int32_t L_11 = V_1;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(__this, ((int32_t)il2cpp_codegen_add(L_10, L_11)), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		int32_t L_12 = ___0_index;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0071;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = __this->____items;
		int32_t L_17 = ___0_index;
		int32_t L_18 = V_1;
		int32_t L_19 = __this->____size;
		int32_t L_20 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, L_15, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_add(L_17, L_18)), ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0071:
	{
		RuntimeObject* L_21 = V_0;
		if ((!(((RuntimeObject*)(LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this) == ((RuntimeObject*)(RuntimeObject*)L_21))))
		{
			goto IL_00aa;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = __this->____items;
		int32_t L_24 = ___0_index;
		int32_t L_25 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_22, 0, (RuntimeArray*)L_23, L_24, L_25, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = __this->____items;
		int32_t L_27 = ___0_index;
		int32_t L_28 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_29 = __this->____items;
		int32_t L_30 = ___0_index;
		int32_t L_31 = __this->____size;
		int32_t L_32 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_26, ((int32_t)il2cpp_codegen_add(L_27, L_28)), (RuntimeArray*)L_29, ((int32_t)il2cpp_codegen_multiply(L_30, 2)), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), NULL);
		goto IL_00c8;
	}

IL_00aa:
	{
		int32_t L_33 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_34 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_33);
		V_2 = L_34;
		RuntimeObject* L_35 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_36 = V_2;
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_35, L_36, 0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_37 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_38 = __this->____items;
		int32_t L_39 = ___0_index;
		int32_t L_40 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, (RuntimeArray*)L_38, L_39, L_40, NULL);
	}

IL_00c8:
	{
		int32_t L_41 = __this->____size;
		int32_t L_42 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_41, L_42));
		goto IL_0107;
	}

IL_00d8:
	{
		RuntimeObject* L_43 = ___1_collection;
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_43);
		V_3 = L_44;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fd:
			{
				{
					RuntimeObject* L_45 = V_3;
					if (!L_45)
					{
						goto IL_0106;
					}
				}
				{
					RuntimeObject* L_46 = V_3;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				}

IL_0106:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00f3_1;
			}

IL_00e1_1:
			{
				int32_t L_47 = ___0_index;
				int32_t L_48 = L_47;
				___0_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
				RuntimeObject* L_49 = V_3;
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_49, (Il2CppFullySharedGenericAny*)L_50);
				InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), __this, L_48, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_50: *(void**)L_50));
			}

IL_00f3_1:
			{
				RuntimeObject* L_51 = V_3;
				bool L_52;
				L_52 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_51);
				if (L_52)
				{
					goto IL_00e1_1;
				}
			}
			{
				goto IL_0107;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0107:
	{
		int32_t L_53 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_53, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelList_1_Remove_m9CA49DFEEE8490053D50ACB37A61A63ECFDF6164_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_RemoveAll_m7EA2BB7ADDD12BF71851BEF2E164FD40AD97757E_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_21 = L_9;
	const Il2CppFullySharedGenericAny L_32 = L_9;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_5 = ___0_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____items;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_0012;
		}
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->____size;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_003e;
		}
	}
	{
		return 0;
	}

IL_003e:
	{
		int32_t L_13 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		goto IL_008e;
	}

IL_0044:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____size;
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_0065;
		}
	}
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_17 = ___0_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = __this->____items;
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		bool L_22;
		L_22 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_21: *(void**)L_21));
		if (L_22)
		{
			goto IL_0044;
		}
	}

IL_0065:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = __this->____size;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_008e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = __this->____items;
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_28 = __this->____items;
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		int32_t L_31 = L_30;
		il2cpp_codegen_memcpy(L_32, (L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_27)), L_32, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 4), (void**)(L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_27)), (void*)L_32);
	}

IL_008e:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = __this->____size;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0048;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_35 = __this->____items;
		int32_t L_36 = V_0;
		int32_t L_37 = __this->____size;
		int32_t L_38 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_35, L_36, ((int32_t)il2cpp_codegen_subtract(L_37, L_38)), NULL);
		int32_t L_39 = __this->____size;
		int32_t L_40 = V_0;
		int32_t L_41 = V_0;
		__this->____size = L_41;
		int32_t L_42 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_42, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_39, L_40));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_RemoveAt_mA9B8AB65576735830A4A79EFF4FCDD16A3E0BC2F_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	memset(V_0, 0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->____size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0048;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(L_10, L_11)), NULL);
	}

IL_0048:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____items;
		int32_t L_13 = __this->____size;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy(L_14, V_0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)), L_14, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 4), (void**)(L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_14);
		int32_t L_15 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_15, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__cctor_m663DD9A631105882B519C495A2D1077501A0FF6E_gshared (const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectStore_1__ctor_mC073D502DFCD3F3D364F2301196FCDCE30AF13AF_gshared (ManagedObjectStore_1_t3396C8673A0AA58902F2D4CF4AB1DE5FF82EAFA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0* V_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0* L_0 = (List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		List_1__ctor_mF300AC9F05AA0B133BF2F23F20A394CBFB501BE8(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		V_0 = L_0;
		List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0* L_1 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)((int32_t)2048));
		List_1_Add_m7B202D3F7B38BBD95830C9CD053E59D577B179D5_inline(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0* L_3 = V_0;
		__this->___m_Chunks = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Chunks), (void*)L_3);
		__this->___m_Length = 1;
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_4 = (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*)il2cpp_codegen_object_new(Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D(L_4, Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		__this->___m_Free = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Free), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ManagedObjectStore_1_GetValue_m5B683FBFB7D45A3705784480F6745CC07E1009A0_gshared (ManagedObjectStore_1_t3396C8673A0AA58902F2D4CF4AB1DE5FF82EAFA2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		int32_t L_0 = ___0_index;
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_3;
		V_4 = L_2;
		goto IL_003c;
	}

IL_0016:
	{
		int32_t L_3 = ___0_index;
		V_0 = ((int32_t)(L_3/((int32_t)2048)));
		int32_t L_4 = ___0_index;
		V_1 = ((int32_t)(L_4%((int32_t)2048)));
		List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0* L_5 = __this->___m_Chunks;
		int32_t L_6 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = List_1_get_Item_m270031BC48D9525088C468580EC91A2888D98020(L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		goto IL_003c;
	}

IL_003c:
	{
		RuntimeObject* L_11 = V_4;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectStore_1_UpdateValue_m4838AA0C9100FC79B6143978C234831DC4CB0BAD_gshared (ManagedObjectStore_1_t3396C8673A0AA58902F2D4CF4AB1DE5FF82EAFA2* __this, int32_t* ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_008f;
		}
	}
	{
		RuntimeObject* L_3 = ___1_value;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		int32_t* L_5 = ___0_index;
		int32_t L_6 = *((int32_t*)L_5);
		V_2 = ((int32_t)(L_6/((int32_t)2048)));
		int32_t* L_7 = ___0_index;
		int32_t L_8 = *((int32_t*)L_7);
		V_3 = ((int32_t)(L_8%((int32_t)2048)));
		List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0* L_9 = __this->___m_Chunks;
		int32_t L_10 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11;
		L_11 = List_1_get_Item_m270031BC48D9525088C468580EC91A2888D98020(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_12 = V_3;
		RuntimeObject* L_13 = ___1_value;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (RuntimeObject*)L_13);
		goto IL_0089;
	}

IL_0044:
	{
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_14 = __this->___m_Free;
		int32_t* L_15 = ___0_index;
		int32_t L_16 = *((int32_t*)L_15);
		Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A(L_14, L_16, Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		int32_t* L_17 = ___0_index;
		int32_t L_18 = *((int32_t*)L_17);
		V_4 = ((int32_t)(L_18/((int32_t)2048)));
		int32_t* L_19 = ___0_index;
		int32_t L_20 = *((int32_t*)L_19);
		V_5 = ((int32_t)(L_20%((int32_t)2048)));
		List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0* L_21 = __this->___m_Chunks;
		int32_t L_22 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23;
		L_23 = List_1_get_Item_m270031BC48D9525088C468580EC91A2888D98020(L_21, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_24 = V_5;
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_25 = V_6;
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (RuntimeObject*)L_25);
		int32_t* L_26 = ___0_index;
		*((int32_t*)L_26) = (int32_t)0;
	}

IL_0089:
	{
		goto IL_0166;
	}

IL_008f:
	{
		RuntimeObject* L_27 = ___1_value;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_0166;
		}
	}
	{
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_29 = __this->___m_Free;
		int32_t L_30;
		L_30 = Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline(L_29, Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_30) > ((int32_t)0))? 1 : 0);
		bool L_31 = V_8;
		if (!L_31)
		{
			goto IL_00f0;
		}
	}
	{
		int32_t* L_32 = ___0_index;
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_33 = __this->___m_Free;
		int32_t L_34;
		L_34 = Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650(L_33, Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		*((int32_t*)L_32) = (int32_t)L_34;
		int32_t* L_35 = ___0_index;
		int32_t L_36 = *((int32_t*)L_35);
		V_9 = ((int32_t)(L_36/((int32_t)2048)));
		int32_t* L_37 = ___0_index;
		int32_t L_38 = *((int32_t*)L_37);
		V_10 = ((int32_t)(L_38%((int32_t)2048)));
		List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0* L_39 = __this->___m_Chunks;
		int32_t L_40 = V_9;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41;
		L_41 = List_1_get_Item_m270031BC48D9525088C468580EC91A2888D98020(L_39, L_40, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_42 = V_10;
		RuntimeObject* L_43 = ___1_value;
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42), (RuntimeObject*)L_43);
		goto IL_0165;
	}

IL_00f0:
	{
		int32_t* L_44 = ___0_index;
		int32_t L_45 = __this->___m_Length;
		V_13 = L_45;
		int32_t L_46 = V_13;
		__this->___m_Length = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = V_13;
		*((int32_t*)L_44) = (int32_t)L_47;
		int32_t* L_48 = ___0_index;
		int32_t L_49 = *((int32_t*)L_48);
		List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0* L_50 = __this->___m_Chunks;
		int32_t L_51;
		L_51 = List_1_get_Count_m05ECA54D59699D34BCBAE36C7B5694EBC84FEA86_inline(L_50, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_14 = (bool)((((int32_t)((((int32_t)L_49) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_51, ((int32_t)2048)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_52 = V_14;
		if (!L_52)
		{
			goto IL_013b;
		}
	}
	{
		List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0* L_53 = __this->___m_Chunks;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_54 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)((int32_t)2048));
		List_1_Add_m7B202D3F7B38BBD95830C9CD053E59D577B179D5_inline(L_53, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
	}

IL_013b:
	{
		int32_t* L_55 = ___0_index;
		int32_t L_56 = *((int32_t*)L_55);
		V_11 = ((int32_t)(L_56/((int32_t)2048)));
		int32_t* L_57 = ___0_index;
		int32_t L_58 = *((int32_t*)L_57);
		V_12 = ((int32_t)(L_58%((int32_t)2048)));
		List_1_tA87C26B7647A541F7ED4048E8DC8E75373A7D4E0* L_59 = __this->___m_Chunks;
		int32_t L_60 = V_11;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_61;
		L_61 = List_1_get_Item_m270031BC48D9525088C468580EC91A2888D98020(L_59, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_62 = V_12;
		RuntimeObject* L_63 = ___1_value;
		(L_61)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62), (RuntimeObject*)L_63);
	}

IL_0165:
	{
	}

IL_0166:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m4AF1A89B7FCCDFD5755D0C21A65347642A37B152_gshared_inline (List_1_t115BFDF2D524B656F091D4CBADCF1C35287684B4* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
{
	WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_6 = V_0;
		int32_t L_7 = V_1;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44)L_8);
		return;
	}

IL_0034:
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_9 = ___0_item;
		List_1_AddWithResize_m45EC1E38A4A473EA779C21FBFEB2C0E39E4C7846(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8D5A11CC70C8E6CD6EE4FD9D625B299AF1B8DCE7_gshared_inline (Predicate_1_t5A30DC3457D23124EDD16C06F92FCB77A9C8A8FD* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m0C6E5F5797F0292E98084D59E0ABAFFF268286FA_gshared_inline (Action_1_t056FB23C2911679EFD99E438847C226611A2247F* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m80D396FB4A0833FF7C877922557D304908137639_gshared_inline (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_item, const RuntimeMethod* method) 
{
	AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_6 = V_0;
		int32_t L_7 = V_1;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D)L_8);
		return;
	}

IL_0034:
	{
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_9 = ___0_item;
		List_1_AddWithResize_mF788423029A2E3E89AC915FCF76B9321BF3C9297(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m29A171697C81FE6F7E5B1F9F461CD59EC0F89903_gshared_inline (Predicate_1_t9076838CC246AB97B4898F3C3167D2368F156B60* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m8DCD9374C39DADB827BDF5FDD50D1296B6AB7337_gshared_inline (Action_1_tA928F1D66218FC51B54636CA1E0ECC813F24ABAC* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCC948FF58491A91722B262CDC9726FB6F3F47A9F_gshared_inline (List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_item, const RuntimeMethod* method) 
{
	SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_6 = V_0;
		int32_t L_7 = V_1;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8)L_8);
		return;
	}

IL_0034:
	{
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_9 = ___0_item;
		List_1_AddWithResize_m05D034E59C75BA1813B3FACE83128DD39278FD29(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m126CC0295668214BCB16D34FA65C7B9EC60B2D05_gshared_inline (Predicate_1_t9C66117359C44DD2D158092707A1241BC3C8C88C* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m6BB7BA364E8A6E097C906E26D2475E7186ECAA1C_gshared_inline (Action_1_tAFC3339124756AC45D404621C0EE01CEF9577D1E* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m3AE842811428E83C33D0CC042E1255A5CA176474_gshared_inline (List_1_t10D8EC0B84DD3EDB54DA9AE6AF65B5AB50BA9D5A* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_item, const RuntimeMethod* method) 
{
	SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_6 = V_0;
		int32_t L_7 = V_1;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76)L_8);
		return;
	}

IL_0034:
	{
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_9 = ___0_item;
		List_1_AddWithResize_m34C5010DD2C825899DC04BB0834DE555D2A426BC(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m930CC0E436A5FFEE5CCAC8A666FCF61C92103AE1_gshared_inline (Predicate_1_t0E4E7545667C4F2A2A04DDC6DB49E5736E94C9F1* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m8BE2DB442464C0D5DDA5ACA7E24A15BB85BBD9E9_gshared_inline (Action_1_t66C5360772D5503D6DBDB6F6B03252BA94E530B6* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m72526F8101C7F826102E2B1B4CC10524470614E3_gshared_inline (List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_item, const RuntimeMethod* method) 
{
	UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_6 = V_0;
		int32_t L_7 = V_1;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484)L_8);
		return;
	}

IL_0034:
	{
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_9 = ___0_item;
		List_1_AddWithResize_mBE6CDEB20A3F167929EAE434CACE11FFDD2A780A(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6B9247DE12D2F0AE888AE93CCD8E7E8D7B57FC0E_gshared_inline (Predicate_1_t1DE99100B4CFA269FC837F0124B03EF65D7CC56A* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m820968B3E64305B489B7AE4A8860C06CB6EF05AA_gshared_inline (Action_1_tD8CB07CA58902BF665659519C88AFF6438B41EB7* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m3F1204F623176FEDFDFCFCFB7A6FDABFB6400A51_gshared_inline (List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_item, const RuntimeMethod* method) 
{
	UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* L_6 = V_0;
		int32_t L_7 = V_1;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02)L_8);
		return;
	}

IL_0034:
	{
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_9 = ___0_item;
		List_1_AddWithResize_m78927281A184FD62DBDEA4AAAD602EF4D78F0DE5(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m945DB5E98852AC2FF13692CA56461DD7960AA8DD_gshared_inline (Predicate_1_tDF08D003F9F07CB21BF5F4E22105378F5BBB4B77* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m17C9B8E71EF529CC587460C4ACC40A76175CB3A8_gshared_inline (Action_1_t04BD4DE10D746830D051B0C2DB8C1DBD86FF4C65* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mA97FD9B61331596E4585203CFD321A5A614A089D_gshared_inline (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) 
{
	ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_6 = V_0;
		int32_t L_7 = V_1;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957)L_8);
		return;
	}

IL_0034:
	{
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_9 = ___0_item;
		List_1_AddWithResize_mC767DD2E08464C2A9BFD3F2AE86A83F85BFCC9A2(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m10C29B9B5B4D26958247572D94A85AD8008FBD3A_gshared_inline (Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m0E4885731BC5FB5682B2F9AAFE2051895D1E43DE_gshared_inline (Action_1_t2518DEA327D7ACE4C30B14D8AFF5D4CFF5221B6F* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m8C7E29B8E226EFCAF030759710276AA65A95DB3F_gshared_inline (List_1_t4B92347C34A27542DDD64956FA9A5E3C66FD599F* __this, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___0_item, const RuntimeMethod* method) 
{
	EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		EntryProcessingInfoU5BU5D_tC87E453CFEF67A461B927E691B6C090248DBFF40* L_6 = V_0;
		int32_t L_7 = V_1;
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76)L_8);
		return;
	}

IL_0034:
	{
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_9 = ___0_item;
		List_1_AddWithResize_m89B2769EC9FB326DF132AD0B0CAB8727605A1F16(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2409CBEB547D61AA8849DE34335DD624EB9EB893_gshared_inline (Predicate_1_t2EAB29E80CD9C2CFFAA2231AFED5E27FBCD1034D* __this, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5D172456C3A11C47A18CD230AECC78C42FD365A8_gshared_inline (Action_1_tD1E5B7A23E779937F768A9E52A2947851964EB85* __this, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_gshared_inline (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
