#include <iostream>
#include "../../../Header/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::GRASS, 110, {
            Move("VINE WHIP", 25),
            Move("TACKLE", 10)
        }) {}

        void Bulbasaur::attack(Move selectedMove, Pokemon* target)
        {
            Pokemon::attack(selectedMove, target);

            if(selectedMove.name == "VINE WHIP")
            {
                // Chance for a second hit (50% chance)
                int secondHitChance = rand() % 2;
                
                if (secondHitChance == 1)
                {
                    Pokemon::attack(selectedMove, target);
                    std::cout << name << " hits again with a second " << selectedMove.name << "!\n";
                }
                else
                {
                    std::cout << target->name << " dodged the second hit!\n";
                }
            }
        }
    }
}