﻿#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Bulbasaur : public Pokemon
        {
        private:
            void vineWhip(Pokemon* target);
    
        public:
            Bulbasaur();
            void attack(Pokemon* target) override;
        };
    }
}