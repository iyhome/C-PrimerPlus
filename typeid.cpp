#include <iostream>
#include <typeinfo>
using namespace std;

int main ( ) {
    char a;
    cout << typeid(a).name() << endl
        << sizeof(typeid(a).name()) << endl;

        cout << sizeof("int") << endl;


    return 0;
}