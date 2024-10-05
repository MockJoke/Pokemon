#pragma once
#include <string>
#include <vector>
#include "Move.hpp"

namespace N_Pokemon
{
    enum class PokemonType;
    struct Move;

    class Pokemon
    {
    protected:
        void printAvailableMoves();
        int selectMove();
        void useMove(Move selectedMove, Pokemon* target);
        
    public:
        std::string name;
        PokemonType type;
        int health;
        int maxHealth;
        int attackPower;
        std::vector<Move> moves;
        
        Pokemon();
        Pokemon(std::string p_name, PokemonType p_type, int p_health, std::vector<Move>);
        Pokemon(const Pokemon* other);

        ~Pokemon();

        virtual void attack(Move selectedMove, Pokemon* target) = 0;
        void takeDamage(int damage);
        bool isFainted() const;
        void heal();
        void selectAndUseMove(Pokemon* target);
        void reduceAttackPower(int reduced_damage);
    };
}