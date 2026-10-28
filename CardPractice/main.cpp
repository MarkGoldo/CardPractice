#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdexcept>
#include <windows.h>
#include "BaseBankingCard.h"
#include "AccessKey.h"
#include "Ticket.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    srand(static_cast<unsigned int>(time(nullptr)));

    try
    {
        // Проверка банковской карты
        BaseBankingCard card("Ivan Ivanov", "1234", 10000);

        std::cout << "=== Banking Card ===" << std::endl;
        std::cout << "Card number: " << card.GetCardNumber() << std::endl;
        std::cout << "CVC: " << card.GetCVC() << std::endl;
        std::cout << "Owner: " << card.GetOwnerName() << std::endl;
        std::cout << "Deposit: " << card.GetDeposit() << " rubles" << std::endl;

        card.SetDeposit(15000);
        std::cout << "Updated deposit: " << card.GetDeposit() << " rubles" << std::endl;

        // Проверка AccessKey
        std::cout << "\n=== AccessKey ===" << std::endl;
        AccessKey accessKey(101, "Ivan Ivanov", "IT Company");
        accessKey.Pass();

        // Проверка Ticket
        std::cout << "\n=== Ticket ===" << std::endl;
        Ticket ticket(102, "Petr Petrov", "University", 200);
        ticket.Pass();

    }
    catch (const std::invalid_argument& error)
    {
        std::cout << "Error: " << error.what() << std::endl;
    }

    return 0;
}
