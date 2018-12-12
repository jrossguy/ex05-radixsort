//
// Created by vscilab on 12/12/2018.
//

#ifndef EX05_RADIXSORT_RADIXSORT_H
#define EX05_RADIXSORT_RADIXSORT_H

#include<iostream>
using namespace std;
namespace edu
{
    namespace vcccd
    {
        namespace vc
        {
            namespace csv15
            {
                int getMax(int arr[], int n)
                {
                    int max = arr[0];
                    for (int i = 1; i < n; i++)
                        if (arr[i] > max)
                            max = arr[i];
                    return max;
                }
                void countSort(int arr[], int n, int exp)
                {
                    int output[n];
                    int i, count[10] = {0};
                    for (i = 0; i < n; i++)
                        count[(arr[i] / exp) % 10]++;
                    for (i = 1; i < 10; i++)
                        count[i] += count[i - 1];
                    for (i = n - 1; i >= 0; i--)
                    {
                        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
                        count[(arr[i] / exp) % 10]--;
                    }
                    for (i = 0; i < n; i++)
                        arr[i] = output[i];
                }
                void RadixSort(int arr[], int n)
                {
                    int m = getMax(arr, n);
                    for (int sort = 1; m / sort > 0; sort *= 10)
                        countSort(arr, n, sort);
                }
                void print(int arr[], int n) {
                    for (int i = 0; i < n; i++)
                        cout << arr[i] << " ";
                }
            }
        }
    }
}
#endif //EX05_RADIXSORT_RADIXSORT_H
