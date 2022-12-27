//
// Created by 潘光伟 on 2022/12/27.
//
#include "iostream"

using namespace std;

int main() {

    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= 9; ++j) {
            cout << i << " * " << j << " = " << i * j << "\t";
            if (i == j) {
                break;
            }
        }
        cout << endl;
    }


    return 0;
}
