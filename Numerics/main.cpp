#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int decimal; //���������� ����� �������� � ����������
	const int SIZE = 32; //������������ ��������� ����������� ���������� �����
	bool bin[SIZE] = {}; //���� ������ ����� ������� ������� ��������� �����
	cout << "������� ���������� �����: "; cin >> decimal;
	//int n=0; // ����������� ����������� �����
	int i = 0;
	for (; decimal>0; i++)
	{
		bin[i] = decimal % 2;
		decimal /= 2;
		//n++;
	}
	
	for ( i --; i >= 0; i--)
	{
		cout <<bin[i];
	}
}