// Copyright Epic Games, Inc. All Rights Reserved.

#include "MeasurementToolPluginEditorModeToolkit.h"
#include "MeasurementToolPluginEditorMode.h"
#include "Engine/Selection.h"

#include "Modules/ModuleManager.h"
#include "PropertyEditorModule.h"
#include "IDetailsView.h"
#include "EditorModeManager.h"

#define LOCTEXT_NAMESPACE "MeasurementToolPluginEditorModeToolkit"

FMeasurementToolPluginEditorModeToolkit::FMeasurementToolPluginEditorModeToolkit()
{
}

void FMeasurementToolPluginEditorModeToolkit::Init(const TSharedPtr<IToolkitHost>& InitToolkitHost, TWeakObjectPtr<UEdMode> InOwningMode)
{
	FModeToolkit::Init(InitToolkitHost, InOwningMode);
}

void FMeasurementToolPluginEditorModeToolkit::GetToolPaletteNames(TArray<FName>& PaletteNames) const
{
	PaletteNames.Add(NAME_Default);
}


FName FMeasurementToolPluginEditorModeToolkit::GetToolkitFName() const
{
	return FName("MeasurementToolPluginEditorMode");
}

FText FMeasurementToolPluginEditorModeToolkit::GetBaseToolkitName() const
{
	return LOCTEXT("DisplayName", "MeasurementToolPluginEditorMode Toolkit");
}

#undef LOCTEXT_NAMESPACE
