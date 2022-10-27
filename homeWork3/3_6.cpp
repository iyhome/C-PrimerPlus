/*
    编写一个程序，要求用户输入驱车里程（英里）和使用汽油量（加仑），
然后指出汽车耗油量为一加仑的里程。如果愿意，也可以让程序要求用户
以公里为单位输入距离，并以升为单位输入汽油量，然后指出欧洲风格的
结果——即每 100 公里的耗油量（升）。
*/
#include <iostream>
#include <iomanip>
using namespace std;

float stdOil(float _en, float _calem) {
    float _a = 0;
    _a = _en / _calem;
    return _a;
}

float euOil(float _kMeter, float _liter) {
    float _b = 0;
    _b = _kMeter / _liter;
    return _b;
}

int main() {
    int buf(0);
    float a, b, en, calem, kMeter, liter;
    a= b= en= calem= kMeter= liter= 0;

Sta:
    cout << "Plese input your choise: " << endl
        << "1, Stand Mode" << endl
        << "2, Eurpo Mode" << endl;

    cin >> buf;

    if (buf==1)
    {
        cin >> en >> calem;
        a=stdOil(en, calem);
        cout << "Is " << a << endl;
    }
    else if (buf == 2)
    {
        cin >> kMeter >> liter;
        b=euOil(kMeter, liter);
        cout << "Is " << b << endl;
    }
    else
    {
        cout << "error,plese try again" << endl;
        goto Sta;
    }

    return 0;
}