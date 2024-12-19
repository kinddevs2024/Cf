#include <iostream>
#include <cmath>


using namespace std;
int main()
{
    
    int A , B ,C; 
    cout << "sikunt larda kiriting : ";
    cin >> A >> B >> C;

    bool j = A >= B >= C;

    if (j) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }



    return 0;
}