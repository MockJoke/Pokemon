﻿#include <iostream>
#include "../Header/Player.hpp"
#include "../Header/PokemonType.hpp"
#include "../Header/PokemonChoice.hpp"
#include "../Header/Utility.hpp"

Player::Player()
{
    name = "Trainer";
    chosenPokemon = Pokemon();
}

Player::Player(std::string p_name, Pokemon p_chosenPokemon)
{
    name = p_name;
    chosenPokemon = p_chosenPokemon;
}

void Player::choosePokemon(int choice)
{
    switch ((PokemonChoice)choice) {
    case PokemonChoice::CHARMANDER:
        chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100);
        break;
    case PokemonChoice::BULBASAUR:
        chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
        break;
    case PokemonChoice::SQUIRTLE:
        chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
        break;
    default:
        chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100);
        break;
    }
    
    std::cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";

    Utility::waitForEnter();
}