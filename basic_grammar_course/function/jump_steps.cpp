/*
AcWing 821. 跳台阶

一个楼梯共有 n 级台阶，每次可以走一级或者两级，问从第 0 级台阶走到第 n 级台阶一共有多少种方案。

输入格式
共一行，包含一个整数 n。

输出格式
共一行，包含一个整数，表示方案数。

数据范围
1≤n≤15
输入样例：
5
输出样例：
8
*/

#include <iostream>
using namespace std;
int n,ans;
int f(int k)
{
    if(n==k) ans++;
    else if(k<n)
    {
        f(k+1);
        f(k+2);
    }
}
int main()
{
    cin>>n;
    f(0);
    cout<<ans<<endl;
    return 0;
}
