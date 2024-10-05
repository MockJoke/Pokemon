#include <iostream>
#include "../../../Header/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include "../../../Header/Utility/Utility.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::NORMAL, 100, 35) {}
    
        void Pidgey::wingAttack(Pokemon* target)
        {
            std::cout << name << " uses Wing Attack on " << target->name << "!\n";
            target->takeDamage(20);
        }

        void Pidgey::attack(Pokemon* target)
        {
            std::cout << name << " used WING ATTACK!\n";
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