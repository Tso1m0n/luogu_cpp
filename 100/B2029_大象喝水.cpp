/**
 *	@brief     https://www.luogu.com.cn/problem/B2029
 *	@date       20260105

*/

#include <iostream>
#include <cmath>

#define Pi 3.14

using namespace std;

int main()
{
    double h, r, ans;
    cin>>h>>r;
    ans = 20000/(Pi * r * r *h);
    cout<<ceil(ans)<<endl;
}
