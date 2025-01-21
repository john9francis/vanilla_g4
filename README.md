# Vanilla G4

A general purpose Geant4 app using the most vanilla Geant4 possible.

# How to compile
```sh
mkdir build
cd build
cmake ..
make -j10
./vanilla_g4
```


# All directories
Just with UITerminal:
- /control/
- /units/
- /profiler/

Adding runManager (default)...
- /tracking/
- /geometry/
- /process/
- /particle/
- /event/
- /cuts/
- /run/
- /random/

Adding analysis manager
- /analysis/

# Terminal commands
- `ls` shows all the commands
- `exit` quits the terminal.

# Dangerous commands
- control/loop
- control/foreach
- control/shell

# Useful commands
- control/createHtml (generates html for all subdirectories and commands... however it doesn't work.)


# Useful websites
- [Intro to physics lists presentation](http://geant4.in2p3.fr/IMG/pdf_PhysicsLists.pdf)