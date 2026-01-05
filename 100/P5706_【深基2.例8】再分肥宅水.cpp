/**
 *	@brief     https://www.luogu.com.cn/problem/P5706
 *	@date       20260102
 setprecision()单独使用控制输出的有效位数
 fixed配合使用控制小数点后位数
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double t;
    int n;
    cin>>t>>n;
    cout<<fixed<<setprecision(3)<<t/n<<endl;
    cout<<n*2;

}
