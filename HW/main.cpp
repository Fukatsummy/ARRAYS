#include <iostream>
using namespace std;
#define tab "\t";
void main()
{
	setlocale(LC_ALL, "");
	
	const int ROWS = 5; //количество строк
	const int COLS = 6;//количество столбцов(элементов строки)
	
	//int buffer = a;   int b = 1;
	//a = b;
	//b = buffer;
	const int n = 5;
	//int arr[n];
	/*int arr[n];const int n = 1;
	int minRand, maxRand;
	cout << "¬ведите минимальное случайное число: "; cin >> minRand;
	cout << "¬ведите максимальное случайное число: "; cin >> maxRand;*/
	int arr[ROWS][COLS];
	/*{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};*/
	
	/*for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] 
			cout << arr[i][j];
		}
		cout << endl;
	}*/
	for (int i = 0; i < ROWS; i++)//перебирает строки
	{
		for (int j = 0; j < COLS; j++)//перебирает элементы строки
		{
			arr[i][j] = rand() % 100;
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}