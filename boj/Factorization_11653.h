//
// Created by 하현승 on 2022/11/21.
//
#include <iostream>
#ifndef ALGORITHMHA_FACTORIZATION_11653_H
#define ALGORITHMHA_FACTORIZATION_11653_H


class Factorization_11653 {
public:
    int getFactor(){
        int num;
        std::cin >> num;

        if(num==1)
            return 0;

        for(int i=2;i<=num;i++){
            while(num % i == 0){
                std::cout << i << std::endl;
                num = num / i;
            }
        }
        return 0;
    }
};
#endif //ALGORITHMHA_FACTORIZATION_11653_H
