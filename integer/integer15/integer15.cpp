#include <iostream>
using namespace std;

int main() {
    int son;

    cout << "Uch xonali son kiriting: ";
    cin >> son;

    //ishlash
    int yuzlik = son / 100;  
    int onlik = (son / 10) % 10;  
    int birlik = son % 10;          

    // cout << "Raqamlar teskarisi: " << onlik  << yuzlik << birlik << endl;
    // 123
    // 213
      int yangi_son = birlik*1 + onlik * 100 + yuzlik*10;
        cout << "Raqamlar teskarisi: " << yangi_son << endl;

    return 0;
}
