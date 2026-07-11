#include "QuickSort.h"
#include "MergeSort.h"
#include "BinarySearch.h"
#include "Knapsack.h"
#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    auto start = chrono::high_resolution_clock::now();
    quickSort(arr, 0, arr.size()-1);
    auto end = chrono::high_resolution_clock::now();
    cout << "QuickSort result: ";
    for(int x: arr) cout << x << " ";
    cout << "\nRuntime: " << chrono::duration<double,milli>(end-start).count() << " ms\n";

    vector<int> arr2 = {12, 11, 13, 5, 6, 7};
    start = chrono::high_resolution_clock::now();
    mergeSort(arr2, 0, arr2.size()-1);
    end = chrono::high_resolution_clock::now();
    cout << "MergeSort result: ";
    for(int x: arr2) cout << x << " ";
    cout << "\nRuntime: " << chrono::duration<double,milli>(end-start).count() << " ms\n";

    int idx = binarySearch(arr2, 13);
    cout << "BinarySearch for 13: " << (idx!=-1 ? "Found at index "+to_string(idx) : "Not found") << endl;

    vector<int> val = {60, 100, 120};
    vector<int> wt = {10, 20, 30};
    int W = 50;
    cout << "Knapsack max value: " << knapsack(W, wt, val, val.size()) << endl;

    return 0;
}
