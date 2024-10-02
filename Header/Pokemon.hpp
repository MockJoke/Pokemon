#include <string>
#include "PokemonType.hpp"

class Pokemon
{
public:
    std::string name;
    PokemonType type;
    int health;

    Pokemon();

    Pokemon(std::string p_name, PokemonType p_type, int p_health);

    Pokemon(const Pokemon &other);

    ~Pokemon();

    void attack();
};