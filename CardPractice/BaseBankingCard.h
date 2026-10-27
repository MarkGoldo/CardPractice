#pragma once
#include "BasePlasticCard.h"
#include <string>

class BaseBankingCard : public BasePlasticCard
{
private:
    std::string ownerName;
    std::string pinCode;
    double deposit;

public:
    BaseBankingCard(
        const std::string& ownerName,
        const std::string& pinCode,
        double deposit
    );

    std::string GetOwnerName() const;
    std::string GetPinCode() const;
    double GetDeposit() const;

    void SetOwnerName(const std::string& ownerName);
    void SetPinCode(const std::string& pinCode);
    void SetDeposit(double deposit);
};