#ifndef ISCORINGRULE_H
#define ISCORINGRULE_H

class IScoringRule
{

public:
    virtual int computeScore(int input) = 0;
};

#endif