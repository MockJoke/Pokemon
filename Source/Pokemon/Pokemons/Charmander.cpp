#include "../../../Header/Pokemon/Pokemons/Charmander.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Charmander::Charmander() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}
    
        void Charmander::flameThrower(Pokemon& target)
        {
            std::cout << name << " uses Flame Thrower on " << target.name << "!\n";
            target.takeDamage(20);
        }
    }
}