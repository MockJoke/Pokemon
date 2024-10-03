#include <iostream>
#include "../../Header/Pokemon/Pokemon.hpp"
#include "../../Header/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
    Pokemon::Pokemon()
    {
        name = "Unknown";
        type = PokemonType::NORMAL;
        health = 50;
        maxHealth = 50;
        attackPower = 10;
    }

    Pokemon::Pokemon(std::string p_name, PokemonType p_type, int p_health, int p_attackPower)
    {
        name = p_name;
        type = p_type;
        health = p_health;
        maxHealth = p_health;
        attackPower = p_attackPower;
    }

    Pokemon::Pokemon(const Pokemon& other)
    {
        name = other.name;
        type = other.type;
        health = other.health;
        maxHealth = other.maxHealth;
        attackPower = other.attackPower;
    }

    Pokemon::~Pokemon() { }

    void Pokemon::attack(Pokemon& target)
    {
        std::cout << name << " attacks " << target.name << " for " << attackPower << " damage!\\n";
        target.takeDamage(attackPower);
    }

    void Pokemon::takeDamage(int damage)
    {
        health -= damage;
    
        if (health < 0)
        {
            health = 0;
        }
    }

    bool Pokemon::isFainted() const
    {
        return health <= 0;
    }

    void Pokemon::heal()
    {
        health = maxHealth;
    }
}