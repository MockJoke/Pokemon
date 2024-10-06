#include <iostream>
#include "../../../Header/Character/Player/Player.hpp"
#include "../../../Header/Pokemon/PokemonChoice.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include "../../../Header/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../Header/Pokemon/Pokemons/Charmander.hpp"
#include "../../../Header/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../Header/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../Header/Utility/Utility.hpp"

namespace N_Character
{
    namespace N_Player
    {
        Player::Player()
        {
            name = "Trainer";
        }

        Player::Player(std::string p_name)
        {
            name = p_name;
        }

        void Player::choosePokemon(int choice)
        {
            switch ((N_Pokemon::PokemonChoice)choice)
            {
            case N_Pokemon::PokemonChoice::CHARMANDER:
                chosenPokemon = new N_Pokemon::N_Pokemons::Charmander();
                break;
            case N_Pokemon::PokemonChoice::BULBASAUR:
                chosenPokemon = new N_Pokemon::N_Pokemons::Bulbasaur();
                break;
            case N_Pokemon::PokemonChoice::SQUIRTLE:
                chosenPokemon = new N_Pokemon::N_Pokemons::Squirtle();
                break;
            default:
                chosenPokemon = new N_Pokemon::N_Pokemons::Pikachu();
                break;
            }
        
            std::cout << "Player " << name << " chose " << chosenPokemon->name << "!\n";

            N_Utility::Utility::waitForEnter();
        }
    }
}