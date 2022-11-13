//
// Created by 하현승 on 2022/11/13.
//
#include <iostream>
#ifndef ALGORITHMHA_ACM_10250_H
#define ALGORITHMHA_ACM_10250_H

class ACM_10250 {
    short number;
    int H, W, N;
    int floor, flat;
public:
    int getACM(){
        std:: cin >> number;
        for(int i=0;i<number;i++) {
            std::cin >> H >> W >> N;
            flat = N / H;
            floor = N % H; //
            if (floor > 0)
                flat++;
            else
                floor = H;
            std::cout << floor * 100 + flat << std::endl;
        }
       return 0;
    }
};

#endif //ALGORITHMHA_ACM_10250_H
