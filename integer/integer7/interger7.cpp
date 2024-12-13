#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Ikki xonali son kiriting: ";
    cin >> number;

    // Ikki xonali sonni tekshirish
    if (number >= 10 && number <= 99)
    {
        int onliklar = number / 10;      // O'nliklar xonasidagi raqam
        int birlar = number % 10;        // Birlar xonasidagi raqam
        int yigindi = onliklar + birlar; // Raqamlar yig'indisi

        cout << "Raqamlar yig'indisi: " << yigindi << endl;
    }
    else
    {
        cout << "Xato: Iltimos, ikki xonali son kiriting." << endl;
    }

    return 0;
}
