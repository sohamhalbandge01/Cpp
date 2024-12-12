#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 100;
    int b = 0;

    cout << "**-- Logical operators --**" << '\n';

    cout << "not operator on a ->" << !(a) << '\n'; 
    cout << "not operator on b ->" << !(b) << '\n';
    cout << "and operator on a, b ->" << (a && b) << '\n';
    cout << "or operator on a, b ->" << (a || b) << '\n';

    return 0;
}