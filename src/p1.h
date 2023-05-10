//
// Created by rudri on 10/11/2020.
//

#include <iterator>
#include <algorithm>
#include <vector>
#include <forward_list>
#ifndef PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P1_H
#define PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P1_H

template<
        template<class...> typename cont = std::vector, typename T1,
        template<class> typename cont_arg>
cont<cont<T1>> split_range(cont_arg<T1> arr, int n ){
    cont<cont<T1>> out;

    int sz =  std::distance(arr.begin(), arr.end());

    auto it1 = arr.begin();
    while(it1!=arr.end()){
        std::vector<T1> temp;

        if (std::distance(it1, arr.end()) ==  sz - ((sz/n)* (n-1)) ){

            std::copy(it1, arr.end(), std::back_inserter(temp));
            out.push_back(temp);
            break;
        }else{

            std::copy(it1, next(it1,sz/n), std::back_inserter(temp));
            out.push_back(temp);
            std::advance(it1,sz/n);
        }
    }

    return out;
}

/*Solucion Alternativa


template<
        template<class...> typename cont = std::vector, typename T1,
        template<class> typename cont_arg>
cont<cont<T1>> split_range(cont_arg<T1> arr, int n ){
    cont<cont<T1>> out;

    int sz =  std::distance(arr.begin(), arr.end());

    bool mul = sz % n == 0;

    auto it  = arr.begin();

    for (int i  = 0; i<n - mul ; i++){
        std::vector<T1> temp;
        std::copy(it, next(it,sz/n), std::back_inserter(temp));
        out.push_back(temp);
        std::advance(it,sz/n);
    }

    if (mul){
        std::vector<T1> temp;
        std::copy(it, arr.end(), std::back_inserter(temp));
        out.push_back(temp);
    }

}*/



#endif //PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P1_H
