#include "BaseBankingCard.h"
#include "CardGenerator.h"
#include <stdexcept>

// Конструктор банковской карты
BaseBankingCard::BaseBankingCard(
    const std::string& ownerName,
    const std::string& pinCode,
    double deposit
)
    : BasePlasticCard(),
    ownerName(ownerName),
    pinCode(pinCode),
    deposit(deposit)
{
    // Генерируем номер карты и CVC-код
    cardNumber = CardGenerator::GenerateCardNumber();
    cvc = CardGenerator::GenerateCVC();

    // Проверяем депозит
    if (deposit < 0)
    {
        throw std::invalid_argument("Deposit cannot be negative");
    }

    // Проверяем длину PIN-кода
    if (pinCode.length() != 4)
    {
        throw std::invalid_argument("PIN must contain exactly 4 digits");
    }

    // Проверяем, что PIN состоит только из цифр
    for (char digit : pinCode)
    {
        if (digit < '0' || digit > '9')
        {
            throw std::invalid_argument("PIN must contain only digits");
        }
    }
}

// Получение имени владельца
std::string BaseBankingCard::GetOwnerName() const
{
    return ownerName;
}

// Получение PIN-кода
std::string BaseBankingCard::GetPinCode() const
{
    return pinCode;
}

// Получение депозита
double BaseBankingCard::GetDeposit() const
{
    return deposit;
}

// Изменение имени владельца
void BaseBankingCard::SetOwnerName(const std::string& ownerName)
{
    this->ownerName = ownerName;
}

// Изменение PIN-кода
void BaseBankingCard::SetPinCode(const std::string& pinCode)
{
    if (pinCode.length() != 4)
    {
        throw std::invalid_argument("PIN must contain exactly 4 digits");
    }

    for (char digit : pinCode)
    {
        if (digit < '0' || digit > '9')
        {
            throw std::invalid_argument("PIN must contain only digits");
        }
    }

    this->pinCode = pinCode;
}

// Изменение депозита
void BaseBankingCard::SetDeposit(double deposit)
{
    if (deposit < 0)
    {
        throw std::invalid_argument("Deposit cannot be negative");
    }

    this->deposit = deposit;
}