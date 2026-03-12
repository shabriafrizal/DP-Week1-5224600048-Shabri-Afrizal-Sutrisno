#ifndef BASICSCORINGRULE_H
#define BASICSCORINGRULE_H

#include "../Interface/IScoringRule.h"

class BasicScoringRule : public IScoringRule
{

public:
    int computeScore(int input) override
    {
        return input;
    }
};

#endif