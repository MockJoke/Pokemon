#include "../../../Header/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::GRASS, 110, 35) {}
    
        void Bulbasaur::vineWhip(Pokemon* target)
        {
            std::cout << name << " uses vine Whip on " << target->name << "!\n";
            target->takeDamage(20);
        }

        void Bulbasaur::attack(Pokemon* target)
        {
            selectAndUseMove(target);
        }
    }
}