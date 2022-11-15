//
// Created by 하현승 on 2022/11/15.
//
#include <iostream>
#ifndef ALGORITHMHA_SUGAR_2839_H
#define ALGORITHMHA_SUGAR_2839_H

class Sugar_2839 {
    int input, five, three = 0;
public:
    int getSugar(){
      std::cin >> input;
        five = input / 5;
        while(1){
            if(five < 0){
                std::cout << -1 << std::endl;
                return 0;
            }
            if ((input - 5*five)%3 == 0){
                three = (input - 5*five) / 3;
                break;
            } else {
                five--;
            }
        }
        std::cout << five + three << std::endl;
        return 0;
    }
};
#endif //ALGORITHMHA_SUGAR_2839_H
