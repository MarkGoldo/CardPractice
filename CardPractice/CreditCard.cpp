#include "CreditCard.h"
#include <stdexcept>

// Конструктор: передает базовые параметры и 100000.0 рублей в BaseBankingCard
CreditCard::CreditCard(const std::string& ownerName, const std::string& pinCode, double serviceFeePercent)
    : BaseBankingCard(ownerName, pinCode, 100000.0)
{
    SetServiceFeePercent(serviceFeePercent);
}

// Получение текущего процента обслуживания
double CreditCard::GetServiceFeePercent() const
{
    return serviceFeePercent;
}

// Изменение процента с валидацией (нельзя установить отрицательный процент)
void CreditCard::SetServiceFeePercent(double feePercent)
{
    if (feePercent < 0)
    {
        throw std::invalid_argument("Service fee percent cannot be negative");
    }
    this->serviceFeePercent = feePercent;
}

// Функция списания комиссии за обслуживание
void CreditCard::Service()
{
    double currentDeposit = GetDeposit();
    double feeAmount = (currentDeposit * serviceFeePercent) / 100.0;
    double newDeposit = currentDeposit - feeAmount;

    // Так как логика списания может опустить баланс ниже нуля (если комиссия > 100%),
    // гарантируем безопасность в рамках требований инкапсуляции.
    if (newDeposit < 0)
    {
        newDeposit = 0;
    }

    // Обновляем баланс через защищенный метод базового класса
    SetDeposit(newDeposit);
}
