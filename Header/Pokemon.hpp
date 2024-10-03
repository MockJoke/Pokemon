#include <string>

enum class PokemonType;

class Pokemon
{
public:
    std::string name;
    PokemonType type;
    int health;
    int maxHealth;

    Pokemon();
    Pokemon(std::string p_name, PokemonType p_type, int p_health);
    Pokemon(const Pokemon& other);

    ~Pokemon();

    void attack(Pokemon& target);
    void takeDamage(int damage);
    bool isFainted() const;
};