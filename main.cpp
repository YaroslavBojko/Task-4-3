#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int x;
	cout << "������� �����: ";
	cin >> x;
	int remainder = x % 2;
	cout << "-----���������-----" << endl;

	if (remainder == 0)
	{
		cout << "����� " << x << " - ������." << endl;
	}
	else
	{
		cout << "����� " << x << " - �� ������." << endl;
	}
}