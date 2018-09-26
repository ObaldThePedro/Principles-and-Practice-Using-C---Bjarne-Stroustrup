#include "std_lib_facilities.h"

int square(int x)
{
	int result = 0;
	result = result + x * x;
	return result;
}

int main()
{
	cout << square(4);
}