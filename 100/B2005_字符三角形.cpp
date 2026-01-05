/**
 *	@brief       https://www.luogu.com.cn/problem/P1001
 *	@date       20260101
*/

#include <iostream>

using namespace std;

int main()
{
    char a;
    int maxRow = 6;
    cin>>a;
    for(int i=1; i<maxRow;i+=2){
        for(int j=1;j<=((maxRow-i)/2);j++)
            cout<<" ";

        for(int j=1;j<=i;j++)
            cout<<a;
        cout<<endl;
    }
}
