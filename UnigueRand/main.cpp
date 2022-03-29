#include<iostream>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {};int i = 0
	for (; i < n; i++)
	{
		arr[i] = rand() % n;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] < arr[j + 1];)
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
			if (arr[i] > arr[j - 1];)
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<< tab;
	}
	cout << endl;

}