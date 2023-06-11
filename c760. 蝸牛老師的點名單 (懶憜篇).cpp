/******************************************************************************
c760. 蝸牛老師的點名單 (懶憜篇)
輸入只有一行，含有 n  個 (1 ≤ n ≤ 30) 以空白隔開的學生名字。所有名字均由小寫字母組成。
將每個名字單獨輸出於一行，並將字首改成大寫。
*******************************************************************************/
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
   string all;
   getline(cin, all);
   
   stringstream ss(all);
   string token;
   
   while(ss>>token){
       token[0] = toupper(token[0]);
       cout << token.c_str() << endl;
   }

    return 0;
}
