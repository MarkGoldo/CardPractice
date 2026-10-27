#include "CardGenerator.h"
#include <cstdlib>
#include <ctime>

std::string CardGenerator::GenerateCardNumber()
{
    std::string number = "";

    for (int i = 0; i < 16; i++)
    {
        int iRand = rand() % 10;
        number += std::to_string(iRand);
    }

    return number;
}

std::string CardGenerator::GenerateCVC()
{
    int cvc = 100 + rand() % 900;

    return std::to_string(cvc);
}