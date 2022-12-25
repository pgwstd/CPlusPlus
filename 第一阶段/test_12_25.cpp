//
// Created by 潘光伟 on 2022/12/25.
//
#include "iostream"

using namespace std;

int main() {
    /* int n = 0;
     do {
         cout << n << endl;
         n++;
     } while (n < 10);*/

    int num = 100;
    do {
        int a = num % 10;
        int b = num / 10 % 10;
        int c = num / 100;
        if (a * a * a + b * b * b + c * c * c == num) {
            cout << num << endl;
        }
        num++;
    } while (num < 1000);
    return 0;
}