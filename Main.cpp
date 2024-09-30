#include <iostream>
#include <string>

int main()
{
    // Variables to store player name and chosen Pokemon
    std::string player_name;
    std::string chosen_pokemon;

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

    // Store the chosen Pokemon based on user input
    switch (choice)
    {
    case 1:
        chosen_pokemon = "Charmander";
        std::cout << "Professor Oak: A fiery choice! Charmander is yours!\n";
        break;

    case 2:
        chosen_pokemon = "Bulbasaur";
        std::cout << "Professor Oak: A fine choice! Bulbasaur is always ready to grow on you!\n";
        break;

    case 3:
        chosen_pokemon = "Squirtle";
        std::cout << "Professor Oak: Splendid! Squirtle will keep you cool under pressure!\n";
        break;

    default:
        std::cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you...\n";
        chosen_pokemon = "Pikachu"; // Default if no valid choice is made
        std::cout << "Professor Oak: Just kidding! Let's go with Pikachu, the surprise guest!\n";
        break;
    }

    // Concluding the first chapter
    std::cout << "Professor Oak: " << chosen_pokemon << " and you, " << player_name << ", are going to be the best of friends!\n";
    std::cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

    return 0;
}