#include<iostream>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {};
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		bool already_there = false; //������������, ��� ����� ��������� ������� �� ����������, �� ���������
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				already_there = true;//���� ������� ��� ���������� �����
				break;
			}
		}
#ifdef SEARCH_1
		//if (!already_there)
		{
			int count = 1; //int count = 0;//������� ����������(���������)
			for (int j = i + 1; j < n; j++)
			{
				if (arr[i] == arr[j])
				{
					count++;
				}
			}
			if (count > 1)cout << arr[i] << "����������� " << count << "���" << endl;
			//if (count > 0)cout << arr[i] << "����������� " << count << "���" << endl;
		}
#endif // SEARCH_1
		if (already_there)continue;
		int count = 1; //int count = 0;//������� ����������(���������)
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count > 1)printf("�������� %d ����������� %d ���\n", arr[i], count);
		//if (count > 1)cout << arr[i] << " ����������� " << count << "���" << endl;
		//if (count > 0)cout << arr[i] << "����������� " << count << "���" << endl;
	}
}