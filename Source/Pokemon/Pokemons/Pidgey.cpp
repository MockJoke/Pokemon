#include <iostream>
#include "../../../Header/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../Header/Pokemon/PokemonType.hpp"
#include "../../../Header/Utility/Utility.hpp"
// #include "../../../Header/Pokemon/Move.hpp"
#include "../../../Header/Battle/BattleManager.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::NORMAL, 100, {
            Move("GUST", 15),
            Move("TACKLE", 10)
        }) {}

        void Pidgey::attack(Move selectedMove, Pokemon* target)
        {
            Pokemon::attack(selectedMove, target);

            if(selectedMove.name == "GUST")
            {
                // 20% chance to blow the opponent away
                if (rand() % 100 < 20)
                { 
                    std::cout <<"... and blew the opponent away!\n";
                    N_Battle::BattleManager::stopBattle();
                    N_Utility::Utility::waitForEnter();
                }
            }
        }
    }
}