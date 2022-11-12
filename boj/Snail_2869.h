//
// Created by 하현승 on 2022/11/12.
//
#include <iostream>
#ifndef ALGORITHMHA_SNAIL_2869_H
#define ALGORITHMHA_SNAIL_2869_H

class Snail_2869 {
    int A,B,V;
    int count, n;
public:
    void getSnailUp(){
        std::cin >> A >> B >> V;
        if (B>A){
            return;
        }
        B = A - B;
        n = (V - A + B) % B;
        count = (V - A + B) / B;
        if(n != 0)
            count++;
        std::cout << count << std::endl;
    }
};

#endif //ALGORITHMHA_SNAIL_2869_H
