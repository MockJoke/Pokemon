#include <iostream>
#include <limits>
#include "../../Header/Utility/Utility.hpp"

namespace N_Utility
{
    void Utility::clearConsole()
    {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    }

    void Utility :: waitForEnter()
    {
        std::cin.get();
    }

    void Utility :: clearInputBuffer()
    {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}