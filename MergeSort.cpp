#include <bits/stdc++.h>
using namespace std;

void Merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    // lengths of 2 lists
    int l1 = mid - s + 1;
    int l2 = e - mid;
    int a1[l1];
    int a2[l2];
    // copying elements of lists in 2 smaller lists
    for (int i = 0; i < l1; i++)
    {
        a1[i] = arr[s + i];
    }
    for (int i = 0; i < l2; i++)
    {
        a2[i] = arr[mid + i + 1];
    }
    int i1 = 0, i2 = 0, ifin = s;
    // merging 2 smaller lists in main list
    while (i1 < l1 && i2 < l2)
    {
        if (a1[i1] <= a2[i2])
        {
            arr[ifin] = a1[i1];
            i1++;
        }
        else
        {
            arr[ifin] = a2[i2];
            i2++;
        }
        ifin++;
    }
    // checking if any elements are left in small lists
    while (i1 < l1)
    {
        arr[ifin] = a1[i1];
        ifin++;
        i1++;
    }
    while (i2 < l2)
    {
        arr[ifin] = a2[i2];
        ifin++;
        i2++;
    }
}
void MergeSort(int *arr, int s, int e)
{
    // Only one element left
    if (s >= e)
        return;
    else
    {
        int mid = (s + e) / 2;
        // applying mergesort on first have of the list
        MergeSort(arr, s, mid);
        // applying mergesort on first have of the list
        MergeSort(arr, mid + 1, e);
        // Merging the 2 lists
        Merge(arr, s, e);
    }
}
