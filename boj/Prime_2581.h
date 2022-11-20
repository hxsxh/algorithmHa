//
// Created by 하현승 on 2022/11/20.
//
#include <iostream>

#ifndef ALGORITHMHA_PRIME_2581_H
#define ALGORITHMHA_PRIME_2581_H

class Prime_2581 {
public:
    int getPrime(){
        int N,M, min=0, sum=0, count=0;
        bool pr = true;
        std::cin >> N >> M;
        for(int i=N;i<=M;i++){
            if(i==1)
                continue;
            for(int j=2;j<=i/2;j++) {
                if(i%j==0) {
                    pr = false;
                    break;
                }
            }
            if(pr){
                sum +=i;
                count++;
                if(min == 0)
                    min = i;
            }
            pr = true;
        }
        if(count == 0){
            std::cout<< -1 << std::endl;
        } else
            std::cout << sum << std::endl << min << std::endl;

        return 0;
    }
};
#endif //ALGORITHMHA_PRIME_2581_H
