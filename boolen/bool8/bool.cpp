#include <iostream>
#include <cmath>


using namespace std;
int main()
{
    
    int A , B; 
    cout << "sikunt larda kiriting : ";
    cin >> A >> B;

    bool j =  A % 2&& B % 2;

    if (j==0) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }



    return 0;
}