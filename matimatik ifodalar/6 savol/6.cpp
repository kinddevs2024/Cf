#include <iostream>
#include <cmath>


using namespace std;
int main()
{



        float m = 1.23;
        // islash
        float tepasi = sqrt(pow( (3*m +2) , 2) - 24*m);
        float pasti = fabs(3* sqrt(m) -2 / sqrt(m) );
        float javob = tepasi /pasti ;
        //javob
        cout << "\nbeshinchi savol javobi : " << javob;

    return 0;
}