#pragma once
#include "../Pokemon/Grass.hpp"

namespace N_Character::N_Player
{
    class Player;
}

namespace N_Main
{
    class Game
    {
    private:
        N_Pokemon::Grass forestGrass;
        
    public:
        Game();
        void gameLoop(N_Character::N_Player::Player &player);
        void visitPokeCenter(N_Character::N_Player::Player& player);
    };
}
