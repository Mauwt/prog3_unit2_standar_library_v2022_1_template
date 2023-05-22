//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P8_H
#define PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P8_H
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <algorithm>
template< template<class...>typename cnt = std::vector,
        typename T>
cnt<T> filter_codes(T f_name,char del){
    cnt<T> out;
    std::ifstream iss;
    iss.open(f_name);

    T token;
    while(std::getline(iss,token)){
        if(token[0] == del){
            out.push_back(token);
        }
    }

    std::sort(out.begin(), out.end());
    return out;
}

#endif //PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P8_H
