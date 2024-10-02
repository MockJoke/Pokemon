#include "../Header/Pokemon.hpp"
#include <iostream>

// Default constructor
Pokemon::Pokemon() : name("Unknown"), type(PokemonType::NORMAL), health(50) { }

Pokemon::Pokemon(std::string p_name, PokemonType p_type, int p_health): name(p_name), type(p_type), health(p_health) { }

Pokemon::Pokemon(const Pokemon &other): name(other.name), type(other.type), health(other.health) {}

// Destructor
Pokemon::~Pokemon() { }

void Pokemon::attack()
{
    std::cout << name << " attacks with a powerful move!\n";
}