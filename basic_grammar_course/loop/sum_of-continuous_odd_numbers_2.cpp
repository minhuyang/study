/*
AcWing 719. 连续奇数的和 2

输入 N 对整数对 X,Y，对于每对 X,Y，请你求出它们之间（不包括 X 和 Y）的所有奇数的和。

输入格式
第一行输入整数 N，表示共有 N 对测试数据。

接下来 N 行，每行输入一组整数 X 和 Y。

输出格式
每对 X,Y 输出一个占一行的奇数和。

数据范围
1≤N≤100,
−1000≤X,Y≤1000
输入样例：
7
4 5
13 10
6 4
3 3
3 5
3 4
3 8
输出样例：
0
11
5
0
0
0
12
*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,ans;
    cin>>n;
    int a,b;
    for(int i=0;i<n;i++)
    {
        ans = 0;
        cin>>a>>b;
        if(a > b) 
            swap(a,b);
        for(int j=a+1;j<b;j++)
            if(j%2)
                ans += j;
        cout<<ans<<endl;
    }
    return 0;
}
