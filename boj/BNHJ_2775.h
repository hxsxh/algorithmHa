//
// Created by 하현승 on 2022/11/13.
//
#include <iostream>

#ifndef ALGORITHMHA_BNHJ_2775_H
#define ALGORITHMHA_BNHJ_2775_H

class BNHJ_2775 {
    short num;
    short floor=0, flat=1;
public:
    int getBNHJ(){
        std::cin >> num;
        for(int i=0; i<num; i++) {
            std::cin >> floor >> flat;
            if (floor == 0)
                std::cout << flat << std::endl;
            else if (flat == 1)
                std::cout << 1 << std::endl;
            else {
                floor = floor + flat;
                flat = flat - 1;
                std::cout << getCount(floor, flat) << std::endl;
            }
        }
        return 0;
    }

    int getCount(short k, short n) {
        short l=k,m=n;
        for(int i=1;i<n;i++){
            l = l*(k-i);
            m = m*(n-i);
            std::cout<< i << ": " << l << ", " << m << std::endl;
        }
        return l/m;
    }
};

#endif //ALGORITHMHA_BNHJ_2775_H
