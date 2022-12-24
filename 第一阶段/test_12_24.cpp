//
// Created by 潘光伟 on 2022/12/24.
//
#include "iostream"
using namespace std;
int main()
{
    srand((unsigned int)time(NULL));
    int k = rand() % 100 + 1;
    cout << k << endl;
    return 0;
}