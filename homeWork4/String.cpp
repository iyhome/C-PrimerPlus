#include <iostream>
#include <string>
using namespace std;

class _string
{
private:
public:
    void sTring();
};

int main(int argc, char const *argv[])
{
    _string ai;
    ai.sTring();

    return 0;
}

void _string::sTring() {
    string fistName {"Yhome"};  //string类型可以上char字符串一样赋值
    string lastName = "Chou";   //string类型最为经典的赋值方式
    string address, name;

    cin >> address; //string类型不需要程序员考虑它的size，能够自动处理
    cout << address << endl;

    name = fistName + " " + lastName;   //string类型可以相互赋值和合并
    cout << name << endl;


}