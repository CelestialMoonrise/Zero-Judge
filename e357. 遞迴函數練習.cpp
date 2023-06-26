/******************************************************************************

e357. 遞迴函數練習
https://zerojudge.tw/ShowProblem?problemid=e357

*******************************************************************************/
#include <iostream>

using namespace std;

int F(int x){
    if (x==1){
        return 1;
    }
    else if(x%2==0){
        return F(x/2);
    }
    else{
        return F(x-1)+F(x+1);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << F(n);

    return 0;
}
