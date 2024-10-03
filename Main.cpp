#include <iostream>
#include "Header/Main/Game.hpp"
#include "Header/Character/Player/Player.hpp"
#include "Header/Character/ProfessorOak.hpp"

int main()
{
    N_Character::ProfessorOak professor("Professor Oak");
    N_Character::N_Player::Player player;

    professor.greetPlayer(player); 
    professor.offerPokemonChoices(player);
    professor.explainMainQuest(player);

    N_Main::Game game;
    game.gameLoop(player);

    return 0;
}