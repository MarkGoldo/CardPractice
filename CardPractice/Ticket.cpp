#include "Ticket.h"
#include <iostream>
#include <stdexcept>

Ticket::Ticket(
    int ownerId,
    std::string name,
    std::string org,
    double initialDeposit
)
    : BasePassKey(ownerId, name, org),
    deposit(initialDeposit)
{
    if (initialDeposit < 0)
    {
        throw std::invalid_argument(
            "Deposit cannot be negative"
        );
    }
}

double Ticket::GetDeposit() const
{
    return deposit;
}

void Ticket::Pass()
{
    const double passCost = 75.0;

    std::cout << "=== Ticket: попытка прохода ===" << std::endl;
    std::cout << "Владелец: " << fullName << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Организация: " << organization << std::endl;

    if (deposit >= passCost)
    {
        deposit -= passCost;

        std::cout << "Проход разрешен!" << std::endl;
        std::cout << "Списано: " << passCost << std::endl;
        std::cout << "Остаток депозита: " << deposit << std::endl;
    }
    else
    {
        std::cout << "Недостаточно средств для прохода." << std::endl;
        std::cout << "Текущий депозит: " << deposit << std::endl;
    }
}