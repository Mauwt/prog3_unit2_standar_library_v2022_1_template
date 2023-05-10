#include <iostream>
#include <vector>
#include <deque>
#include <forward_list>
#include <list>
#include <array>
#include <iterator>
#include <sstream>
#include "p1.h"
#include "p2.h"
#include "p3.h"
#include "p4.h"
#include "p5.h"
using namespace std;

void p1(){

    deque<int> cnt {istream_iterator<int>(cin), istream_iterator<int>()};
    auto res1 = split_range(cnt, 4);
    for (const auto& row : res1) {
        for (const auto& item : row)
            cout << item;
        cout << "||";
    }
    cout << "\n";
    list<int> cnt1{istream_iterator<int>(cin), istream_iterator<int>()};
    auto res2 = split_range(cnt1, 2);
    for (const auto& row : res2) {
        for (const auto& item : row)
            cout << item << " ";
    }
    cout << "\n";

    vector<int> vec{istream_iterator<int>(cin), istream_iterator<int>()};
    forward_list<int> cnt2{begin(vec), end(vec)};
    auto res3 = split_range(cnt2, 3);
    for (const auto& row : res3) {
        for (const auto& item : row)
            cout << item << " ";
        cout << "||";
    }
    cout << "\n";

}

void p2(){

        stringstream os;
        list<int> l1 = { 10, 20, 30, 40, 50, 60, 70 };
        list<int> l2 = { 4, 8 };
        auto res1 = sum_range(l1, l2);
        for (const auto& item : res1)
            cout << item << " ";



        forward_list<int> fl1 = { 10, 20, 30, 40, 50, 60, 70, 80 };
        forward_list<int> fl2 = { 4, 8, 7};
        auto res2 = sum_range(fl1, fl2);
        for (const auto& item : res2)
            cout << item << " ";


}

void p3(){

        list<int> cnt{istream_iterator<int>(cin), istream_iterator<int>()};
        auto res1 = delete_range(cnt, 1);
        for (const auto& item : res1)
            cout << item << ", ";


/*
        list<int> cnt1 {istream_iterator<int>(cin), istream_iterator<int>()};
        auto res2 = delete_range(cnt1, { 1, 2 });
        for (const auto& item : res2)
            cout << item << " ";



        deque<int> cnt2{istream_iterator<int>(cin), istream_iterator<int>()};
        auto res3 = delete_range(cnt2, 2);
        for (const auto& item : res3)
            cout << item << " ";




        deque<int> cnt3{istream_iterator<int>(cin), istream_iterator<int>()};
        auto res4 = delete_range(cnt3, { 1, 2 });
        for (const auto& item : res4)cout << item << " ";*/
}

void p4(){
    /*vector<int> cnt{istream_iterator<int>(cin), istream_iterator<int>()};
    auto res1 = delete_duplicated(cnt);
    for (const auto& item : res1)
        cout << item << " ";
*/
    list<int> cnt2{istream_iterator<int>(cin), istream_iterator<int>()};
    auto res2 = delete_duplicated(cnt2);
    for (const auto& item : res2)
        cout << item << " ";
}

void p5(){
    std::tuple<int, string, string, double> t1 = { 1321, "Jose", "Perez", 1.68 };
    int key; string first_name; string last_name; double height;
    unpack(key, first_name, last_name, height) = t1;
    cout << key << " " << first_name << " " << last_name << " " << height;

    std::tuple<string, string, char> t1 = { "Texto1", "Texto2", 'A' };
    string text1; string text2; char flag;
    unpack(text1, text2, flag) = t1;
    cout << text1 << " " << text2 << " " << flag;

}
int main() {
    //p1();
    //p2();
    //p3();
    //p4();
    p5();
    return 0;
}
