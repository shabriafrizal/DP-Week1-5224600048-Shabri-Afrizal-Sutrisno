#ifndef SIMPLEINPUTGENERATOR_H
#define SIMPLEINPUTGENERATOR_H

#include "IInputGenerator.h"

class SimpleInputGenerator : public IInputGenerator
{

public:
    int generateInput() override
    {
        return 3;
    }
};

#endif