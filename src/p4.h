//
// Created by rudri on 10/11/2020.
//
#include <algorithm>
#include <vector>

#ifndef PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P4_H
#define PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P4_H

template<template <class...>class cont , typename T>
cont<T> delete_duplicated(cont<T>& arr){

    cont<T> out ;
    for (auto i = arr.begin(); i!=arr.end(); std::advance(i,1)){
        if (i == arr.begin()) {
            out.push_back(*i);
            continue;
        }

        bool isin = false;
        for(const auto& e: out){
            if (*i == e) isin = true;
        }
        if (!isin) out.push_back(*i);
    }

    return out;
}
#endif //PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P4_H
