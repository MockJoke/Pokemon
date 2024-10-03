#include <iostream>
#include "../Header/BattleManager.hpp"
#include "../Header/Utility.hpp"
#include "../Header/Player.hpp"

void BattleManager::startBattle(Player& player, Pokemon& wildPokemon)
{
    battleState.playerPokemon = &player.chosenPokemon;
    battleState.wildPokemon = &wildPokemon;
    battleState.playerTurn = true;
    battleState.battleOngoing = true;
    
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

    handleBattleOutcome();
}

void BattleManager::handleBattleOutcome()
{
    if (battleState.playerPokemon->isFainted())
    {
        std::cout << battleState.playerPokemon->name << " has fainted! You lose the battle.\\n";
    }
    else
    {
        std::cout << "You defeated the wild " << battleState.wildPokemon->name << "!\\n";
    }
}

void BattleManager::updateBattleState()
{
    if (battleState.playerPokemon->isFainted())
    {
        battleState.battleOngoing = false;
    }
    else if (battleState.wildPokemon->isFainted())
    {
        battleState.battleOngoing = false;
    }
}