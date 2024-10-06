#include "../../../Header/Pokemon/Pokemons/Zubat.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Zubat::Zubat() : Pokemon("Zubat", PokemonType::POISON, 100, {
                Move("BITE", 18),
                Move("LEECH LIFE", 10)
            }) {}
    
        void Zubat::attack(Move selectedMove, Pokemon* target)
        {
            // Call the base class method from child class.
            Pokemon::attack(selectedMove, target);

            if(selectedMove.name == "LEECH LIFE")
            {
                // Restore 50% of the damage dealt
                this->health += selectedMove.power * 0.5; 
    
                // Ensure health does not exceed maxHealth
                if (this->health > this->maxHealth)
                {
                    this->health = this->maxHealth;
                }
    
                std::cout << "... and regained health!\n";
            }
        }
    }
}