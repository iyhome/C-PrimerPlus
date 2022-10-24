#include <iostream>

//2.1：编写一个C++程序，用于显示你的姓名和地址。
void showName() {
	std::cout << "Name：Yhome Chou"
		<< std::endl
		<< "Adress: SZ city GD provice"
		<< std::endl;
}

//2.2：编写一个程序，他要求用户输入一个以long为单位的距离，然后将他转换为码（1 long 等于200码）。
int long_to_ma(int num) {
	return (num * 220);
}

/*2.3:编写一个C++程序，它使用3个用户定义的函数（包括main()）,并生成下面的输出。
*	Three bline mice
*	Three bline mice
*	See how they run
*	See how they run
* 其中一个函数要调用两次，该函数生成前两行：另一个函数也调用两次，读函数生成其余的输出。
*/
void one_2_3() {
	std::cout << "Three bline mice" << std::endl;
}

void two_2_3() {
	std::cout << "See how they run" << std::endl;
}

/*2.4:编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示：
*	Enter your age: 29
*	Your age in months is 384.
*/
int yearTomonth(int nyear) {
	return nyear * 12;
}

/* 2.5:编写一个程序，其中的main()调用一个用户定义的函数（以摄氏温度值为参数，并返回相应的华氏温度值）。该程序按下面的格式要求用户输入摄氏温度值，并显示结果：
*	Please enter a celsius value:20
*	20 degree Celesius is 68 degrees Fatrenheit.
*	下面是转换公式：	华氏温度=1.8*摄氏温度+32.0
*/
double cTof(double nc) {
	return 1.8 * nc + 32.0;
}

/* 2.6:编写一个程序，其中的main()调用一个用户定义的函数（以光年值为参数，并返回对应天文单位的值）。该程序按下面的格式要求用户输入光年值，并显示结果：
*	Enter the number of light years: 4.2
*	4.2 light years = 265608 astronmical units.
*	请使用double类型，转换公式为：1光年=63240天文单位
*/
double lightYear(double nLY) {
	return nLY * 63240;
}

/*	编写一个程序，要求用户输入小时数和分钟数。在main()函数中，将这两个值传递给一个void函数，后者以下面这样的格式显示这两个值：
*	Enter the number of hours: 9
*	Enter the number of minutes: 28
*	Time:9:28
*/
void time(int n1, int n2) {
	std::cout << "Time: " << n1 << ":" << n2 << std::endl;
}