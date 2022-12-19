#include <iostream>
#include <string>   //enable string function
#include <cstring>  //C语言风格字符串库
using namespace std;

class _string
{
public:
    void sTring();
    void cpyCat();
private:
    string fistName;
    string lastName;
    string address;
    string name;
};

int main(int argc, char const *argv[])
{
    _string ai;
    ai.sTring();

    return 0;
}

void _string::sTring() {
    fistName = {"Yhome"};  //string类型可以上char字符串一样赋值
    lastName = "Chou";   //string类型最为经典的赋值方式

    cout << "Please input something: ";
    cin >> address; //string类型不需要程序员考虑它的size，能够自动处理
    cout << address << endl;

    name = fistName + " " + lastName;   //string类型可以相互赋值和合并
    cout << name << endl;
}

void _string::cpyCat() {
    
}