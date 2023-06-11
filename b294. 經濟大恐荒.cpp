/******************************************************************************

b294. 經濟大恐荒

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int total=0, days=0, cost=0, n=0;
    
    cin >> days;
    for(int i=1; i<=days; i++){
        cin >> n;
        total+=n*i;
    }
    cout << total;

    return 0;
}
