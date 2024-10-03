#include "Grass.hpp"

class Player;

class Game
{
private:
    Grass forestGrass;
    
public:
    Game();
    void gameLoop(Player &player);
    void battle(Pokemon& playerPokemon, Pokemon& wildPokemon);
};