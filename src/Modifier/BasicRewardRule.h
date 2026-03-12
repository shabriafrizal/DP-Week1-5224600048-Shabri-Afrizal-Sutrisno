#ifndef BASICREWARDRULE_H
#define BASICREWARDRULE_H

#include "../Interface/IRewardRule.h"

class BasicRewardRule : public IRewardRule
{

public:
    int computeReward(int baseScore, int round) override
    {

        return baseScore;
    }
};

#endif