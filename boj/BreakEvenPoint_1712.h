//
// Created by 하현승 on 2022/11/11.
//
#include <iostream>

#ifndef C_PALAC_BREAKEVENPOINT_H
#define C_PALAC_BREAKEVENPOINT_H


class BreakEvenPoint_1712 {
    int fixedCost, varCost, cost;
    public: void getBEP(){
        std::cin >> fixedCost >> varCost >> cost;
        if (varCost >= cost ){
            std::cout << -1;
            return;
        }
        std::cout << fixedCost/(cost-varCost) + 1;
        return;
    }
};


#endif //C_PALAC_BREAKEVENPOINT_H
