#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float bayt, KB;

    cout << "bayt larda kiriting : ";
    cin >> bayt;
    // yechish

    KB = bayt /1024;

    // javob chiqarish;

    cout << bayt << " KBda : " << KB;

    return 0;
}