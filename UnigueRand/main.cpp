#include<iostream>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {};
	bool a;
	bool unique;
#ifdef HOMEWORK
	for (int i = 0; i < n;)//генерирует число
	{
		a = 0;
		int b = rand() % n;
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++)//проверяет на уникальность
		{
			if (arr[j] == arr[i])
			{
				a = 1;//изменяет повторы
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
	for
#endif // HOMEWORK
#ifdef UNIQUE1
		for (int i = 0; i < n; i++)
		{
			do
			{
				arr[i] = rand() % n;
				unique = true;
				for (int j = 0; j < i; j++)
				{
					if (arr[i] == arr[j])
					{
						unique = false;
						break;//прерывает текущую итерацию и все последующие
					}
				}
			} while (!unique);

		}
#endif // UNIQUE1

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++)
		{
			if (arr[i]==arr[j])
			{
				i--;
				break;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}