/*
    编写一个程序，要求用户以度、分、秒的方式输入一个纬度，
然后以度为单位显示该纬度。1 度为 60 分，1 分等于 60 秒，
请以符号常量的方式表示这些值。对于每个输入值，应使用一个
独立的变量存储它。下面是该程序运行时的情况：
    Enter a latitude in degrees, minutes, and seconds:
    First, enter the degrees: 37
    Next, enter the minutes of arc: 51
    Finally, enter the seconds of arc: 19
    37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
*/

#include <iostream>
using namespace std;

double everything2degree(double _degree, double _minute, double _second) {
    const double Minute2degree = 1/(double)60;
    const double Second2degree = 1/(double)3600;
    
    _degree = _degree + _minute * Minute2degree + _second * Second2degree;
    return _degree;
}

int main () {
    double degree, minute, second;
    double sum = 0;
    cin >> degree >> minute >> second;
    sum = everything2degree(degree, minute, second); 

    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl
        << "First, enter the degrees: " << degree << endl
        << "Next, enter the minutes of arc: " << minute << endl
        << "Finally, enter the seconds of arc: " << second << endl
        << second << " degrees, " << minute << " minutes, " << second << " seconds = "
        << sum << " degrees" << endl;
}