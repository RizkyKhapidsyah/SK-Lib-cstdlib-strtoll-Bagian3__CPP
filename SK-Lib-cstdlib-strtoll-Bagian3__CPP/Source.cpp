#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

using namespace std;

int main() {
	char* end;

	cout << "23ajz" << " to Long Long Int with base-7 = " << strtoll("23ajz", &end, 7) << endl;
	cout << "End String = " << end << endl << endl;

	cout << "23ajz" << " to Long Long Int with base-20 = " << strtoll("23ajz", &end, 20) << endl;
	cout << "End String = " << end << endl << endl;

	cout << "23ajz" << " to Long Long Int with base-36 = " << strtoll("23ajz", &end, 36) << endl;
	cout << "End String = " << end << endl << endl;

	_getch();
	return 0;
}