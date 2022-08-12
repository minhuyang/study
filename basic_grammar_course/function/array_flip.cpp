/*
AcWing 816. 数组翻转

给定一个长度为 n 的数组 a 和一个整数 size，请你编写一个函数，void reverse(int a[], int size)，实现将数组 a 中的前 size 个数翻转。

输出翻转后的数组 a。

输入格式
第一行包含两个整数 n 和 size。

第二行包含 n 个整数，表示数组 a。

输出格式
共一行，包含 n 个整数，表示翻转后的数组 a。

数据范围
1≤size≤n≤1000,
1≤a[i]≤1000
输入样例：
5 3
1 2 3 4 5
输出样例：
3 2 1 4 5
*/

#include <iostream>
using namespace std;
int n;
void reverse(int a[], int size)
{
    for(int i=size-1; i>=0; i--)
        cout<<a[i]<<" ";
    for(int i=size; i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int size,a[1010];
    cin>>n>>size;
    for(int i=0; i<n;  i++)
        cin>>a[i];
    reverse(a,size);
    return 0;
}
