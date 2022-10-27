/*
    编写一个程序，要求用户按欧洲风格输入汽车的耗油量
（每 100 公里消耗的汽油量（升）），然后将其转换为
美国风格的耗油量——每加仑多少英里。注意，除了使用
不同的单位计量外，美国方法（距离 / 燃料）与欧洲方法
（燃料 / 距离）相反。100 公里等于 62.14 英里，
1 加仑等于 3.785 升。因此，19mpg 大约合 12.4L/100km，
27mpg 大约合 8.7L/100km。
*/
#include <iostream>
using namespace std;

float tranfrom(float _eu) {
    float _us = 0.0000;
    const float aDis = 62.14;
    const float aOil = 1 / 3.785;
    float eu2us = aDis / aOil;

    _us = eu2us / _eu;
    return _us;
}

int main() {
    float eu(0.0000), us(0.0000);
    cin >> eu;
    us = tranfrom(eu);
    cout << us << endl;

    return 0;
}