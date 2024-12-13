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
    C = pow(a, 2);
    V = pow(b, 2);

    // javob chiqarish;

    cout << "ikkala sonni yigndisi : " << A;
    cout << "\nikkala sonni kopaytmasi : " << B;
    cout << "\nbirinchi sonni kvadrati : " << C;
    cout << "\nikkinchi sonni kvadrati : " << V;

    return 0;
}