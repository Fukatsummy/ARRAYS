#include<iostream>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {};
	bool a;
	int i = 0;
	for (; i < n;)//генерирует число
	{
		a = false;
		int b = rand() % n;
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++)//проверяет на уникальность
		{
			if (arr[j] == b)
			{
				a = true;//изменяет повторы
			}
		}
		if (a != true)//сдвигает ячейки
		{
			arr[i] = b;
			i++;
		}
		/*#ifdef TEST
				for (int j = i + 1; j < n; j++)
		{
			if (arr[i] < arr[j + 1])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
			arr[i] > arr[j - 1];
		}
	}
		for (int j = i - 1; j < n; j++)
		{
			if (arr[i] > arr[j - 1])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
#endif // TEST*/

	}
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<< tab;
	}
	cout << endl;

}