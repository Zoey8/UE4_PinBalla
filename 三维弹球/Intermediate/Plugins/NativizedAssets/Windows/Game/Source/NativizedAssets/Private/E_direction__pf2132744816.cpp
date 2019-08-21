#include "NativizedAssets.h"
#include "E_direction__pf2132744816.h"
FText E__E_direction__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_direction__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_direction__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[9C0974364AC82F898FA783B446B7D704]\", \"AE8E1C134AF3A3AD184DBCB49AE154F1\", \"left\")"), Text); break;
		case E__E_direction__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[9C0974364AC82F898FA783B446B7D704]\", \"C91176B84DF1D8FBBCBC8B97B7C83A10\", \"right\")"), Text); break;
		case E__E_direction__pf::E__E_direction__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
