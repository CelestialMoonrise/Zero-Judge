/******************************************************************************
a147. Print it all
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n;
    
    while (cin>>n){
        if(n!=0){
            for(int i=1; i<n; i++){
                if(i%7!=0){
                    cout << i << " ";
                }
            }
        }
        else{
            break;
        }
        cout << endl;
    }

    return 0;
}
