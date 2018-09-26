#include "std_lib_facilities.h"

int main()
{
	int last_position = 256;
	for (int i = 0; i <= last_position; i++)
	{
		char next_character = i;
		int next_char_position = next_character;
		cout << next_character << "\t" << next_char_position << endl;
	}
	return 0;
}