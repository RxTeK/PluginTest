#pragma once

#include "CoreMinimal.h"
#include "EdMode.h"

class FMeasurementToolPluginEditorMode : public FEdMode
{
public:
	virtual void Enter() override;
	virtual void Exit() override;

	// Pour gérer nos commandes de bouton
	TSharedPtr<FUICommandList> CommandList;

	void StartMeasurementTool();
};
