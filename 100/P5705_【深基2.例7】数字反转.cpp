/**
 *	@brief      https://www.luogu.com.cn/problem/P5705
 *	@date       20260102
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cin>>str;
    reverse(str.begin(),str.end());
    cout<<str;
}
