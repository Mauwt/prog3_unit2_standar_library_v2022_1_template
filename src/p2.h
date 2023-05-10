//
// Created by rudri on 10/11/2020.
//
#include <vector>

#ifndef PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P2_H
#define PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P2_H

template<
        template <class...> class cont1 = std::vector, typename T1,
        template <class...> class cont2, typename T2
        >
std::vector<T1> sum_range(cont1<T1> c1, cont2<T2> c2){
    std::vector<T1> out;

    int sz1 = std::distance(c1.begin(), c1.end());
    int sz2 = std::distance(c2.begin(), c2.end());


    if (sz1==sz2){
        auto it1 = c1.begin();
        auto it2 = c2.begin();

        while(it1 != c1.end()){

            out.push_back((*it1) + (*it2));
            std::advance(it1, 1);
            std::advance(it2, 1);
        }
        return out;
    }else if (sz1 > sz2){
        auto it1 = c1.begin();
        auto it2 = c2.begin();
        int i = 0;
        while(it1!= c1.end()){
            out.push_back( (*it1) + *(std::next(it2,i)) );
            i == sz2-1 ? i = 0 :i++;
            std::advance(it1,1);
        }

    }else if (sz2 > sz1){
        auto it1 = c2.begin();
        auto it2 = c1.begin();
        int i = 0;
        while(it1!= c2.end()){
            out.push_back( (*it1) + *(std::next(it2,i)) );

            i == sz1-1 ? i = 0 : i++;
            std::advance(it1,1);
        }

    }

    return out;

}
#endif //PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P2_H
