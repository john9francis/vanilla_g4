#include "G4UIterminal.hh"
#include "G4RunManagerFactory.hh"

#include "G4AnalysisManager.hh"

#include "DetectorConstruction.hh"

int main(int argc, char** argv){

  // init ui stuff
  G4UIsession* ui = new G4UIterminal();

  // Register some messengers
  // run
  auto runManager = G4RunManagerFactory::CreateRunManager(G4RunManagerType::Default);
  
  // analysis
  G4AnalysisManager::Instance();

  // physics list

  // detector
  runManager->SetUserInitialization(new DetConstruction());
  
  // particle gun
  


  ui->SessionStart();
  delete ui;

  return 0;
}