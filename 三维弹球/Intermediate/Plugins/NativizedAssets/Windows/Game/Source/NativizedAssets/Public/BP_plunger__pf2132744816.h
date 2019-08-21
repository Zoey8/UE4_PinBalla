#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class UTimelineComponent;
#include "BP_plunger__pf2132744816.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/BP_plunger.BP_plunger_C", OverrideNativeName="BP_plunger_C"))
class ABP_plunger_C__pf2132744816 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="plunger"))
	UStaticMeshComponent* bpv__plunger__pf;
	UPROPERTY(meta=(OverrideNativeName="ChargeTimeLine_chargea_B783483E4813FC13C742A4884157A63C"))
	float bpv__ChargeTimeLine_chargea_B783483E4813FC13C742A4884157A63C__pf;
	UPROPERTY(meta=(OverrideNativeName="ChargeTimeLine__Direction_B783483E4813FC13C742A4884157A63C"))
	TEnumAsByte<ETimelineDirection::Type> bpv__ChargeTimeLine__Direction_B783483E4813FC13C742A4884157A63C__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="BP_plunger", OverrideNativeName="ChargeTimeLine"))
	UTimelineComponent* bpv__ChargeTimeLine__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable"))
	TEnumAsByte<EMoveComponentAction::Type> b0l_____byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf;
	ABP_plunger_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_plunger_0"))
	void bpf__ExecuteUbergraph_BP_plunger__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_plunger__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_plunger__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_plunger__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="release"))
	virtual void bpf__release__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="charge"))
	virtual void bpf__charge__pf();
	UFUNCTION(meta=(OverrideNativeName="ChargeTimeLine__UpdateFunc"))
	virtual void bpf__ChargeTimeLine__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="ChargeTimeLine__FinishedFunc"))
	virtual void bpf__ChargeTimeLine__FinishedFunc__pf();
public:
};
