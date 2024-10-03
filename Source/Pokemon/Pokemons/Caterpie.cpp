#include "../../../Header/Pokemon/Pokemons/Caterpie.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::BUG, 100, 10) {}
    
        void Caterpie::bugBite(Pokemon &target)
        {
            std::cout << name << " uses Bug Bite on " << target.name << "!\n";
            target.takeDamage(20);
        }
    }
}