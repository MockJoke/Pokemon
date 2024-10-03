#include <cstdlib>
#include <ctime>
#include "../Header/WildEncounterManager.hpp"
#include "../Header/Pokemon.hpp"
#include "../Header/Grass.hpp"

WildEncounterManager::WildEncounterManager()
{
    srand(time(0));
}

Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass)
{
    int randomIndex = rand() % grass.wildPokemonList.size();
    return grass.wildPokemonList[randomIndex];
}