#include <iostream>
#include <string>

enum class PokemonChoice 
{
    CHARMANDER = 1,
    BULBASAUR,
    SQUIRTLE,
    PIKACHU
};

enum class PokemonType
{
    FIRE,
    GRASS,
    WATER,
    ELECTRIC,
    NORMAL
};

class Pokemon
{
public:
    std::string name;
    PokemonType type;
    int health;
    
    Pokemon()
    {
        name = "Unknown";
        type = PokemonType::NORMAL;
        health = 50;
        std::cout << "A new Pokemon has been created with the default constructor!\n";
    }

    Pokemon(std::string p_name, PokemonType p_type, int p_health)
    {
        name = p_name;
        type = p_type;
        health = p_health;
        std::cout << "A new Pokemon named " << name << " has been created!\n";
    }

    Pokemon(const Pokemon &other)
    {
        name = other.name;
        type = other.type;
        health = other.health;
        std::cout << "A new Pokemon has been copied from " << other.name << "!\n";
    }

    ~Pokemon()
    {
        std::cout << name << " has been released.\n";
    }
    
    void attack()
    {
        std::cout << name << "attacks with a powerful move!\n";
    }
};

class Player
{
public:
    std::string name;
    Pokemon chosenPokemon;

    Player()
    {
        name = "Trainer";
        chosenPokemon = Pokemon();
        std::cout << "A new player named " << name << " has been created!\n";
    }

    Player(std::string p_name, Pokemon p_chosenPokemon)
    {
        name = p_name;
        chosenPokemon = p_chosenPokemon;
        std::cout << "Player " << name << " has been created!\n";
    }
    
    void choosePokemon(int choice)
    {
        switch ((PokemonChoice)choice)
        { 
        case PokemonChoice::CHARMANDER:
            chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100); 
            break; 
        case PokemonChoice::BULBASAUR: 
            chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100); 
            break; 
        case PokemonChoice::SQUIRTLE: 
            chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100); 
            break; 
        default: 
            chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100); 
            break; 
        } 
        std::cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";
    }
};

class ProfessorOak
{
public:
    std::string name;

    ProfessorOak(std::string p_name)
    {
        name = p_name;
    }

    void greetPlayer(Player& player)
    {
        std::cout << name << ": Hello there! Welcome to the world of Pokemon!\n"; 
        std::cout << name << ": My name is Oak. People call me the Pokemon Professor!\n"; 
        std::cout << name << ": But enough about me. Let's talk about you!\n";
    }

    void offerPokemonChoices(Player& player)
    {
        std::cout << name << ": First, tell me, what's your name?\n"; 
        getline(std::cin, player.name); 
        std::cout << name << ": Ah, " << player.name << "! What a fantastic name!\n";
        std::cout << name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!\n"; 

        // Presenting Pokemon choices 
        std::cout << name << ": I have three Pokemon here with me. They're all quite feisty!\n"; 
        std::cout << name << ": Choose wisely...\n";
        std::cout << "1. Charmander - The fire type. A real hothead!\n"; 
        std::cout << "2. Bulbasaur - The grass type. Calm and collected!\n"; 
        std::cout << "3. Squirtle - The water type. Cool as a cucumber!\n"; 

        int choice; 
        std::cout << name << ": So, which one will it be? Enter the number of your choice: "; 
        std::cin >> choice;
        
        player.choosePokemon(choice);
    }
};

int main()
{
    Pokemon defaultPokemon;
    std::cout << "Pokemon Details:\n";
    std::cout << "Name: " << defaultPokemon.name << "\nType: " << (int)defaultPokemon.type << "\nHealth: " << defaultPokemon.health << "\n";

    Pokemon charmander("Charmander", PokemonType::FIRE, 100);
    std::cout << "Pokemon Details:\n";
    std::cout << "Name: " << charmander.name << "\nType: " << (int)charmander.type << "\nHealth: " << charmander.health << "\n";

    Pokemon bulbasaur("Bulbasaur", PokemonType::GRASS, 100);
    Pokemon bulbasaurCopy = bulbasaur;
    
    std::cout << "Original Pokemon Health: " << bulbasaur.health << "\n";
    std::cout << "Copied Pokemon Health: " << bulbasaurCopy.health << "\n";

    bulbasaurCopy.health = 80;
    std::cout << "After Modification:\n";
    std::cout << "Original Pokemon Health: " << bulbasaur.health << "\n";
    std::cout << "Copied Pokemon Health: " << bulbasaurCopy.health << "\n";

    Pokemon squirtle("Squirtle", PokemonType::WATER, 100);
    
    ProfessorOak professor("Professor Oak"); 
    Player player("Ash", charmander);

    professor.greetPlayer(player); 
    professor.offerPokemonChoices(player); 

    std::cout << "Professor Oak: " <<  player.chosenPokemon.name << " and you, " << player.name << ", are going to be the best of friends!\n";
    std::cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

    return 0;
}