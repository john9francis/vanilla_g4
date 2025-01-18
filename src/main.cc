#include "G4UIterminal.hh"

int main(int argc, char** argv){

  // init ui stuff
  G4UIsession* ui = new G4UIterminal();

  ui->SessionStart();
  delete ui;

  return 0;
}