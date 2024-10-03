#include <vector>
#include "Grass.hpp" 

class WildEncounterManager
{ 
public:
    WildEncounterManager();
    
    WildPokemon getRandomPokemonFromGrass(const Grass& grass); 
};