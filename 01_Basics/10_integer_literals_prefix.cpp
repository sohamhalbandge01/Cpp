#include <iostream>
using namespace std;
int main()
{
    int a = 15;     // Decimal-literal(base 10)
    int b = 0b1101; // Binary-literal(base 2)
    int c = 0154;   // Octal-literal(base 8)
    int d = 0x1B;   // Hex-literal(base 16)
    cout << a << " " << b << " " << c << " " << d;
    return 0;
}