#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5; //количество элементов массивa (размер массива)
	int arr[n] = { 3,5,8 };
	//arr [2] = 123;  //обращение ко второму элементу массива
	cout << "Введите элеметы массива (" << n << "шт):";
	for (int i = 0; i < n; i++) //Ввод массива в консоль
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) //вывод массива на экран
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Вывод массивана экран в обратном порядке


	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int s = 0;
	for (int i = 0; i < n; i++)//сумма
	{
		s = s + arr[i];
	}
	cout << "Сумма элементов массива: " << s << endl;
	cout << "Среднее арифметическое элементо массива: " << (double)s/n << endl;
	
	int min,max;
	min = max = arr[0];
	for (int i = 0; i < n;i++)
	{
		if (arr[1] < min)min = arr[i];
		if ( arr[1] > max)max = arr[i];
	}
	cout << "Минимальное значение: " << min <<endl;
	cout << "Максимальное значение в массиве: " << max << endl;
}
	
