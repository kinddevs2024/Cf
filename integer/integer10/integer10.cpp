#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Uch xonali son kiriting: ";
    cin >> number;

    // Uch xonali sonni tekshirish
    if (number >= 100 && number <= 999)
    {
        int birliklar = number % 10;       // Birliklar xonasidagi raqam
        int onliklar = (number / 10) % 10; // O'nliklar xonasidagi raqam

        cout << "Birliklar xonasidagi raqam: " << birliklar << endl;
        cout << "O'nliklar xonasidagi raqam: " << onliklar << endl;
    }
    else
    {
        cout << "Xato: Iltimos, uch xonali son kiriting." << endl;
    }

    return 0;
}
