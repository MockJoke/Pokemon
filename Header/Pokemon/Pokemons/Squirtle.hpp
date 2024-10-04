#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon
{
    namespace N_Pokemons
    {
        class Squirtle : public Pokemon
        {
        private:
            void waterSplash(Pokemon* target);
    
        public:
            Squirtle();
        };
    }
}