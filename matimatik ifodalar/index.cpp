#include <iostream>
#include <cmath>


using namespace std;
int main()
{
    // birinchi savol
    float a;
    a = sin(pow(5, 1.5));
    cout << "birinchi savol javobi : " << a;

    // ikkinchi savol

    float x = pow(3.0 / 4.0, sqrt(pow(4, 3.0 / 2.0)));
    cout << "\nikkinchi savol javobi : " << x;
 
    // uchinchi savol
    float m = 1.23;
    float y = pow(10, cos(m)) * pow(2, 12);
    cout << "\nuchinchi savol javobi : " << y;

    // to'rtinchi savol
    float z = 14.26;
    float x_0 = -1.22;
    float q = 2 * cos(x_0 - 3.14 / 6);
    float w = 0.5 + pow(sin(y), 2);
    float e = q / w;
    cout << "\ntortinchi savol javobi : " << e;
    // beshinchi savol
    float x_1 = 14.26;
    float z_0 = 3.5*pow(10,-2);
    float r = fabs(x_1 - z_0 * x_1);
    float t = pow(z_0,2);
    float i = 3- t /(-5);
    float kas = t / i;
    float javobi = r + kas ;
    cout << "\nbeshinchi savol javobi : " << e;
    return 0;
}