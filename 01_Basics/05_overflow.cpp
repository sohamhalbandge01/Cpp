#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 1000000000;
    int b = 1000000000;
    cout << a * b << '\n'; // garbage value
    
    long long a1 = 1000000000;
    long long b1 = 1000000000;
    cout << a1 * b1 << '\n'; // 1000000000000000000

    return 0;
}