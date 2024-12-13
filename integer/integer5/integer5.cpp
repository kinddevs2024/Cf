#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cout << "A va B musbat sonlarni kiriting (A > B): ";
    cin >> A >> B;

    if (A > B)
    {
        int joylashmalar_soni = A / B;
        int qolgan_qism = A % B;
        int yetmagan_son = B - qolgan_qism;
        cout << "B kesmani A kesmada " << joylashmalar_soni << " marta joylashtirish mumkin." << endl;
        cout << "A kesmada B kesmaning joylashmagan qismi: " << yetmagan_son << endl;

    }
    else
    {
        cout << "Xato: A soni B sonidan katta bo'lishi kerak." << endl;
    }

    return 0;
}
