#include "MeasurementToolPluginEditorModeCommands.h"
#include "Framework/Commands/UICommandInfo.h"
#include "Framework/Commands/UICommandList.h"

#define LOCTEXT_NAMESPACE "MeasurementToolPluginEditorModeCommands"

void FMeasurementToolPluginEditorModeCommands::RegisterCommands()
{
	UI_COMMAND(StartMeasurementTool, "Start Measurement Tool", "Starts the measurement tool.", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
