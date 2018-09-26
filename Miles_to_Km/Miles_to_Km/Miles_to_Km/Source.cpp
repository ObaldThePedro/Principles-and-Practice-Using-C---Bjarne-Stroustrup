#include "std_lib_facilities.h"

int main()
{
	int x1, x2, x3;
	cout << "Please enter three integer values!\n";
	int smallest = 0;
	int largest = 0;
	int middle = 0;
	
	cin >> x1 >> x2 >> x3;
	if (x1 <= x2 && x1 <= x3)
	{
		smallest = x1;
		if (x2 <= x3)
		{
			middle = x2;
			largest = x3;
		}
		else
		{
			middle = x3;
			largest = x2;
		}
	}
	else if (x2 <= x1 && x2 <= x3)
	{
		smallest = x2;
		if (x1 <= x3)
		{
			middle = x1;
			largest = x3;
		}
		else
		{
			middle = x3;
			largest = x1;
		}
	}
	else
	{
		smallest = x3;
		if (x1 <= x2)
		{
			middle = x1;
			largest = x2;
		}
		else
		{
			middle = x2;
			largest = x1;
		}
	}
	cout << smallest << "," << middle << "," << largest;
}