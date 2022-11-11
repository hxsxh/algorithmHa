//
// Created by 하현승 on 2022/11/11.
//
#include <iostream>

#ifndef C_PALAC_HONEYCOMB_2292_H
#define C_PALAC_HONEYCOMB_2292_H


class HoneyComb_2292 {
    int first=1, last = 1;
    int count = 1;
    int input = 2;

public:
    void getHoneyComb(){
        std::cin >> input;
        while(input > last){
                first = last + 1;
                last = first + 6*count - 1;
                std::cout << input << " first=" << first << " last=" << last << " count" << count << std::endl;
                count++;
        }
        std::cout << count;
    }
};


#endif //C_PALAC_HONEYCOMB_2292_H
