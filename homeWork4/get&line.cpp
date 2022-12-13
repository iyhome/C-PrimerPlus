#include <iostream>
using namespace std;

class getFunc{
public:
    void _get();
    void getLine();
    void mixInput();
private:
};


int main(int argc, char const *argv[])
{
    getFunc a;
    a.mixInput();

    return 0;
}

void getFunc::getLine() {
    int buf1(20);
    char name1[buf1];
    char city1[buf1];

    cin.getline(name1, buf1);
    cin.getline(city1, buf1);

 //   cin.getline(name1, buf1).getline(city1, buf1);

    cout << name1 << city1 << endl;
}

void getFunc::_get() {

    int buf2(20);
    char name2[20];
    char city2[20];

    cin.get(name2, buf2).get();
    cin.get(city2, buf2);

    cout << name2 << city2 << endl;
}

void getFunc::mixInput() {
    int a;
    (cin >> a).get();

    char str[20];
    cin.getline(str, 20);
    cout << a << endl
        << str << endl;
}