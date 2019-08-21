#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "E_direction__pf2132744816.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USoundBase;
#include "BP_fliper__pf2132744816.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/BP_fliper.BP_fliper_C", OverrideNativeName="BP_fliper_C"))
class ABP_fliper_C__pf2132744816 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="fliper"))
	UStaticMeshComponent* bpv__fliper__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Flipertype", Category="默认", MultiLine="true", OverrideNativeName="flipertype"))
	E__E_direction__pf bpv__flipertype__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Startrotation", Category="默认", MultiLine="true", OverrideNativeName="startrotation"))
	FRotator bpv__startrotation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Endrotation", Category="默认", MultiLine="true", OverrideNativeName="endrotation"))
	FRotator bpv__endrotation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable"))
	TEnumAsByte<EMoveComponentAction::Type> b0l_____byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_1"))
	TEnumAsByte<EMoveComponentAction::Type> b0l_____byte_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable_2"))
	E__E_direction__pf b0l_____byte_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___object_Variable"))
	USoundBase* b0l_____object_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___object_Variable_1"))
	USoundBase* b0l_____object_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default"))
	USoundBase* b0l__K2Node_Select_Default__pf;
	ABP_fliper_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_fliper_0"))
	void bpf__ExecuteUbergraph_BP_fliper__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_fliper_1"))
	void bpf__ExecuteUbergraph_BP_fliper__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_fliper__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="fliperdown"))
	virtual void bpf__fliperdown__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="fliperup"))
	virtual void bpf__fliperup__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
