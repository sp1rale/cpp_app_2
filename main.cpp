#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main() {
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "Selling a car."<<endl;
	cout << "\'Mercedes cls 63 amg.\'\n"<<endl;
	cout << "tel: 333-31-1.\n" << endl;
	cout << "Engine capacity  |           Gasoline engine (5461 cm³)                           |"<<endl;
	cout << "Accele.to 100km/h|           3.6 seconds                                          |"<<endl;
	cout << "Maximum speed    |           250 km/h                                             |"<<endl;
	cout << "Fuel consumption |     (l/100 km) city / highway / mixed 14.3 / 8 / 10.3          |\n"<<endl;
	SetConsoleTextAttribute(output, 10);
	cout << "\t\t\t\t\tprice - 5000$";
	SetConsoleTextAttribute(output, 7);
	return 0;
}