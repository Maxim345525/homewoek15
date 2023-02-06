#include<iostream>
using namespace std;
void main()
{
	int a;
	cout << "Input number:";
	cin >> a;
	if (a % 1 == 0 || a % a == 0) {
		cout << "Proste" << endl;
	}
	else(a % 1 != 0 || a % a != 0);
		cout << " Ne proste";

}
