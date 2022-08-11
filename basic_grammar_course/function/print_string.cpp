/*
AcWing 815. 打印字符串

给定一个字符串，请你编写一个函数，void print(char str[])，将这个字符串打印出来。

输入格式
共一行，包含一个字符串。

输出格式
共一行，表示打印出的字符串。

数据范围
1≤字符串长度≤100
输入样例：
I love AcWing.
输出样例：
I love AcWing.
*/

#include <string>
#include <iostream>
using namespace std;
void print (string a)
{
    for(int i=0;a[i];i++)
    {
        cout<<a[i];
    }
}
int main()
{
    string a;
    getline(cin,a);
    print(a);
    return 0;
}
