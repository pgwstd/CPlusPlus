//
// Created by 潘光伟 on 2023/1/13.
//
#include "iostream"

using namespace std;

//比较三个整数，输出他们的最大值
int maxNumber(int x, int y, int z) {
    int max = 0;
    if (x > y && x > z){
        max = x;
    }
    if (y > x && y > z){
        max = y;
    }
    if (z > x && z > y){
        max = z;
    }
    return max;
}

int main() {
    int a, b, c;
    cout << "请输入三个整数:";
    cin >> a >> b >> c;
    int max = maxNumber(a, b, c);
    cout << "最大值为:" << max << endl;
    return 0;
}