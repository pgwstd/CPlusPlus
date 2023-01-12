//
// Created by 潘光伟 on 2023/1/12.
//
#include "iostream"
using namespace std;
int main(){
    int a = 10;
    int b = 12;
    const int *d = &b;//常量指针
    int * const e = &a;
    int *p = &a;
    cout << "sizeof (int *) = " << sizeof(int *) << endl;
    return 0;
}