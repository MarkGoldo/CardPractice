#include "AccessKey.h"
#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>

AccessKey::AccessKey(int ownerId, std::string name, std::string org)
    : BasePassKey(ownerId, name, org)
{
}

void AccessKey::Pass()
{
    // Получаем текущие дату и время
    auto now = std::chrono::system_clock::now();
    std::time_t currentTime =
        std::chrono::system_clock::to_time_t(now);

    // Преобразуем время в локальное
    std::tm localTime{};
    localtime_s(&localTime, &currentTime);

    // Выводим информацию о проходе
    std::cout << "=== AccessKey: проход зафиксирован ===" << std::endl;
    std::cout << "Владелец: " << fullName << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Организация: " << organization << std::endl;

    std::cout << "Дата и время прохода: "
        << std::put_time(&localTime, "%d.%m.%Y %H:%M:%S")
        << std::endl;
}