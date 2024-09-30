#include <iostream>

int main() 
{
    string player_name;
    
    std::cout << "Enter your name: ";
    std::cin >> player_name;

    std::cout << "Welcome to the game, " << player_name << "!" << std::endl;

    return 0;
}