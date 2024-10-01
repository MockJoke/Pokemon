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
    ELECTRIC
};

class Pokemon
{
public:
    std::string name;
    PokemonType type;
    int health;
    
    Pokemon()
    {

    }

    Pokemon(std::string p_name, PokemonType p_type, int p_health)
    {
        name = p_name;
        type = p_type;
        health = p_health;
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
    ProfessorOak professor; 
    Pokemon placeholderPokemon;
    Player player;

    placeholderPokemon.name = "Pikachu";
    placeholderPokemon.type = PokemonType::ELECTRIC;
    placeholderPokemon.health = 40;

    player.name = "Trainer";
    professor.name = "Professor Oak";

    professor.greetPlayer(player); 
    professor.offerPokemonChoices(player); 

    std::cout << "Professor Oak: " <<  player.chosenPokemon.name << " and you, " << player.name << ", are going to be the best of friends!\n";
    std::cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

    return 0;
}