//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P9_H
#define PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P9_H
#include <vector>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <sstream>
#include <initializer_list>

template<typename T, size_t sz>
class fixed_stack_pusher;


template<typename  T, size_t sz>
class fixed_stack{
private:
    const size_t n = sz;
    std::vector<T> p;
public:
    using value_type = T;
    using reference = T&;
    using const_reference = const T&;
    fixed_stack() = default;
    fixed_stack(std::initializer_list<T> lst) {
        for(auto i = rbegin(lst);p.size()<n; std::advance(i,1)){
            p.push_back(*(i));
        }
    }

    void pop(){
        if (n==0) return;
        p.erase(p.begin());
    }

    bool push(T value){
        if(p.size()<n){
            p.insert(p.begin(),std::forward<T>(value));
            return true;
        }
        return false;
    }

    T& top(){ return p[0]; }

    bool empty(){ return p.empty();}

    int size(){ return p.size(); }


    friend fixed_stack_pusher<T,sz>;
};

template<typename T, std::size_t sz>
class fixed_stack_pusher{
protected:
    fixed_stack<T, sz>& stack_;
public:
    using difference_type = std::ptrdiff_t;
    using value_type = T;
    using pointer = T*;
    using reference = T&;
    using iterator_category = std::output_iterator_tag;

    explicit fixed_stack_pusher(fixed_stack<value_type, sz>& stack) : stack_{stack}{}

    //fixed_stack_pusher(fixed_stack_pusher& o): stack_ { o.stack_}{};

    fixed_stack_pusher& operator++() {
        return *this;
    }

    fixed_stack_pusher operator++(int) {
        return *this;
    }

    fixed_stack_pusher& operator=(value_type value) {
        stack_.push(std::move(value));
        return *this;
    }

    fixed_stack_pusher& operator*() {
        return *this;
    }

};


#endif //PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P9_H
