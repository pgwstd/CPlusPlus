//
// Created by 潘光伟 on 2023/1/13.
//
#include "iostream"

using namespace std;

//冒泡排序
void BubbleSort(int *arr, int size) {
    int tmp = 0;
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]){
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
void Printf(int * arr, int size){
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << endl;
    }
}
int main() {
    int arr[] = {3, 2, 56, 24, 12345, 73, 124, 14, 5435, 879, 98756};
    int len = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, len);
    Printf(arr,len);
    return 0;
}