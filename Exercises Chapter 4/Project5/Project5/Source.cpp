#include "std_lib_facilities.h"

vector<int> prime_numbers{};
int prime_check()
{
	int i, j;
	int max;
	cout << "Please, enter the maximum number so we can check the prime numbers!\n";
	cin >> max;
	for (i = 2; i < max; ++i)
	{
		for (j = 2; j <= i; ++j)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			prime_numbers.push_back(i);
		}
	}
	return i;
}

int main()
{
	prime_check();
	for (int i{ 0 }; i < prime_numbers.size(); ++i)
	{
		cout << prime_numbers.at(i) << endl;
	}
	return 0;
}