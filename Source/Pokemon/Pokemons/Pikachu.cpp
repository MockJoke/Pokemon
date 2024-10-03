#include <iostream>
#include "../../../Header/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 20) {}
    
        void Pikachu::thunderShock(Pokemon &target)
        {
            std::cout << name << " uses Thunder Shock on " << target.name << "!\n";
            target.takeDamage(20);
        }
    }
}