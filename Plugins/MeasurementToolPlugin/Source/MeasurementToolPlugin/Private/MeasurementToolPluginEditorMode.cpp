#include "MeasurementToolPluginEditorMode.h"
#include "MeasurementToolPluginEditorModeCommands.h"

void FMeasurementToolPluginEditorMode::Enter()
{
    FEdMode::Enter();

    // Crée le CommandList ici (tu l'avais oublié !)
    CommandList = MakeShareable(new FUICommandList);

    const FMeasurementToolPluginEditorModeCommands& Commands = FMeasurementToolPluginEditorModeCommands::Get();

    // Attention : Commands est une référence, donc c’est Commands.StartMeasurementTool (pas ->)
    CommandList->MapAction(
        Commands.StartMeasurementTool,
        FExecuteAction::CreateSP(this, &FMeasurementToolPluginEditorMode::StartMeasurementTool)
    );
}

void FMeasurementToolPluginEditorMode::Exit()
{
    // Libère la CommandList proprement
    CommandList.Reset();

    FEdMode::Exit();
}

void FMeasurementToolPluginEditorMode::StartMeasurementTool()
{
    UE_LOG(LogTemp, Warning, TEXT("Measurement Tool Started!"));
}
