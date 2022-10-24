/* 编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），
然后将身高转换为英尺和英寸。该程序使用下划线字符来指示输入位置。另外，使用一个 const 符号常量来表示转换因子。 */

#include <iostream>
using namespace std;

double feet2inch(double feetHeight){
    const double transForm = 0.083;
    return (transForm * feetHeight);
}

int main(){
    double heightInch, heightFeet;
    cout << "input your height:___\b\b\b";
    cin >> heightFeet;
    heightInch = feet2inch(heightFeet);
    cout << endl
        << "your height using feet is  " << heightFeet << endl
        << "your height using inch is  " << heightInch << endl;
}