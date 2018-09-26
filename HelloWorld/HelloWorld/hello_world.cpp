#include "std_lib_facilities.h"

int main()
{
	string first_name{};
	string friend_name{};
	char friend_sex{ 0 };
	int age{};
	cout << "Enter the name of the person you want to write to: ";
	cin >> first_name;
	cout << "Dear " << first_name << ",";
	cout << "How are you?\n";
	cout << "I am hoping that everything is well with you and that Joe is treating you well!\n";
	cout << "What is the name of that pretty friend you have?\n";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " recently ?\n";
	cout << "Please enter an 'm' if your friend is a male and an 'f' if is female!\n";
	cin >> friend_sex;
	if (friend_sex == 'm')
	{
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	}
	if (friend_sex == 'f')
	{
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	}
	cout << "How old are you " << first_name << " ?\n";
	cin >> age;
	cout << "I hear you just had a birthday and you are " << age << " years old\n";

	if (age <= 0 || age >= 110)
	{
		simple_error("you're kidding!");
	}
	if (age < 12)
	{
		cout << "Next year you will be " << age + 1 << "!\n";
	}
	else if(age == 17)
	{
		cout << "Next year you will be able to vote!\n";
	}
	else if(age > 70)
	{
		cout << "I hope you are enjoying retirement\n";
	}
	
	cout << "Yours sincerely\n";
	cout << endl;
	cout << "Pedro";

}