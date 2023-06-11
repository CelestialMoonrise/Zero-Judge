/******************************************************************************

a240. 1/17

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    long double svt = 1.0/17.0;
    int amount, a; 
    string n1 = to_string(svt);
    
    cin >> amount;
    
    for(int i=0; i<amount; i++){
        while (cin >> a){
            int temp = 0;
            for (int i=2; i<a; i++){
                temp += n1[a];
            }
        cout << n1[a] << " " << temp << endl; 
        }
    }
    
    return 0;
}

