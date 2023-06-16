/******************************************************************************

e155. 10935 - Throwing cards away I

https://zerojudge.tw/ShowProblem?problemid=e155

*******************************************************************************/
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int n;
    queue<int> q;
    vector<int> disc;
    
    while(cin >> n){
        if(n==0) break;
        disc.clear(); //reused, so clear before going through the loop again
        while(!q.empty()) q.pop();
        
        for(int i=1; i<=n; i++) q.push(i);
        
        while(q.size()>1){
            disc.push_back(q.front()); //add front most element to vector for discarded items
            q.pop();
            q.push(q.front());
            q.pop();
        }
        cout << "Discarded cards: ";
        for(int i=0; i<disc.size(); i++){
            if(i>0) cout <<", ";
            cout << disc[i];
        }
        cout << endl;
        cout << "Remaining card: "<< q.front(); cout << endl;
    }

    return 0;
}
