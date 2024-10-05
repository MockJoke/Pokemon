#include <iostream>
#include "../../../Header/Pokemon/Pokemons/Charmander.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include "../../../Header/Utility/Utility.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Charmander::Charmander() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}
    
        void Charmander::flameThrower(Pokemon* target)
        {
            std::cout << name << " uses Flame Thrower on " << target->name << "!\n";
            target->takeDamage(20);
        }

        void Charmander::attack(Pokemon* target)
        {
            std::cout << name << " used FLAME THROWER!\n";
            N_Utility::Utility::waitForEnter();

            std::cout << "...\n"; 
            N_Utility::Utility::waitForEnter();

            target->takeDamage(attackPower);

            if (target->isFainted())
            {
                std::cout << target->name << " fainted!\n";
            }
            else
            {
                std::cout << target->name << " has " << target->health << " HP left.\n";
            }
            
            N_Utility::Utility::waitForEnter();
        }
    }
}