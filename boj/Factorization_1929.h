//
// Created by 하현승 on 2022/11/25.
//
#include <iostream>
#ifndef ALGORITHMHA_FACTORIZATION_1929_H
#define ALGORITHMHA_FACTORIZATION_1929_H

class Factorization_1929 {
public:
    int getFactor() {
        int M,N;
        bool pr = true;
        std::cin >> M >> N;

        int primes[N-M+1];
        for(int p=0;p<N-M+1;p++){
            primes[p] = M++;
        }

        return 0;
    }
};
#endif //ALGORITHMHA_FACTORIZATION_1929_H
