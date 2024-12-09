#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 7;
    int b = 5;

    /*
        Binary Rep of a(7) =   0111
        Binary Rep of b(5) =   0101
        ---------------------------
        Binary Rep of a|b =   0111   (7)
    */
    cout << (a | b) << endl;
    return 0;
}