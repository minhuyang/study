/*
AcWing 809. 最小公倍数

输入两个整数 a 和 b，请你编写一个函数，int lcm(int a, int b)，计算并输出 a 和 b 的最小公倍数。

输入格式
共一行，包含两个整数 a 和 b。

输出格式
共一行，包含一个整数，表示 a 和 b 的最小公倍数。

数据范围
1≤a,b≤1000
输入样例：
6 8
输出样例：
24
*/
#include <iostream>
using namespace std;
int lcm(int a, int b)
{
    for(int i=min(a,b); ;i++)
    {
        if(i%a==0 && i%b==0)
            return i;
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b)<<endl;
    return 0;
}
