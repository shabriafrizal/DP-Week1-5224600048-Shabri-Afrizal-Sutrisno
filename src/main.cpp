#include "RunSession.h"
#include "SimpleInputGenerator.h"
#include "BasicScoringRule.h"
#include "BasicRewardRule.h"

int main()
{

    SimpleInputGenerator input;
    BasicScoringRule scoring;
    BasicRewardRule reward;

    RunSession session(&input, &scoring, &reward);

    session.run();
}