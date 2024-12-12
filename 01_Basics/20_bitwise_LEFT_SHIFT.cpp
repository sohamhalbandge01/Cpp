#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;
    int b = 2;

    /*
        Binary Rep of a(5)       =   0000000000000101
        Binary Rep of a<<b(5<<2) =   0000000000010100   : 20
    */
    cout << (a << b) << endl;

    return 0;
}