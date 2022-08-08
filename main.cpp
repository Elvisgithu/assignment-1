#include <iostream>

using namespace std;

int main()
{
    int m;
    int sum = 0;
    cout<< " Type positive numbers ";

    cin>> m;

    if(m<2){
        cout<< " not a positive number";

        return -1;

    }
    for (int x = 2; x<m ;x++){

        int test = 0;

        for(int i=2; i<=(x/2); i++){

            if ( x%i == 0){
                test = 1;
                break;
            }
        }
        if ( test == 0)

            cout << x <<endl;
    }
    return 0;
}
