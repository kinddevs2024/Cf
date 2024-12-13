#include <iostream>
#include <cmath>


using namespace std;
int main()
{

    // float x_1 = 14.26;
    // float z_0 = 3.5*pow(10,-2);
    // float r = fabs(x_1 - z_0 * x_1);
    // float t = pow(z_0,2);
    // float i = 3- t /(-5);
    // float kas = t / i;
    // float javobi = r + kas ;
    // cout << "\nbeshinchi savol javobi : " << e;

    float z = 20.001*pow(10,2);
    float j = 1 + z + (pow(z,2)/2) + (pow(z,3)/3) + (pow(z,4)/4);
    cout << "\nyettinchi savol javobi : " << j;
    return 0;
}