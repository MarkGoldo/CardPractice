#pragma once

#include <string>

class BasePlasticCard
{
protected:
    std::string cardNumber;
    std::string cvc;

public:
    BasePlasticCard();
    virtual ~BasePlasticCard() = default;

    std::string GetCardNumber() const;
    std::string GetCVC() const;
};