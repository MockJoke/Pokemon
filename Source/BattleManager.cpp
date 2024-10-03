#include <iostream>
#include "../Header/BattleManager.hpp"
#include "../Header/Utility.hpp"
#include "../Header/Player.hpp"

void BattleManager::startBattle(Player& player, Pokemon& wildPokemon)
{
    std::cout << "A wild " << wildPokemon.name << " appeared!\n";
    battle(player.chosenPokemon, wildPokemon);
}

void BattleManager::battle(Pokemon& playerPokemon, Pokemon& wildPokemon)
{
    while (!playerPokemon.isFainted() && !wildPokemon.isFainted())
    {
        playerPokemon.attack(wildPokemon);

        if (!wildPokemon.isFainted())
        {
            wildPokemon.attack(playerPokemon);
        }

        Utility::waitForEnter();
    }

    handleBattleOutcome(playerPokemon, playerPokemon.isFainted());
}

void BattleManager::handleBattleOutcome(Pokemon& playerPokemon, bool playerWon)
{
    if (playerWon)
    {
        std::cout << playerPokemon.name << " is victorious! Keep an eye on your Pokémon's health.\n";
    }
    else
    {
        std::cout << "Oh no! " << playerPokemon.name << " fainted! You need to visit the PokeCenter.\n";
        Utility::waitForEnter();
        std::cout << "Game Over.\n";
    }
}