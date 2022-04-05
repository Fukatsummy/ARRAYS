#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n-------------------------------\n"
//#define test
void main()
{
	setlocale(LC_ALL, "");

#ifdef test
	int const n = 5;
	int const m = 5;
	int A[m][n] = {};
	int B[m][n * 2] = {};
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
			B[i][j + n] = B[i][j] = A[i][j];
			cout << A[i][j] << " ";
		}cout << endl;
	}
	cout << delimiter << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
	cout << delimiter << endl;
	int C[m][n] = {};
	for (int i = 0; i < m; i++)//Выбирает строку матрица А
	{
		for (int j = 0; j < n; j++)//выбирает стоблец матрицы B
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
	cout << delimiter << endl;
	//   int D[m][n] = {};//Сложение
	//   for (int i = 0; i < m; i++)
	//   {
	   //   for (int j = 0; j < n; j++)
	   //   {
		  //   for (int x = 0; x < n; x++)
		  //   {
		  //	  D[i][j]+=C[i][x] + C[x][j];
		  //   }
	   //   }
	//   }
	   //for (int i = 0; i < m; i++)
	   //{
		  // for (int j = 0; j < n; j++)
		  // {
		  //	 cout << D[i][j] << tab;
		  // }
		  // cout << endl;
	   //}  
#endif // test
	const int n = 3;
	int A[n][n] = {};
	//int B[n][n * 2] = {};
	/*int A[n][n]=
	{
		{1,2,3},
	    {4,5,6},
	    {7,8,9}
	};*/
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j]<<tab;
		}
		cout << endl;
	}
	//Создаем расширенную матрицу
	int B[n][n * 2] = {};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			B[i][j] = B[i][j + n] = A[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n*2; j++)
		{
			cout << B[i][j] << tab;
		}
		cout << endl;
	}
	//Вычисляем определитель

	//Вычисляем главную диагональ
	int main_diag = 0;
	for (int i = 0; i < n; i++)
	{
		int product = 1;//произведение элементов главной диагонали
		for (int j = 0; j < n; j++)
		{
			product *= B[j][i+j];
		}
		main_diag += product;
	}
	cout << "Главная диагональ : " << main_diag << endl;
	//Вычисляем вспомогательную диагональ
	int aux_diag = 0;// aux - Auxilliry(вспомогательный)
	for (int i = 0; i < n; i++)
	{
		int product = 1;
		for (int j = 0; j < n; j++)
		{
			product *= B[n - 1 - j][i+j];
		}
		aux_diag += product;
	}
	cout << "Вспомогательная диагональ: " << aux_diag << endl;
	cout << "Определитель матрицы: " << main_diag - aux_diag << endl;
}