//
// Created by 潘光伟 on 2022/12/31.
//
#include "iostream"

using namespace std;

int main() {
//    for (int i = 1; i <= 100; ++i) {
//        if (i % 3 == 0){
//            continue;
//        }
//        cout << i << endl;
//    }
    cout << "1" << endl;
    cout << "2" << endl;
    goto Frit;
    cout << "3" << endl;
    cout << "4" << endl;

    Frit:
    cout << "5" << endl;
    return 0;
}