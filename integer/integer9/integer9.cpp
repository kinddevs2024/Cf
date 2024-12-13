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
        int yuzlar = number / 100; // Yuzlar xonasidagi raqam

        cout << "Yuzlar xonasidagi raqam: " << yuzlar << endl;
    }
    else
    {
        cout << "Xato: Iltimos, uch xonali son kiriting." << endl;
    }

    return 0;
}
