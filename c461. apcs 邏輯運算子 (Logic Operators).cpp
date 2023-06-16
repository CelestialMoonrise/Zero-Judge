/******************************************************************************

c461. apcs 邏輯運算子 (Logic Operators)
https://zerojudge.tw/ShowProblem?problemid=c461

*******************************************************************************/
#include <iostream>

using namespace std;

int a_n_d(int a, int b){
    int ans=0;
    if(a==0){
        ans = 0;
    }
    else if(a!=0 && b==0){
        ans = 0;
    }
    else{
        ans = 1;
    }
    return ans;
}

int o_r(int a, int b){
    int ans=0;
    if(a!=0 || b!=0){
        ans = 1;
    }
    else{
        ans=0;
    }
    return ans;
}

int x_o_r(int a, int b){
    int ans;
    if(a==0 && b==0){
        ans = 0;
    }
    else if(a!=0 && b!=0){
        ans = 0;
    }
    else{
        ans = 1;
    }
    return ans;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    
    if (a_n_d(a, b)==c){
        cout << "AND" << endl;
    }
    if (o_r(a, b)==c){
        cout << "OR" << endl;
    }
    if(x_o_r(a, b) == c){
        cout << "XOR" << endl;
    }
    if((a_n_d(a, b)!=c) && (o_r(a, b)!=c) && (x_o_r(a, b)!=c)){
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}
