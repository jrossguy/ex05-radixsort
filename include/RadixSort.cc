//
// Created by vscilab on 12/12/2018.
//

#include "RadixSort.h"
#include <iostream>
using namespace std;
using edu::vcccd::vc::csv15::radixsort
int main()
{
    int arr[] = {17, 45, 15, 36, 2, 24, 44, 66};
    int n = sizeof(arr)/sizeof(arr[0]);
    radixsort(arr, n);
    cout << arr << ",  " << n << endl;
    return 0;
}