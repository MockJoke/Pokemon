#include <iostream>
#include "../Header/Pokemon.hpp"
#include "../Header/PokemonType.hpp"

Pokemon::Pokemon()
{
    name = "Unknown";
    type = PokemonType::NORMAL;
    health = 50;
}

Pokemon::Pokemon(std::string p_name, PokemonType p_type, int p_health)
{
    name = p_name;
    type = p_type;
    health = p_health;
}

Pokemon::Pokemon(const Pokemon& other)
{
    name = other.name;
    type = other.type;
    health = other.health;
}

Pokemon::~Pokemon() { }

void Pokemon::attack(Pokemon& target)
{
    int damage = attackPower;
    std::cout << name << " attacks " << target.name << " for " << damage << " damage!\\n";
    target.takeDamage(damage);
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