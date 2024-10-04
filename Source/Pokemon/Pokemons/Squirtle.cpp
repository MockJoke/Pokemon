#include <iostream>
#include "../../../Header/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Squirtle::Squirtle() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}
    
        void Squirtle::waterSplash(Pokemon* target)
        {
            std::cout << name << " uses Water splash on " << target->name << "!\n";
            target->takeDamage(20);
        }
    }
}