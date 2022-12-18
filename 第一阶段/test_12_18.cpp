//
// Created by 潘光伟 on 2022/12/18.
//
#include"iostream"
using namespace std;
int main()
{
    int a = 10;
    short num1 = -32768;
    int num2 = 10;
    long num3 = 10;
    long long num4 = 10;
    float f = 3.1415926f;
    double d = 5.1234567;
    int i = 3e2;  //3 * 10 ^ 2
    float j = 3e-2f; //3 * 0.1 ^ 2
    cout << j << endl;
    cout << i << endl;
    cout << f << endl;
    cout << d << endl;
    cout << a << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    cout << num4 << endl;

    cout << "short占用的内存大小" << sizeof(short) << endl;
    cout << "int占用的内存大小" << sizeof(int) << endl;
    cout << "float占用的内存大小" << sizeof(float) << endl;
    cout << "double占用的内存大小" << sizeof(double) << endl;
    cout << "long占用的内存大小" << sizeof(long) << endl;
    cout << "long long占用的内存大小" << sizeof(long long) << endl;
}
