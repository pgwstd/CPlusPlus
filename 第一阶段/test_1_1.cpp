//
// Created by 潘光伟 on 2023/1/1.
//
#include "iostream"

using namespace std;

int main() {
    int array[5] = {100, 200, 80, 98, 250};
    int a = sizeof(array) / sizeof(array[0]);
    /* int max = array[0];
     for (int i = 0; i < a; ++i) {
         if (array[i] > max) {
             max = array[i];
         }
     }
     cout << max << endl;*/
    int tmp = 0;
    for (int i = 0; i < a; i++) {
        //冒泡排序
        for (int j = 0; j < a - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }

    }
    for (int j = 0; j < a; ++j) {
        cout << array[j] << endl;
    }
    return 0;
}