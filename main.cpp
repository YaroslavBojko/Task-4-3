#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int x;
	cout << "Введите число: ";
	cin >> x;
	int remainder = x % 2;
	cout << "-----Проверяем-----" << endl;

	if (remainder == 0)
	{
		cout << "Число " << x << " - чётное." << endl;
	}
	else
	{
		cout << "Число " << x << " - не чётное." << endl;
	}
}