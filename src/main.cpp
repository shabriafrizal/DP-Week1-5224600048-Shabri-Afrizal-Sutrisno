#include <cstdlib>
#include <ctime>

#include "System/RunSession.h"
#include "Generator/RandomInputGenerator.h"
#include "Modifier/BasicScoringRule.h"
#include "Modifier/BasicRewardRule.h"

int main()
{

    srand(time(0));

    RandomInputGenerator input;
    BasicScoringRule scoring;
    BasicRewardRule reward;

    RunSession session(&input, &scoring, &reward);

    session.run();
}