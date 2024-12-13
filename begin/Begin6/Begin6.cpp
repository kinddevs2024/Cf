#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, V, S;

    cout << "a,b,c ni kiriting : ";
    cin >> a >> b >> c;
    // yechish
    V = a*b*c;
    S = 2*(a*b+b*c+a*c);
    // javob chiqarish;

    cout
        << "V = " << V;
    cout << "\nS = " << S;

    return 0;
}