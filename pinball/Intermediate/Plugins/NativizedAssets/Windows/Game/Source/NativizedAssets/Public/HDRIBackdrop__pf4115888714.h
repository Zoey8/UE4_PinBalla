#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UMaterialInstanceDynamic;
class UStaticMesh;
class UTextureCube;
class USceneComponent;
class UStaticMeshComponent;
class USkyLightComponent;
#include "HDRIBackdrop__pf4115888714.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/DatasmithContent/Datasmith/HDRIBackdrop.HDRIBackdrop_C", OverrideNativeName="HDRIBackdrop_C"))
class AHDRIBackdrop_C__pf4115888714 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="Skylight"))
	USkyLightComponent* bpv__Skylight__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="Geometry"))
	UStaticMeshComponent* bpv__Geometry__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="默认", OverrideNativeName="SceneComponent"))
	USceneComponent* bpv__SceneComponent__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Cubemap", Category="HDRI Backdrop", MultiLine="true", tooltip="Assign an imported HDR image that will be projected on the ground & backdrop and used by the built-in skylight source.", OverrideNativeName="Cubemap"))
	UTextureCube* bpv__Cubemap__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Material Instance", Category="HDRI Backdrop", MultiLine="true", OverrideNativeName="MaterialInstance"))
	UMaterialInstanceDynamic* bpv__MaterialInstance__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Intensity", Category="HDRI Backdrop", MultiLine="true", ClampMin="0", UIMin="0", UIMax="10", tooltip="Intensity of the embedded skylight and emissivity of the backdrop. Higher values will results brighter ambient lighting sampled from the HDR image (cd/m2).", OverrideNativeName="Intensity"))
	float bpv__Intensity__pf;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(DisplayName="Size", Category="HDRI Backdrop", MultiLine="true", tooltip="The size of the mesh used to project the HDR image (Meters).", UIMin="1.0", ClampMin="1.0", OverrideNativeName="Size"))
	float bpv__Size__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, meta=(DisplayName="Lighting Distance Factor", Category="HDRI Backdrop", MultiLine="true", tooltip="Specify the ground area that will be affected by lighting and shadows. Lit area will have slightly different shading depending on the Intensity and other lighting parameters in the scene.", UIMin="0", UIMax="5", ClampMin="0", ClampMax="5", OverrideNativeName="LightingDistanceFactor"))
	float bpv__LightingDistanceFactor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, meta=(DisplayName="Use Camera Projection", Category="HDRI Backdrop", MultiLine="true", tooltip="Disables ground tracking makes the HDRI image follow the camera.", OverrideNativeName="UseCameraProjection"))
	bool bpv__UseCameraProjection__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, meta=(DisplayName="Mesh", Category="HDRI Backdrop", MultiLine="true", tooltip="Specify a custom Static Mesh object to use as a backdrop.", OverrideNativeName="Mesh"))
	UStaticMesh* bpv__Mesh__pf;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(DisplayName="Projection Center", Category="HDRI Backdrop", MultiLine="true", tooltip="Defines the projection point of the HDR image.", MakeEditWidget="true", OverrideNativeName="ProjectionCenter"))
	FVector bpv__ProjectionCenter__pf;
	AHDRIBackdrop_C__pf4115888714(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CreateMaterial"))
	virtual void bpf__CreateMaterial__pf();
public:
};
