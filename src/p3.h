//
// Created by rudri on 10/11/2020.
//
#include <algorithm>
#include <iterator>
#ifndef PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P3_H
#define PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P3_H


template<template <class...> class cont, typename T>
cont<T> delete_range(cont<T> c, int n) {
    /*
        Funcion lambda que devuelve un bool despues de comparar el elmento
        con cada uno de los argumento que puden ser 1 o varios (variadic)
     */
    auto predicate = [&](auto x) { return (x == n); };

    /*
        remove_if toma la lambda function y todos los valores que resulten verdadero
        los envia al final del vector. Retorna un puntero al primer elemento que
        debio ser eliminado
        Luego erase borrara los elementos desde ese puntero hasta el final del
        contenedor

    */
    c.erase(std::remove_if(c.begin(), c.end(), predicate), c.end());
    return c;
}

template<template <class...> class cont, typename T, size_t N>
cont<T> delete_range(cont<T> c, int (&&arr)[N]) {

    auto predicate = [&](auto x) {
        for(int i = 0; i < N; i++){
            if (x == *(arr+i)) return true;
        }
        return false;
    };


    c.erase(std::remove_if(c.begin(), c.end(), predicate), c.end());
    return c;
}
#endif //PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P3_H