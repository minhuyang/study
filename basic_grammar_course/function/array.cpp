/*
AcWing 823. 排列

给定一个整数 n，将数字 1∼n 排成一排，将会有很多种排列方法。

现在，请你按照字典序将所有的排列方法输出。

输入格式
共一行，包含一个整数 n。

输出格式
按字典序输出所有排列方案，每个方案占一行。

数据范围
1≤n≤9
输入样例：
3
输出样例：
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
*/

#include <iostream>

using namespace std;

const int N = 10;

int n;

void dfs(int u, int nums[], bool st[])
{
    if (u > n)
    {
        for (int i = 1; i <= n; i ++ ) printf("%d ", nums[i]);
        puts("");
    }
    else
    {
        for (int i = 1; i <= n; i ++ )
            if (!st[i])
            {
                st[i] = true;
                nums[u] = i;
                dfs(u + 1, nums, st);
                st[i] = false;  // 恢复现场
            }
    }
}

int main()
{
    scanf("%d", &n);

    int nums[N];
    bool st[N] = {0};

    dfs(1, nums, st);

    return 0;
}
