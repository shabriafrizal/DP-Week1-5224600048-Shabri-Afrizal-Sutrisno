#ifndef IREWARDRULE_H
#define IREWARDRULE_H

class IRewardRule
{

public:
    virtual int computeReward(int baseScore, int round) = 0;
};

#endif