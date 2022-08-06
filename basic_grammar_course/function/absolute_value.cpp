/*
AcWing 810. 绝对值

输入一个整数 x，请你编写一个函数，int abs(int x)，输出 x 的绝对值。

输入格式
共一行，包含一个整数 x。

输出格式
共一行，包含 x 的绝对值。

数据范围
−100≤x≤100
输入样例：
-3
输出样例：
3
*/
#include <iostream>
using namespace std;
int abs(int x)
{
    if(x>=0)
        return x;
    else
        return -x;
}
int main()
{
    int x;
    cin>>x;
    cout<<abs(x)<<endl;
    return 0;
}
