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
		cout << arr[i]<< "\t";
	}
	cout << endl;

	//Вывод массивана экран в обратном порядке


	for (int i=n-1; i >= 0; i--)
	{
		cout << arr[i]<< "\t";
	}
	cout << endl;

	for (int i = 0; i+n < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
} 
