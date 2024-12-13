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


      // 123
      // 132
      int yangi_son = birlik*10 + onlik * 1 + yuzlik*100;
        cout << "Raqamlar teskarisi: " << yangi_son << endl;
  

    return 0;
}
