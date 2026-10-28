#pragma once
#include "BaseBankingCard.h"
#include <string>

// Класс Дебетовой карты на основе базовой банковской карты
class DebitCard : public BaseBankingCard
{
public:
    // Конструктор принимает только ФИО владельца и ПИН-код. 
    // Начальный депозит по умолчанию устанавливается в 10000.
    DebitCard(const std::string& ownerName, const std::string& pinCode);

    // Деструктор
    ~DebitCard() override = default;
};

