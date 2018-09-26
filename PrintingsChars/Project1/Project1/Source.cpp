#include "std_lib_facilities.h"

int main()
{
	int counter = 0;
	int a_position = 'a';
	int limit_position = 'z';
	int next_position = 'a' + 1;
	

	while (next_position < limit_position)
	{
		char next_char = char('a' + counter);
		next_position = next_char;
		cout << next_char << "\t" << next_position << endl;
		counter++;
	}

	return 0;
}