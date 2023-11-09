

#include <iostream>
#include<string>

using namespace std;

int main()
{
	int a = 7;
	int b = 1;
	bool str = 1;
	string string1, string2, string3, string4, string5, string6;
	string1 = "           *****            ";
	string2 = "          *******           ";
	string3 = "         *********          ";
	string4 = "        ***********         ";
	string5 = "           -----            ";
	string6 = "           |   |            ";
	
	for (int i = 0; i <= 7; ++i)
	{
		cout << "\t";
		for (int j = 0; j < a; ++j)
		{
			cout << "  ";

		}
		a--;
		for (int j = 0; j < b * 2; ++j)
		{
			cout << " ^";
		}
		cout << endl;
		b++;
	}
	for (int i = 0; i < 10; ++i)
	{
		cout << "\t";
		cout << " |";
		for (int j = 1; j < 15; ++j)
		{
			if (i == 0 || i == 9)
			{
				cout << " -";
				 
			}
			else if (str == 1)
			{
				cout << "" << string1;
				str = 0;
			}
			else
			{
				cout << "";
			}
		}
		cout << "|";
		cout << endl;
		str = 1;
		if (i == 1)
		{
			string1 = string2;
		}
		if (i == 2)
		{
			string1 = string3;

		}
		if (i == 3)
		{
			string1 = string4;
		}
		if (i == 4)
		{
			string1 = string5;

		}
		if (i == 5)
		{
			string1 = string6;
		}
		
	}
	return 0;

}
