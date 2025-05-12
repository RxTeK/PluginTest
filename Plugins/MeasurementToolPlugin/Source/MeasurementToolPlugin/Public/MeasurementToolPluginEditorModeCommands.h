#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "EditorStyleSet.h" // Ou "LevelEditorStyle" selon version

class FMeasurementToolPluginEditorModeCommands : public TCommands<FMeasurementToolPluginEditorModeCommands>
{
public:
	FMeasurementToolPluginEditorModeCommands()
		: TCommands<FMeasurementToolPluginEditorModeCommands>(
			TEXT("MeasurementToolPluginEditorMode"), // Nom interne
			NSLOCTEXT("Contexts", "MeasurementToolPluginEditorMode", "Measurement Tool Plugin"), // Nom lisible
			NAME_None,
			FAppStyle::GetAppStyleSetName()
		)
	{}

	virtual void RegisterCommands() override;

public:
	TSharedPtr<FUICommandInfo> StartMeasurementTool;
};
