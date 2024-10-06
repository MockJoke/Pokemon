#include <iostream>
#include "../../../Header/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, {
                    Move("THUNDER SHOCK", 20),
                    Move("QUICK ATTACK", 10),
                    Move("THUNDER BOLT", 80)
                }) {}
    
        void Pikachu::attack(Move selectedMove, Pokemon* target)
        {
            if(selectedMove.name == "THUNDER BOLT")
            {
                // 80% chance to hit
                if (rand() % 100 < 80)
                { 
                    Pokemon::attack(selectedMove, target);
                    std::cout << "... and it hit successfully!\n";
                }
                else
                {
                    std::cout << "... but it missed!\n";
                }
            }
            else if(selectedMove.name == "THUNDER SHOCK")
            {
                if(target->canApplyEffect())
                {
                    target->applyEffect(N_StatusEffects::StatusEffectType::PARALYZED);
                }
            }
            else
            {
                Pokemon::attack(selectedMove, target);
            }
        }
    }
}