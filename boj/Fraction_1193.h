//
// Created by 하현승 on 2022/11/12.
//
#include <iostream>
#ifndef ALGORITHMHA_FRACTION_1193_H
#define ALGORITHMHA_FRACTION_1193_H


class Fraction_1193 {
    int input, count, first=1, last=1;
public:
    // This is Not Optimized Way
    void getFrac() {
        std::cin >> input;
        for (int i = 1;input>=first; i++) {
            if (input == 1)
                break;
            first = i*(i+1)/2;
            last = (i+1)*(i+2)/2;
            if(input <= last){
                first = i+1;
                break;
            }
        }

        count = last - input;
        if(first%2 == 0){
            last = 1 + count;
            first = first - count;
        } else {
            last = first - count;
            first = 1 + count;
        }
        std::cout << first << "/" << last <<std::endl;
    }
};


#endif //ALGORITHMHA_FRACTION_1193_H
