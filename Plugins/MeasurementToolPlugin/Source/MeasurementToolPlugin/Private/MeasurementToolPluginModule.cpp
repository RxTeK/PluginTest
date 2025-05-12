#include "MeasurementToolPluginModule.h"
#include "MeasurementToolPluginEditorModeCommands.h"

#define LOCTEXT_NAMESPACE "FMeasurementToolPluginEditorModeModule"

void FMeasurementToolPluginEditorModeModule::StartupModule()
{
    FMeasurementToolPluginEditorModeCommands::Register();
}

void FMeasurementToolPluginEditorModeModule::ShutdownModule()
{
    FMeasurementToolPluginEditorModeCommands::Unregister();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FMeasurementToolPluginEditorModeModule, MeasurementToolPluginEditorMode)
