#include <iostream>
#include "../../../Header/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::NORMAL, 100, 35) {}
    
        void Pidgey::wingAttack(Pokemon& target)
        {
            std::cout << name << " uses Wing Attack on " << target.name << "!\n";
            target.takeDamage(20);
        }
    }
}