#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a = 12.5200;

    // showpos
    cout << "**showpos and noshowpos** " << '\n';
    cout << a << '\n';
    cout << showpos;
    cout << a << '\n'; // now show positive sign
    cout << noshowpos;
    cout << a << '\n'; // revert back

    // showpoint
    cout << "**showpoint and noshowpoint** " << '\n';
    cout << a << '\n'; // does not show trailing zeros.
    cout << showpoint;
    cout << a << '\n'; // show trailing zeros.
    cout << noshowpoint;
    cout << a << '\n'; // does not show trailing zeros.

    // setprecision and fixed
    cout << "**setprecision and fixed**" << '\n';
    cout << setprecision(4) << fixed;
    cout << a << '\n';

    return 0;
}