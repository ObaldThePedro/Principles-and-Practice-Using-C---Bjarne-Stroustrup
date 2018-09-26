#include "std_lib_facilities.h"

int main()
{
	try 
	{
		int n = 1;
		int m = 2;
		while (n < m)
		{
			cout << n << endl;
			int i = n + m;
			n = m;
			m = i;	
		}
	}
	catch (runtime_error e)
	{
		cout << e.what() << endl;
	}

	return 0;
}