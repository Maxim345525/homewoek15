#include<iostream>
using namespace std;
void rect(int a, int b);

void main()
{
	int length, width;
	do
	{
		cout << "Input width-->";
		cin >> length;
		cout << "Input length-->";
		cin >> width;
		rect(length, width);
		cin >> length;
	} while (length == 1);
}

void rect(int a, int b)
{
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}