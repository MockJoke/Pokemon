#pragma once
#include "BattleState.hpp"
#include "../Character/Player/Player.hpp"

namespace N_Battle
{
    class Pokemon;
    
    class BattleManager
    {
    private:
        static BattleState battleState;
        
        void battle();
        void handleBattleOutcome();
        void updateBattleState();

    public:
        void startBattle(N_Character::N_Player::Player* player, N_Pokemon::Pokemon* wildPokemon);
        static void stopBattle();
    };
}