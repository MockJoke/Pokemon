#include <iostream>
#include <string>

enum PokemonChoice 
{
    Charmander,
    Bulbasaur,
    Squirtle,
    InvalidChoice
};

int main()
{
    // Variables to store player name and chosen Pokemon
    std::string player_name;
    PokemonChoice chosen_pokemon = InvalidChoice;

    // Introduction by the Professor
    std::cout << "Professor Oak: Hello there! Welcome to the world of Pokemon!\n";
    std::cout << "Professor Oak: My name is Oak. People call me the Pokemon Professor!\n";
    std::cout << "Professor Oak: But enough about me. Let's talk about you!\n";

    // Taking player name as input
    std::cout << "Professor Oak: First, tell me, what is your name?\n";
    std::cin >> player_name;

    std::cout << "Professor Oak: Ah, " << player_name << "! What a fantastic name!\n";
    std::cout << "Professor Oak: You must be eager to start your adventure. But first, you will need a Pokemon of your own!\n";

    // Presenting Pokemon choices
    std::cout << "Professor Oak: I have three Pokemon here with me. They are all quite feisty!\n";
    std::cout << "Professor Oak: Choose wisely...\n";
    std::cout << "1. Charmander - The fire type. A real hothead!\n";
    std::cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
    std::cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

    int choice;
    std::cout << "Professor Oak: So, which one will it be? Enter the number of your choice: ";
    std::cin >> choice;

    // Map the integer choice to the corresponding enum value
    switch(choice) 
    {
        case 1:
            chosen_pokemon = Charmander;
            break;
        case 2:
            chosen_pokemon = Bulbasaur;
            break;
        case 3:
            chosen_pokemon = Squirtle;
            break;
        default:
            chosen_pokemon = InvalidChoice;
            break;
    }

    // Respond based on the chosen Pokemon
    switch(chosen_pokemon) 
    {
        case Charmander:
            std::cout << "Professor Oak: A fiery choice! Charmander is yours!\n";
            break;
        case Bulbasaur:
            std::cout << "Professor Oak: A fine choice! Bulbasaur is always ready to grow on you!\n";
            break;
        case Squirtle:
            std::cout << "Professor Oak: Splendid! Squirtle will keep you cool under pressure!\n";
            break;
        default:
            std::cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you...\n";
            chosen_pokemon = Charmander; // Default to Charmander if invalid choice
            std::cout << "Professor Oak: Just kidding! Let's go with Charmander, the fiery dragon in the making!\n";
            break;
    }

    // Concluding the first chapter
    std::cout << "Professor Oak: " << chosen_pokemon << " and you, " << player_name << ", are going to be the best of friends!\n";
    std::cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

    return 0;
}