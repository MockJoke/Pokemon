#include <cstdlib>
#include <ctime>
#include "../../Header/Battle/WildEncounterManager.hpp"
#include "../../Header/Pokemon/Pokemon.hpp"
#include "../../Header/Pokemon/Grass.hpp"

namespace N_Battle
{
    WildEncounterManager::WildEncounterManager()
    {
        srand(time(0));
    }

    N_Pokemon::Pokemon* WildEncounterManager::getRandomPokemonFromGrass(const N_Pokemon::Grass& grass)
    {
        int randomIndex = rand() % grass.wildPokemonList.size();

        N_Pokemon::Pokemon* wildPokemon = grass.wildPokemonList[randomIndex];
        
        return wildPokemon;
    }
}