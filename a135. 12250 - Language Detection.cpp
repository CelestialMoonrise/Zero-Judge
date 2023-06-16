/******************************************************************************

a135. 12250 - Language Detection
https://zerojudge.tw/ShowProblem?problemid=a135

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    string str;
    
    int n=1;
    while(cin >> str){
        if (str=="#") break;
        else if(str=="HELLO"){
            cout << "Case " << n << ": " << "ENGLISH" <<endl;
            n++;
        }
        else if(str=="HOLA"){
            cout << "Case " << n << ": " << "SPANISH" << endl;
            n++;
        }
        else if(str=="HALLO"){
            cout << "Case " << n << ": " << "GERMAN" << endl;
            n++;
        }
        else if(str=="BONJOUR"){
            cout << "Case " << n << ": " << "FRENCH" << endl;
            n++;
        }
        else if(str=="CIAO"){
            cout << "Case " << n << ": " << "ITALIAN" << endl;
            n++;
        }
        else if(str=="ZDRAVSTVUJTE"){
            cout << "Case " << n << ": " << "RUSSIAN" << endl;
            n++;
        }
        else {
            cout << "Case " << n << ": "<< "UNKNOWN" << endl;
            n++;
        }
    }

    return 0;
}
