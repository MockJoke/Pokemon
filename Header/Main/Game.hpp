#pragma once
#include "../Pokemon/Grass.hpp"

namespace N_Main
{
    class Player;

    class Game
    {
    private:
        N_Pokemon::Grass forestGrass;
        
    public:
        Game();
        void gameLoop(Player &player);
        void visitPokeCenter(Player& player);
    };
}