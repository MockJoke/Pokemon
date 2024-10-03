#include <cstdlib>
#include <ctime>
#include "../../Header/Battle/WildEncounterManager.hpp"
#include "../../Header/Pokemon/Pokemon.hpp"
#include "../../Header/Pokemon/Grass.hpp"

WildEncounterManager::WildEncounterManager()
{
    srand(time(0));
}

Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass)
{
    int randomIndex = rand() % grass.wildPokemonList.size();
    return grass.wildPokemonList[randomIndex];
}