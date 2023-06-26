/******************************************************************************

c002. 10696 - f91
https://zerojudge.tw/ShowProblem?problemid=c002

*******************************************************************************/
#include <iostream>

using namespace std;

int f91(int n){
    if (n>=101){
        return n-10;
    }
    else{
        return f91(f91(n+11));
    }
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int n = 0;
    while(cin >> n && n!=0){
        cout << "f91(" << n << ") = " << f91(n) << endl;
    }

    return 0;
}
