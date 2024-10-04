#include <iostream>
#include "Header/Main/Game.hpp"
#include "Header/Character/Player/Player.hpp"
#include "Header/Character/ProfessorOak.hpp"

int main()
{
    N_Character::ProfessorOak* professor = new N_Character::ProfessorOak("Professor Oak");
    N_Character::N_Player::Player* player = new N_Character::N_Player::Player();

    professor->greetPlayer(player); 
    professor->offerPokemonChoices(player);
    professor->explainMainQuest(player);

    N_Main::Game* game = new N_Main::Game();
    game->gameLoop(player);

    delete(professor);
    delete(player);
    delete(game);
    
    return 0;
}