#include <iostream>
#include <stdio.h>
#include <string>


using namespace std;

class Stroka
{
public:
	char str;

	Stroka(char stroch)
	{
		str = stroch;
	}

	~Stroka()
	{
	}

	int replace()
	{

		for (int i = str.size() / 2; i < str.size(); i++)
		{
			swap(str[i], str[i - str.size() / 2]);
		}

		cout << "Got string is " << str << endl;
	}
};



int main()
{
	int size;
	cout << "Please inter number of characters" << endl;
	cin >> size;
	
	char* str = new char[size + 1];

	for (int i = 0; i < size; i++)
	{
		cout << "Enter " << i +1 << " character of massive" << endl;
		cin >> str[i];
	}

	cout<< "Getting string is ";

	for (int i=0; i < size; i++) 
	{
		cout << str[i];
	}

	if (size % 2 == 0)
	{
		Stroka* replace(int size);
	}
	else
	{
		str.insert(0, '!!!');
		cout << "str" << endl;
	}
}