/******************************************************************************

d051. 糟糕，我發燒了！
Input: Fahrenheit
Output: Celsius to thousandth

*******************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    double f=0.0;
    cin >> f;
    
    f = (f-32)*5/9;
    cout << fixed;
    cout << setprecision(3) << f;

    return 0;
}
