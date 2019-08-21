#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "BP_post__pf2132744816.h"
class ABP_drop_target_C__pf2132744816;
#include "BP_drop_target_set__pf2132744816.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/BP_drop_target_set.BP_drop_target_set_C", OverrideNativeName="BP_drop_target_set_C"))
class ABP_drop_target_set_C__pf2132744816 : public ABP_post_C__pf2132744816
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnTargetDrop__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE(FOnTargetDrop__pf__BP_drop_target_C__pf__SinglecastDelegate );
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Poststring", Category="默认", MultiLine="true", OverrideNativeName="poststring"))
	FText bpv__poststring__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Target Counter", Category="默认", MultiLine="true", OverrideNativeName="targetCounter"))
	int32 bpv__targetCounter__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Drop Targets", Category="默认", MultiLine="true", OverrideNativeName="DropTargets"))
	TArray<ABP_drop_target_C__pf2132744816*> bpv__DropTargets__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Loop_Counter_Variable"))
	int32 b1l_____int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Array_Index_Variable"))
	int32 b1l_____int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Variable"))
	int32 b1l_____int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ABP_drop_target_C__pf2132744816* b1l__CallFunc_Array_Get_Item__pf;
	ABP_drop_target_set_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_drop_target_set_0"))
	void bpf__ExecuteUbergraph_BP_drop_target_set__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="TargetDropProcess"))
	virtual void bpf__TargetDropProcess__pf();
	virtual void bpf__UserConstructionScript__pf() override;
public:
};
