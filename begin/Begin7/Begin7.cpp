#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float p = 3.14;
    float R, L, S;

    cout << "R ni kiriting : ";
    cin >> R;
    // yechish
    L = 2*p*R;
    S = p*pow(R,2);
    // javob chiqarish;

    cout
        << "L = " << L;
    cout << "\nS = " << S;

    return 0;
}