#include "../../../Header/Pokemon/Pokemons/Zubat.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Zubat::Zubat() : Pokemon("Zubat", PokemonType::POISON, 100, 20) {}
    
        void Zubat::supersonic(Pokemon &target)
        {
            std::cout << name << " uses Supersonic on " << target.name << "!\n";
            target.takeDamage(20);
        }
    }
}