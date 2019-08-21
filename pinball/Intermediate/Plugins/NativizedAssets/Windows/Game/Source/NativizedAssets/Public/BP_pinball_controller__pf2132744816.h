#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "E_direction__pf2132744816.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
class ABP_plunger_C__pf2132744816;
class ABP_fliper_C__pf2132744816;
#include "BP_pinball_controller__pf2132744816.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/BP_pinball_controller.BP_pinball_controller_C", OverrideNativeName="BP_pinball_controller_C"))
class ABP_pinball_controller_C__pf2132744816 : public APlayerController
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Left Fliper", Category="默认", MultiLine="true", OverrideNativeName="leftFliper"))
	TArray<ABP_fliper_C__pf2132744816*> bpv__leftFliper__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Right Fliper", Category="默认", MultiLine="true", OverrideNativeName="rightFliper"))
	TArray<ABP_fliper_C__pf2132744816*> bpv__rightFliper__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Plunger", Category="默认", MultiLine="true", OverrideNativeName="plunger"))
	ABP_plunger_C__pf2132744816* bpv__plunger__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_2"))
	FKey b0l__K2Node_InputActionEvent_Key_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___struct_Variable"))
	FKey b0l_____struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_1"))
	FKey b0l__K2Node_InputActionEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___struct_Variable_1"))
	FKey b0l_____struct_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_3"))
	FKey b0l__K2Node_InputActionEvent_Key_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Array_Index_Variable"))
	int32 b0l_____int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Loop_Counter_Variable"))
	int32 b0l_____int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Array_Index_Variable_1"))
	int32 b0l_____int_Array_Index_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_6"))
	FKey b0l__K2Node_InputActionEvent_Key_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Loop_Counter_Variable_1"))
	int32 b0l_____int_Loop_Counter_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Loop_Counter_Variable_2"))
	int32 b0l_____int_Loop_Counter_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Array_Index_Variable_2"))
	int32 b0l_____int_Array_Index_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Loop_Counter_Variable_3"))
	int32 b0l_____int_Loop_Counter_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_7"))
	FKey b0l__K2Node_InputActionEvent_Key_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___struct_Variable_2"))
	FKey b0l_____struct_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Array_Index_Variable_3"))
	int32 b0l_____int_Array_Index_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Loop_Counter_Variable_4"))
	int32 b0l_____int_Loop_Counter_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Array_Index_Variable_4"))
	int32 b0l_____int_Array_Index_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_4"))
	FKey b0l__K2Node_InputActionEvent_Key_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ABP_fliper_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ABP_fliper_C__pf2132744816* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_5"))
	FKey b0l__K2Node_InputActionEvent_Key_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	ABP_fliper_C__pf2132744816* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	ABP_fliper_C__pf2132744816* b0l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_3"))
	ABP_fliper_C__pf2132744816* b0l__CallFunc_Array_Get_Item_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_4"))
	ABP_fliper_C__pf2132744816* b0l__CallFunc_Array_Get_Item_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_1"))
	TArray<ABP_plunger_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_5"))
	ABP_plunger_C__pf2132744816* b0l__CallFunc_Array_Get_Item_5__pf;
	ABP_pinball_controller_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_pinball_controller__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_pinball_controller__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_pinball_controller__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_pinball_controller__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_pinball_controller__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_pinball_controller__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_pinball_controller__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_pinball_controller__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_pinball_controller__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_pinball_controller__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_pinball_controller__pf_10(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="FindAllplunger"))
	virtual void bpf__FindAllplunger__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="FindAllFlipers"))
	virtual void bpf__FindAllFlipers__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_tilt_right_K2Node_InputActionEvent_0"))
	virtual void bpf__InpActEvt_tilt_right_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_tilt_left_K2Node_InputActionEvent_1"))
	virtual void bpf__InpActEvt_tilt_left_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_charge_K2Node_InputActionEvent_2"))
	virtual void bpf__InpActEvt_charge_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_charge_K2Node_InputActionEvent_3"))
	virtual void bpf__InpActEvt_charge_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_right_fliper_K2Node_InputActionEvent_4"))
	virtual void bpf__InpActEvt_right_fliper_K2Node_InputActionEvent_4__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_right_fliper_K2Node_InputActionEvent_5"))
	virtual void bpf__InpActEvt_right_fliper_K2Node_InputActionEvent_5__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_left_fliper_K2Node_InputActionEvent_6"))
	virtual void bpf__InpActEvt_left_fliper_K2Node_InputActionEvent_6__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_left_fliper_K2Node_InputActionEvent_7"))
	virtual void bpf__InpActEvt_left_fliper_K2Node_InputActionEvent_7__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="tilt"))
	virtual void bpf__tilt__pf(E__E_direction__pf bpp__direction__pf);
public:
};
