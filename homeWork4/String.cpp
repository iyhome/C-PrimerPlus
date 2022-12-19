#include <iostream>
#include <string>   //enable string function
#include <cstring>  //C语言风格字符串库
using namespace std;

class _string {
public:
    void sTring();
    void cpyCat();
    void stringIO();
private:
    string fistName;
    string lastName;
    string address;
    string name;
};

int main(int argc, char const *argv[])
{
    _string ai;

    //ai.sTring();
    //ai.cpyCat();
    ai.stringIO();

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


//strcpy && strcat
void _string::cpyCat() {
    string a = "hello";
    string b = "CPP";
    string c;

    char d[20] = "12345";
    char e[20];

    // strcpy只适用于字符串数组，与string类型直接赋值等效
    c = a;
    strcpy(e, d);
    cout << a << "    " << c << endl
        << d << "    " << e << endl;;

    // strcat只适用于字符串数组,与string类型的 + 处理等效
    c += "world";
    strcat(d, "6789");
    cout << c << endl
        << d << endl;

    // strlen使用与字符串数组（没有算'\0'），string类型计算字符串长度可以用string.size()
    string a1 = "123456789";
    char a2[16] = "123456789";

    int stLen = a1.size();
    int charLen = strlen(a2);
    cout << stLen << endl
        << charLen << endl;
}

void _string::stringIO() {
    string str, str1;

    getline(cin, str);  //将输入的字符赋值给str
    cout << str << endl;

    cin >> str1;
    cout << str1 << endl;
}