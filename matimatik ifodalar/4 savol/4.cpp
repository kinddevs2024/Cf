#include <iostream>
#include <cmath>


using namespace std;
int main()
{

    float z = 14.26;
    float x_0 = -1.22;
    float q = 2 * cos(z - 3.14 / 6);
    float w = 0.5 + pow(sin(x_0), 2);
    float e = q / w;
    cout << "\ntortinchi savol javobi : " << e;

    return 0;
}