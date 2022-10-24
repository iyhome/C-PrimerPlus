/*
    编写一个小程序，要求以几英尺几英寸的方式输入其身高，并以磅为单位输入其体重。
（使用 3 个变量来存储这些信息。）该程序报告其 BMI（Body Mass Index，体重指数）。
为了计算 BMI，该程序以英寸的方式指出用户的身高（1 英尺为 12 英寸），并将以英寸为 
单位的身高转换为以米为单位的身高（1 英寸 = 0.0254 米）。然后，将以磅为单位的体重
转换为以千克为单位的体重（1 千克 = 2.2 磅）。最后，计算相应的 BMI——体重（千克）
除以身高（米）的平方。用符号常量表示各种转换因子。
*/

#include <iostream>
#include <math.h>
using namespace std;

double BMI_computer(double _feet, double _pounds) {
    const double Feet2meter = 0.0254;
    const double pounds2kg = 0.45;
    
    double _bmi = 0;

    _bmi = (_pounds * pounds2kg) / pow((_feet * Feet2meter), 2);

    return _bmi;
}


int main() {
    double feet, inch, pounds, BMI;
    cout << "plese input your height by inch & feet, and your weight by pounds, separete by SPACE " << endl;
    cin >> feet >> inch >> pounds;

    BMI = BMI_computer(feet, pounds);
    cout << BMI << endl;
    
    return 0;
}