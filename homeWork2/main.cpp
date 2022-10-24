#include <iostream>
#include "homeWork_2.h"

int main() {
	int nCase = 0;
	std::cout << "请输出第2章需要运行的题目号: ";
	std::cin >> nCase;
	std::cout << std::endl;

	//-----------------------2.1-----------------------//
	if (nCase == 1) {
		showName();
	}
	//-----------------------2.2-----------------------//
	else if (nCase == 2) {
		int lon, ma;
		lon = ma = 0;
		std::cout << "Please input a number: ";
		std::cin >> lon;
		ma = long_to_ma(lon);
		std::cout << ma << std::endl;
	}
	//-----------------------2.3-----------------------//
	else if (nCase == 3) {
		one_2_3();
		one_2_3();
		two_2_3();
		two_2_3();
	}
	//-----------------------2.4-----------------------//
	else if (nCase == 4) {
		int year(0);
		// int month(0);

		std::cout << "Enter your age: ";
		std::cin >> year;
		// month = yearTomonth(year);
		std::cout << "your age in month is "
			<< yearTomonth(year) << "." << std::endl;
	}
	//-----------------------2.5-----------------------//
	else if (nCase == 5) {
		double csd;
		std::cout << "Please enter a celsius value: ";
		std::cin >> csd;
		std::cout << csd << " degree Celesius is "
			<< cTof(csd) << " degrees Fatrenheit."
			<< std::endl;
	}
	//-----------------------2.6-----------------------//
	else if (nCase == 6) {
		double ly;
		std::cout << "Enter the number of light years: ";
		std::cin >> ly;
		std::cout << ly << " light years = "
			<< ly * 63240 << " astronmical units."
			<< std::endl;
	}
	//-----------------------2.7-----------------------//
	else if (nCase == 7) {
		int h(0);
		int m(0);

		std::cout << "Enter the number of hours: ";
		std::cin >> h;

		std::cout << "Enter the number of minutes: ";
		std::cin >> m;

		time(h, m);
	}
	//-----------------------END-----------------------//
	else {
		std::cout << "ERROR!!!" << std::endl;
	}

	return 0;
}