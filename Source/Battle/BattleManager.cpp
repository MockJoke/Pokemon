﻿#include <iostream>
#include "../../Header/Battle/BattleManager.hpp"
#include "../../Header/Character/Player/Player.hpp"
#include "../../Header/Utility/Utility.hpp"

namespace N_Battle
{
    BattleState BattleManager::battleState;
    
    void BattleManager::startBattle(N_Character::N_Player::Player* player, N_Pokemon::Pokemon* wildPokemon)
    {
        battleState.playerPokemon = player->chosenPokemon;
        battleState.wildPokemon = wildPokemon;
        battleState.playerTurn = true;
        battleState.battleOngoing = true;
    
        std::cout << "A wild " << wildPokemon->name << " appeared!\n";
        N_Utility::Utility::waitForEnter();
        
        battle();
    }
    
    void BattleManager::stopBattle()
    {
        battleState.battleOngoing = false;
    }

    void BattleManager::battle()
    {
        while (battleState.battleOngoing)
        {
            if (battleState.playerTurn && battleState.playerPokemon->canAttack())
            {
                battleState.playerPokemon->selectAndUseMove(battleState.wildPokemon);
            }
            else if (battleState.wildPokemon->canAttack())
            {
                battleState.wildPokemon->selectAndUseMove(battleState.playerPokemon);
            }

            updateBattleState();
            battleState.playerTurn = !battleState.playerTurn;
            N_Utility::Utility::waitForEnter();
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
}