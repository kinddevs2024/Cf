#include <iostream>
#include <cmath>


using namespace std;
int main()
{

    float x = 0.1722;
    float y = 6.33-x;
    float z = pow( 3.25 * pow(10,-x), y );
    float j1 = x+3* fabs(x-y)+pow(x,2);
    float j2 = fabs(x-y)*z+pow(x,2);
    float j = j1/j2;
    cout << "\no'ninchi savol javobi : " << j;
    return 0;
}