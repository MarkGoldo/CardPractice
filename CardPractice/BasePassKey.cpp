#include "BasePassKey.h"
#include <iostream>

// Реализация конструктора
BasePassKey::BasePassKey(int ownerId, std::string name, std::string org)
    : id(ownerId), fullName(name), organization(org) {
}

// Реализация виртуальной функции
void BasePassKey::Pass() {
    std::cout << "[BasePassKey] Пропуск использован базовым методом." << std::endl;
    std::cout << "Владелец: " << fullName << " (ID: " << id << ")" << std::endl;
    std::cout << "Организация: " << organization << std::endl;
}