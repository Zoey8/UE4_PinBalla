#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
class USceneComponent;
class AActor;
#include "PinBallGameMode__pf2132744816.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/PinBallGameMode.PinBallGameMode_C", OverrideNativeName="PinBallGameMode_C"))
class APinBallGameMode_C__pf2132744816 : public AGameModeBase
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="ActorDestroyedSignature__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__ActorDestroyedSignature__DelegateSignature__SC_0, AActor* , bpp__DestroyedActor__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__ActorDestroyedSignature__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_DestroyedActor"))
	AActor* b0l__K2Node_CustomEvent_DestroyedActor__pf;
	APinBallGameMode_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_PinBallGameMode__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PinBallGameMode__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PinBallGameMode__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="onBallDestroyed"))
	virtual void bpf__onBallDestroyed__pf(AActor* bpp__DestroyedActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="spawn_ball"))
	virtual void bpf__spawn_ball__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
