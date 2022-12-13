#include <iostream>
using namespace std;

int main()
{

    // 数组的定义和打印
    int arry[12]{1, 2, 3, 4, 5, 6, 7}; // C++11特性，定义数组可以省略 =
    arry[11] = 11;                     // 可以给数组的某一个元素赋值，但是不可以在初始化后给整个数组赋值。
    for (int i(0); i < 12; ++i)
    {
        cout << arry[i] << "  ";
    }
    cout << endl;

    // 查看数组元素的个数
    int ele_pcs(0);
    ele_pcs = sizeof(arry) / sizeof(int);
    cout << "The number for elements of this array is: " << ele_pcs << endl;

    // getline
    int zsize(20);
    char name[zsize];
    char city[zsize];

    cin.getline(name, zsize);

    cin.getline(city, zsize);

    cout << "name: " << name << " ";
    cout << "city: " << city << endl;

    // get
    int zsize1(20);
    char name1[zsize1];
    char city1[zsize1];

    cin.get(name1, zsize1).get();

    cin.get(city1, zsize1);

    cout << "name: " << name1 << " ";
    cout << "city: " << city1 << endl;


    //

    return 0;
}