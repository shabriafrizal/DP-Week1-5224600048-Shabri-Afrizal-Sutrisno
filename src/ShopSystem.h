#ifndef SHOPSYSTEM_H
#define SHOPSYSTEM_H

#include <iostream>
#include <cstdlib>
#include "IRewardRule.h"
#include "BonusRewardRule.h"

class ShopSystem
{

public:
    void showShop(IRewardRule *&rewardRule, int &money)
    {

        const int bonusCost = 2;

        std::cout << "[SHOP] offered: Bonus(+2) cost " << bonusCost << "\n";

        int decision = rand() % 2;

        if (decision == 1)
        {

            if (money < bonusCost)
            {

                std::cout << "[SHOP] cannot afford Bonus modifier\n";
                return;
            }

            money -= bonusCost;

            std::cout << "[SHOP] purchased Bonus modifier\n";
            std::cout << "[SHOP] money after purchase: " << money << "\n";

            rewardRule = new BonusRewardRule();
        }
        else
        {

            std::cout << "[SHOP] skipped\n";
        }
    }
};

#endif