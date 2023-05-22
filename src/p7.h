//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P7_H
#define PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P7_H


template<template<class...>typename cont, typename T>
cont<T>& rotate_range(cont<T>& ct, int n)
{
    if (n >0){
        for (int i = 0; i<n; i++){
            ct.insert(ct.begin(),*( std::prev(end(ct),1) ));
            ct.erase(std::prev(ct.end(),1) );
        }
    }else if(n<0) {
        for (int i = 0; i>n; i--){
            ct.insert(ct.end(), *(begin(ct)));
            ct.erase(std::begin(ct) );
        }
    }
    return ct;
}

#endif //PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P7_H
