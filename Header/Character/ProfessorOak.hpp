#pragma once
#include <iostream>

namespace N_Character
{
    namespace N_Player
    {
        class Player;
    }
    
    class ProfessorOak
    {
    public:
        std::string name;

        ProfessorOak(std::string p_name);
        void greetPlayer(N_Player::Player &player);
        void offerPokemonChoices(N_Player::Player &player);
        void explainMainQuest(N_Player::Player &player);
    };
}