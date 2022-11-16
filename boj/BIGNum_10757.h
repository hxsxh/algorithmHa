//
// Created by 하현승 on 2022/11/16.
//
#include <iostream>
#include <string>
#ifndef ALGORITHMHA_BIGNUM_10757_H
#define ALGORITHMHA_BIGNUM_10757_H

class BIGNum_10757 {

public:
    int getBig(){
        char A[10001];
        char B[10001];
        char sum[10002];
        int len;
        std::cin >> A >> B;
        if(strlen(A) < strlen(B))
            len = strlen(B);
        else
            len = strlen(A);

        for(int i=len-1;i>=0;i--){
            sum[i] = A[i] + B[i];
            if(i==0 && sum[i] >= 106){
                sum[0] -= 58;
                std::cout << 1;
                break;
            }
            if(sum[i] < 106)
                sum[i] -= 48;
            else {
                sum[i] -= 58;
                A[i - 1] += 1;
            }
        }
        sum[strlen(sum)] = '\0';
        std::cout << sum << std::endl;
        return 0;
    }
};

#endif //ALGORITHMHA_BIGNUM_10757_H
