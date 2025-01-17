#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cout << "Enter the two values: " << "\n";
    cin >> a >> b;
    int maximum = max(a, b);
    int minimum = min(a, b);
    cout << "The maximum value of " << a << " and " << b << " is: " << maximum << "\n";
    cout << "The minimum value of " << a << " and " << b << " is:" << minimum << endl;
    return 0; 
}