/******************************************************************************
e997. 升旗典禮抽背課文
*******************************************************************************/
#include <iostream>
#include <sstream>
#include <vector>
#include <string.h>

using namespace std;

int main()
{
    string all;
    int num;
    vector<string> words;
    
    getline(cin, all);
    cin >> num;
    
    stringstream ss(all);
    string token;
    
    while (ss >> token){
        token.c_str();
        words.push_back(token);
    }
    
    num = (words.size()-num);
    cout << words[num];

    return 0;
}

