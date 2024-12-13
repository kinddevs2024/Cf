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
        int onliklar = number / 10; // O'nliklar xonasidagi raqam
        int birlar = number % 10;   // Birlar xonasidagi raqam

        cout << "O'nliklar xonasidagi raqam: " << onliklar << endl;
        cout << "Birlar xonasidagi raqam: " << birlar << endl;
    }
    else
    {
        cout << "Xato: Ikki xonali son kiriting." << endl;
    }

    return 0;
}
