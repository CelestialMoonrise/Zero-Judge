/******************************************************************************

b964. 第 1 題 成績指標

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void vector_print(vector<int> v){
    vector<int> :: iterator it;
    it=v.begin();
    cout << *it;
    for(it=v.begin()+1; it!=v.end(); it++){
        cout << " " << *it;
    }
    cout << endl;
}

int main()
{
    int n=0, lps=0, hnps=0;
    cin >> n;
    vector<int> scores;
    
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        scores.push_back(temp);
    }
    sort(scores.begin(), scores.end());
    vector_print(scores);
    
//Best case? else hnps
    int max=0, min=0;
    max = scores[n-1];
    min = scores[0];
    
    if (min>=60){ //smallest element passes, then all elements pass
        cout << "best case" << endl;
    }
    else{
        for(int i=0; i<n; i++){
            if(scores[i]<60){
                hnps = scores[i];
            }
        }
        
        cout << hnps << endl;
    }
//Worst case? else lps
    if (max<60){
        cout << "worst case";
    }
    else{
        for(int i=n-1; i>=0; i--){
            if (scores[i]>=60){
                lps = scores [i];
            }
        }
        cout << lps;
    }

    return 0;
}


