#include "DetectorConstruction.hh"

#include "G4SystemOfUnits.hh"
#include "G4NistManager.hh"

#include "G4Box.hh"
#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"

G4VPhysicalVolume* DetConstruction::Construct() {

  G4Box* solidWorld = new G4Box("solidWorld", 1 * m, 1 * m, 1 * m);

  auto nist = G4NistManager::Instance();

  G4Material* vacuum = nist->FindOrBuildMaterial("G4_Galactic");

  G4LogicalVolume* logicWorld = new G4LogicalVolume(solidWorld, vacuum, "logicWorld");

  // return world
  return new G4PVPlacement(
    nullptr,
    G4ThreeVector(),
    logicWorld,
    "physWorld",
    nullptr,
    false,
    0
  );
}