﻿#include <iostream>
#include <string>
#include "../../../Header/Pokemon/Pokemon.hpp"
#include "../../../Header/Pokemon/StatusEffects/ParalyzedEffect.hpp"
// #include "../../../Header/Pokemon/StatusEffects/StatusEffectType.hpp"

namespace N_Pokemon
{
    namespace N_StatusEffects
    {
        void ParalyzedEffect::applyEffect(Pokemon* target)
        {
            std::cout << target->name << " is paralyzed! It may not be able to move!\n";

            // Effect lasts between 1 and 3 turns randomly
            turnsLeft = rand() % 3 + 1;
        }

        std::string ParalyzedEffect::getEffectName()
        {
            return "Paralyzed";
        }

        bool ParalyzedEffect::turnEndEffect(Pokemon* target)
        {
            if (turnsLeft <= 0)
            {
                clearEffect(target);
                return true; // Can move as the effect is cleared
            }
            
            turnsLeft--;

            // Generates a number between 0 and 3
            int paralysis_chance = rand() % 4; 

            // 25% chance that the Pokémon cannot move due to paralysis
            if (paralysis_chance == 0)
            {
                std::cout << target->name << " is paralyzed! It can't move!\n";
                
                return false; // Pokémon cannot act this turn
            }

            // Otherwise, it can act normally
            std::cout << target->name << " shakes off the paralysis momentarily and can move!\n";
            
            return true; // Pokémon can act this turn
        }
    }
}
