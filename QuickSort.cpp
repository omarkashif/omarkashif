#include <bits/stdc++.h>
using namespace std;
void QuickSort(int *arr, int s, int n)
{
    if (s < n)
    {
        int piv = arr[s], i = s;
        int j = n;

        while (i < j)
        {
            while (arr[i] <= piv)
            {
                i++;
            }
            while (arr[j] > piv)
            {
                j--;
            }
            if (i < j)
                swap(arr[i], arr[j]);
        }
        swap(arr[j], arr[s]);
        piv = j;
        QuickSort(arr, s, j - 1);
        QuickSort(arr, j + 1, n);
    }
}
int main()
{
    int x;
    cin >> x;
    int *arr = new int[x];
    for (int i = 0; i < x; i++)
        cin >> arr[i];
    QuickSort(arr, 0, x - 1);
    for (int k = 0; k < x; k++)
    {
        cout << arr[k] << "\n";
    }
    return 0;
}