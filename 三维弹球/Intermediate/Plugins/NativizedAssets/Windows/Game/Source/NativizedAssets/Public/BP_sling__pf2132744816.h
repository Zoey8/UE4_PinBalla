#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class UTimelineComponent;
class UCapsuleComponent;
class AActor;
class ABP_ball_C__pf2132744816;
#include "BP_sling__pf2132744816.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/BP_sling.BP_sling_C", OverrideNativeName="BP_sling_C"))
class ABP_sling_C__pf2132744816 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="collision"))
	UCapsuleComponent* bpv__collision__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(meta=(OverrideNativeName="sling_timeline_morpha_8660C2E44FCB536B72D84890B011040D"))
	float bpv__sling_timeline_morpha_8660C2E44FCB536B72D84890B011040D__pf;
	UPROPERTY(meta=(OverrideNativeName="sling_timeline__Direction_8660C2E44FCB536B72D84890B011040D"))
	TEnumAsByte<ETimelineDirection::Type> bpv__sling_timeline__Direction_8660C2E44FCB536B72D84890B011040D__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="BP_sling", OverrideNativeName="sling_timeline"))
	UTimelineComponent* bpv__sling_timeline__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b0l__K2Node_Event_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Ball"))
	ABP_ball_C__pf2132744816* b0l__K2Node_DynamicCast_AsBP_Ball__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	ABP_sling_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_sling__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_sling__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_sling__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Category="Collision", Comment="/** \t *\tEvent when this actor overlaps another actor, for example a player walking into a trigger.\t *\tFor events when objects have a blocking collision, for example a player hitting a wall, see \'Hit\' events.\t *\t@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.\t */", DisplayName="ActorBeginOverlap", ToolTip="Event when this actor overlaps another actor, for example a player walking into a trigger.For events when objects have a blocking collision, for example a player hitting a wall, see \'Hit\' events.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.", CppFromBpEvent, OverrideNativeName="ReceiveActorBeginOverlap"))
	virtual void bpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf);
	UFUNCTION(meta=(OverrideNativeName="sling_timeline__UpdateFunc"))
	virtual void bpf__sling_timeline__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="sling_timeline__FinishedFunc"))
	virtual void bpf__sling_timeline__FinishedFunc__pf();
public:
};
