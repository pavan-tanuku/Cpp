/*
Program to demonstrate the use of arrays in functions in C++
Author: Pavan Mani Sankar
Date: 2025-01-17
*/
#include <bits/stdc++.h>
using namespace std;

void arrays(int arr[], int n){
    arr[0] += 5;
    cout << "\nThe value of the first element after adding 5 in arrays function is: " << arr[0] << "\n";
}

int main() {
    int n = 5;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    arrays(arr, n);
    cout << "The value of the first element after adding 5 in main function is: " << arr[0] << "\n";
    return 0;
}