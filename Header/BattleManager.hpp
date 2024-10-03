// #include "Pokemon.hpp"
// #include "Player.hpp"
#include "BattleState.hpp"

class Player;
class Pokemon;

class BattleManager
{
public:
    void startBattle(Player& player, Pokemon& wildPokemon);
    
private:
    BattleState battleState;
    
    void battle(Pokemon& playerPokemon, Pokemon& wildPokemon);
    void handleBattleOutcome();
    void updateBattleState();
};