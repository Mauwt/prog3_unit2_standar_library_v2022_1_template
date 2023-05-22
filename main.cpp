#include <iostream>
#include <vector>
#include <deque>
#include <forward_list>
#include <list>
#include <array>
#include <iterator>
#include <sstream>
#include <memory>
#include "p1.h"
#include "p2.h"
#include "p3.h"
#include "p4.h"
#include "p5.h"
#include "p6.h"
#include "p7.h"
#include "p8.h"
#include "p9.h"

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

    std::tuple<string, string, char> t2 = { "Texto1", "Texto2", 'A' };
    string text1; string text2; char flag;
    unpack(text1, text2, flag) = t2;
    cout << text1 << " " << text2 << " " << flag;

}

void p6(){
    std::list<int> v1 = { 11, 12, 13 };
    std::list<int> v2 = { 21, 22, 23 };
    std::list<int> v3 = { 31, 32, 33 };
    auto result = zip(v1, v2, v3);
// result sería del tipo: list<vector<int>>
    for (const auto& row : result) {
        for (const auto& value : row)
            std::cout << value << " ";
        std::cout << std::endl;
    }

    list<int> l1 = { 11, 12, 13 };
    list<int> l2 = { 21, 22, 23 };
    list<int> l3 = { 31, 32, 33 };
    auto r1 = zip(l1, l2, l3);
    for (const auto& row : r1) {
        for (const auto& value : row)
            cout << value << " ";
    }
    vector<int> v_1 = { 11, 12, 13, 14, 15 };
    vector<int> v_2 = { 21, 22, 23, 24, 25 };
    vector<int> v_3 = { 31, 32, 33, 34, 35 };
    vector<int> v_4 = { 41, 42, 43, 44, 45 };
    auto r2 = zip(v_1, v_2, v_3, v_4);
    for (const auto& row : r2) {
        for (const auto& value : row)
            cout << value << " ";
    }
}

void p7(){
    /*vector<int> cnt{istream_iterator<int>(cin), istream_iterator<int>()};
    auto res =rotate_range(cnt, 2);
    for (const auto& item : res)
        cout << item << " ";


    list<int> cnt2{istream_iterator<int>(cin), istream_iterator<int>()};
    auto res2 =rotate_range(cnt2, 2);
    for (const auto& item : res2)
        cout << item << " ";
    */
    vector<int> cnt1{istream_iterator<int>(cin), istream_iterator<int>()};
    auto res1 =rotate_range(cnt1, -2);
    for (const auto& item : res1)
        cout << item << " ";


   /* list<int> cnt3{istream_iterator<int>(cin), istream_iterator<int>()};
    auto res3 =rotate_range(cnt3, -2);
    for (const auto& item : res3)
        cout << item << " ";
    */
}

void p8(){
    string file_name;
    char key;
    cin >> file_name >> key;
    for(const auto& code: filter_codes(file_name, key))
        cout << code << " ";

}

void p9(){
    /*fixed_stack<std::unique_ptr<pair<int, int>> , 7> fs3;
    int n = 0;
    cin >> n;
    vector<pair<int, int>> vc1(n);
    for (auto& item: vc1)
        cin >> item.first >> item.second;

    for (auto& item: vc1)
        if (!fs3.push(std::make_unique<pair<int, int>>(item)))
            break;

    while (!fs3.empty()){
        cout << fs3.top()->first << " " << fs3.top()->second << std::endl;
        fs3.pop();
    }*/
    fixed_stack<int, 100> fs2;
    copy(istream_iterator<int>(cin), istream_iterator<int>(), fixed_stack_pusher(fs2));
    while (!fs2.empty()){
        cout << fs2.top() << " ";
        fs2.pop();
    }

    /*
    fixed_stack<int, 100> fs1;
    std::vector<float> vc1 = {1, 2, 3, 2, 3, 6, 3, 9};
    copy(begin(vc1), end(vc1), fixed_stack_pusher(fs1));

    while (!fs1.empty()) {
        cout << fs1.top()<<" ";
        fs1.pop();
    }
    fixed_stack<int, 5> fs1 {1, 2, 3, 4, 5};
    while (!fs1.empty()){
        cout << fs1.top() << " ";
        fs1.pop();
    }
*/


}
int main() {
    //p1();
    //p2();
    //p3();
    //p4();
    //p5();
    //p6();
    //p7();
    //p8();
    p9();
    return 0;
}
