#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long answer = 123456 * 123456;
    cout << answer << endl; // garbage value

    // using ll or LL -> integer literal suffix
    // why above value gives garbage value it is because of it exceeds range of integer and since the number multiplied are integers
    long long answer2 = 123456ll * 123456;
    cout << answer2 << endl; // correct answer i.e. 15241383936
    return 0;
}