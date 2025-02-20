#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
184,
193,
194,
195,
196,
197,
198,
199,
201,
202,
258,
259,
260,
283,
284,
285,
301,
302,
303,
389,
390,
391,
394,
424,
425,
427,
429,
431,
433,
438,
446,
447,
448,
449,
450,
451,
452,
453,
528,
535,
536,
604,
610,
613,
615,
620,
621,
623,
624,
628,
629,
631,
632,
635,
636,
637,
640,
642,
645,
647,
649,
658,
716,
718,
720,
730,
731,
732,
734,
739,
740,
741,
742,
743,
751,
752,
753,
757,
758,
760,
762,
952,
1105,
1106,
6803,
6804,
6806,
6807,
6808,
6809,
6810,
6812,
6813,
6814,
6829,
6831,
6836,
6838,
6840,
6842,
6893,
6894,
6896,
6897,
6898,
6899,
6900,
6902,
6904,
7856,
7860,
7862,
7863,
7864,
7865,
8248,
8249,
8250,
8251,
8267,
8268,
8269,
8312,
8377,
8387,
8388,
8389,
8390,
8391,
8662,
8666,
8667,
8694,
8728,
8735,
8742,
8753,
8756,
8777,
8852,
8854,
8863,
8865,
8866,
8873,
8888,
8908,
8909,
8917,
8919,
8926,
8927,
8930,
8935,
8941,
8942,
8949,
8951,
8963,
8966,
8967,
8968,
8979,
8989,
8995,
8996,
8997,
8999,
9000,
9017,
9019,
9034,
9052,
9079,
9103,
9104,
9568,
9647,
9648,
9800,
9801,
9805,
9808,
9853,
10232,
10233,
10429,
10434,
10444,
11067,
11088,
11090,
11092,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw (int,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw (int,int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal ();
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 184,
ves_icall_System_Array_InternalCreate,
// token 193,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 194,
ves_icall_System_Array_CanChangePrimitive,
// token 195,
ves_icall_System_Array_FastCopy,
// token 196,
ves_icall_System_Array_GetLengthInternal_raw,
// token 197,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 198,
ves_icall_System_Array_GetGenericValue_icall,
// token 199,
ves_icall_System_Array_GetValueImpl_raw,
// token 201,
ves_icall_System_Array_SetValueImpl_raw,
// token 202,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 258,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 259,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 260,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 283,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 284,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 285,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 301,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 302,
ves_icall_System_Enum_InternalGetCorElementType,
// token 303,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 389,
ves_icall_System_Environment_get_ProcessorCount,
// token 390,
ves_icall_System_Environment_get_TickCount,
// token 391,
ves_icall_System_Environment_get_TickCount64,
// token 394,
ves_icall_System_Environment_FailFast_raw,
// token 424,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 425,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 427,
ves_icall_System_GC_SuppressFinalize_raw,
// token 429,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 431,
ves_icall_System_GC_GetGCMemoryInfo,
// token 433,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 438,
ves_icall_System_Object_MemberwiseClone_raw,
// token 446,
ves_icall_System_Math_Ceiling,
// token 447,
ves_icall_System_Math_Cos,
// token 448,
ves_icall_System_Math_Floor,
// token 449,
ves_icall_System_Math_Pow,
// token 450,
ves_icall_System_Math_Sin,
// token 451,
ves_icall_System_Math_Sqrt,
// token 452,
ves_icall_System_Math_Tan,
// token 453,
ves_icall_System_Math_ModF,
// token 528,
ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
// token 535,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 536,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 604,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 610,
ves_icall_RuntimeType_make_array_type_raw,
// token 613,
ves_icall_RuntimeType_make_byref_type_raw,
// token 615,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 620,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 621,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 623,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 624,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 628,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 629,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 631,
ves_icall_System_RuntimeType_getFullName_raw,
// token 632,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 635,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 636,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 637,
ves_icall_RuntimeType_GetFields_native_raw,
// token 640,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 642,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 645,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 647,
ves_icall_RuntimeType_GetName_raw,
// token 649,
ves_icall_RuntimeType_GetNamespace_raw,
// token 658,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 716,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 718,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 720,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 730,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 731,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 732,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 734,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 739,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 740,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 741,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 742,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 743,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 751,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 752,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 753,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 757,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 758,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 760,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 762,
ves_icall_System_String_FastAllocateString_raw,
// token 952,
ves_icall_System_Type_internal_from_handle_raw,
// token 1105,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1106,
ves_icall_System_ValueType_Equals_raw,
// token 6803,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6804,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6806,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6807,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6808,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6809,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6810,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6812,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6813,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6814,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6829,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6831,
mono_monitor_exit_icall_raw,
// token 6836,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6838,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6840,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6842,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6893,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6894,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6896,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6897,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6898,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6899,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6900,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6902,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6904,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7856,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7860,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7862,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7863,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7864,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7865,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 8248,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 8249,
ves_icall_System_GCHandle_InternalFree_raw,
// token 8250,
ves_icall_System_GCHandle_InternalGet_raw,
// token 8251,
ves_icall_System_GCHandle_InternalSet_raw,
// token 8267,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 8268,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 8269,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 8312,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 8377,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 8387,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 8388,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 8389,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 8390,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8391,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
// token 8662,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8666,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8667,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8694,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8728,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8735,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8742,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8753,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8756,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8777,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8852,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8854,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8863,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8865,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 8866,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8873,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8888,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8908,
ves_icall_reflection_get_token_raw,
// token 8909,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8917,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8919,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8926,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8927,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8930,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8935,
ves_icall_reflection_get_token_raw,
// token 8941,
ves_icall_get_method_info_raw,
// token 8942,
ves_icall_get_method_attributes,
// token 8949,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8951,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8963,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8966,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8967,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8968,
ves_icall_reflection_get_token_raw,
// token 8979,
ves_icall_InternalInvoke_raw,
// token 8989,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8995,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8996,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8997,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8999,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 9000,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 9017,
ves_icall_InvokeClassConstructor_raw,
// token 9019,
ves_icall_InternalInvoke_raw,
// token 9034,
ves_icall_reflection_get_token_raw,
// token 9052,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 9079,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 9103,
ves_icall_reflection_get_token_raw,
// token 9104,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9568,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9647,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9648,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 9800,
ves_icall_ModuleBuilder_basic_init_raw,
// token 9801,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 9805,
ves_icall_ModuleBuilder_getToken_raw,
// token 9808,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9853,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 10232,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 10233,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10429,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 10434,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10444,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 11067,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 11088,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 11090,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 11092,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
4,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
};
