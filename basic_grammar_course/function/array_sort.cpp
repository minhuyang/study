/* 
AcWing 818. 数组排序

给定一个长度为 n 的数组 a 以及两个整数 l 和 r，请你编写一个函数，void sort(int a[], int l, int r)，将 a[l]∼a[r] 从小到大排序。

输出排好序的数组 a。

输入格式
第一行包含三个整数 n，l，r。

第二行包含 n 个整数，表示数组 a。

输出格式
共一行，包含 n 个整数，表示排序完成后的数组 a。

数据范围
0≤l≤r<n≤1000
输入样例：
5 2 4
4 5 1 3 2
输出样例：
4 5 1 2 3
*/

#include <iostream>
using namespace std;
void sort(int a[], int l, int r)
{
    for(int i=l; i<=r; i++)
        for(int j=i+1; j<=r; j++)
            if(a[i] > a[j]) swap(a[i], a[j]);
}
int main()
{
    int a[1010];
    int n,l,r;
    cin>>n>>l>>r;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a, l, r);
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}
