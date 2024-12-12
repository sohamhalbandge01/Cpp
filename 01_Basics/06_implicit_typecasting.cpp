#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 5;
    char y = 'z';
    x = x + y; // x = 5 + 122
    float z = x + 1.0 + y;

    cout << "x: " << x << "\n"
         << "y: " << y << "\n"
         << "y (in int): " << (int)y << "\n"
         << "z: " << z << "\n";

    return 0;
}