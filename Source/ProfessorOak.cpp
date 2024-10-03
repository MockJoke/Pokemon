﻿#include <iostream>
#include "../Header/ProfessorOak.hpp"
#include "../Header/Player.hpp"
#include "../Header/Utility.hpp"

ProfessorOak::ProfessorOak(std::string p_name)
{
    name = p_name;
}

void ProfessorOak::greetPlayer(Player &player)
{
    std::cout << name << ": Hello there! Welcome to the world of Pokemon!\n";
    Utility::waitForEnter();
    std::cout << name << ": My name is Oak. People call me the Pokemon Professor!\n";
    Utility::waitForEnter();
    std::cout << name << ": But enough about me. Let's talk about you!\n";
    Utility::waitForEnter();
}

void ProfessorOak::offerPokemonChoices(Player &player)
{
    std::cout << name << ": First, tell me, what’s your name? \t [Please Enter Your Name]\n";
    getline(std::cin, player.name);
    std::cout << name << ": Ah, " << player.name << "! What a fantastic name!\n";
    Utility::waitForEnter();
    std::cout << name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!\n";
    Utility::waitForEnter();
        
    std::cout << name << ": I have three Pokemon here with me. They’re all quite feisty!\n";
    Utility::waitForEnter();
    std::cout << name << ": Choose wisely...\n";
    std::cout << "1. Charmander - The fire type. A real hothead!\n";
    std::cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
    std::cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

    int choice;
    std::cout << name << ": So, which one will it be? Enter the number of your choice: ";
    std::cin >> choice;

    player.choosePokemon(choice);
    Utility::waitForEnter();
}

void ProfessorOak::explainMainQuest(Player &player)
{
    Utility::clearConsole();

    std::cout << "Professor Oak: " << player.name << "!, I am about to explain you about your upcoming grand adventure.\n";
    Utility::waitForEnter();
    std::cout << "Professor Oak: You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck!\n";
    Utility::waitForEnter();
    std::cout << "Professor Oak: Your mission, should you choose to accept it—and trust me, you really don’t have a choice—is to collect all the Pokémon Badges and conquer the Pokémon League.\n";
    Utility::waitForEnter();

    std::cout << "\n" << player.name << ": Wait... that sounds a lot like every other Pokémon game out there...\n";
    Utility::waitForEnter();
    std::cout << "Professor Oak: Shhh! Don't break the fourth wall, " << player.name << "! This is serious business!\n";
    Utility::waitForEnter();

    std::cout << "\nProfessor Oak: To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter.\n";
    Utility::waitForEnter();
    std::cout << "Professor Oak: Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!\n";
    Utility::waitForEnter();

    std::cout << "\n" << player.name << ": Sounds like a walk in the park... right?\n";
    Utility::waitForEnter();
    std::cout << "Professor Oak: Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one.\n";
    Utility::waitForEnter();

    std::cout << "\nProfessor Oak: So, what do you say? Are you ready to become the next Pokémon Champion?\n";
    Utility::waitForEnter();
    std::cout << "\n" << player.name << ": Ready as I’ll ever be, Professor!\n";
    Utility::waitForEnter();

    std::cout << "\nProfessor Oak: That’s the spirit! Now, your journey begins...\n";
    Utility::waitForEnter();
    std::cout << "Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!\n";
    Utility::waitForEnter();
}