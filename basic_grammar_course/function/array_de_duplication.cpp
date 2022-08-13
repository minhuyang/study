/*
AcWing 817. 数组去重

给定一个长度为 n 的数组 a，请你编写一个函数：

int get_unique_count(int a[], int n);  // 返回数组前n个数中的不同数的个数
输入格式
第一行包含一个整数 n。

第二行包含 n 个整数，表示数组 a。

输出格式
共一行，包含一个整数表示数组中不同数的个数。

数据范围
1≤n≤1000,
1≤ai≤1000。

输入样例：
5
1 1 2 4 5
输出样例：
4
*/


#include <iostream>
using namespace std;
int get_unipue_count(int a[], int n)
{
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        bool st=false;
        for(int j=0;j<i;j++)
            if(a[i]==a[j])
            {
                st=true;
                break;
            }
        if(!st) cnt++;
    }
    return cnt;
}
int main()
{
    int n,a[1010];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<get_unipue_count(a,n)<<endl;
    return 0;
}
