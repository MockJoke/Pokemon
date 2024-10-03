#pragma once
// #include <vector>

namespace N_Battle
{
    struct Grass;
    class Pokemon;
    
    class WildEncounterManager
    { 
    public:
        WildEncounterManager();
        
        Pokemon getRandomPokemonFromGrass(const Grass& grass); 
    };
}