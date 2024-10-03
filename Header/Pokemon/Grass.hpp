#pragma once
#include<string>
#include<vector>

namespace N_Pokemon
{
    class Pokemon;
    
    struct Grass
    {
        std::string environmentType;
        std::vector<Pokemon> wildPokemonList;
        int encounterRate;
    };
}