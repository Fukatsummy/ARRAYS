#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int decimal; //десятичное число вводимое с клавиатуры
	const int SIZE = 8;
	//const int SIZE = 32; //максимальное возможная разрядность введенного числа
	bool bin[SIZE] = {}; //этот массив будет хранить разряды двоичного числа
	bool octal[SIZE] = {};
	char Hexadecimal[SIZE] = {};
	cout << "Введите десятичное число: "; cin >> decimal;
	//int n=0; // Фактическая разрядность числа
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
	//setlocale(LC_ALL, "C");
	
	//char Hex[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	
	for (;decimal; i++)
	{
		Hexadecimal[i] = decimal % 16;
		decimal /= 16;	
		if (Hexadecimal[i] >= 10)cout << "A";
		else if (Hexadecimal[i] == 11)cout << "B";
		else if (Hexadecimal[i] == 12)cout << "C";
		else if (Hexadecimal[i] == 13)cout << "D";
		else if (Hexadecimal[i] == 14)cout << "E";
		else if (Hexadecimal[i] == 15)cout << "F";
	}
	for (i--; i >= 0; i--)
	{
	   cout << Hexadecimal[i];
	}cout << endl;
	/*for (int i = (char)-1;decimal>=0; i++)
	{
		Hexadecimal[i] = decimal % 16;
		decimal /= 16;
	}*/
	
	
	
}