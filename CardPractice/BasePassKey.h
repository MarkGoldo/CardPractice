#pragma once // Защита от повторного включения файла
#include <string>

// Базовый класс пропуска
class BasePassKey {
protected:
    int id;                     // Идентификатор владельца
    std::string fullName;       // ФИО владельца
    std::string organization;  // Наименование организации

public:
    // Конструктор для инициализации нового пропуска
    BasePassKey(int ownerId, std::string name, std::string org);

    // Виртуальный деструктор
    virtual ~BasePassKey() {}

    // Заготовка - виртуальная функция для пользования пропуском
    virtual void Pass();

    // Геттеры для доступа к данным
    int getId() const { return id; }
    std::string getFullName() const { return fullName; }
    std::string getOrganization() const { return organization; }
};
