#include <cstdlib>
#include <ctime>
#include "../Header/WildEncounterManager.hpp"

WildEncounterManager::WildEncounterManager()
{
    srand(time(0));
}

WildPokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass)
{
    int randomIndex = rand() % grass.wildPokemonList.size();
    return grass.wildPokemonList[randomIndex];
}