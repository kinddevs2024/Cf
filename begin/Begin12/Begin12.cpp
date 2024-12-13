#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float b, a, A, B, C, V;

    cout << "1 va 2 sonlarni kiriting : ";
    cin >> a >> b;
    // yechish
    A = pow(a,2);
    B = pow(b,2);
    C = sqrt(A+B);
    V = a+b+C;

    // javob chiqarish;

    cout << "togri burchakli uchburchakning gipatinuzasi : " << C;
    cout << "\ntogri burchakli uchburchakning perimetri : " << V;

    return 0;
}