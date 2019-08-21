#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class UTimelineComponent;
class UCapsuleComponent;
class AActor;
class ABP_ball_C__pf2132744816;
#include "BP_bumper__pf2132744816.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/BP_bumper.BP_bumper_C", OverrideNativeName="BP_bumper_C"))
class ABP_bumper_C__pf2132744816 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="Capsule"))
	UCapsuleComponent* bpv__Capsule__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="bumperBot"))
	UStaticMeshComponent* bpv__bumperBot__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="bumper"))
	UStaticMeshComponent* bpv__bumper__pf;
	UPROPERTY(meta=(OverrideNativeName="BumperTimeLine_bumpera_66E6AADE4638489F3A7083AE3994B6D0"))
	float bpv__BumperTimeLine_bumpera_66E6AADE4638489F3A7083AE3994B6D0__pf;
	UPROPERTY(meta=(OverrideNativeName="BumperTimeLine__Direction_66E6AADE4638489F3A7083AE3994B6D0"))
	TEnumAsByte<ETimelineDirection::Type> bpv__BumperTimeLine__Direction_66E6AADE4638489F3A7083AE3994B6D0__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="BP_bumper", OverrideNativeName="BumperTimeLine"))
	UTimelineComponent* bpv__BumperTimeLine__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b0l__K2Node_Event_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_ball"))
	ABP_ball_C__pf2132744816* b0l__K2Node_CustomEvent_ball__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Ball"))
	ABP_ball_C__pf2132744816* b0l__K2Node_DynamicCast_AsBP_Ball__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf;
	ABP_bumper_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_bumper__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_bumper__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_bumper__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_bumper__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="bump"))
	virtual void bpf__bump__pf(ABP_ball_C__pf2132744816* bpp__ball__pf);
	UFUNCTION(meta=(Category="Collision", Comment="/** \t *\tEvent when this actor overlaps another actor, for example a player walking into a trigger.\t *\tFor events when objects have a blocking collision, for example a player hitting a wall, see \'Hit\' events.\t *\t@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.\t */", DisplayName="ActorBeginOverlap", ToolTip="Event when this actor overlaps another actor, for example a player walking into a trigger.For events when objects have a blocking collision, for example a player hitting a wall, see \'Hit\' events.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.", CppFromBpEvent, OverrideNativeName="ReceiveActorBeginOverlap"))
	virtual void bpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf);
	UFUNCTION(meta=(OverrideNativeName="BumperTimeLine__UpdateFunc"))
	virtual void bpf__BumperTimeLine__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="BumperTimeLine__FinishedFunc"))
	virtual void bpf__BumperTimeLine__FinishedFunc__pf();
public:
};
