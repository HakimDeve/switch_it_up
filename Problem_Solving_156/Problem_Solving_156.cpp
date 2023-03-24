// Problem_Solving_156.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
string switch_it_up(int number) {

	switch (number)
	{
	case 0:return "Zero";
	case 1:return "One";
	case 2:return "Two";
	case 3:return "Three";
	case 4:return "Four";
	case 5:return "Five";
	case 6:return "Six";
	case 7:return "Siven";
	case 8:return "Eight";
	case 9:return "Nine";
	default:return "Wrong Number";
		break;
	}

    return to_string( number);
}
int main()
{
	int Number;
	cout << "enter Number" << endl;
	cin >> Number;

	cout <<switch_it_up(Number) << endl;

	return 0;
}

