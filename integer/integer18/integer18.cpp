#include <iostream>
using namespace std;

int main() {
    int son;

    cout << "To'rt xonali son kiriting: ";
    cin >> son;

    //ishlash

    int minglik = (son / 1000) % 10; 
       
    cout << "Raqamning 1000 honalik : " << minglik << endl;


    return 0;
}
