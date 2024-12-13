#include <iostream>
using namespace std;

int main() {
    int son;

    cout << "Uch xonali son kiriting: ";
    cin >> son;

    //ishlash

    int yuzlik = (son / 100) % 10; 
       
    cout << "Raqamning 100 honalik : " << yuzlik << endl;


    return 0;
}
