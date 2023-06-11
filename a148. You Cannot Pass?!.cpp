/******************************************************************************

a148. You Cannot Pass?!

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n, total, score;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> score;
        total+=score;
        score = 0;
    }
    
    if((total/n)<60){
        cout << "yes";
    }
    else{
        cout << "no";
    }

    return 0;
}
