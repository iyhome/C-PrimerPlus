#include <iostream>
#include <string>
using namespace std;

class constract {
public:
    void _struct();
    void _union();
    void _enum();
private:
};

int main(int argc, char const *argv[]) {
    constract aa;
    //aa._struct();
    //aa._union();
    aa._enum();

    return 0;
}
git remote set-url origin git@github.com:用户名/仓库名.git
void constract::_struct() {
    // 1,默认的定义结构体的方式
    struct student {     //结构体与数组不同点在于：结构体储存的是不同类型的元素，比数组要灵活。
        string name;    //结构体内的元素叫结构成员。
        int age;
        double score;
        bool isGraduation;
    };
    // 2,在构造结构体的同时，以初始化的方式定义结构体变量。
    struct student1 {
        string name;
        int age;
    } LiHua, ZhangSan;
    // 3,构造结构体的同时，定义结构体变量并赋值。
    struct  student2 {
        string name;
        int age;
    } WangWu = {
        "WangWu",
        21
    };
    // 4,构造一个无法创建其他结构体变量的结构体。
    struct {
        string name;
        int age;
    } LiSi;

    student Lisa{   //该结构体的大小为 所有元素的总和，即：9+4+8+1=22 Byte
        "Lisa Lucy",
        16,
        98.2,
        0
    };

    cout << "student's name: " << Lisa.name << endl
        << "student's age: " << Lisa.age << endl
        << "student's score: " << Lisa.score << endl
        << "student's status: " << Lisa.isGraduation << endl << endl;

    student joe;

    joe = Lisa;
    cout << "student's name: " << joe.name << endl
        << "student's age: " << joe.age << endl
        << "student's score: " << joe.score << endl
        << "student's status: " << joe.isGraduation << endl;

    //结构数组： 本质是数组，元素为结构体
    student people[2] = {
        {"ZhouYi", 12, 99.94, 0},
        {"ZhaoEr", 20, 40.2, 1}
    };

}

// 共用体的大小即为：结构内字节数最大的元素对应的字节。
// 一次只能表示结构内其中一个元素。
void constract::_union() {
    union hel
    {
        int a2;
        char a3;
    } hel1;
    hel1.a2 = 200;
    cout << hel1.a2 << endl;

    hel1.a3 = 'a';
    cout << hel1.a3 << endl;

}

//枚举，默认从0开始赋值，依次+1。
void constract::_enum() {
    enum number {zero, one = 200, two, three, four};
    cout << two << endl;
}