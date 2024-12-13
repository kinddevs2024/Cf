#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, V, S;

    cout << "a ni kiriting : ";
    cin >> a;
    // yechish
    V = pow(a, 3);
    S = 6 * pow(a, 2);
    // javob chiqarish;

    cout
        << "V = " << V;
    cout << "\nS = " << S;

    return 0;
}