#include <iostream>

class Player;

class ProfessorOak
{
public:
    std::string name;

    ProfessorOak(std::string p_name);
    void greetPlayer(Player &player);
    void offerPokemonChoices(Player &player);
    void explainMainQuest(Player &player);
};