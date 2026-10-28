#include "DebitCard.h"

// Передаем параметры в конструктор базового класса с фиксированным депозитом 10000.0
// Базовая валидация (ПИН-код и проверка на отрицательный депозит) отработает автоматически.
DebitCard::DebitCard(const std::string& ownerName, const std::string& pinCode)
    : BaseBankingCard(ownerName, pinCode, 10000.0)
{
}
