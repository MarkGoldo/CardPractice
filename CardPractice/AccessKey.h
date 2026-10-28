#pragma once
#include "BasePassKey.h"

class AccessKey : public BasePassKey
{
public:
    AccessKey(int ownerId, std::string name, std::string org);

    void Pass() override;
};