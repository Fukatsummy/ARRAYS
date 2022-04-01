#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n-------------------------------\n"

//#define ADDITION

void main()
{
	setlocale(LC_ALL, "");
	const int m = 3;	//количество строк
	const int n = 3;	//количество столбцов
	int A[m][n] = {};
	int B[m][n] = {};
	//заполняем матрицу случайными числами
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
			B[i][j] = rand() % 10;
		}
	}
	//выводим матрицу А на экран
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}

	cout << delimiter << endl;//ограниченный
	
	//выводим матрицу В на экран
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << B[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter << endl;
	
#ifdef ADDITION
	//Сложение матриц
int C[m][n] = {};
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
#endif // ADDITION
     //Умножение матриц


	int C[m][n] = {};
	for (int i = 0; i < m; i++)//ыбирает строку матрица А
	{
		for (int j = 0; j < n; j++)//выбирает стоблец матрицы И
		{
			for (int k = 0; k < n; k++)//перебирает элементы выбранной строки А и выбранного столбца матрицы В
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	//Вывод результата на экран
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << C[i][j] << tab;
		}
		cout << endl;
	}
	

}