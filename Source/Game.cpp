#pragma once
#include <iostream>
#include "../Header/Game.hpp"
#include "../Header/Player.hpp"
#include "../Header/PokemonType.hpp"
#include "../Header/Utility.hpp"
#include "../Header/WildEncounterManager.hpp"
#include "../Header/BattleManager.hpp"

Game::Game()
{
    forestGrass = {
        "Forest",
        {
            Pokemon("Pidgey", PokemonType::NORMAL, 40),
            Pokemon("Caterpie", PokemonType::BUG, 35),
            Pokemon("Zubat", PokemonType::POISON, 30)
        },
        70
    };
}

void Game::gameLoop(Player& player)
{
    BattleManager battleManager;
    WildEncounterManager encounterManager;
    Pokemon wildPokemon;
    
    int choice;
    bool keepPlaying = true;

    while (keepPlaying)
    {
        Utility::clearConsole();

        std::cout << "\nWhat would you like to do next, " << player.name << "?\n";
        std::cout << "1. Battle Wild Pokémon\n";
        std::cout << "2. Visit PokeCenter\n";
        std::cout << "3. Challenge Gyms\n";
        std::cout << "4. Enter Pokémon League\n";
        std::cout << "5. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        Utility::clearInputBuffer();

        switch (choice)
        {
        case 1:
            {
                wildPokemon = encounterManager.getRandomPokemonFromGrass(forestGrass);
                battleManager.startBattle(player, wildPokemon);
                break;
            }
        case 2:
            {
                std::cout << "You head to the PokeCenter.\n";
                player.chosenPokemon.heal();
                std::cout << player.chosenPokemon.name << "'s health is fully restored!\\n";
                break;
            }
        case 3:
            {
                std::cout <<
                    "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\n";
                break;
            }
        case 4:
            {
                std::cout <<
                    "You boldly step towards the Pokémon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\n";
                break;
            }
        case 5:
            {
                std::cout <<
                    "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokémon training!'\n";
                std::cout << "Are you sure you want to quit? (y/n): ";
                char quitChoice;
                std::cin >> quitChoice;
                if (quitChoice == 'y' || quitChoice == 'Y')
                {
                    keepPlaying = false;
                }
                break;
            }
        default:
            {
                std::cout << "That's not a valid choice. Try again!\n";
                break;
            }
        }

        Utility::waitForEnter();
    }

    std::cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
}

void Game::visitPokeCenter(Player& player)
{
    if (player.chosenPokemon.health == player.chosenPokemon.maxHealth)
    {
        std::cout << "Your Pokémon is already at full health!\n";
    }
    else
    {
        std::cout << "You head to the PokeCenter.\n";
        std::cout << "Healing your Pokémon...\n";
        Utility::waitForEnter(); // Simulate a short pause for the healing process
        player.chosenPokemon.heal(); // Heal the player's Pokémon
        std::cout << player.chosenPokemon.name << "'s health is fully restored!\n";
    }
}