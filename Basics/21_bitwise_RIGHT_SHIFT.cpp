#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 13;
    int b = 2;

    /*
        Binary Rep of a(13)       =   0000000000001101
        Binary Rep of a>>b(13>>2) =   0000000000000011   : 3
    */
    cout << (a >> b) << endl;

    return 0;
}