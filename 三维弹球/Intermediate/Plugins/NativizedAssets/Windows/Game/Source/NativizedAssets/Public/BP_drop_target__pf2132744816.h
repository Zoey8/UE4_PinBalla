#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UTextRenderComponent;
class UStaticMeshComponent;
class USceneComponent;
class UPrimitiveComponent;
class AActor;
#include "BP_drop_target__pf2132744816.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/BP_drop_target.BP_drop_target_C", OverrideNativeName="BP_drop_target_C"))
class ABP_drop_target_C__pf2132744816 : public AActor
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnTargetDrop__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTargetDrop__pf__BP_drop_target_C__pf__MulticastDelegate );
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="drop_text"))
	UTextRenderComponent* bpv__drop_text__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="drop_target"))
	UStaticMeshComponent* bpv__drop_target__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Target Drop", Category="默认", MultiLine="true", OverrideNativeName="OnTargetDrop"))
	FOnTargetDrop__pf__BP_drop_target_C__pf__MulticastDelegate bpv__OnTargetDrop__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable"))
	TEnumAsByte<EMoveComponentAction::Type> b0l_____byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_1"))
	TEnumAsByte<EMoveComponentAction::Type> b0l_____byte_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyComp"))
	UPrimitiveComponent* b0l__K2Node_Event_MyComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Other"))
	AActor* b0l__K2Node_Event_Other__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_Event_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_bSelfMoved"))
	bool b0l__K2Node_Event_bSelfMoved__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_HitLocation"))
	FVector b0l__K2Node_Event_HitLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_HitNormal"))
	FVector b0l__K2Node_Event_HitNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NormalImpulse"))
	FVector b0l__K2Node_Event_NormalImpulse__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Hit"))
	FHitResult b0l__K2Node_Event_Hit__pf;
	ABP_drop_target_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_drop_target_0"))
	void bpf__ExecuteUbergraph_BP_drop_target__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_drop_target__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_drop_target_2"))
	void bpf__ExecuteUbergraph_BP_drop_target__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Category="Collision", Comment="/** \t * Event when this actor bumps into a blocking object, or blocks another actor that bumps into it.\t * This could happen due to things like Character movement, using Set Location with \'sweep\' enabled, or physics simulation.\t * For events when objects overlap (e.g. walking into a trigger) see the \'Overlap\' event.\t *\t * @note For collisions during physics simulation to generate hit events, \'Simulation Generates Hit Events\' must be enabled.\t * @note When receiving a hit from another object\'s movement (bSelfMoved is false), the directions of \'Hit.Normal\' and \'Hit.ImpactNormal\'\t * will be adjusted to indicate force from the other object against this object.\t * @note NormalImpulse will be filled in for physics-simulating bodies, but will be zero for swept-component blocking collisions.\t */", DisplayName="Hit", ToolTip="Event when this actor bumps into a blocking object, or blocks another actor that bumps into it.This could happen due to things like Character movement, using Set Location with \'sweep\' enabled, or physics simulation.For events when objects overlap (e.g. walking into a trigger) see the \'Overlap\' event.@note For collisions during physics simulation to generate hit events, \'Simulation Generates Hit Events\' must be enabled.@note When receiving a hit from another object\'s movement (bSelfMoved is false), the directions of \'Hit.Normal\' and \'Hit.ImpactNormal\'will be adjusted to indicate force from the other object against this object.@note NormalImpulse will be filled in for physics-simulating bodies, but will be zero for swept-component blocking collisions.", CppFromBpEvent, OverrideNativeName="ReceiveHit"))
	virtual void bpf__ReceiveHit__pf(UPrimitiveComponent* bpp__MyComp__pf, AActor* bpp__Other__pf, UPrimitiveComponent* bpp__OtherComp__pf, bool bpp__bSelfMoved__pf, FVector bpp__HitLocation__pf, FVector bpp__HitNormal__pf, FVector bpp__NormalImpulse__pf, FHitResult const& bpp__Hit__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="reset_drop"))
	virtual void bpf__reset_drop__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="drop"))
	virtual void bpf__drop__pf();
public:
};
