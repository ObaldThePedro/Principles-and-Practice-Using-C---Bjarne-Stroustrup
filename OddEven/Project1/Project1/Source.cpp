#include "std_lib_facilities.h"

int main()
{
	int number;
	cout << "Enter an integer: \n";
	while (cin >> number)
	{
		int test = number % 2;

		if (test == 0)
		{
			cout << "Number is even!\n";
		}
		else {
			cout << "Number is odd!\n";
		}
	}
	return  0;
}