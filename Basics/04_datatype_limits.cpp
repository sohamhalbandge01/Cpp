#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Range of \"int\" data types: " << INT_MIN << " to " << INT_MAX << '\n';
    int x = INT_MAX;
    cout << "x + 1: " << x + 1 << '\n'; 
    int y = INT_MIN;
    cout << "y - 1: " << y - 1 << '\n';
    return 0;

    /*
    Output:
    Range of "int" data types: -2147483648 to 2147483647
    x + 1: -2147483648
    y - 1: 2147483647
    */
}