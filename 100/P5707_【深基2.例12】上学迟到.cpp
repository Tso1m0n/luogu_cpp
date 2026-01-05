/**
 *	@brief     https://www.luogu.com.cn/problem/P5707
 *	@date       20260105
 setw(2) 设置宽度 setfill('0')设置补齐用的字符 默认为空格
 注意处理时间提前到前一天的情况
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float s;
    float v;
    cin>>s>>v;
    int remain = (480 + 1440 - (s / v)) - 10;
    if(remain > 1440)
        remain -=1440;
    int hh = remain / 60;
    int mm = remain % 60;
    cout<<setw(2) << setfill('0')<<hh;
    cout<<":";
    cout<<setw(2) << setfill('0')<<mm;

}
