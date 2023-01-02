//
// Created by 潘光伟 on 2023/1/2.
//
#include "iostream"

using namespace std;

int main() {
    int arr[5] = {3, 1, 4, 2, 6};
    int tmp = 0;
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;
    int count = sizeof(arr) / sizeof(arr[0]);
    while (start < end) {
        tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
        start++;
        end--;
    }

    for (int i = 0; i < count; ++i) {
        cout << arr[i] << endl;
    }

    return 0;
}