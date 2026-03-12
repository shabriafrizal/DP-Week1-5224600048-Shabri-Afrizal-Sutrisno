#ifndef RANDOMINPUTGENERATOR_H
#define RANDOMINPUTGENERATOR_H

#include "IInputGenerator.h"
#include <cstdlib>

class RandomInputGenerator : public IInputGenerator
{

public:
    int generateInput() override
    {

        return rand() % 5 + 1;
    }
};

#endif