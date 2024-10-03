#include "../../../Header/Pokemon/Pokemons/Balbasaur.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Balbasaur::Balbasaur() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}
    
        void Balbasaur::vineWhip(Pokemon& target)
        {
            std::cout << name << " uses vine Whip on " << target.name << "!\n";
            target.takeDamage(20);
        }
    }
}