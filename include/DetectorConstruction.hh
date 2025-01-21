#ifndef VANILLA_G4_DET_CONSTRUCTION_HH
#define VANILLA_G4_DET_CONSTRUCTION_HH

#include "G4VUserDetectorConstruction.hh"

class DetConstruction : public G4VUserDetectorConstruction {
public:
  G4VPhysicalVolume* Construct();
};


#endif