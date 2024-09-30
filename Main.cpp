#include <iostream>

int main() 
{
    std::cout << "Welcome to the world of Pokémon! I am Professor Oak.\n";
    std::cout << "You can choose one of the following Pokémon:\n";
    std::cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
    std::cout << "Which Pokémon would you like to choose? Enter the number: ";

    int choice;
    cin >> choice;

    if (choice == 1) 
    {
        std::cout << "You chose Bulbasaur! A wise choice.\n";
    }
    else if (choice == 2) 
    {
        std::cout << "You chose Charmander! A fiery choice.\n";
    }
    else if (choice == 3) 
    {
        std::cout << "You chose Squirtle! A cool choice.\n";
    }
    else 
    {
        std::cout << "Invalid choice. Please restart the game.\n";
    }

    return 0;
}