#pragma once
#include "BaseBankingCard.h"
#include <string>

// Класс Кредитной карты на основе базовой банковской карты
class CreditCard : public BaseBankingCard
{
private:
    double serviceFeePercent; // Процент за обслуживание (например, 2.5 для 2.5%)

public:
    // Конструктор принимает ФИО, ПИН-код и процент за обслуживание.
    // Начальный депозит по умолчанию устанавливается в 100000.
    CreditCard(const std::string& ownerName, const std::string& pinCode, double serviceFeePercent);

    ~CreditCard() override = default;

    // Геттер и сеттер для процента обслуживания
    double GetServiceFeePercent() const;
    void SetServiceFeePercent(double feePercent);

    // Функция обслуживания: списывает процент комиссии от текущего баланса
    void Service();
};