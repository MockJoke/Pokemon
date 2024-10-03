#pragma once
#include <string>

namespace N_Pokemon
{
    enum class PokemonType;

    class Pokemon
    {
    protected:
        std::string name;
        PokemonType type;
        int health;
        int maxHealth;
        int attackPower;
        
    public:
        Pokemon();
        Pokemon(std::string p_name, PokemonType p_type, int p_health, int p_attackPower);
        Pokemon(const Pokemon& other);

        ~Pokemon();

        void attack(Pokemon& target);
        void takeDamage(int damage);
        bool isFainted() const;
        void heal();
    };
}