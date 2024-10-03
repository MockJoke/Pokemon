#include <iostream>
#include <string>
#include "../Header/Game.hpp"
#include "../Header/Player.hpp"
#include "../Header/ProfessorOak.hpp"
// #include "../Header/PokemonChoice.hpp"
// #include "../Header/PokemonType.hpp"
// #include "../Header/Utility.hpp"

int main()
{
    ProfessorOak professor("Professor Oak"); 
    Player player;

    professor.greetPlayer(player); 
    professor.offerPokemonChoices(player);
    professor.explainMainQuest(player);

    Game game;
    game.gameLoop(player);

    return 0;
}