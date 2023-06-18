/******************************************************************************

e283. APCS 類似題 - 小崴的特殊編碼
https://zerojudge.tw/ShowProblem?problemid=e283

*******************************************************************************/
#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    string s;
    
    map<string, string>mp;
    mp = {
        {"0 1 0 1", "A"},
        {"0 1 1 1", "B"},
        {"0 0 1 0", "C"},
        {"1 1 0 1", "D"},
        {"1 0 0 0", "E"},
        {"1 1 0 0", "F"}
    };
    

    while(cin>>n){
        while(n>=0){
            getline(cin, s);
            cout << mp[s];
            n-=1;
        }
        cout << endl;
    }

    return 0;
}
