#include <bits/stdc++.h>
using namespace std;
int maxdig(int *arr, int n)
{
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[0] > max)
            max = arr[0];
    }
    int d = 0;
    while (max)
    {
        max = max / 10;
        d++;
    }
    return d;
}
int pow10(int n)
{
    int a = 1;
    for (int i = 0; i < n; i++)
    {
        a = a * 10;
    }
    return a;
}
void RadixSort(int arr[], int n)
{
    int d = maxdig(arr, n);
    int z = 0;
    while (d)
    {
        d--;
        vector<int> r[10];
        for (int i = 0; i < n; i++)
        {
            r[((arr[i] / pow10(z)) % 10)].push_back(arr[i]);
        }
        int index = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < (r[i].size()); j++)
            {
                arr[index++] = r[i][j];
            }
        }
        z++;
    }
}
