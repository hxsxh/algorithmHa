//
// Created by 하현승 on 2022/11/20.
//
#include <iostream>
#ifndef ALGORITHMHA_PRIME_1978_H
#define ALGORITHMHA_PRIME_1978_H

class Prime_1978 {
public:
    int getPrime(){
        int num, count = 0, primes[100];
        std::cin >> num;

        for(int i=0; i<num; i++){
            std::cin >> primes[i];
        }
        for(int j=0; j<num;j++){
            if(primes[j] == 1)
                primes[j] = 0;
                for(int k=2; k< primes[j];k++){
                if(primes[j]%k == 0)
                    primes[j] = 0;
            }
            if(primes[j] != 0)
                count++;
        }

        std::cout << count << std::endl;
        return 0;
    }
};
#endif //ALGORITHMHA_PRIME_1978_H
