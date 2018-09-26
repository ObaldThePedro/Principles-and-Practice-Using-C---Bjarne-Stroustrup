#include "std_lib_facilities.h"


double ctok(double c)
{
	double lowest_temp{ 0 };
	double k = c + 273.15;
	if (k <= lowest_temp)
	{
		error("z");
		return -1;
	}
	else
		return k;
}

double ktoc(double k)
{
	double lowest_temp{ -273.15 };
	double c = k - 273.15;
	if (c <= lowest_temp)
	{
		error("s");
		return -1;
	}
	else
		return c;
}

int main()
{
	double temps = (-273.15) * 2;
	double c = ktoc(310);
	cout << c << "\n";



	return 0;
}