#include "BasePlasticCard.h"

BasePlasticCard::BasePlasticCard()
    : cardNumber(""), cvc("")
{
}

std::string BasePlasticCard::GetCardNumber() const
{
    return cardNumber;
}

std::string BasePlasticCard::GetCVC() const
{
    return cvc;
}
