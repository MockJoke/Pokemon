#pragma once
#include<string>
#include<vector>

class Pokemon;

struct Grass
{
    std::string environmentType;
    std::vector<Pokemon> wildPokemonList;
    int encounterRate;
};