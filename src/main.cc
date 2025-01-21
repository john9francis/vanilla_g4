#include "G4UIterminal.hh"
#include "G4RunManagerFactory.hh"

int main(int argc, char** argv){

  // init ui stuff
  G4UIsession* ui = new G4UIterminal();

  // Register some messengers
  // run
  auto runManager = G4RunManagerFactory::CreateRunManager(G4RunManagerType::Default);
  // detector
  // particle gun
  // analysis

  ui->SessionStart();
  delete ui;

  return 0;
}