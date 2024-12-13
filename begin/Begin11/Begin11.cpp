#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float b, a, A, B, C, V;

    cout << "1 va 2 sonlarni kiriting : ";
    cin >> a >> b;
    // yechish
    A = a + b;
    B = a * b;
    C = fabs(a);
    V = fabs(b);

    // javob chiqarish;

    cout << "ikkala sonni yigndisi : " << A;
    cout << "\nikkala sonni kopaytmasi : " << B;
    cout << "\nbirinchi sonni moduli : " << C;
    cout << "\nikkinchi sonni moduli : " << V;

    return 0;
}