/*
AcWing 807. 区间求和

输入两个整数 l 和 r，请你编写一个函数，int sum(int l, int r)，计算并输出区间 [l,r] 内所有整数的和。

输入格式
共一行，包含两个整数 l 和 r。

输出格式
共一行，包含一个整数，表示所求的和。

数据范围
1≤l≤r≤1000
输入样例：
3 5
输出样例：
12
*/

#include <iostream>
using namespace std;
int sum(int l, int r)
{
    int s;
    s=(l+r)*(r-l+1)/2;
    return s;
}
int main()
{
    int l,r;
    cin>>l>>r;
    cout<<sum(l,r)<<endl;
    return 0;
}
