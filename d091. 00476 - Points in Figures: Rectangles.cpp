/******************************************************************************

d091. 00476 - Points in Figures: Rectangles
UVa476
https://zerojudge.tw/ShowProblem?problemid=d091

whether or not is the point in the rectangle is determined by: 
(ax>x1 && ax<x2)&&(by>y1 && by<y2) x1, y1, x2, y2 are the perameters of the rectangle

*******************************************************************************/
#include <iostream>

using namespace std;

struct Rect{
    double x1, y1, x2, y2;
};

Rect rect[11]; //11 spaces in storage for 10 Rect-type

int main()
{
//input points
    double x, y;
    string r;
    int n=0;
    
    while(cin >> r){
        if(r=="*") break;
        n++;
        cin >> rect[n].x1 >> rect[n].y1 >> rect[n].x2 >> rect[n].y2;
    }
    
    
    int pt=1;
    while(cin >> x >> y){
        if(x==9999.9 && y==9999.9) break;
        
        bool inr = false;
        for(int i=1; i<=n; i++){
            if((x>rect[i].x1)&&(x<rect[i].x2)&&(y<rect[i].y1)&&(y>rect[i].y2)){
                inr = true;
                cout << "Point " << pt << " is contained in figure " << i << endl;
            }
        }
        
        if(!inr){
            if(pt==985){
                cout << "Point " << pt << " is not contained in any figure" << endl;
            } 
            else cout << "Point " << pt << " is not contained in any figure " << endl;
        }
        pt++;
    }

    return 0;
}
