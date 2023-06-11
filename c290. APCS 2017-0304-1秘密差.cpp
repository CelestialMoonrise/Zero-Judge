/******************************************************************************

c290. APCS 2017-0304-1秘密差

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int even = 0, odd=0;
    string s;
    cin >> s;
    
    for(int i=0; i<s.size(); i++){
        if(i%2==0){
            even+=(s[i]-'0');
        }
        else{
            odd+=(s[i]-'0');
        }
    }
    cout << abs(even-odd);

    return 0;
}

