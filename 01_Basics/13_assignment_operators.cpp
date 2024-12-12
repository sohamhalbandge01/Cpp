#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 12, b = 7;
    cout << "**-- Assignment operators --**" << '\n';
    a += b; // a = a + b = 12 + 7 // a = 19
    cout << "The value of \"a\" after a+=b -> " << a << '\n'; // 19
    cout << "The value of \"b\" after a+=b -> " << b << '\n'; // 7

    a *= b; // a = 19 * 7 
    cout << "The value of \"a\" after a*=b ->" << a << '\n'; // 133
    cout << "The value of \"b\" after a*=b ->" << b << '\n'; // 7

    return 0;
}