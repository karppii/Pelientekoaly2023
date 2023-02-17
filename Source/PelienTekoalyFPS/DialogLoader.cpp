// copyright seppo.nevalainen@karelia.fi 2021


#include "DialogLoader.h"
#include "PELIENTEKOALYFPS.h"
#include "Misc/Paths.h"

bool UDialogLoader::FileSaveString(FString SaveTextB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::ProjectDir() + FileNameB));
}

bool UDialogLoader::FileLoadString(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectDir() + FileNameA));
}
