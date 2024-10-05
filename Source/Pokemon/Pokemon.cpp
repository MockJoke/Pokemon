#include <iostream>
#include "../../Header/Pokemon/Pokemon.hpp"
#include "../../Header/Pokemon/PokemonType.hpp"
#include "../../Header/Utility/Utility.hpp"
#include "../../Header/Pokemon/StatusEffects/ParalyzedEffect.hpp"

namespace N_Pokemon
{
    Pokemon::Pokemon()
    {
        name = "Unknown";
        type = PokemonType::NORMAL;
        health = 50;
        maxHealth = 50;
        attackPower = 10;
    }

    Pokemon::Pokemon(std::string p_name, PokemonType p_type, int p_health, std::vector<Move> p_moves)
    {
        name = p_name;
        type = p_type;
        health = p_health;
        maxHealth = p_health;
        moves = p_moves;
    }

    Pokemon::Pokemon(const Pokemon* other)
    {
        name = other->name;
        type = other->type;
        health = other->health;
        maxHealth = other->maxHealth;
        moves = other->moves;
    }

    Pokemon::~Pokemon() { }

    void Pokemon::attack(Move selectedMove, Pokemon* target)
    {
        target->takeDamage(selectedMove.power);
    }

    void Pokemon::takeDamage(int damage)
    {
        health -= damage;
    
        if (health < 0)
        {
            health = 0;
        }
    }

    bool Pokemon::isFainted() const
    {
        return health <= 0;
    }

    void Pokemon::heal()
    {
        health = maxHealth;
    }

    void Pokemon::selectAndUseMove(Pokemon* target)
    {
        printAvailableMoves();

        int choice = selectMove();
        Move selectedMove = moves[choice-1];
    
        useMove(selectedMove, target);
    }

    void Pokemon::printAvailableMoves()
    {
        std::cout << name << "'s available moves:\n";
        
        for (size_t i = 0; i < moves.size(); ++i)
        {
            std::cout << i + 1 << ": " << moves[i].name << " (Power: " << moves[i].power << ")\n";
        }
    }

    int Pokemon::selectMove()
    {
        int choice;
        std::cout << "Choose a move: ";
        std::cin >> choice;

        while (choice < 1 || choice > static_cast<int>(moves.size()))
        {
            std::cout << "Invalid choice. Try again: ";
            std::cin >> choice;
        }

        return choice;
    }

    void Pokemon::useMove(Move selectedMove, Pokemon* target)
    {
        std::cout << name << " used " << selectedMove.name << "!\n";
        attack(selectedMove, target);
    
        N_Utility::Utility::waitForEnter();

        std::cout << "...\n"; 
        N_Utility::Utility::waitForEnter();
    
        if (target->isFainted())
        {
            std::cout << target->name << " fainted!\n";
        }
        else
        {
            std::cout << target->name << " has " << target->health << " HP left.\n";
        }
    }

    void Pokemon::reduceAttackPower(int reduced_damage)
    {
        for (int i=0; i<moves.size(); i++)
        {
            moves[i].power -= reduced_damage;
            
            if(moves[i].power < 0)
            {
                moves[i].power = 0;
            }
        }
    }

    bool Pokemon::canAttack()
    {
        if(appliedEffect == nullptr)
        {
            return true;
        }
        else
        {
            return appliedEffect->turnEndEffect(this);
        }
    }

    bool Pokemon::canApplyEffect()
    {
        return appliedEffect == nullptr;
    }

    void Pokemon::applyEffect(N_StatusEffects::StatusEffectType effectToApply)
    {
        switch (effectToApply)
        {
        case N_StatusEffects::StatusEffectType::PARALYZED:
            appliedEffect = new N_StatusEffects::ParalyzedEffect();
            appliedEffect->applyEffect(this);
            break;
        default:
            appliedEffect = nullptr;
        }
    }

    void Pokemon::clearEffect() { appliedEffect = nullptr; }
}