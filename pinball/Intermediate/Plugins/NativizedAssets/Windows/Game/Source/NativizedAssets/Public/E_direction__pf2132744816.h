#pragma once
#include "E_direction__pf2132744816.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/blueprints/E_direction.E_direction", OverrideNativeName="E_direction", EnumDisplayNameFn="E__E_direction__pf__GetUserFriendlyName") )
enum class E__E_direction__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_direction::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_direction::NewEnumerator1"),
	E__E_direction__pf_MAX = 2 UMETA(OverrideName = "E_direction::E_MAX"),
};
FText E__E_direction__pf__GetUserFriendlyName(int32 InValue);
