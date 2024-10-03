// #include "Pokemon.hpp"
// #include "Player.hpp"

class Player;
class Pokemon;

class BattleManager
{
public:
    void startBattle(Player& player, Pokemon& wildPokemon);
    
private:
    void battle(Pokemon& playerPokemon, Pokemon& wildPokemon);
    void handleBattleOutcome(Pokemon& playerPokemon, bool playerWon);
};