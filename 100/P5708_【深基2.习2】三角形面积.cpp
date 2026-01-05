/**
 *	@brief     https://www.luogu.com.cn/problem/P5708
 *	@date       20260103
 setprecision()单独使用控制输出的有效位数
 fixed配合使用控制小数点后位数
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a;
    double b;
    double c;

    cin>>a>>b>>c;

    double p = 0.5*(a+b+c);
    double ans = sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<fixed<<setprecision(1)<<ans;

}
