#include<string>
#include<vector>

struct Grass
{
    std::string environmentType;
    std::vector<WildPokemon> wildPokemonList;
    int encounterRate;
};

Grass forestGrass = {
    "Forest",
    {{"Pidgey", PokemonType:: NORMAL, 40}, {"Caterpie", PokemonType:: BUG, 35}},
    70
};