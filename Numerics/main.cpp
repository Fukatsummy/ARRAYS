#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int decimal; //���������� ����� �������� � ����������
	const int SIZE = 32; //������������ ��������� ����������� ���������� �����
	bool bin[SIZE] = {}; //���� ������ ����� ������� ������� ��������� �����
	bool octal[SIZE] = {};
	char Hexadecimal[SIZE] = {};
	cout << "������� ���������� �����: "; cin >> decimal;
	//int n=0; // ����������� ����������� �����
	int i = 0;
	//for (; decimal > 0; i++)
	//{
	//	bin[i] = decimal % 2;
	//	decimal /= 2;
	//	//n++;
	//}
	//for (i--; i >= 0; i--)
	//{
	//	cout << bin[i];
	//}

	/*for (;decimal; i++ )
	{
		octal[i] = decimal % 8;
		decimal /= 8;
	}
	for (i--; i >= 0; i--)
	{
		cout  << octal[i];
	}
	cout << endl;*/
	//char 
	for (; decimal; i++)
	{
		Hexadecimal[i] = decimal % 16;
		decimal /= 16;
	}
	for (i ; i >=0 ; i--)
	{
	  cout << Hexadecimal[i];
	}
}