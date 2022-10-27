/*
    编写一个程序，要求用户输入全球当前的人口和美国当前的人口（或其他国家的人口）。
将这些信息存储在 long long 变量中，并让程序显示美国（或其他国家）
的人口占全球人口的百分比。该程序的输出应与下面类似：
    Enter the world's population: 6898758899
    Enter the population of the US: 310783781
    The population of the US is 4.50492% of the world population.
*/
#include <iostream>
using namespace std;

double popuPercent(long long _wPopu, long long _usPopu) {
    double _percent(0.00);
    _percent = double(_usPopu)/double(_wPopu);

    return _percent;
}

int main() {
    long long wPopu(0), usPopu(0);
    double percent(0.00);

    cout << "Enter the world's population: ";
    cin >> wPopu;
    cout << "Enter the population of the US: ";
    cin >> usPopu;

    percent = popuPercent(wPopu, usPopu);

    cout << "The population of the US is "
        << percent*100 <<"% of the world population."
        << endl;

    return 0;
}