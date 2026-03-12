#include <cstdlib>
#include <ctime>

#include "RunSession.h"
#include "RandomInputGenerator.h"
#include "BasicScoringRule.h"
#include "BasicRewardRule.h"

int main()
{

    srand(time(0));

    RandomInputGenerator input;
    BasicScoringRule scoring;
    BasicRewardRule reward;

    RunSession session(&input, &scoring, &reward);

    session.run();
}