#ifndef RUNSESSION_H
#define RUNSESSION_H

#include <iostream>
#include "IInputGenerator.h"
#include "IScoringRule.h"
#include "IRewardRule.h"
#include "ShopSystem.h"

class RunSession
{

private:
    IInputGenerator *inputGen;
    IScoringRule *scoring;
    IRewardRule *reward;
    ShopSystem shop;

    int money = 0;

public:
    RunSession(IInputGenerator *ig, IScoringRule *sc, IRewardRule *rw)
        : inputGen(ig), scoring(sc), reward(rw) {}

    void run()
    {

        std::cout << "=== RUN START ===\n";

        for (int round = 1; round <= 3; round++)
        {

            std::cout << "\nRound " << round << "\n";

            int input = inputGen->generateInput();
            std::cout << "[PLAY] input generated: " << input << "\n";

            int baseScore = scoring->computeScore(input);
            std::cout << "[SCORE] base score: " << baseScore << "\n";

            int gain = reward->computeReward(baseScore, round);

            money += gain;

            std::cout << "[REWARD] gain: " << gain << " | money: " << money << "\n";

            shop.showShop(reward, money);
        }

        std::cout << "\n=== RUN END ===\n";
        std::cout << "Final money: " << money << "\n";
    }
};

#endif