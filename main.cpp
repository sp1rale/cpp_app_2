#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main() {
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(output, 11);
 cout << "\t\t\t\t\tEvery hunter wants "<<endl;
 SetConsoleTextAttribute(output,12);
 cout << " \t\t\t\t\tto know where"<<endl;
 SetConsoleTextAttribute(output, 10);
 cout << "\t\t\t\t\tthe pheasant is.";
 SetConsoleTextAttribute(output, 7);
 return 0;
}