//
// Created by rudri on 10/11/2020.
//

#include <vector>
#include <algorithm>

#ifndef PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P6_H
#define PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P6_H

/*template<typename T,typename ...args>
void add_val (std::vector<T>& v, ){

}

template< template<class...> class cont, typename T, typename ...args>
 std::vector<std::vector<T>> zip(cont<T>& arr, args... arrs){
    std::vector<std::vector<T>> out (sizeof...(arrs)+1);
    for (int i = 0; i<arr.size();i++){
        std::vector<T> temp;
        temp.push_back(*(arr.begin()+i));
        (temp.push_back(*(arrs[i]),... arrs);

    }

}*/


template<template<class...>typename cont,template<class...>typename...cont2 , typename T>
std::vector<std::vector<T>> zip(cont<T> cnt, cont2<T>... args){
    std::vector<std::vector<T>> out;
    cont<cont<T>> conts = {args...};
    int sz = std::distance(begin(cnt), end(cnt));

    for(const auto& e:cnt){
        std::vector<T> temp;
        temp.push_back(e);
        out.push_back(temp);
    }

    for(int i =0; i< sizeof...(args);i++){
        for (int j = 0; j < sz; j++){
            out[j].push_back( *std::next(  (*std::next(conts.begin(),i)).begin()  ,j ));
        }
    }

    return out;
}
#endif //PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P6_H
