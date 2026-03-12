#ifndef BONUSREWARDRULE_H
#define BONUSREWARDRULE_H

#include "../Interface/IRewardRule.h"

class BonusRewardRule : public IRewardRule
{

public:
    int computeReward(int baseScore, int round) override
    {

        return baseScore + 2;
    }
};

#endif