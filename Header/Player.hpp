#include <string>
#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include "Utility.hpp"

class Player
{
public:
    std::string name;
    Pokemon chosenPokemon;

    Player();
    Player(std::string p_name, Pokemon p_chosenPokemon);

    void choosePokemon(int choice);
};