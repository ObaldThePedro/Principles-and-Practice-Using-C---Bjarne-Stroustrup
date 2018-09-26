#include "std_lib_facilities.h"
#include <math.h>

int main()
{
	//Quadratic equation ax^2 + bx + c = 0
	cout << "Please enter three numbers!\n";
	double a{ 0 }, b{ 0 }, c{ 0 };
	cin >> a >> b >> c;

	double discriminant{b*b - 4*a*c};

	double positive_quadratic = (-b + sqrt(discriminant)) / (2 * a);
	double negative_quadratic = (-b - sqrt(discriminant)) / (2 * a);
	double x1{}, x2{};

	if (discriminant > 0)
	{
		x1 = positive_quadratic;
		x2 = negative_quadratic;
		cout << "Roots are real and different\n";
		cout << "x1: " << x1 << "\t" << "x2: " << x2 << endl;
	}
	else if (discriminant == 0)
	{
		cout << "Roots are real and same!\n" << endl;
		x1 = (-b) / (2 * a);
		x2 = x1;
		cout << "x1: " << x1 << "\t" << "x2: " << x2 << endl;
	}
	return 0;
}