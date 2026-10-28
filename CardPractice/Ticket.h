#pragma once
#include "BasePassKey.h"

class Ticket : public BasePassKey
{
private:
    double deposit;

public:
    Ticket(
        int ownerId,
        std::string name,
        std::string org,
        double initialDeposit
    );

    double GetDeposit() const;

    void Pass() override;
};