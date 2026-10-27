#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdexcept>
#include "BaseBankingCard.h"

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    try
    {
        BaseBankingCard card(
            "Ivan Ivanov",
            "1234",
            10000
        );

        std::cout << "=== CardPractice ===" << std::endl;
        std::cout << "Card number: " << card.GetCardNumber() << std::endl;
        std::cout << "CVC: " << card.GetCVC() << std::endl;
        std::cout << "Owner: " << card.GetOwnerName() << std::endl;
        std::cout << "Deposit: " << card.GetDeposit() << " rubles" << std::endl;

        card.SetDeposit(15000);

        std::cout << "Updated deposit: "
            << card.GetDeposit() << " rubles" << std::endl;
    }
    catch (const std::invalid_argument& error)
    {
        std::cout << "Error: " << error.what() << std::endl;
    }

    return 0;
}