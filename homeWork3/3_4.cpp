/*
    编写一个程序，要求用户以整数方式输入秒数（使用 long 或 long long 变量存储），
然后以天、小时、分钟和秒的方式显示这段时间。使用符号常量来表示每天有多少小时、
每小时有多少分钟以及每分钟有多少秒。该程序的输出应与下面类似：
    Enter the number of seconds: 31600000
    31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
*/
#include <iostream>
using namespace std;


void timeTool(long long _sec) {
    long _day(0), _hour(0), _min(0);
    _day = _sec/(60*60*24);
    _hour = _sec/(60*60) - _day*24;
    _min = _sec/60 - _day*(24*60) - _hour*60;
    _sec = _sec - _day*(24*60*60) - _hour*(60*60) - _min*60;

    cout << _sec << " seconds = "
        << _day  << " days, "
        << _hour << " hours, "
        << _min  << " minutes, "
        << _sec  <<  " seconds." << endl;
}

int main() {
    long long sec(0);
    cout << "Enter the number of seconds:_____\b\b\b\b\b";
    cin >> sec;
    timeTool(sec);

    return 0;
}