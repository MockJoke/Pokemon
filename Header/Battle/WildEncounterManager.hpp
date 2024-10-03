#pragma once
// #include <vector>
// #include "../Pokemon/Pokemon.hpp"

namespace N_Pokemon
{
    struct Grass;
    class Pokemon;
}

namespace N_Battle
{
    class WildEncounterManager
    { 
    public:
        WildEncounterManager();

        N_Pokemon::Pokemon getRandomPokemonFromGrass(const N_Pokemon::Grass& grass); 
    };
}